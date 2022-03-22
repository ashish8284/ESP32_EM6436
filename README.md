# ESP8266_MODBUS_EM6436_SCHNIEDER

#Thanks to creater of Modbus library : https://github.com/emelianov/modbus-esp8266

#This piece of code read Modbus addresss 3961 of Schnieder make energy meter Model EM6436
ESP reads MODBUS address from 0. hence we have to read 3960 address which actually reads 3961.
ESP reads 16 bit integer. as per Energy meter manual Energy reading is 32 bit floating point.
To convert two 16 bit integer in to floating point Seprate function is used in code.

This is sample only for tutorial purpose.

Tutorial Video :- https://www.youtube.com/embed/5n0Q8K1_xnU
