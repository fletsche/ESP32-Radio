// Default preferences in raw data format for PROGMEM
//
#define defaultprefs_version 171215
const char defprefs_txt[] PROGMEM = R"=====(
# Example configuration
# Programmable input pins:
gpio_00 = uppreset = 1
gpio_12 = upvolume = 2
gpio_13 = downvolume = 2
gpio_14 = stop
gpio_17 = resume
gpio_21 = station = icecast.omroep.nl:80/radio1-bb-mp3
#
# MQTT settings
mqttbroker = none
mqttport = 1883
mqttuser = none
mqttpasswd = none
mqqprefix = none
# Enter your WiFi network specs here:
wifi_00 = SSID1/PASSWD1
wifi_01 = SSID2/PASSWD2
#
volume = 72
toneha = 0
tonehf = 0
tonela = 0
tonelf = 0
#
preset = 1
# Some preset examples
preset_00 = st01.dlf.de/dlf/01/104/ogg/stream.ogg    #  0 - Deutschlandfunk
preset_01 = st02.dlf.de/dlf/02/104/ogg/stream.ogg    #  1 - Deutschlandfunk Kultur
preset_02 = ndr-ndrinfo-hamburg.cast.addradio.de/ndr/ndrinfo/hamburg/mp3/128/stream.mp3 #  2 - NDR Info Hamburg
preset_03 = ndr-ndrkultur-live.cast.addradio.de/ndr/ndrkultur/live/mp3/128/stream.mp3 #  3 - NDR Kultur
preset_04 = ndr-ndr903-hamburg.cast.addradio.de/ndr/ndr903/hamburg/mp3/128/stream.mp3 #  4 - NDR 90,3 Hamburg Welle
preset_05 = us1.internet-radio.com:8105              #  5 - Classic Rock Florida - SHE Radio
preset_06 = icecast.omroep.nl:80/radio1-bb-mp3       #  6 - Radio 1, NL
preset_07 = 205.164.62.15:10032                      #  7 - 1.FM - GAIA, 64k
preset_08 = skonto.ls.lv:8002/mp3                    #  8 - Skonto 128k
preset_09 = 94.23.66.155:8106                        #  9 - *ILR CHILL and GROOVE
preset_10 = ihr/IHR_IEDM                             # 10 - iHeartRadio IHR_IEDM
preset_11 = ihr/IHR_TRAN                             # 11 - iHeartRadio IHR_TRAN
#
# Clock offset and daylight saving time
clk_server = pool.ntp.org                            # Time server to be used
clk_offset = 1                                       # Offset with respect to UTC in hours
clk_dst = 1                                          # Offset during daylight saving time (hours)
# Some IR codes
ir_301C = downvolume = 2
ir_501C = upvolume = 2
ir_601C = uppreset = 1
ir_901C = downpreset = 1
ir_A01C = stop
ir_C01C = stop
# GPIO pinnings
pin_ir = 35                                          # GPIO Pin number for IR receiver VS1838B
pin_enc_clk = 25                                     # GPIO Pin number for rotary encoder "CLK"
pin_enc_dt = 26                                      # GPIO Pin number for rotary encoder "DT"
pin_enc_sw = 27                                      # GPIO Pin number for rotary encoder "SW"
#
pin_tft_cs = 15                                      # GPIO Pin number for TFT "CS"
pin_tft_dc = 2                                       # GPIO Pin number for TFT "DC"
#
sd_cs = 21                                           # GPIO Pin number for SD card "CS"
#
pin_vs_cs = 5                                        # GPIO Pin number for VS1053 "CS"
pin_vs_dcs = 16                                      # GPIO Pin number for VS1053 "DCS"
pin_vs_dreq = 4                                      # GPIO Pin number for VS1053 "DREQ"
)=====" ;
