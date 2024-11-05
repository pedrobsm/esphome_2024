// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace light;
using namespace text_sensor;
using namespace binary_sensor;
using namespace switch_;
using namespace climate;
logger::Logger *logger_logger;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace sensor;
using namespace api;
StartupTrigger *startuptrigger;
Automation<> *automation;
using namespace i2c;
i2c::I2CComponent *bus_b;
script::SingleScript *set_mode_heat;
script::SingleScript *set_mode_cool;
script::SingleScript *start_heat_pump;
script::SingleScript *stop_heat_pump;
script::SingleScript *start_circulator;
script::SingleScript *stop_circulator;
Automation<> *automation_2;
pcf8574::PCF8574Component *hub_relays;
pcf8574::PCF8574Component *hub_sensors;
esp32_ble_tracker::ESP32BLETracker *esp32_ble_tracker_esp32bletracker;
fastled_base::FastLEDLightOutput *fastled_base_fastledlightoutput;
xiaomi_lywsd03mmc::XiaomiLYWSD03MMC *xiaomi_lywsd03mmc_xiaomilywsd03mmc;
xiaomi_lywsd03mmc::XiaomiLYWSD03MMC *xiaomi_lywsd03mmc_xiaomilywsd03mmc_2;
xiaomi_lywsd03mmc::XiaomiLYWSD03MMC *xiaomi_lywsd03mmc_xiaomilywsd03mmc_3;
xiaomi_lywsd03mmc::XiaomiLYWSD03MMC *xiaomi_lywsd03mmc_xiaomilywsd03mmc_4;
xiaomi_lywsd03mmc::XiaomiLYWSD03MMC *xiaomi_lywsd03mmc_xiaomilywsd03mmc_5;
uptime::UptimeSensor *uptime_seconds;
template_::TemplateTextSensor *uptime_human;
ble_presence::BLEPresenceDevice *ble_presence_blepresencedevice;
ble_presence::BLEPresenceDevice *ble_presence_blepresencedevice_2;
ble_presence::BLEPresenceDevice *ble_presence_blepresencedevice_3;
ble_presence::BLEPresenceDevice *ble_presence_blepresencedevice_4;
ble_presence::BLEPresenceDevice *ble_presence_blepresencedevice_5;
gpio::GPIOBinarySensor *m5clim_flow_circuit_open;
template_::TemplateBinarySensor *any_thermostat_on;
homeassistant::HomeassistantBinarySensor *homeassistant_homeassistantbinarysensor;
status::StatusBinarySensor *status_statusbinarysensor;
gpio::GPIOBinarySensor *m5clim_front_button;
gpio::GPIOSwitch *m5clim_bathroom_thermostat;
gpio::GPIOSwitch *m5clim_main_bedroom_thermostat;
gpio::GPIOSwitch *m5clim_spare_bedroom_thermostat;
gpio::GPIOSwitch *m5clim_living_room_thermostat;
gpio::GPIOSwitch *m5clim_heat_pump_switch;
gpio::GPIOSwitch *m5clim_heat_pump_cooling_mode;
gpio::GPIOSwitch *m5clim_climate_circulator;
restart::RestartSwitch *restart_restartswitch;
thermostat::ThermostatClimate *bathroom_temperature_control;
thermostat::ThermostatClimate *main_bedroom_temperature_control;
thermostat::ThermostatClimate *spare_bedroom_temperature_control;
thermostat::ThermostatClimate *living_room_temperature_control;
xiaomi_ble::XiaomiListener *xiaomi_ble_xiaomilistener;
ruuvi_ble::RuuviListener *ruuvi_ble_ruuvilistener;
dallas::ESPOneWire *dallas_esponewire;
dallas::DallasComponent *dallas_1;
light::LightState *m5clim_status_led;
text_sensor::TextSensorStateTrigger *text_sensor_textsensorstatetrigger;
Automation<std::string> *automation_8;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter;
binary_sensor::PressTrigger *binary_sensor_presstrigger_2;
Automation<> *automation_11;
binary_sensor::PressTrigger *binary_sensor_presstrigger_3;
Automation<> *automation_13;
script::ScriptStopAction<> *script_scriptstopaction;
climate::ControlAction<> *climate_controlaction;
light::RandomLightEffect *light_randomlighteffect;
dallas::DallasTemperatureSensor *m5clim_inlet_temp;
dallas::DallasTemperatureSensor *m5clim_outlet_temp;
dallas::DallasTemperatureSensor *m5clim_entrance_floor_temp;
LambdaAction<std::string> *lambdaaction;
script::ScriptExecuteAction<> *script_scriptexecuteaction_3;
light::ToggleAction<> *light_toggleaction;
DelayAction<> *delayaction;
light::FlickerLightEffect *light_flickerlighteffect;
sensor::Sensor *bathroom_temperature;
sensor::Sensor *main_bedroom_temperature;
sensor::Sensor *spare_bedroom_temperature;
sensor::Sensor *living_room_temperature;
sensor::Sensor *sensor_sensor_9;
binary_sensor::PressTrigger *binary_sensor_presstrigger;
Automation<> *automation_9;
light::AddressableRainbowLightEffect *light_addressablerainbowlighteffect;
Automation<> *automation_20;
Automation<> *automation_27;
Automation<> *automation_34;
Automation<> *automation_41;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_3;
sensor::Sensor *sensor_sensor_5;
sensor::Sensor *sensor_sensor_7;
sensor::Sensor *sensor_sensor_10;
script::ScriptExecuteAction<> *script_scriptexecuteaction;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger_2;
Automation<> *automation_12;
switch_::TurnOffAction<> *switch__turnoffaction_7;
switch_::TurnOffAction<> *switch__turnoffaction_9;
switch_::TurnOffAction<> *switch__turnoffaction_11;
switch_::TurnOffAction<> *switch__turnoffaction_13;
sensor::Sensor *sensor_sensor_2;
sensor::Sensor *sensor_sensor_4;
sensor::Sensor *sensor_sensor_6;
sensor::Sensor *sensor_sensor_8;
sensor::Sensor *sensor_sensor_11;
script::ScriptExecuteAction<> *script_scriptexecuteaction_4;
climate::ControlAction<> *climate_controlaction_2;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger;
Automation<> *automation_10;
Automation<> *automation_18;
Automation<> *automation_25;
Automation<> *automation_32;
Automation<> *automation_39;
script::ScriptExecuteAction<> *script_scriptexecuteaction_2;
script::ScriptWaitAction<> *script_scriptwaitaction_5;
script::ScriptWaitAction<> *script_scriptwaitaction_7;
script::ScriptWaitAction<> *script_scriptwaitaction_9;
script::ScriptWaitAction<> *script_scriptwaitaction_11;
climate::ControlAction<> *climate_controlaction_3;
climate::ControlAction<> *climate_controlaction_4;
switch_::TurnOnAction<> *switch__turnonaction_4;
switch_::TurnOnAction<> *switch__turnonaction_6;
switch_::TurnOnAction<> *switch__turnonaction_8;
switch_::TurnOnAction<> *switch__turnonaction_10;
Automation<> *automation_19;
Automation<> *automation_26;
Automation<> *automation_33;
Automation<> *automation_40;
climate::ControlAction<> *climate_controlaction_5;
script::ScriptWaitAction<> *script_scriptwaitaction_6;
script::ScriptWaitAction<> *script_scriptwaitaction_8;
script::ScriptWaitAction<> *script_scriptwaitaction_10;
script::ScriptWaitAction<> *script_scriptwaitaction_12;
switch_::TurnOffAction<> *switch__turnoffaction;
DelayAction<> *delayaction_2;
switch_::TurnOnAction<> *switch__turnonaction_5;
switch_::TurnOnAction<> *switch__turnonaction_7;
switch_::TurnOnAction<> *switch__turnonaction_9;
switch_::TurnOnAction<> *switch__turnonaction_11;
Automation<> *automation_17;
Automation<> *automation_24;
Automation<> *automation_31;
Automation<> *automation_38;
switch_::TurnOffAction<> *switch__turnoffaction_2;
script::ScriptExecuteAction<> *script_scriptexecuteaction_7;
script::ScriptExecuteAction<> *script_scriptexecuteaction_10;
script::ScriptExecuteAction<> *script_scriptexecuteaction_13;
script::ScriptExecuteAction<> *script_scriptexecuteaction_16;
Automation<> *automation_3;
Automation<> *automation_16;
Automation<> *automation_23;
Automation<> *automation_30;
Automation<> *automation_37;
script::ScriptStopAction<> *script_scriptstopaction_2;
script::ScriptExecuteAction<> *script_scriptexecuteaction_6;
script::ScriptExecuteAction<> *script_scriptexecuteaction_9;
script::ScriptExecuteAction<> *script_scriptexecuteaction_12;
script::ScriptExecuteAction<> *script_scriptexecuteaction_15;
DelayAction<> *delayaction_3;
Automation<> *automation_15;
Automation<> *automation_22;
Automation<> *automation_29;
Automation<> *automation_36;
script::ScriptExecuteAction<> *script_scriptexecuteaction_5;
script::ScriptExecuteAction<> *script_scriptexecuteaction_8;
script::ScriptExecuteAction<> *script_scriptexecuteaction_11;
script::ScriptExecuteAction<> *script_scriptexecuteaction_14;
climate::ControlAction<> *climate_controlaction_6;
Automation<> *automation_14;
Automation<> *automation_21;
Automation<> *automation_28;
Automation<> *automation_35;
switch_::TurnOffAction<> *switch__turnoffaction_6;
switch_::TurnOffAction<> *switch__turnoffaction_8;
switch_::TurnOffAction<> *switch__turnoffaction_10;
switch_::TurnOffAction<> *switch__turnoffaction_12;
climate::ControlAction<> *climate_controlaction_7;
climate::ControlAction<> *climate_controlaction_8;
climate::ControlAction<> *climate_controlaction_9;
switch_::TurnOffAction<> *switch__turnoffaction_3;
DelayAction<> *delayaction_4;
switch_::TurnOnAction<> *switch__turnonaction;
Automation<> *automation_4;
script::ScriptStopAction<> *script_scriptstopaction_3;
script::ScriptWaitAction<> *script_scriptwaitaction;
script::ScriptWaitAction<> *script_scriptwaitaction_2;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction;
DelayAction<> *delayaction_5;
LambdaCondition<> *lambdacondition;
IfAction<> *ifaction;
switch_::TurnOnAction<> *switch__turnonaction_2;
Automation<> *automation_5;
script::ScriptStopAction<> *script_scriptstopaction_4;
DelayAction<> *delayaction_6;
LambdaCondition<> *lambdacondition_2;
IfAction<> *ifaction_2;
switch_::TurnOffAction<> *switch__turnoffaction_4;
Automation<> *automation_6;
script::ScriptWaitAction<> *script_scriptwaitaction_3;
DelayAction<> *delayaction_7;
LambdaCondition<> *lambdacondition_3;
IfAction<> *ifaction_3;
switch_::TurnOnAction<> *switch__turnonaction_3;
Automation<> *automation_7;
script::ScriptWaitAction<> *script_scriptwaitaction_4;
DelayAction<> *delayaction_8;
switch_::TurnOffAction<> *switch__turnoffaction_5;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: m5clim
  //   platform: ESP32
  //   board: m5stack-grey
  //   on_boot:
  //   - priority: -100.0
  //     then:
  //     - climate.control:
  //         id: bathroom_temperature_control
  //         mode: 'OFF'
  //       type_id: climate_controlaction
  //     automation_id: automation
  //     trigger_id: startuptrigger
  //   arduino_version: espressif32@1.12.4
  //   build_path: m5clim
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  App.pre_setup("m5clim", __DATE__ ", " __TIME__);
  // light:
  // text_sensor:
  // binary_sensor:
  // switch:
  // climate:
  // logger:
  //   level: DEBUG
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   hardware_uart: UART0
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // wifi:
  //   manual_ip:
  //     static_ip: 192.168.33.90
  //     gateway: 192.168.33.1
  //     subnet: 255.255.255.0
  //     dns1: 192.168.33.1
  //     dns2: 0.0.0.0
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   networks:
  //   - ssid: birelesha
  //     password: montecativo256
  //     id: wifi_wifiap
  //     priority: 0.0
  //   use_address: 192.168.33.90
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.33.90");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("birelesha");
  wifi_wifiap.set_password("montecativo256");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = IPAddress(192, 168, 33, 90),
      .gateway = IPAddress(192, 168, 33, 1),
      .subnet = IPAddress(255, 255, 255, 0),
      .dns1 = IPAddress(192, 168, 33, 1),
      .dns2 = IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(false);
  App.register_component(wifi_wificomponent);
  // ota:
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 3232
  //   password: ''
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_auth_password("");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  App.register_component(api_apiserver);
  // sensor:
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  startuptrigger = new StartupTrigger(-100.0f);
  App.register_component(startuptrigger);
  automation = new Automation<>(startuptrigger);
  // i2c:
  //   id: bus_b
  //   sda: 19
  //   scl: 22
  //   scan: false
  //   frequency: 50000.0
  bus_b = new i2c::I2CComponent();
  App.register_component(bus_b);
  // substitutions:
  //   name: m5clim
  //   def_temp_low: 21 °C
  //   def_temp_high: 26 °C
  //   def_hysteresis: 0.0 °C
  //   def_away_temp_low: 19 °C
  //   def_away_temp_high: 28 °C
  //   division_1: Bathroom
  //   division_2: Main Bedroom
  //   division_3: Spare Bedroom
  //   division_4: Living Room
  //   division_id_1: bathroom
  //   division_id_2: main_bedroom
  //   division_id_3: spare_bedroom
  //   division_id_4: living_room
  // script:
  //   - id: set_mode_heat
  //     mode: single
  //     then:
  //     - script.stop:
  //         id: set_mode_cool
  //       type_id: script_scriptstopaction
  //     - delay: 3s
  //       type_id: delayaction
  //     - climate.control:
  //         id: bathroom_temperature_control
  //         mode: HEAT
  //       type_id: climate_controlaction_2
  //     - climate.control:
  //         id: main_bedroom_temperature_control
  //         mode: HEAT
  //       type_id: climate_controlaction_3
  //     - climate.control:
  //         id: spare_bedroom_temperature_control
  //         mode: HEAT
  //       type_id: climate_controlaction_4
  //     - climate.control:
  //         id: living_room_temperature_control
  //         mode: HEAT
  //       type_id: climate_controlaction_5
  //     - switch.turn_off:
  //         id: m5clim_heat_pump_switch
  //       type_id: switch__turnoffaction
  //     - delay: 3s
  //       type_id: delayaction_2
  //     - switch.turn_off:
  //         id: m5clim_heat_pump_cooling_mode
  //       type_id: switch__turnoffaction_2
  //     trigger_id: trigger
  //     automation_id: automation_2
  //   - id: set_mode_cool
  //     mode: single
  //     then:
  //     - script.stop:
  //         id: set_mode_heat
  //       type_id: script_scriptstopaction_2
  //     - delay: 3s
  //       type_id: delayaction_3
  //     - climate.control:
  //         id: bathroom_temperature_control
  //         mode: COOL
  //       type_id: climate_controlaction_6
  //     - climate.control:
  //         id: main_bedroom_temperature_control
  //         mode: COOL
  //       type_id: climate_controlaction_7
  //     - climate.control:
  //         id: spare_bedroom_temperature_control
  //         mode: COOL
  //       type_id: climate_controlaction_8
  //     - climate.control:
  //         id: living_room_temperature_control
  //         mode: COOL
  //       type_id: climate_controlaction_9
  //     - switch.turn_off:
  //         id: m5clim_heat_pump_switch
  //       type_id: switch__turnoffaction_3
  //     - delay: 3s
  //       type_id: delayaction_4
  //     - switch.turn_on:
  //         id: m5clim_heat_pump_cooling_mode
  //       type_id: switch__turnonaction
  //     trigger_id: trigger_2
  //     automation_id: automation_3
  //   - id: start_heat_pump
  //     mode: single
  //     then:
  //     - script.stop:
  //         id: stop_heat_pump
  //       type_id: script_scriptstopaction_3
  //     - script.wait:
  //         id: set_mode_heat
  //       type_id: script_scriptwaitaction
  //     - script.wait:
  //         id: set_mode_cool
  //       type_id: script_scriptwaitaction_2
  //     - homeassistant.service:
  //         service: switch.turn_on
  //         data:
  //           entity_id: switch.shelly_swshlhea
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction
  //     - delay: 30s
  //       type_id: delayaction_5
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(any_thermostat_on).state == true;
  //           type_id: lambdacondition
  //         then:
  //         - switch.turn_on:
  //             id: m5clim_heat_pump_switch
  //           type_id: switch__turnonaction_2
  //       type_id: ifaction
  //     trigger_id: trigger_3
  //     automation_id: automation_4
  //   - id: stop_heat_pump
  //     mode: single
  //     then:
  //     - script.stop:
  //         id: start_heat_pump
  //       type_id: script_scriptstopaction_4
  //     - delay: 30s
  //       type_id: delayaction_6
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(any_thermostat_on).state == false;
  //           type_id: lambdacondition_2
  //         then:
  //         - switch.turn_off:
  //             id: m5clim_heat_pump_switch
  //           type_id: switch__turnoffaction_4
  //       type_id: ifaction_2
  //     trigger_id: trigger_4
  //     automation_id: automation_5
  //   - id: start_circulator
  //     mode: single
  //     then:
  //     - script.wait:
  //         id: stop_circulator
  //       type_id: script_scriptwaitaction_3
  //     - delay: 2s
  //       type_id: delayaction_7
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(any_thermostat_on).state == true;
  //           type_id: lambdacondition_3
  //         then:
  //         - switch.turn_on:
  //             id: m5clim_climate_circulator
  //           type_id: switch__turnonaction_3
  //       type_id: ifaction_3
  //     trigger_id: trigger_5
  //     automation_id: automation_6
  //   - id: stop_circulator
  //     mode: single
  //     then:
  //     - script.wait:
  //         id: start_circulator
  //       type_id: script_scriptwaitaction_4
  //     - delay: 2s
  //       type_id: delayaction_8
  //     - switch.turn_off:
  //         id: m5clim_climate_circulator
  //       type_id: switch__turnoffaction_5
  //     trigger_id: trigger_6
  //     automation_id: automation_7
  set_mode_heat = new script::SingleScript();
  set_mode_heat->set_name("set_mode_heat");
  set_mode_cool = new script::SingleScript();
  set_mode_cool->set_name("set_mode_cool");
  start_heat_pump = new script::SingleScript();
  start_heat_pump->set_name("start_heat_pump");
  stop_heat_pump = new script::SingleScript();
  stop_heat_pump->set_name("stop_heat_pump");
  start_circulator = new script::SingleScript();
  start_circulator->set_name("start_circulator");
  stop_circulator = new script::SingleScript();
  stop_circulator->set_name("stop_circulator");
  automation_2 = new Automation<>(set_mode_heat);
  // pcf8574:
  //   id: hub_relays
  //   address: 0x27
  //   pcf8575: false
  //   i2c_id: bus_b
  hub_relays = new pcf8574::PCF8574Component();
  App.register_component(hub_relays);
  // pcf8574:
  //   id: hub_sensors
  //   address: 0x20
  //   pcf8575: false
  //   i2c_id: bus_b
  hub_sensors = new pcf8574::PCF8574Component();
  App.register_component(hub_sensors);
  // esp32_ble_tracker:
  //   scan_parameters:
  //     active: true
  //     duration: 5min
  //     interval: 320ms
  //     window: 30ms
  //   id: esp32_ble_tracker_esp32bletracker
  esp32_ble_tracker_esp32bletracker = new esp32_ble_tracker::ESP32BLETracker();
  App.register_component(esp32_ble_tracker_esp32bletracker);
  // dallas:
  //   pin:
  //     number: 25
  //     mode: INPUT
  //     inverted: false
  //   id: dallas_1
  //   one_wire_id: dallas_esponewire
  //   update_interval: 60s
  // light.fastled_clockless:
  //   platform: fastled_clockless
  //   chipset: WS2812B
  //   pin: 27
  //   num_leds: 1
  //   rgb_order: GRB
  //   id: m5clim_status_led
  //   name: m5clim LED
  //   effects:
  //   - random:
  //       transition_length: 7500ms
  //       update_interval: 10s
  //       name: Random
  //     type_id: light_randomlighteffect
  //   - flicker:
  //       alpha: 0.95
  //       intensity: 0.015
  //       name: Flicker
  //     type_id: light_flickerlighteffect
  //   - addressable_rainbow:
  //       speed: 10
  //       width: 50
  //       name: Rainbow
  //     type_id: light_addressablerainbowlighteffect
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   output_id: fastled_base_fastledlightoutput
  fastled_base_fastledlightoutput = new fastled_base::FastLEDLightOutput();
  App.register_component(fastled_base_fastledlightoutput);
  // sensor.xiaomi_lywsd03mmc:
  //   platform: xiaomi_lywsd03mmc
  //   mac_address: A4:C1:38:80:89:FB
  //   bindkey: BD5F878AFE292291FC3D4F91880BCF22
  //   temperature:
  //     name: Bathroom Temperature
  //     id: bathroom_temperature
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   humidity:
  //     name: Bathroom Humidity
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   battery_level:
  //     name: Bathroom Sensor Battery
  //     id: sensor_sensor_2
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:battery
  //     accuracy_decimals: 0
  //   id: xiaomi_lywsd03mmc_xiaomilywsd03mmc
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_lywsd03mmc_xiaomilywsd03mmc = new xiaomi_lywsd03mmc::XiaomiLYWSD03MMC();
  App.register_component(xiaomi_lywsd03mmc_xiaomilywsd03mmc);
  // sensor.xiaomi_lywsd03mmc:
  //   platform: xiaomi_lywsd03mmc
  //   mac_address: A4:C1:38:21:29:43
  //   bindkey: 3E4941BBECFC2BFDDAD439EDB0249259
  //   temperature:
  //     name: Main Bedroom Temperature
  //     id: main_bedroom_temperature
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   humidity:
  //     name: Main Bedroom Humidity
  //     id: sensor_sensor_3
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   battery_level:
  //     name: Main Bedroom Sensor Battery
  //     id: sensor_sensor_4
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:battery
  //     accuracy_decimals: 0
  //   id: xiaomi_lywsd03mmc_xiaomilywsd03mmc_2
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_2 = new xiaomi_lywsd03mmc::XiaomiLYWSD03MMC();
  App.register_component(xiaomi_lywsd03mmc_xiaomilywsd03mmc_2);
  // sensor.xiaomi_lywsd03mmc:
  //   platform: xiaomi_lywsd03mmc
  //   mac_address: A4:C1:38:9D:AF:D3
  //   bindkey: EC082232E57EE4AD93941991544E0DB4
  //   temperature:
  //     name: Spare Bedroom Temperature
  //     id: spare_bedroom_temperature
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   humidity:
  //     name: Spare Bedroom Humidity
  //     id: sensor_sensor_5
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   battery_level:
  //     name: Spare Bedroom Sensor Battery
  //     id: sensor_sensor_6
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:battery
  //     accuracy_decimals: 0
  //   id: xiaomi_lywsd03mmc_xiaomilywsd03mmc_3
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_3 = new xiaomi_lywsd03mmc::XiaomiLYWSD03MMC();
  App.register_component(xiaomi_lywsd03mmc_xiaomilywsd03mmc_3);
  // sensor.xiaomi_lywsd03mmc:
  //   platform: xiaomi_lywsd03mmc
  //   mac_address: A4:C1:38:CC:03:7F
  //   bindkey: 9FF16FDA831F9158ECD2F402F4A0913B
  //   temperature:
  //     name: Living Room Temperature
  //     id: living_room_temperature
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   humidity:
  //     name: Living Room Humidity
  //     id: sensor_sensor_7
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   battery_level:
  //     name: Living Room Sensor Battery
  //     id: sensor_sensor_8
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:battery
  //     accuracy_decimals: 0
  //   id: xiaomi_lywsd03mmc_xiaomilywsd03mmc_4
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_4 = new xiaomi_lywsd03mmc::XiaomiLYWSD03MMC();
  App.register_component(xiaomi_lywsd03mmc_xiaomilywsd03mmc_4);
  // sensor.xiaomi_lywsd03mmc:
  //   platform: xiaomi_lywsd03mmc
  //   mac_address: A4:C1:38:07:E0:39
  //   bindkey: E68B02250ACD682A8742D355CBA55151
  //   temperature:
  //     name: Entrance Temperature
  //     id: sensor_sensor_9
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   humidity:
  //     name: Entrance Humidity
  //     id: sensor_sensor_10
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   battery_level:
  //     name: Entrance Sensor Battery
  //     id: sensor_sensor_11
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:battery
  //     accuracy_decimals: 0
  //   id: xiaomi_lywsd03mmc_xiaomilywsd03mmc_5
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_5 = new xiaomi_lywsd03mmc::XiaomiLYWSD03MMC();
  App.register_component(xiaomi_lywsd03mmc_xiaomilywsd03mmc_5);
  // sensor.dallas:
  //   platform: dallas
  //   address: 0x5101193808681428
  //   name: m5clim Inlet Temperature
  //   id: m5clim_inlet_temp
  //   dallas_id: dallas_1
  //   force_update: false
  //   unit_of_measurement: °C
  //   icon: mdi:thermometer
  //   accuracy_decimals: 1
  //   resolution: 12
  // sensor.dallas:
  //   platform: dallas
  //   address: 0x9D011937F7E71028
  //   name: m5clim Outlet Temperature
  //   id: m5clim_outlet_temp
  //   dallas_id: dallas_1
  //   force_update: false
  //   unit_of_measurement: °C
  //   icon: mdi:thermometer
  //   accuracy_decimals: 1
  //   resolution: 12
  // sensor.dallas:
  //   platform: dallas
  //   address: 0xF73C01D6071E8D28
  //   name: m5clim Entrance Floor Temperature
  //   id: m5clim_entrance_floor_temp
  //   dallas_id: dallas_1
  //   force_update: false
  //   unit_of_measurement: °C
  //   icon: mdi:thermometer
  //   accuracy_decimals: 1
  //   resolution: 12
  // sensor.uptime:
  //   platform: uptime
  //   name: Uptime Seconds
  //   id: uptime_seconds
  //   update_interval: 60s
  //   force_update: false
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   accuracy_decimals: 0
  uptime_seconds = new uptime::UptimeSensor();
  uptime_seconds->set_update_interval(60000);
  App.register_component(uptime_seconds);
  // text_sensor.template:
  //   platform: template
  //   name: Uptime
  //   id: uptime_human
  //   lambda: !lambda |-
  //     uint32_t dur = id(uptime_seconds).state;
  //     int dys = 0;
  //     int hrs = 0;
  //     int mnts = 0;
  //     if (dur > 86399) {
  //       dys = trunc(dur / 86400);
  //       dur = dur - (dys * 86400);
  //     }
  //     if (dur > 3599) {
  //       hrs = trunc(dur / 3600);
  //       dur = dur - (hrs * 3600);
  //     }
  //     if (dur > 59) {
  //       mnts = trunc(dur / 60);
  //       dur = dur - (mnts * 60);
  //     }
  //     char buffer[17];
  //     sprintf(buffer, "%ud %02uh %02um %02us", dys, hrs, mnts, dur);
  //     return {buffer};
  //   icon: mdi:clock-start
  //   update_interval: 60s
  //   on_value:
  //   - then:
  //     - logger.log:
  //         format: '------------ Uptime is %s -------------'
  //         args:
  //         - !lambda |-
  //           id(uptime_human).state.c_str()
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction
  //     automation_id: automation_8
  //     trigger_id: text_sensor_textsensorstatetrigger
  uptime_human = new template_::TemplateTextSensor();
  uptime_human->set_update_interval(60000);
  App.register_component(uptime_human);
  // binary_sensor.ble_presence:
  //   platform: ble_presence
  //   mac_address: A4:C1:38:80:89:FB
  //   name: Bathroom Sensor Presence
  //   device_class: connectivity
  //   id: ble_presence_blepresencedevice
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  ble_presence_blepresencedevice = new ble_presence::BLEPresenceDevice();
  App.register_component(ble_presence_blepresencedevice);
  // binary_sensor.ble_presence:
  //   platform: ble_presence
  //   mac_address: A4:C1:38:21:29:43
  //   name: Main Bedroom Sensor Presence
  //   device_class: connectivity
  //   id: ble_presence_blepresencedevice_2
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  ble_presence_blepresencedevice_2 = new ble_presence::BLEPresenceDevice();
  App.register_component(ble_presence_blepresencedevice_2);
  // binary_sensor.ble_presence:
  //   platform: ble_presence
  //   mac_address: A4:C1:38:9D:AF:D3
  //   name: Spare Bedroom Sensor Presence
  //   device_class: connectivity
  //   id: ble_presence_blepresencedevice_3
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  ble_presence_blepresencedevice_3 = new ble_presence::BLEPresenceDevice();
  App.register_component(ble_presence_blepresencedevice_3);
  // binary_sensor.ble_presence:
  //   platform: ble_presence
  //   mac_address: A4:C1:38:CC:03:7F
  //   name: Living Room Sensor Presence
  //   device_class: connectivity
  //   id: ble_presence_blepresencedevice_4
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  ble_presence_blepresencedevice_4 = new ble_presence::BLEPresenceDevice();
  App.register_component(ble_presence_blepresencedevice_4);
  // binary_sensor.ble_presence:
  //   platform: ble_presence
  //   mac_address: A4:C1:38:07:E0:39
  //   name: Entrance Sensor Presence
  //   device_class: connectivity
  //   id: ble_presence_blepresencedevice_5
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  ble_presence_blepresencedevice_5 = new ble_presence::BLEPresenceDevice();
  App.register_component(ble_presence_blepresencedevice_5);
  // binary_sensor.gpio:
  //   platform: gpio
  //   name: m5clim flow circuit open
  //   id: m5clim_flow_circuit_open
  //   device_class: opening
  //   pin:
  //     pcf8574: hub_sensors
  //     number: 7
  //     mode: INPUT
  //     inverted: true
  //   filters:
  //   - delayed_on: 100ms
  //     type_id: binary_sensor_delayedonfilter
  //   on_press:
  //   - then:
  //     - script.execute:
  //         id: start_circulator
  //       type_id: script_scriptexecuteaction
  //     automation_id: automation_9
  //     trigger_id: binary_sensor_presstrigger
  //   on_release:
  //   - then:
  //     - script.execute:
  //         id: stop_circulator
  //       type_id: script_scriptexecuteaction_2
  //     automation_id: automation_10
  //     trigger_id: binary_sensor_releasetrigger
  m5clim_flow_circuit_open = new gpio::GPIOBinarySensor();
  App.register_component(m5clim_flow_circuit_open);
  // binary_sensor.template:
  //   platform: template
  //   name: Any thermostat ON
  //   id: any_thermostat_on
  //   lambda: !lambda |-
  //     if(id(m5clim_bathroom_thermostat).state or id(m5clim_main_bedroom_thermostat).state or id(m5clim_spare_bedroom_thermostat).state or id(m5clim_living_room_thermostat).state){
  //       return true;
  //     } else {
  //       return false;
  //     }
  //   on_press:
  //   - then:
  //     - script.execute:
  //         id: start_heat_pump
  //       type_id: script_scriptexecuteaction_3
  //     automation_id: automation_11
  //     trigger_id: binary_sensor_presstrigger_2
  //   on_release:
  //   - then:
  //     - script.execute:
  //         id: stop_heat_pump
  //       type_id: script_scriptexecuteaction_4
  //     automation_id: automation_12
  //     trigger_id: binary_sensor_releasetrigger_2
  any_thermostat_on = new template_::TemplateBinarySensor();
  App.register_component(any_thermostat_on);
  // binary_sensor.homeassistant:
  //   platform: homeassistant
  //   name: Global switch state
  //   entity_id: switch.shelly_swshlhea
  //   id: homeassistant_homeassistantbinarysensor
  homeassistant_homeassistantbinarysensor = new homeassistant::HomeassistantBinarySensor();
  App.register_component(homeassistant_homeassistantbinarysensor);
  // binary_sensor.status:
  //   platform: status
  //   name: m5clim Status
  //   id: status_statusbinarysensor
  //   device_class: connectivity
  status_statusbinarysensor = new status::StatusBinarySensor();
  App.register_component(status_statusbinarysensor);
  // binary_sensor.gpio:
  //   platform: gpio
  //   name: m5clim front button
  //   id: m5clim_front_button
  //   pin:
  //     number: 39
  //     inverted: true
  //     mode: INPUT_PULLUP
  //   on_press:
  //   - then:
  //     - light.toggle:
  //         id: m5clim_status_led
  //       type_id: light_toggleaction
  //     automation_id: automation_13
  //     trigger_id: binary_sensor_presstrigger_3
  m5clim_front_button = new gpio::GPIOBinarySensor();
  App.register_component(m5clim_front_button);
  // switch.gpio:
  //   platform: gpio
  //   id: m5clim_bathroom_thermostat
  //   name: Bathroom Thermostat
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   pin:
  //     pcf8574: hub_relays
  //     number: 0
  //     mode: OUTPUT
  //     inverted: true
  //   interlock_wait_time: 0ms
  m5clim_bathroom_thermostat = new gpio::GPIOSwitch();
  App.register_component(m5clim_bathroom_thermostat);
  // switch.gpio:
  //   platform: gpio
  //   id: m5clim_main_bedroom_thermostat
  //   name: Main Bedroom Thermostat
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   pin:
  //     pcf8574: hub_relays
  //     number: 1
  //     mode: OUTPUT
  //     inverted: true
  //   interlock_wait_time: 0ms
  m5clim_main_bedroom_thermostat = new gpio::GPIOSwitch();
  App.register_component(m5clim_main_bedroom_thermostat);
  // switch.gpio:
  //   platform: gpio
  //   id: m5clim_spare_bedroom_thermostat
  //   name: Spare Bedroom Thermostat
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   pin:
  //     pcf8574: hub_relays
  //     number: 2
  //     mode: OUTPUT
  //     inverted: true
  //   interlock_wait_time: 0ms
  m5clim_spare_bedroom_thermostat = new gpio::GPIOSwitch();
  App.register_component(m5clim_spare_bedroom_thermostat);
  // switch.gpio:
  //   platform: gpio
  //   id: m5clim_living_room_thermostat
  //   name: Living Room Thermostat
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   pin:
  //     pcf8574: hub_relays
  //     number: 3
  //     mode: OUTPUT
  //     inverted: true
  //   interlock_wait_time: 0ms
  m5clim_living_room_thermostat = new gpio::GPIOSwitch();
  App.register_component(m5clim_living_room_thermostat);
  // switch.gpio:
  //   platform: gpio
  //   id: m5clim_heat_pump_switch
  //   name: Heat Pump Switch
  //   restore_mode: ALWAYS_OFF
  //   pin:
  //     pcf8574: hub_relays
  //     number: 4
  //     mode: OUTPUT
  //     inverted: true
  //   interlock_wait_time: 0ms
  m5clim_heat_pump_switch = new gpio::GPIOSwitch();
  App.register_component(m5clim_heat_pump_switch);
  // switch.gpio:
  //   platform: gpio
  //   id: m5clim_heat_pump_cooling_mode
  //   name: Heat Pump Cooling Mode
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   pin:
  //     pcf8574: hub_relays
  //     number: 5
  //     mode: OUTPUT
  //     inverted: true
  //   interlock_wait_time: 0ms
  m5clim_heat_pump_cooling_mode = new gpio::GPIOSwitch();
  App.register_component(m5clim_heat_pump_cooling_mode);
  // switch.gpio:
  //   platform: gpio
  //   id: m5clim_climate_circulator
  //   name: Climate Water Circulator
  //   restore_mode: ALWAYS_OFF
  //   pin:
  //     pcf8574: hub_relays
  //     number: 6
  //     mode: OUTPUT
  //     inverted: true
  //   interlock_wait_time: 0ms
  m5clim_climate_circulator = new gpio::GPIOSwitch();
  App.register_component(m5clim_climate_circulator);
  // switch.restart:
  //   platform: restart
  //   name: m5clim_restart
  //   id: restart_restartswitch
  //   icon: mdi:restart
  restart_restartswitch = new restart::RestartSwitch();
  App.register_component(restart_restartswitch);
  // climate.thermostat:
  //   platform: thermostat
  //   name: Bathroom Temperature Control
  //   id: bathroom_temperature_control
  //   sensor: bathroom_temperature
  //   default_target_temperature_low: 21.0
  //   default_target_temperature_high: 26.0
  //   hysteresis: 0.0
  //   off_mode:
  //     then:
  //     - switch.turn_off:
  //         id: m5clim_bathroom_thermostat
  //       type_id: switch__turnoffaction_6
  //     trigger_id: trigger_7
  //     automation_id: automation_14
  //   heat_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_heat
  //       type_id: script_scriptexecuteaction_5
  //     trigger_id: trigger_8
  //     automation_id: automation_15
  //   cool_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_cool
  //       type_id: script_scriptexecuteaction_6
  //     trigger_id: trigger_9
  //     automation_id: automation_16
  //   auto_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_heat
  //       type_id: script_scriptexecuteaction_7
  //     trigger_id: trigger_10
  //     automation_id: automation_17
  //   cool_action:
  //     then:
  //     - script.wait:
  //         id: set_mode_cool
  //       type_id: script_scriptwaitaction_5
  //     - switch.turn_on:
  //         id: m5clim_bathroom_thermostat
  //       type_id: switch__turnonaction_4
  //     trigger_id: trigger_11
  //     automation_id: automation_18
  //   heat_action:
  //     then:
  //     - script.wait:
  //         id: set_mode_heat
  //       type_id: script_scriptwaitaction_6
  //     - switch.turn_on:
  //         id: m5clim_bathroom_thermostat
  //       type_id: switch__turnonaction_5
  //     trigger_id: trigger_12
  //     automation_id: automation_19
  //   idle_action:
  //     then:
  //     - switch.turn_off:
  //         id: m5clim_bathroom_thermostat
  //       type_id: switch__turnoffaction_7
  //     trigger_id: trigger_13
  //     automation_id: automation_20
  //   away_config:
  //     default_target_temperature_low: 19.0
  //     default_target_temperature_high: 28.0
  //   visual: {}
  bathroom_temperature_control = new thermostat::ThermostatClimate();
  App.register_component(bathroom_temperature_control);
  // climate.thermostat:
  //   platform: thermostat
  //   name: Main Bedroom Temperature Control
  //   id: main_bedroom_temperature_control
  //   sensor: main_bedroom_temperature
  //   default_target_temperature_low: 21.0
  //   default_target_temperature_high: 26.0
  //   hysteresis: 0.0
  //   off_mode:
  //     then:
  //     - switch.turn_off:
  //         id: m5clim_main_bedroom_thermostat
  //       type_id: switch__turnoffaction_8
  //     trigger_id: trigger_14
  //     automation_id: automation_21
  //   heat_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_heat
  //       type_id: script_scriptexecuteaction_8
  //     trigger_id: trigger_15
  //     automation_id: automation_22
  //   cool_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_cool
  //       type_id: script_scriptexecuteaction_9
  //     trigger_id: trigger_16
  //     automation_id: automation_23
  //   auto_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_heat
  //       type_id: script_scriptexecuteaction_10
  //     trigger_id: trigger_17
  //     automation_id: automation_24
  //   cool_action:
  //     then:
  //     - script.wait:
  //         id: set_mode_cool
  //       type_id: script_scriptwaitaction_7
  //     - switch.turn_on:
  //         id: m5clim_main_bedroom_thermostat
  //       type_id: switch__turnonaction_6
  //     trigger_id: trigger_18
  //     automation_id: automation_25
  //   heat_action:
  //     then:
  //     - script.wait:
  //         id: set_mode_heat
  //       type_id: script_scriptwaitaction_8
  //     - switch.turn_on:
  //         id: m5clim_main_bedroom_thermostat
  //       type_id: switch__turnonaction_7
  //     trigger_id: trigger_19
  //     automation_id: automation_26
  //   idle_action:
  //     then:
  //     - switch.turn_off:
  //         id: m5clim_main_bedroom_thermostat
  //       type_id: switch__turnoffaction_9
  //     trigger_id: trigger_20
  //     automation_id: automation_27
  //   away_config:
  //     default_target_temperature_low: 19.0
  //     default_target_temperature_high: 28.0
  //   visual: {}
  main_bedroom_temperature_control = new thermostat::ThermostatClimate();
  App.register_component(main_bedroom_temperature_control);
  // climate.thermostat:
  //   platform: thermostat
  //   name: Spare Bedroom Temperature Control
  //   id: spare_bedroom_temperature_control
  //   sensor: spare_bedroom_temperature
  //   default_target_temperature_low: 21.0
  //   default_target_temperature_high: 26.0
  //   hysteresis: 0.0
  //   off_mode:
  //     then:
  //     - switch.turn_off:
  //         id: m5clim_spare_bedroom_thermostat
  //       type_id: switch__turnoffaction_10
  //     trigger_id: trigger_21
  //     automation_id: automation_28
  //   heat_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_heat
  //       type_id: script_scriptexecuteaction_11
  //     trigger_id: trigger_22
  //     automation_id: automation_29
  //   cool_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_cool
  //       type_id: script_scriptexecuteaction_12
  //     trigger_id: trigger_23
  //     automation_id: automation_30
  //   auto_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_heat
  //       type_id: script_scriptexecuteaction_13
  //     trigger_id: trigger_24
  //     automation_id: automation_31
  //   cool_action:
  //     then:
  //     - script.wait:
  //         id: set_mode_cool
  //       type_id: script_scriptwaitaction_9
  //     - switch.turn_on:
  //         id: m5clim_spare_bedroom_thermostat
  //       type_id: switch__turnonaction_8
  //     trigger_id: trigger_25
  //     automation_id: automation_32
  //   heat_action:
  //     then:
  //     - script.wait:
  //         id: set_mode_heat
  //       type_id: script_scriptwaitaction_10
  //     - switch.turn_on:
  //         id: m5clim_spare_bedroom_thermostat
  //       type_id: switch__turnonaction_9
  //     trigger_id: trigger_26
  //     automation_id: automation_33
  //   idle_action:
  //     then:
  //     - switch.turn_off:
  //         id: m5clim_spare_bedroom_thermostat
  //       type_id: switch__turnoffaction_11
  //     trigger_id: trigger_27
  //     automation_id: automation_34
  //   away_config:
  //     default_target_temperature_low: 19.0
  //     default_target_temperature_high: 28.0
  //   visual: {}
  spare_bedroom_temperature_control = new thermostat::ThermostatClimate();
  App.register_component(spare_bedroom_temperature_control);
  // climate.thermostat:
  //   platform: thermostat
  //   name: Living Room Temperature Control
  //   id: living_room_temperature_control
  //   sensor: living_room_temperature
  //   default_target_temperature_low: 21.0
  //   default_target_temperature_high: 26.0
  //   hysteresis: 0.0
  //   off_mode:
  //     then:
  //     - switch.turn_off:
  //         id: m5clim_living_room_thermostat
  //       type_id: switch__turnoffaction_12
  //     trigger_id: trigger_28
  //     automation_id: automation_35
  //   heat_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_heat
  //       type_id: script_scriptexecuteaction_14
  //     trigger_id: trigger_29
  //     automation_id: automation_36
  //   cool_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_cool
  //       type_id: script_scriptexecuteaction_15
  //     trigger_id: trigger_30
  //     automation_id: automation_37
  //   auto_mode:
  //     then:
  //     - script.execute:
  //         id: set_mode_heat
  //       type_id: script_scriptexecuteaction_16
  //     trigger_id: trigger_31
  //     automation_id: automation_38
  //   cool_action:
  //     then:
  //     - script.wait:
  //         id: set_mode_cool
  //       type_id: script_scriptwaitaction_11
  //     - switch.turn_on:
  //         id: m5clim_living_room_thermostat
  //       type_id: switch__turnonaction_10
  //     trigger_id: trigger_32
  //     automation_id: automation_39
  //   heat_action:
  //     then:
  //     - script.wait:
  //         id: set_mode_heat
  //       type_id: script_scriptwaitaction_12
  //     - switch.turn_on:
  //         id: m5clim_living_room_thermostat
  //       type_id: switch__turnonaction_11
  //     trigger_id: trigger_33
  //     automation_id: automation_40
  //   idle_action:
  //     then:
  //     - switch.turn_off:
  //         id: m5clim_living_room_thermostat
  //       type_id: switch__turnoffaction_13
  //     trigger_id: trigger_34
  //     automation_id: automation_41
  //   away_config:
  //     default_target_temperature_low: 19.0
  //     default_target_temperature_high: 28.0
  //   visual: {}
  living_room_temperature_control = new thermostat::ThermostatClimate();
  App.register_component(living_room_temperature_control);
  // xiaomi_ble:
  //   id: xiaomi_ble_xiaomilistener
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_ble_xiaomilistener = new xiaomi_ble::XiaomiListener();
  // ruuvi_ble:
  //   id: ruuvi_ble_ruuvilistener
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  ruuvi_ble_ruuvilistener = new ruuvi_ble::RuuviListener();
  bus_b->set_sda_pin(19);
  bus_b->set_scl_pin(22);
  bus_b->set_frequency(50000);
  bus_b->set_scan(false);
  esp32_ble_tracker_esp32bletracker->set_scan_duration(300);
  esp32_ble_tracker_esp32bletracker->set_scan_interval(512);
  esp32_ble_tracker_esp32bletracker->set_scan_window(48);
  esp32_ble_tracker_esp32bletracker->set_scan_active(true);
  dallas_esponewire = new dallas::ESPOneWire(new GPIOPin(25, INPUT, false));
  dallas_1 = new dallas::DallasComponent(dallas_esponewire);
  dallas_1->set_update_interval(60000);
  App.register_component(dallas_1);
  m5clim_status_led = new light::LightState("m5clim LED", fastled_base_fastledlightoutput);
  App.register_light(m5clim_status_led);
  App.register_component(m5clim_status_led);
  App.register_sensor(uptime_seconds);
  uptime_seconds->set_name("Uptime Seconds");
  uptime_seconds->set_unit_of_measurement("s");
  uptime_seconds->set_icon("mdi:timer-outline");
  uptime_seconds->set_accuracy_decimals(0);
  uptime_seconds->set_force_update(false);
  App.register_text_sensor(uptime_human);
  uptime_human->set_name("Uptime");
  uptime_human->set_icon("mdi:clock-start");
  text_sensor_textsensorstatetrigger = new text_sensor::TextSensorStateTrigger(uptime_human);
  automation_8 = new Automation<std::string>(text_sensor_textsensorstatetrigger);
  App.register_binary_sensor(m5clim_flow_circuit_open);
  m5clim_flow_circuit_open->set_name("m5clim flow circuit open");
  m5clim_flow_circuit_open->set_device_class("opening");
  binary_sensor_delayedonfilter = new binary_sensor::DelayedOnFilter(100);
  App.register_component(binary_sensor_delayedonfilter);
  App.register_binary_sensor(any_thermostat_on);
  any_thermostat_on->set_name("Any thermostat ON");
  binary_sensor_presstrigger_2 = new binary_sensor::PressTrigger(any_thermostat_on);
  automation_11 = new Automation<>(binary_sensor_presstrigger_2);
  App.register_binary_sensor(homeassistant_homeassistantbinarysensor);
  homeassistant_homeassistantbinarysensor->set_name("Global switch state");
  App.register_binary_sensor(status_statusbinarysensor);
  status_statusbinarysensor->set_name("m5clim Status");
  status_statusbinarysensor->set_device_class("connectivity");
  App.register_binary_sensor(m5clim_front_button);
  m5clim_front_button->set_name("m5clim front button");
  binary_sensor_presstrigger_3 = new binary_sensor::PressTrigger(m5clim_front_button);
  automation_13 = new Automation<>(binary_sensor_presstrigger_3);
  App.register_switch(m5clim_bathroom_thermostat);
  m5clim_bathroom_thermostat->set_name("Bathroom Thermostat");
  App.register_switch(m5clim_main_bedroom_thermostat);
  m5clim_main_bedroom_thermostat->set_name("Main Bedroom Thermostat");
  App.register_switch(m5clim_spare_bedroom_thermostat);
  m5clim_spare_bedroom_thermostat->set_name("Spare Bedroom Thermostat");
  App.register_switch(m5clim_living_room_thermostat);
  m5clim_living_room_thermostat->set_name("Living Room Thermostat");
  App.register_switch(m5clim_heat_pump_switch);
  m5clim_heat_pump_switch->set_name("Heat Pump Switch");
  App.register_switch(m5clim_heat_pump_cooling_mode);
  m5clim_heat_pump_cooling_mode->set_name("Heat Pump Cooling Mode");
  App.register_switch(m5clim_climate_circulator);
  m5clim_climate_circulator->set_name("Climate Water Circulator");
  App.register_switch(restart_restartswitch);
  restart_restartswitch->set_name("m5clim_restart");
  restart_restartswitch->set_icon("mdi:restart");
  App.register_climate(bathroom_temperature_control);
  bathroom_temperature_control->set_name("Bathroom Temperature Control");
  App.register_climate(main_bedroom_temperature_control);
  main_bedroom_temperature_control->set_name("Main Bedroom Temperature Control");
  App.register_climate(spare_bedroom_temperature_control);
  spare_bedroom_temperature_control->set_name("Spare Bedroom Temperature Control");
  App.register_climate(living_room_temperature_control);
  living_room_temperature_control->set_name("Living Room Temperature Control");
  script_scriptstopaction = new script::ScriptStopAction<>(set_mode_cool);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_ble_xiaomilistener);
  esp32_ble_tracker_esp32bletracker->register_listener(ruuvi_ble_ruuvilistener);
  climate_controlaction = new climate::ControlAction<>(bathroom_temperature_control);
  m5clim_status_led->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  m5clim_status_led->set_default_transition_length(1000);
  m5clim_status_led->set_gamma_correct(2.8f);
  light_randomlighteffect = new light::RandomLightEffect("Random");
  light_randomlighteffect->set_transition_length(7500);
  light_randomlighteffect->set_update_interval(10000);
  homeassistant_homeassistantbinarysensor->set_entity_id("switch.shelly_swshlhea");
  hub_relays->set_i2c_parent(bus_b);
  hub_relays->set_i2c_address(0x27);
  hub_sensors->set_i2c_parent(bus_b);
  hub_sensors->set_i2c_address(0x20);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_lywsd03mmc_xiaomilywsd03mmc);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_lywsd03mmc_xiaomilywsd03mmc_2);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_lywsd03mmc_xiaomilywsd03mmc_3);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_lywsd03mmc_xiaomilywsd03mmc_4);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_lywsd03mmc_xiaomilywsd03mmc_5);
  m5clim_inlet_temp = dallas_1->get_sensor_by_address(0x5101193808681428, 12);
  App.register_sensor(m5clim_inlet_temp);
  m5clim_inlet_temp->set_name("m5clim Inlet Temperature");
  m5clim_inlet_temp->set_unit_of_measurement("\302\260C");
  m5clim_inlet_temp->set_icon("mdi:thermometer");
  m5clim_inlet_temp->set_accuracy_decimals(1);
  m5clim_inlet_temp->set_force_update(false);
  m5clim_outlet_temp = dallas_1->get_sensor_by_address(0x9D011937F7E71028, 12);
  App.register_sensor(m5clim_outlet_temp);
  m5clim_outlet_temp->set_name("m5clim Outlet Temperature");
  m5clim_outlet_temp->set_unit_of_measurement("\302\260C");
  m5clim_outlet_temp->set_icon("mdi:thermometer");
  m5clim_outlet_temp->set_accuracy_decimals(1);
  m5clim_outlet_temp->set_force_update(false);
  m5clim_entrance_floor_temp = dallas_1->get_sensor_by_address(0xF73C01D6071E8D28, 12);
  App.register_sensor(m5clim_entrance_floor_temp);
  m5clim_entrance_floor_temp->set_name("m5clim Entrance Floor Temperature");
  m5clim_entrance_floor_temp->set_unit_of_measurement("\302\260C");
  m5clim_entrance_floor_temp->set_icon("mdi:thermometer");
  m5clim_entrance_floor_temp->set_accuracy_decimals(1);
  m5clim_entrance_floor_temp->set_force_update(false);
  lambdaaction = new LambdaAction<std::string>([=](std::string x) -> void {
      ESP_LOGD("main", "------------ Uptime is %s -------------", uptime_human->state.c_str());
  });
  esp32_ble_tracker_esp32bletracker->register_listener(ble_presence_blepresencedevice);
  esp32_ble_tracker_esp32bletracker->register_listener(ble_presence_blepresencedevice_2);
  esp32_ble_tracker_esp32bletracker->register_listener(ble_presence_blepresencedevice_3);
  esp32_ble_tracker_esp32bletracker->register_listener(ble_presence_blepresencedevice_4);
  esp32_ble_tracker_esp32bletracker->register_listener(ble_presence_blepresencedevice_5);
  script_scriptexecuteaction_3 = new script::ScriptExecuteAction<>(start_heat_pump);
  light_toggleaction = new light::ToggleAction<>(m5clim_status_led);
  climate_controlaction->set_mode(climate::CLIMATE_MODE_OFF);
  delayaction = new DelayAction<>();
  App.register_component(delayaction);
  hub_relays->set_pcf8575(false);
  hub_sensors->set_pcf8575(false);
  light_flickerlighteffect = new light::FlickerLightEffect("Flicker");
  light_flickerlighteffect->set_alpha(0.95f);
  light_flickerlighteffect->set_intensity(0.015f);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc->set_address(0xA4C1388089FBULL);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc->set_bindkey("BD5F878AFE292291FC3D4F91880BCF22");
  bathroom_temperature = new sensor::Sensor();
  App.register_sensor(bathroom_temperature);
  bathroom_temperature->set_name("Bathroom Temperature");
  bathroom_temperature->set_unit_of_measurement("\302\260C");
  bathroom_temperature->set_icon("mdi:thermometer");
  bathroom_temperature->set_accuracy_decimals(1);
  bathroom_temperature->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_2->set_address(0xA4C138212943ULL);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_2->set_bindkey("3E4941BBECFC2BFDDAD439EDB0249259");
  main_bedroom_temperature = new sensor::Sensor();
  App.register_sensor(main_bedroom_temperature);
  main_bedroom_temperature->set_name("Main Bedroom Temperature");
  main_bedroom_temperature->set_unit_of_measurement("\302\260C");
  main_bedroom_temperature->set_icon("mdi:thermometer");
  main_bedroom_temperature->set_accuracy_decimals(1);
  main_bedroom_temperature->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_3->set_address(0xA4C1389DAFD3ULL);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_3->set_bindkey("EC082232E57EE4AD93941991544E0DB4");
  spare_bedroom_temperature = new sensor::Sensor();
  App.register_sensor(spare_bedroom_temperature);
  spare_bedroom_temperature->set_name("Spare Bedroom Temperature");
  spare_bedroom_temperature->set_unit_of_measurement("\302\260C");
  spare_bedroom_temperature->set_icon("mdi:thermometer");
  spare_bedroom_temperature->set_accuracy_decimals(1);
  spare_bedroom_temperature->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_4->set_address(0xA4C138CC037FULL);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_4->set_bindkey("9FF16FDA831F9158ECD2F402F4A0913B");
  living_room_temperature = new sensor::Sensor();
  App.register_sensor(living_room_temperature);
  living_room_temperature->set_name("Living Room Temperature");
  living_room_temperature->set_unit_of_measurement("\302\260C");
  living_room_temperature->set_icon("mdi:thermometer");
  living_room_temperature->set_accuracy_decimals(1);
  living_room_temperature->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_5->set_address(0xA4C13807E039ULL);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_5->set_bindkey("E68B02250ACD682A8742D355CBA55151");
  sensor_sensor_9 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_9);
  sensor_sensor_9->set_name("Entrance Temperature");
  sensor_sensor_9->set_unit_of_measurement("\302\260C");
  sensor_sensor_9->set_icon("mdi:thermometer");
  sensor_sensor_9->set_accuracy_decimals(1);
  sensor_sensor_9->set_force_update(false);
  App.register_binary_sensor(ble_presence_blepresencedevice);
  ble_presence_blepresencedevice->set_name("Bathroom Sensor Presence");
  ble_presence_blepresencedevice->set_device_class("connectivity");
  App.register_binary_sensor(ble_presence_blepresencedevice_2);
  ble_presence_blepresencedevice_2->set_name("Main Bedroom Sensor Presence");
  ble_presence_blepresencedevice_2->set_device_class("connectivity");
  App.register_binary_sensor(ble_presence_blepresencedevice_3);
  ble_presence_blepresencedevice_3->set_name("Spare Bedroom Sensor Presence");
  ble_presence_blepresencedevice_3->set_device_class("connectivity");
  App.register_binary_sensor(ble_presence_blepresencedevice_4);
  ble_presence_blepresencedevice_4->set_name("Living Room Sensor Presence");
  ble_presence_blepresencedevice_4->set_device_class("connectivity");
  App.register_binary_sensor(ble_presence_blepresencedevice_5);
  ble_presence_blepresencedevice_5->set_name("Entrance Sensor Presence");
  ble_presence_blepresencedevice_5->set_device_class("connectivity");
  ble_presence_blepresencedevice->set_address(0xA4C1388089FBULL);
  ble_presence_blepresencedevice_2->set_address(0xA4C138212943ULL);
  ble_presence_blepresencedevice_3->set_address(0xA4C1389DAFD3ULL);
  ble_presence_blepresencedevice_4->set_address(0xA4C138CC037FULL);
  ble_presence_blepresencedevice_5->set_address(0xA4C13807E039ULL);
  m5clim_flow_circuit_open->add_filters({binary_sensor_delayedonfilter});
  binary_sensor_presstrigger = new binary_sensor::PressTrigger(m5clim_flow_circuit_open);
  automation_9 = new Automation<>(binary_sensor_presstrigger);
  delayaction->set_delay(3000);
  light_addressablerainbowlighteffect = new light::AddressableRainbowLightEffect("Rainbow");
  light_addressablerainbowlighteffect->set_speed(10);
  light_addressablerainbowlighteffect->set_width(50);
  automation_8->add_actions({lambdaaction});
  automation_11->add_actions({script_scriptexecuteaction_3});
  automation_13->add_actions({light_toggleaction});
  m5clim_bathroom_thermostat->set_pin(new pcf8574::PCF8574GPIOPin(hub_relays, 0, pcf8574::PCF8574_OUTPUT, true));
  m5clim_bathroom_thermostat->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  m5clim_main_bedroom_thermostat->set_pin(new pcf8574::PCF8574GPIOPin(hub_relays, 1, pcf8574::PCF8574_OUTPUT, true));
  m5clim_main_bedroom_thermostat->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  m5clim_spare_bedroom_thermostat->set_pin(new pcf8574::PCF8574GPIOPin(hub_relays, 2, pcf8574::PCF8574_OUTPUT, true));
  m5clim_spare_bedroom_thermostat->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  m5clim_living_room_thermostat->set_pin(new pcf8574::PCF8574GPIOPin(hub_relays, 3, pcf8574::PCF8574_OUTPUT, true));
  m5clim_living_room_thermostat->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  m5clim_heat_pump_switch->set_pin(new pcf8574::PCF8574GPIOPin(hub_relays, 4, pcf8574::PCF8574_OUTPUT, true));
  m5clim_heat_pump_switch->set_restore_mode(gpio::GPIO_SWITCH_ALWAYS_OFF);
  m5clim_heat_pump_cooling_mode->set_pin(new pcf8574::PCF8574GPIOPin(hub_relays, 5, pcf8574::PCF8574_OUTPUT, true));
  m5clim_heat_pump_cooling_mode->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  m5clim_climate_circulator->set_pin(new pcf8574::PCF8574GPIOPin(hub_relays, 6, pcf8574::PCF8574_OUTPUT, true));
  m5clim_climate_circulator->set_restore_mode(gpio::GPIO_SWITCH_ALWAYS_OFF);
  bathroom_temperature_control->set_sensor(bathroom_temperature);
  bathroom_temperature_control->set_hysteresis(0.0f);
  bathroom_temperature_control->set_supports_two_points(true);
  bathroom_temperature_control->set_normal_config(thermostat::ThermostatClimateTargetTempConfig(21.0f, 26.0f));
  automation_20 = new Automation<>(bathroom_temperature_control->get_idle_action_trigger());
  main_bedroom_temperature_control->set_sensor(main_bedroom_temperature);
  main_bedroom_temperature_control->set_hysteresis(0.0f);
  main_bedroom_temperature_control->set_supports_two_points(true);
  main_bedroom_temperature_control->set_normal_config(thermostat::ThermostatClimateTargetTempConfig(21.0f, 26.0f));
  automation_27 = new Automation<>(main_bedroom_temperature_control->get_idle_action_trigger());
  spare_bedroom_temperature_control->set_sensor(spare_bedroom_temperature);
  spare_bedroom_temperature_control->set_hysteresis(0.0f);
  spare_bedroom_temperature_control->set_supports_two_points(true);
  spare_bedroom_temperature_control->set_normal_config(thermostat::ThermostatClimateTargetTempConfig(21.0f, 26.0f));
  automation_34 = new Automation<>(spare_bedroom_temperature_control->get_idle_action_trigger());
  living_room_temperature_control->set_sensor(living_room_temperature);
  living_room_temperature_control->set_hysteresis(0.0f);
  living_room_temperature_control->set_supports_two_points(true);
  living_room_temperature_control->set_normal_config(thermostat::ThermostatClimateTargetTempConfig(21.0f, 26.0f));
  automation_41 = new Automation<>(living_room_temperature_control->get_idle_action_trigger());
  automation->add_actions({climate_controlaction});
  xiaomi_lywsd03mmc_xiaomilywsd03mmc->set_temperature(bathroom_temperature);
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("Bathroom Humidity");
  sensor_sensor->set_unit_of_measurement("%");
  sensor_sensor->set_icon("mdi:water-percent");
  sensor_sensor->set_accuracy_decimals(0);
  sensor_sensor->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_2->set_temperature(main_bedroom_temperature);
  sensor_sensor_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_3);
  sensor_sensor_3->set_name("Main Bedroom Humidity");
  sensor_sensor_3->set_unit_of_measurement("%");
  sensor_sensor_3->set_icon("mdi:water-percent");
  sensor_sensor_3->set_accuracy_decimals(0);
  sensor_sensor_3->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_3->set_temperature(spare_bedroom_temperature);
  sensor_sensor_5 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_5);
  sensor_sensor_5->set_name("Spare Bedroom Humidity");
  sensor_sensor_5->set_unit_of_measurement("%");
  sensor_sensor_5->set_icon("mdi:water-percent");
  sensor_sensor_5->set_accuracy_decimals(0);
  sensor_sensor_5->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_4->set_temperature(living_room_temperature);
  sensor_sensor_7 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_7);
  sensor_sensor_7->set_name("Living Room Humidity");
  sensor_sensor_7->set_unit_of_measurement("%");
  sensor_sensor_7->set_icon("mdi:water-percent");
  sensor_sensor_7->set_accuracy_decimals(0);
  sensor_sensor_7->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_5->set_temperature(sensor_sensor_9);
  sensor_sensor_10 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_10);
  sensor_sensor_10->set_name("Entrance Humidity");
  sensor_sensor_10->set_unit_of_measurement("%");
  sensor_sensor_10->set_icon("mdi:water-percent");
  sensor_sensor_10->set_accuracy_decimals(0);
  sensor_sensor_10->set_force_update(false);
  script_scriptexecuteaction = new script::ScriptExecuteAction<>(start_circulator);
  binary_sensor_releasetrigger_2 = new binary_sensor::ReleaseTrigger(any_thermostat_on);
  automation_12 = new Automation<>(binary_sensor_releasetrigger_2);
  switch__turnoffaction_7 = new switch_::TurnOffAction<>(m5clim_bathroom_thermostat);
  switch__turnoffaction_9 = new switch_::TurnOffAction<>(m5clim_main_bedroom_thermostat);
  switch__turnoffaction_11 = new switch_::TurnOffAction<>(m5clim_spare_bedroom_thermostat);
  switch__turnoffaction_13 = new switch_::TurnOffAction<>(m5clim_living_room_thermostat);
  m5clim_status_led->add_effects({light_randomlighteffect, light_flickerlighteffect, light_addressablerainbowlighteffect});
  xiaomi_lywsd03mmc_xiaomilywsd03mmc->set_humidity(sensor_sensor);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("Bathroom Sensor Battery");
  sensor_sensor_2->set_unit_of_measurement("%");
  sensor_sensor_2->set_icon("mdi:battery");
  sensor_sensor_2->set_accuracy_decimals(0);
  sensor_sensor_2->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_2->set_humidity(sensor_sensor_3);
  sensor_sensor_4 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_4);
  sensor_sensor_4->set_name("Main Bedroom Sensor Battery");
  sensor_sensor_4->set_unit_of_measurement("%");
  sensor_sensor_4->set_icon("mdi:battery");
  sensor_sensor_4->set_accuracy_decimals(0);
  sensor_sensor_4->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_3->set_humidity(sensor_sensor_5);
  sensor_sensor_6 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_6);
  sensor_sensor_6->set_name("Spare Bedroom Sensor Battery");
  sensor_sensor_6->set_unit_of_measurement("%");
  sensor_sensor_6->set_icon("mdi:battery");
  sensor_sensor_6->set_accuracy_decimals(0);
  sensor_sensor_6->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_4->set_humidity(sensor_sensor_7);
  sensor_sensor_8 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_8);
  sensor_sensor_8->set_name("Living Room Sensor Battery");
  sensor_sensor_8->set_unit_of_measurement("%");
  sensor_sensor_8->set_icon("mdi:battery");
  sensor_sensor_8->set_accuracy_decimals(0);
  sensor_sensor_8->set_force_update(false);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_5->set_humidity(sensor_sensor_10);
  sensor_sensor_11 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_11);
  sensor_sensor_11->set_name("Entrance Sensor Battery");
  sensor_sensor_11->set_unit_of_measurement("%");
  sensor_sensor_11->set_icon("mdi:battery");
  sensor_sensor_11->set_accuracy_decimals(0);
  sensor_sensor_11->set_force_update(false);
  script_scriptexecuteaction_4 = new script::ScriptExecuteAction<>(stop_heat_pump);
  climate_controlaction_2 = new climate::ControlAction<>(bathroom_temperature_control);
  m5clim_front_button->set_pin(new GPIOPin(39, INPUT_PULLUP, true));
  uptime_human->set_template([=]() -> optional<std::string> {
      uint32_t dur = uptime_seconds->state;
      int dys = 0;
      int hrs = 0;
      int mnts = 0;
      if (dur > 86399) {
        dys = trunc(dur / 86400);
        dur = dur - (dys * 86400);
      }
      if (dur > 3599) {
        hrs = trunc(dur / 3600);
        dur = dur - (hrs * 3600);
      }
      if (dur > 59) {
        mnts = trunc(dur / 60);
        dur = dur - (mnts * 60);
      }
      char buffer[17];
      sprintf(buffer, "%ud %02uh %02um %02us", dys, hrs, mnts, dur);
      return {buffer};
  });
  automation_9->add_actions({script_scriptexecuteaction});
  climate_controlaction_2->set_mode(climate::CLIMATE_MODE_HEAT);
  automation_20->add_actions({switch__turnoffaction_7});
  automation_27->add_actions({switch__turnoffaction_9});
  automation_34->add_actions({switch__turnoffaction_11});
  automation_41->add_actions({switch__turnoffaction_13});
  fastled_base_fastledlightoutput->add_leds<WS2812B, 27, GRB>(1);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc->set_battery_level(sensor_sensor_2);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_2->set_battery_level(sensor_sensor_4);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_3->set_battery_level(sensor_sensor_6);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_4->set_battery_level(sensor_sensor_8);
  xiaomi_lywsd03mmc_xiaomilywsd03mmc_5->set_battery_level(sensor_sensor_11);
  binary_sensor_releasetrigger = new binary_sensor::ReleaseTrigger(m5clim_flow_circuit_open);
  automation_10 = new Automation<>(binary_sensor_releasetrigger);
  automation_12->add_actions({script_scriptexecuteaction_4});
  bathroom_temperature_control->set_supports_auto(true);
  automation_18 = new Automation<>(bathroom_temperature_control->get_cool_action_trigger());
  main_bedroom_temperature_control->set_supports_auto(true);
  automation_25 = new Automation<>(main_bedroom_temperature_control->get_cool_action_trigger());
  spare_bedroom_temperature_control->set_supports_auto(true);
  automation_32 = new Automation<>(spare_bedroom_temperature_control->get_cool_action_trigger());
  living_room_temperature_control->set_supports_auto(true);
  automation_39 = new Automation<>(living_room_temperature_control->get_cool_action_trigger());
  script_scriptexecuteaction_2 = new script::ScriptExecuteAction<>(stop_circulator);
  script_scriptwaitaction_5 = new script::ScriptWaitAction<>(set_mode_cool);
  script_scriptwaitaction_7 = new script::ScriptWaitAction<>(set_mode_cool);
  script_scriptwaitaction_9 = new script::ScriptWaitAction<>(set_mode_cool);
  script_scriptwaitaction_11 = new script::ScriptWaitAction<>(set_mode_cool);
  climate_controlaction_3 = new climate::ControlAction<>(main_bedroom_temperature_control);
  App.register_component(script_scriptwaitaction_5);
  App.register_component(script_scriptwaitaction_7);
  App.register_component(script_scriptwaitaction_9);
  App.register_component(script_scriptwaitaction_11);
  climate_controlaction_3->set_mode(climate::CLIMATE_MODE_HEAT);
  automation_10->add_actions({script_scriptexecuteaction_2});
  any_thermostat_on->set_template([=]() -> optional<bool> {
      if(m5clim_bathroom_thermostat->state or m5clim_main_bedroom_thermostat->state or m5clim_spare_bedroom_thermostat->state or m5clim_living_room_thermostat->state){
        return true;
      } else {
        return false;
      }
  });
  climate_controlaction_4 = new climate::ControlAction<>(spare_bedroom_temperature_control);
  switch__turnonaction_4 = new switch_::TurnOnAction<>(m5clim_bathroom_thermostat);
  switch__turnonaction_6 = new switch_::TurnOnAction<>(m5clim_main_bedroom_thermostat);
  switch__turnonaction_8 = new switch_::TurnOnAction<>(m5clim_spare_bedroom_thermostat);
  switch__turnonaction_10 = new switch_::TurnOnAction<>(m5clim_living_room_thermostat);
  climate_controlaction_4->set_mode(climate::CLIMATE_MODE_HEAT);
  m5clim_flow_circuit_open->set_pin(new pcf8574::PCF8574GPIOPin(hub_sensors, 7, pcf8574::PCF8574_INPUT, true));
  automation_18->add_actions({script_scriptwaitaction_5, switch__turnonaction_4});
  automation_25->add_actions({script_scriptwaitaction_7, switch__turnonaction_6});
  automation_32->add_actions({script_scriptwaitaction_9, switch__turnonaction_8});
  automation_39->add_actions({script_scriptwaitaction_11, switch__turnonaction_10});
  bathroom_temperature_control->set_supports_cool(true);
  automation_19 = new Automation<>(bathroom_temperature_control->get_heat_action_trigger());
  main_bedroom_temperature_control->set_supports_cool(true);
  automation_26 = new Automation<>(main_bedroom_temperature_control->get_heat_action_trigger());
  spare_bedroom_temperature_control->set_supports_cool(true);
  automation_33 = new Automation<>(spare_bedroom_temperature_control->get_heat_action_trigger());
  living_room_temperature_control->set_supports_cool(true);
  automation_40 = new Automation<>(living_room_temperature_control->get_heat_action_trigger());
  climate_controlaction_5 = new climate::ControlAction<>(living_room_temperature_control);
  climate_controlaction_5->set_mode(climate::CLIMATE_MODE_HEAT);
  script_scriptwaitaction_6 = new script::ScriptWaitAction<>(set_mode_heat);
  script_scriptwaitaction_8 = new script::ScriptWaitAction<>(set_mode_heat);
  script_scriptwaitaction_10 = new script::ScriptWaitAction<>(set_mode_heat);
  script_scriptwaitaction_12 = new script::ScriptWaitAction<>(set_mode_heat);
  App.register_component(script_scriptwaitaction_6);
  App.register_component(script_scriptwaitaction_8);
  App.register_component(script_scriptwaitaction_10);
  App.register_component(script_scriptwaitaction_12);
  switch__turnoffaction = new switch_::TurnOffAction<>(m5clim_heat_pump_switch);
  delayaction_2 = new DelayAction<>();
  App.register_component(delayaction_2);
  switch__turnonaction_5 = new switch_::TurnOnAction<>(m5clim_bathroom_thermostat);
  switch__turnonaction_7 = new switch_::TurnOnAction<>(m5clim_main_bedroom_thermostat);
  switch__turnonaction_9 = new switch_::TurnOnAction<>(m5clim_spare_bedroom_thermostat);
  switch__turnonaction_11 = new switch_::TurnOnAction<>(m5clim_living_room_thermostat);
  delayaction_2->set_delay(3000);
  automation_19->add_actions({script_scriptwaitaction_6, switch__turnonaction_5});
  automation_26->add_actions({script_scriptwaitaction_8, switch__turnonaction_7});
  automation_33->add_actions({script_scriptwaitaction_10, switch__turnonaction_9});
  automation_40->add_actions({script_scriptwaitaction_12, switch__turnonaction_11});
  bathroom_temperature_control->set_supports_heat(true);
  automation_17 = new Automation<>(bathroom_temperature_control->get_auto_mode_trigger());
  main_bedroom_temperature_control->set_supports_heat(true);
  automation_24 = new Automation<>(main_bedroom_temperature_control->get_auto_mode_trigger());
  spare_bedroom_temperature_control->set_supports_heat(true);
  automation_31 = new Automation<>(spare_bedroom_temperature_control->get_auto_mode_trigger());
  living_room_temperature_control->set_supports_heat(true);
  automation_38 = new Automation<>(living_room_temperature_control->get_auto_mode_trigger());
  switch__turnoffaction_2 = new switch_::TurnOffAction<>(m5clim_heat_pump_cooling_mode);
  script_scriptexecuteaction_7 = new script::ScriptExecuteAction<>(set_mode_heat);
  script_scriptexecuteaction_10 = new script::ScriptExecuteAction<>(set_mode_heat);
  script_scriptexecuteaction_13 = new script::ScriptExecuteAction<>(set_mode_heat);
  script_scriptexecuteaction_16 = new script::ScriptExecuteAction<>(set_mode_heat);
  automation_2->add_actions({script_scriptstopaction, delayaction, climate_controlaction_2, climate_controlaction_3, climate_controlaction_4, climate_controlaction_5, switch__turnoffaction, delayaction_2, switch__turnoffaction_2});
  automation_17->add_actions({script_scriptexecuteaction_7});
  automation_24->add_actions({script_scriptexecuteaction_10});
  automation_31->add_actions({script_scriptexecuteaction_13});
  automation_38->add_actions({script_scriptexecuteaction_16});
  automation_3 = new Automation<>(set_mode_cool);
  automation_16 = new Automation<>(bathroom_temperature_control->get_cool_mode_trigger());
  automation_23 = new Automation<>(main_bedroom_temperature_control->get_cool_mode_trigger());
  automation_30 = new Automation<>(spare_bedroom_temperature_control->get_cool_mode_trigger());
  automation_37 = new Automation<>(living_room_temperature_control->get_cool_mode_trigger());
  script_scriptstopaction_2 = new script::ScriptStopAction<>(set_mode_heat);
  script_scriptexecuteaction_6 = new script::ScriptExecuteAction<>(set_mode_cool);
  script_scriptexecuteaction_9 = new script::ScriptExecuteAction<>(set_mode_cool);
  script_scriptexecuteaction_12 = new script::ScriptExecuteAction<>(set_mode_cool);
  script_scriptexecuteaction_15 = new script::ScriptExecuteAction<>(set_mode_cool);
  delayaction_3 = new DelayAction<>();
  App.register_component(delayaction_3);
  automation_16->add_actions({script_scriptexecuteaction_6});
  automation_23->add_actions({script_scriptexecuteaction_9});
  automation_30->add_actions({script_scriptexecuteaction_12});
  automation_37->add_actions({script_scriptexecuteaction_15});
  delayaction_3->set_delay(3000);
  bathroom_temperature_control->set_supports_cool(true);
  automation_15 = new Automation<>(bathroom_temperature_control->get_heat_mode_trigger());
  main_bedroom_temperature_control->set_supports_cool(true);
  automation_22 = new Automation<>(main_bedroom_temperature_control->get_heat_mode_trigger());
  spare_bedroom_temperature_control->set_supports_cool(true);
  automation_29 = new Automation<>(spare_bedroom_temperature_control->get_heat_mode_trigger());
  living_room_temperature_control->set_supports_cool(true);
  automation_36 = new Automation<>(living_room_temperature_control->get_heat_mode_trigger());
  script_scriptexecuteaction_5 = new script::ScriptExecuteAction<>(set_mode_heat);
  script_scriptexecuteaction_8 = new script::ScriptExecuteAction<>(set_mode_heat);
  script_scriptexecuteaction_11 = new script::ScriptExecuteAction<>(set_mode_heat);
  script_scriptexecuteaction_14 = new script::ScriptExecuteAction<>(set_mode_heat);
  climate_controlaction_6 = new climate::ControlAction<>(bathroom_temperature_control);
  climate_controlaction_6->set_mode(climate::CLIMATE_MODE_COOL);
  automation_15->add_actions({script_scriptexecuteaction_5});
  automation_22->add_actions({script_scriptexecuteaction_8});
  automation_29->add_actions({script_scriptexecuteaction_11});
  automation_36->add_actions({script_scriptexecuteaction_14});
  bathroom_temperature_control->set_supports_heat(true);
  automation_14 = new Automation<>(bathroom_temperature_control->get_off_mode_trigger());
  main_bedroom_temperature_control->set_supports_heat(true);
  automation_21 = new Automation<>(main_bedroom_temperature_control->get_off_mode_trigger());
  spare_bedroom_temperature_control->set_supports_heat(true);
  automation_28 = new Automation<>(spare_bedroom_temperature_control->get_off_mode_trigger());
  living_room_temperature_control->set_supports_heat(true);
  automation_35 = new Automation<>(living_room_temperature_control->get_off_mode_trigger());
  switch__turnoffaction_6 = new switch_::TurnOffAction<>(m5clim_bathroom_thermostat);
  switch__turnoffaction_8 = new switch_::TurnOffAction<>(m5clim_main_bedroom_thermostat);
  switch__turnoffaction_10 = new switch_::TurnOffAction<>(m5clim_spare_bedroom_thermostat);
  switch__turnoffaction_12 = new switch_::TurnOffAction<>(m5clim_living_room_thermostat);
  climate_controlaction_7 = new climate::ControlAction<>(main_bedroom_temperature_control);
  climate_controlaction_7->set_mode(climate::CLIMATE_MODE_COOL);
  automation_14->add_actions({switch__turnoffaction_6});
  automation_21->add_actions({switch__turnoffaction_8});
  automation_28->add_actions({switch__turnoffaction_10});
  automation_35->add_actions({switch__turnoffaction_12});
  bathroom_temperature_control->set_away_config(thermostat::ThermostatClimateTargetTempConfig(19.0f, 28.0f));
  main_bedroom_temperature_control->set_away_config(thermostat::ThermostatClimateTargetTempConfig(19.0f, 28.0f));
  spare_bedroom_temperature_control->set_away_config(thermostat::ThermostatClimateTargetTempConfig(19.0f, 28.0f));
  living_room_temperature_control->set_away_config(thermostat::ThermostatClimateTargetTempConfig(19.0f, 28.0f));
  climate_controlaction_8 = new climate::ControlAction<>(spare_bedroom_temperature_control);
  climate_controlaction_8->set_mode(climate::CLIMATE_MODE_COOL);
  climate_controlaction_9 = new climate::ControlAction<>(living_room_temperature_control);
  climate_controlaction_9->set_mode(climate::CLIMATE_MODE_COOL);
  switch__turnoffaction_3 = new switch_::TurnOffAction<>(m5clim_heat_pump_switch);
  delayaction_4 = new DelayAction<>();
  App.register_component(delayaction_4);
  delayaction_4->set_delay(3000);
  switch__turnonaction = new switch_::TurnOnAction<>(m5clim_heat_pump_cooling_mode);
  automation_3->add_actions({script_scriptstopaction_2, delayaction_3, climate_controlaction_6, climate_controlaction_7, climate_controlaction_8, climate_controlaction_9, switch__turnoffaction_3, delayaction_4, switch__turnonaction});
  automation_4 = new Automation<>(start_heat_pump);
  script_scriptstopaction_3 = new script::ScriptStopAction<>(stop_heat_pump);
  script_scriptwaitaction = new script::ScriptWaitAction<>(set_mode_heat);
  App.register_component(script_scriptwaitaction);
  script_scriptwaitaction_2 = new script::ScriptWaitAction<>(set_mode_cool);
  App.register_component(script_scriptwaitaction_2);
  api_homeassistantservicecallaction = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction->set_service("switch.turn_on");
  api_homeassistantservicecallaction->add_data("entity_id", "switch.shelly_swshlhea");
  delayaction_5 = new DelayAction<>();
  App.register_component(delayaction_5);
  delayaction_5->set_delay(30000);
  lambdacondition = new LambdaCondition<>([=]() -> bool {
      return any_thermostat_on->state == true;
  });
  ifaction = new IfAction<>(lambdacondition);
  switch__turnonaction_2 = new switch_::TurnOnAction<>(m5clim_heat_pump_switch);
  ifaction->add_then({switch__turnonaction_2});
  automation_4->add_actions({script_scriptstopaction_3, script_scriptwaitaction, script_scriptwaitaction_2, api_homeassistantservicecallaction, delayaction_5, ifaction});
  automation_5 = new Automation<>(stop_heat_pump);
  script_scriptstopaction_4 = new script::ScriptStopAction<>(start_heat_pump);
  delayaction_6 = new DelayAction<>();
  App.register_component(delayaction_6);
  delayaction_6->set_delay(30000);
  lambdacondition_2 = new LambdaCondition<>([=]() -> bool {
      return any_thermostat_on->state == false;
  });
  ifaction_2 = new IfAction<>(lambdacondition_2);
  switch__turnoffaction_4 = new switch_::TurnOffAction<>(m5clim_heat_pump_switch);
  ifaction_2->add_then({switch__turnoffaction_4});
  automation_5->add_actions({script_scriptstopaction_4, delayaction_6, ifaction_2});
  automation_6 = new Automation<>(start_circulator);
  script_scriptwaitaction_3 = new script::ScriptWaitAction<>(stop_circulator);
  App.register_component(script_scriptwaitaction_3);
  delayaction_7 = new DelayAction<>();
  App.register_component(delayaction_7);
  delayaction_7->set_delay(2000);
  lambdacondition_3 = new LambdaCondition<>([=]() -> bool {
      return any_thermostat_on->state == true;
  });
  ifaction_3 = new IfAction<>(lambdacondition_3);
  switch__turnonaction_3 = new switch_::TurnOnAction<>(m5clim_climate_circulator);
  ifaction_3->add_then({switch__turnonaction_3});
  automation_6->add_actions({script_scriptwaitaction_3, delayaction_7, ifaction_3});
  automation_7 = new Automation<>(stop_circulator);
  script_scriptwaitaction_4 = new script::ScriptWaitAction<>(start_circulator);
  App.register_component(script_scriptwaitaction_4);
  delayaction_8 = new DelayAction<>();
  App.register_component(delayaction_8);
  delayaction_8->set_delay(2000);
  switch__turnoffaction_5 = new switch_::TurnOffAction<>(m5clim_climate_circulator);
  automation_7->add_actions({script_scriptwaitaction_4, delayaction_8, switch__turnoffaction_5});
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
