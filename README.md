### Список литературы:
1. Руководство пользователя [SimpleLink Low Power F3 SDK 8.40.02.01](https://software-dl.ti.com/simplelink/esd/simplelink_lowpower_f3_sdk/8.40.02.01/exports/docs/zigbee/html/zboss-guide/index-cc23xx.html)
2. Руководство пользователя [Code Composer Studio 12.8.0 ](https://software-dl.ti.com/ccs/esd/documents/users_guide_12.8.0/ccs_getting-started.html)
3. Разработка с ZBOSS для Zigbee [Developing with ZBOSS for Zigbee](https://software-dl.ti.com/simplelink/esd/simplelink_lowpower_f3_sdk/9.11.00.18/exports/docs/third_party/zboss_r23/doxygen/html/index.html)
### Аппаратные средства
1. LP-EM-CC2350R5 RKP
2. LP-XDS110(ET)
   
  ![](/images/photo_2025-07-07_22-03-15.jpg)
### Скачиваем и устанавливаем инструменты
1. [SimpleLink Low Power F3 SDK 8.40.02.01](https://dr-download.ti.com/software-development/software-development-kit-sdk/MD-emMPuXshOG/8.40.02.01/simplelink_lowpower_f3_sdk_8_40_02_01.exe)
2. [Code Composer Studio 12.8.1](https://dr-download.ti.com/software-development/ide-configuration-compiler-or-debugger/MD-J1VdearkvK/12.8.1/CCS12.8.1.00005_win64.zip)

  ![](/images/2025-07-07_170556.png)
### Установка утилит OTA в SimpleLink Low Power F3 SDK 8.40.02.01
  Скопировать из репозитария архив zstack.zip в папку C:\ti\simplelink_lowpower_f3_sdk_8_40_02_01\tools.
  Из нее нам потребуется генератор OTA файлов C:\ti\simplelink_lowpower_f3_sdk_8_40_02_01\tools\zstack\zigbee_ota_image_converter\zOTAfileGen.exe
### Создаем рабочую область
#### 1. Запускаем приложение Code Composer Studio 12.8.1
  ![](/images/2025-07-07_175618.png)
#### 2. Импортируем в рабочую область пример mcuboot
```ruby
C:\ti\simplelink_lowpower_f3_sdk_9_10_00_83\examples\nortos\LP_EM_CC2340R5\mcuboot\mcuboot\ticlang
```
  ![](/images/2025-07-07_180639.png)
  ![](/images/2025-07-07_184241.png)
  ![](/images/2025-07-07_184620.png)
#### 3. Импортируем в рабочую область пример onoff_switch_ota_client_onchip
```ruby
C:\ti\simplelink_lowpower_f3_sdk_8_40_02_01\examples\rtos\LP_EM_CC2340R5\zigbee\onoff_switch_ota_client_onchip\freertos\ticlang
```
  ![](/images/2025-07-07_180639.png)
  ![](/images/2025-07-07_185545.png)
  ![](/images/2025-07-07_185742.png)
#### 4. Импортируем в рабочую область пример onoff_switch_ota_client_offchip
```ruby
C:\ti\simplelink_lowpower_f3_sdk_8_40_02_01\examples\rtos\LP_EM_CC2340R5\zigbee\onoff_switch_ota_client_offchip\freertos\ticlang
```
  ![](/images/2025-07-07_180639.png)
  ![](/images/2025-07-07_190403.png)
  ![](/images/2025-07-07_190522.png)

### Настраиваем конфиг mcuboot.syscfg
#### 1. Для примера onoff_switch_ota_client_onchip
![](/images/2025-07-07_192122.png)
#### 2. Для примера onoff_switch_ota_client_offchip
![](/images/2025-07-07_193615.png)
### Собираем проект mcuboot
![](/images/2025-07-07_194940.png)
### Прошиваем проект mcuboot
![](/images/2025-07-07_195339.png)
### Правки в поекте onoff_switch_ota_client_onchip
#### 1.Настраиваем конфиг on_off_switch_ota_client_onchip.syscfg
  ![](/images/2025-07-07_211623.png)
  ![](/images/2025-07-07_205929.png)
#### 2.Добавляем генератор zigbee файла OTAfileGen в Post-build steps
```ruby
${COM_TI_SIMPLELINK_LOWPOWER_F3_SDK_INSTALL_DIR}/tools/zstack/zigbee_ota_image_converter/zOTAfileGen ${BuildDirectory}/${BuildArtifactFileBaseName}_ota.bin ${BuildDirectory}/    BEBE 2340 00000002
```
  ![](/images/2025-07-07_203635.png)
#### 3.Добавляем макросы on_off_switch_ota_client.h
```ruby
#define ZB_HA_ON_OFF_SWITCH_OTA_IN_CLUSTER_NUM 3  /*!< On/Off switch IN clusters number */
#define ZB_HA_ON_OFF_SWITCH_OTA_OUT_CLUSTER_NUM 5 /*!< On/Off switch OUT clusters number */

#define ZB_HA_ON_OFF_SWITCH_OTA_CLUSTER_NUM                                      \
  (ZB_HA_ON_OFF_SWITCH_IN_CLUSTER_NUM + ZB_HA_ON_OFF_SWITCH_OUT_CLUSTER_NUM)

#define ZB_ZCL_DECLARE_ON_OFF_SWITCH_OTA_SIMPLE_DESC(ep_name, ep_id, in_clust_num, out_clust_num) \
  ZB_DECLARE_SIMPLE_DESC(in_clust_num, out_clust_num);                                        \
  ZB_AF_SIMPLE_DESC_TYPE(in_clust_num, out_clust_num) simple_desc_##ep_name =                 \
  {                                                                                           \
    ep_id,                                                                                    \
    ZB_AF_HA_PROFILE_ID,                                                                      \
    ZB_HA_ON_OFF_SWITCH_DEVICE_ID,                                                            \
    ZB_HA_DEVICE_VER_ON_OFF_SWITCH,                                                           \
    0,                                                                                        \
    in_clust_num,                                                                             \
    out_clust_num,                                                                            \
    {                                                                                         \
      ZB_ZCL_CLUSTER_ID_BASIC,                                                                \
      ZB_ZCL_CLUSTER_ID_IDENTIFY,                                                             \
      ZB_ZCL_CLUSTER_ID_ON_OFF_SWITCH_CONFIG,                                                 \
      ZB_ZCL_CLUSTER_ID_ON_OFF,                                                               \
      ZB_ZCL_CLUSTER_ID_SCENES,                                                               \
      ZB_ZCL_CLUSTER_ID_GROUPS,                                         \
      ZB_ZCL_CLUSTER_ID_IDENTIFY,                                       \
      ZB_ZCL_CLUSTER_ID_OTA_UPGRADE,                                       \
    }                                                                                         \
  }

#define ZB_HA_DECLARE_ON_OFF_SWITCH_OTA_EP(ep_name, ep_id, cluster_list) \
  ZB_ZCL_DECLARE_ON_OFF_SWITCH_OTA_SIMPLE_DESC(                          \
      ep_name,                                                       \
      ep_id,                                                         \
      ZB_HA_ON_OFF_SWITCH_OTA_IN_CLUSTER_NUM,                            \
      ZB_HA_ON_OFF_SWITCH_OTA_OUT_CLUSTER_NUM);                          \
  ZB_AF_DECLARE_ENDPOINT_DESC(ep_name,                                  \
                              ep_id,                                    \
      ZB_AF_HA_PROFILE_ID,                                           \
      0,                                                             \
      NULL,                                                          \
      ZB_ZCL_ARRAY_SIZE(cluster_list, zb_zcl_cluster_desc_t),        \
      cluster_list,                                                  \
      (zb_af_simple_desc_1_1_t*)&simple_desc_##ep_name, \
      0, NULL, /* No reporting ctx */           \
      0, NULL) /* No CVC ctx */

#define ZB_HA_DECLARE_ON_OFF_SWITCH_OTA_CTX(device_ctx, ep_name) \
  ZBOSS_DECLARE_DEVICE_CTX_1_EP(device_ctx, ep_name)
```
  ![](/images/2025-07-07_201728.png)
#### 4. Изменяем декларацию эндпойнта on_off_switch_ota_client.c
```ruby
/* Declare endpoint */
ZB_HA_DECLARE_ON_OFF_SWITCH_OTA_EP(on_off_switch_ep, ZB_SWITCH_ENDPOINT, on_off_switch_clusters);
/* Declare application's device context for single-endpoint device */
ZB_HA_DECLARE_ON_OFF_SWITCH_OTA_CTX(on_off_switch_ctx, on_off_switch_ep);
```
  ![](/images/2025-07-07_202253.png)
#### 5. Добавляем переменные on_off_switch_ota_client.c
```ruby
  g_dev_ctx.basic_attr.mf_name[0] = 6;
  strcpy(g_dev_ctx.basic_attr.mf_name + 1, "DIYRuZ");
  g_dev_ctx.basic_attr.model_id[0] = 15;
  strcpy(g_dev_ctx.basic_attr.model_id + 1, "DIYRuZ_SW2340R5");
```
  ![](/images/2025-07-07_202656.png)
#### 6. Собираем проект onoff_switch_ota_client_onchip  
  ![](/images/2025-07-07_205148.png)
#### 7. Прошиваем проект onoff_switch_ota_client_onchip 
  ![](/images/2025-07-07_210751.png)
#### 8. Для старта на девборде LP-EM-CC2340R5 давим кнопку Reset
### Правки в поекте onoff_switch_ota_client_offchip
  Нужно повторить все шаги как на правке проекта onoff_switch_ota_client_onchip
