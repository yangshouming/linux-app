#ifndef _GATEWAY_SN_H_
#define _GATEWAY_SN_H_

typedef enum{
	VAVA_EEPROM_ERRCODE_SUCCESS=0, 		//成功
	VAVA_EEPROM_ERRCODE_OPEN_FAIL,		//读取EEPROM句柄失败
	VAVA_EEPROM_ERRCODE_NOINIT,			//未打开EEPROM句柄
	VAVA_EEPROM_ERRCODE_PARAM_INVALID,	//参数有误
	VAVA_EEPROM_ERRCODE_EMPTY,			//EEPROM未使用
	VAVA_EEPROM_ERRCODE_CLEAR_FAIL,		//擦除失败
	VAVA_EEPROM_ERRCODE_READ_FAIL,		//读取失败
	VAVA_EEPROM_ERRCODE_WRITE_FAIL		//写入失败
}VAVA_EEPROM_ERRCODE;

typedef struct _e2prom_data{
	char sn[32];
	char hardver[32];
}VAVA_EEPROM_DATA;

int VAVA_EEPROM_Open();
int VAVA_EEPROM_Close();
int VAVA_EEPROM_Clear();
int VAVA_EEPROM_Read(VAVA_EEPROM_DATA *e2_data);
int VAVA_EEPROM_Write(VAVA_EEPROM_DATA *e2_data);

#endif
