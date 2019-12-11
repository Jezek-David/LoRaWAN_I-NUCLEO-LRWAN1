# LoRaWAN_I-NUCLEO-LRWAN1

## Some little things

My project is just about to send data, not to receive, I use an NUCLEO L152RE and the I-NUCLEO LRWAN

USART3 is used for the communication between ST and I-NUCLEO-LRWAN, I don't use USART2 because it's use for debug only (communication betwen NUCLEO and PC)

WM-SG-SM-42 AT Command Reference Manual is very important

The OTAA file give the instructions to connect and send data to a gateway, OTAA is the best way to connect to a LoRa gateway.
You need to set the AK key and the APPEUI key (you already have the EUI key), they are given to you, it depends on the network you want to connect. 

For the JOIN request you need to give time to receive the confirmation message, I put 15s to receive this confirmation in my code.

In this example I a send message every 1000 seconds. I have a interrupt on TIM3 each second and when my counter = 1000, I send a message. You can only send an hexadecimal message but it's maximal length is 64 bit.

To configure my STM32 I use STM32CubeMx it's very useful. I also use Atollic, you can open directly STM32CubeMx project in this software.

In lora.c I put all my fuctions which are necessary to configure our LoRa module to send a message (description of AT commands in WM-SG-SM-42 AT Command Reference Manual).

In main.c I call this functions.

## Debug

As I told you I use USART2 for debug so I rewrite the _write() function.

Step 1: 
        Include stdio.h in main.c to activate printf
        
Step 2: 
        In main.c I redefine _write() to send a message to usart

 
 int _write(intfile, char*ptr, intlen) 
 {     
        HAL_UART_Transmit(&huart2,(uint8_t *)ptr,len,10); 
        return len; 
 
 } 


Step 4 :
        You can now use printf
        -> printf("test\r\n");
        
Don't forget to configure Putty on your PC (serial connection)


## Configuration of MxProject

### Clock Configuration : 

See clock_configuration.PNG

### PIN Configuration :

For the LoRa only, I use:
  - USART2 (for the debug between my STM32 and my PC via Putty)
  - USART3 (for the communication between STM32 and LoRaWAN_I-NUCLEO-LRWAN1) PB10 & PB11 in my project
  - TIM3 (for the interruption)
  - To supply my LoRa module I use the 3.3V output/GND of the STM32

And nothing else

See pinout_view.PNG (the 2 others pin I use in this pic are for my sensor)

# As you can see the two USART2 pins are configure on PA2 & PA3 BUT it's NOT possible to use them ! USART2 is only for debug using the USB connector between your STM32 and your PC

## Code

Now you can use the code in main.c and lora.c

## How receive data that I send ?

### MQTT.fx

You can use a software: MQTT.fx, you just need to know your broker address and the broker port.

Go to Edit Connection Profiles, near the connect button, choose your profile types, put your broker address and the broker port.
Next connect using your profile. Go to suscribe and scan to see if there is your message.

### How can I display my data in a website ?

You can do it using a little python script.
This script will suscribe to the broker (https://pypi.org/project/paho-mqtt/) and put the data that he will rececive using the  mysql.connector library.

You need to install paho.mqtt.client and mysql.connector.
For my database I use a WAMP server, my database is a MySQL database, I use phpmyadmin to administrate it. So to access to my database, my host is localhost, you need to put the the password and the username of phpmyadmin.
