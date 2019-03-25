# LoRaWAN_I-NUCLEO-LRWAN1

My project is just about to send data, not to receive, I use an NUCLEO L152RE and the I-NUCLEO LRWAN

USART3 is used for the communication between ST and I-NUCLEO-LRWAN, I don't use USART2 because it's use for debug only (communication betwen NUCLEO and PC)

WM-SG-SM-42 AT Command Reference Manual is very important

The OTAA file give the instructions to connect and data to a gateway, OTAA is the best way to connect to a LoRa gateway
You need to set the AK key and the APPEUI key (you already have the EUI key), they are given to you, it depends on the network you want to connect. 


