/*
 * lora.h
 *
 *  Created on: 4 mars 2019
 *      Author: alexa
 */

#ifndef LORA_H_
#define LORA_H_

void LORA_ATZ_SET(uint8_t);
void LORA_AT_DC_SET(const char*, uint8_t, uint8_t);
void LORA_AT_DR_SET(const char*, uint8_t, uint8_t);
void LORA_AT_RX2DR_SET(const char*, uint8_t, uint8_t);
void LORA_AT_APPEUI_SET(const char*, uint8_t, uint8_t);
void LORA_AT_AK_SET(const char*, uint8_t, uint8_t);
void LORA_AT_JOIN_SET(const char*, uint8_t, uint8_t);
void LORA_AT_SEND_SET(const char*, uint8_t, uint8_t);

void LORA_AT_APPEUI_GET(void);
void LORA_AT_BAND_GET(void);
void LORA_AT_VER_GET(void);
void LORA_AT_AK_GET(void);
void LORA_AT_EUI_GET(void);
void LORA_AT_ADDR_GET(void);
void LORA_AT_JSTA_GET(void);



#endif /* LORA_H_ */
