/*
 * lora.c
 *
 *  Created on: 4 mars 2019
 *      Author: alexa
 */

#include "main.h"
#include "lora.h"
#include "string.h"



/* ************************************************************************ *
 * ************************************************************************ *
 * 								SET
 * ************************************************************************ *
 * ************************************************************************ */

void LORA_ATZ_SET(uint8_t RX_BUFF_SIZE){

	char comm[]="ATZ";
	uint8_t COMMAND_SIZE=sizeof(comm);
		   char out[COMMAND_SIZE+2],src2[2];
			strcpy(out, comm);
			strcpy(src2, "\r\n");
			strcat(out, src2);
	uint8_t in_set[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out)-1, HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_set, RX_BUFF_SIZE, 100) != HAL_OK);
}




void LORA_AT_DC_SET(const char* DATA, uint8_t DATA_SIZE, uint8_t RX_BUFF_SIZE){

	char comm[]="AT+DC=";
	uint8_t COMMAND_SIZE=sizeof(comm);
		   char src1[DATA_SIZE],src2[2], out[COMMAND_SIZE+DATA_SIZE+2];
			strcpy(src1, DATA);
			strcpy(src2, "\r\n");
			strcpy(out, comm);
			strcat(out, src1);
			strcat(out, src2);
	uint8_t in_set[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out)-1, HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_set, RX_BUFF_SIZE, 100) != HAL_OK);
}




void LORA_AT_DR_SET(const char* DATA, uint8_t DATA_SIZE, uint8_t RX_BUFF_SIZE){

	char comm[]="AT+DR=";
	uint8_t COMMAND_SIZE=sizeof(comm);
		   char src1[DATA_SIZE],src2[2], out[COMMAND_SIZE+DATA_SIZE+2];
			strcpy(src1, DATA);
			strcpy(src2, "\r\n");
			strcpy(out, comm);
			strcat(out, src1);
			strcat(out, src2);
	uint8_t in_set[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out)-1, HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_set, RX_BUFF_SIZE, 100) != HAL_OK);
}



void LORA_AT_RX2DR_SET(const char* DATA, uint8_t DATA_SIZE, uint8_t RX_BUFF_SIZE){

	char comm[]="AT+RX2DR=";
	uint8_t COMMAND_SIZE=sizeof(comm);
		   char src1[DATA_SIZE],src2[2], out[COMMAND_SIZE+DATA_SIZE+2];
			strcpy(src1, DATA);
			strcpy(src2, "\r\n");
			strcpy(out, comm);
			strcat(out, src1);
			strcat(out, src2);
	uint8_t in_set[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out)-1, HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_set, RX_BUFF_SIZE, 100) != HAL_OK);
}




void LORA_AT_APPEUI_SET(const char* DATA, uint8_t DATA_SIZE, uint8_t RX_BUFF_SIZE){

	char comm[]="AT+APPEUI=";
	uint8_t COMMAND_SIZE=sizeof(comm);
		   char src1[DATA_SIZE],src2[2], out[COMMAND_SIZE+DATA_SIZE+2];
			strcpy(src1, DATA);
			strcpy(src2, "\r\n");
			strcpy(out, comm);
			strcat(out, src1);
			strcat(out, src2);
	uint8_t in_set[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out)-1, HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_set, RX_BUFF_SIZE, 100) != HAL_OK);
}



void LORA_AT_AK_SET(const char* DATA, uint8_t DATA_SIZE, uint8_t RX_BUFF_SIZE){

	char comm[]="AT+AK=";
	uint8_t COMMAND_SIZE=sizeof(comm);
		   char src1[DATA_SIZE],src2[2], out[COMMAND_SIZE+DATA_SIZE+2];
			strcpy(src1, DATA);
			strcpy(src2, "\r\n");
			strcpy(out, comm);
			strcat(out, src1);
			strcat(out, src2);
	uint8_t in_set[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out)-1, HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_set, RX_BUFF_SIZE, 100) != HAL_OK);
}




void LORA_AT_JOIN_SET(const char* DATA, uint8_t DATA_SIZE, uint8_t RX_BUFF_SIZE){

	char comm[]="AT+JOIN=";
	uint8_t COMMAND_SIZE=sizeof(comm);
		   char src1[DATA_SIZE],src2[2], out[COMMAND_SIZE+DATA_SIZE+2];
			strcpy(src1, DATA);
			strcpy(src2, "\r\n");
			strcpy(out, comm);
			strcat(out, src1);
			strcat(out, src2);
	uint8_t in_set[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out)-1, HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_set, RX_BUFF_SIZE, 100) != HAL_OK);
}




void LORA_AT_SEND_SET(const char* DATA, uint8_t DATA_SIZE, uint8_t RX_BUFF_SIZE){

	char comm[]="AT+SEND=";
	uint8_t COMMAND_SIZE=sizeof(comm);
		   char src1[DATA_SIZE],src2[2], out[COMMAND_SIZE+DATA_SIZE+2];
			strcpy(src1, DATA);
			strcpy(src2, "\r\n");
			strcpy(out, comm);
			strcat(out, src1);
			strcat(out, src2);
	uint8_t in_set[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out)-1, HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_set, RX_BUFF_SIZE, 100) != HAL_OK);
}



/* ************************************************************************ *
 * ************************************************************************ *
 * 								GET
 * ************************************************************************ *
 * ************************************************************************ */




void LORA_AT_APPEUI_GET(void){

	//Obligé de mettre la taille de retour attendue pour la commande
	//On entre directement ici la commande et initialise le tableau de retour
	uint8_t out[]={"AT+APPEUI\r\n"};
	uint8_t RX_BUFF_SIZE=30;
	//On ne compte pas les "\" dans la taille des messages
	uint8_t in_get[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out), HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_get, RX_BUFF_SIZE, 100) != HAL_OK);
}


void LORA_AT_BAND_GET(void){

	//Obligé de mettre la taille de retour attendue pour la commande
	//On entre directement ici la commande et initialise le tableau de retour
	uint8_t out[]={"AT+BAND\r\n"};
	uint8_t RX_BUFF_SIZE=8;
	uint8_t in_get_b[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out), HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_get_b, RX_BUFF_SIZE, 100) != HAL_OK);
}



void LORA_AT_VER_GET(void){

	//Obligé de mettre la taille de retour attendue pour la commande
	//On entre directement ici la commande et initialise le tableau de retour
	uint8_t out[]={"AT+VER\r\n"};
	uint8_t RX_BUFF_SIZE=11;
	uint8_t in_get_b[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out), HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_get_b, RX_BUFF_SIZE, 100) != HAL_OK);
}



void LORA_AT_AK_GET(void){

	//Obligé de mettre la taille de retour attendue pour la commande
	//On entre directement ici la commande et initialise le tableau de retour
	uint8_t out[]={"AT+AK\r\n"};
	uint8_t RX_BUFF_SIZE=53;
	uint8_t in_get_b[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out), HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_get_b, RX_BUFF_SIZE, 100) != HAL_OK);
}


void LORA_AT_EUI_GET(void){ //e2,4f,43,ff,fe,44,c3,05

	//Obligé de mettre la taille de retour attendue pour la commande
	//On entre directement ici la commande et initialise le tableau de retour
	uint8_t out[]={"AT+EUI\r\n"};
	uint8_t RX_BUFF_SIZE=32;
	uint8_t in_get_b[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out), HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_get_b, RX_BUFF_SIZE, 100) != HAL_OK);
}



void LORA_AT_ADDR_GET(void){

	//Obligé de mettre la taille de retour attendue pour la commande
	//On entre directement ici la commande et initialise le tableau de retour
	uint8_t out[]={"AT+ADDR\r\n"};
	uint8_t RX_BUFF_SIZE=10;
	uint8_t in_get_b[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out), HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_get_b, RX_BUFF_SIZE, 100) != HAL_OK);
}




void LORA_AT_JSTA_GET(void){

	//Obligé de mettre la taille de retour attendue pour la commande
	//On entre directement ici la commande et initialise le tableau de retour
	uint8_t out[]={"AT+JSTA\r\n"};
	uint8_t RX_BUFF_SIZE=6;
	uint8_t in_get_b[RX_BUFF_SIZE];

	while(HAL_UART_Transmit(&huart3, (uint8_t *)out, sizeof(out), HAL_TIMEOUT) != HAL_OK);
	while(HAL_UART_Receive(&huart3, (uint8_t *)in_get_b, RX_BUFF_SIZE, 100) != HAL_OK);
}
