#ifndef __ADC_CONTROL_H__
#define __ADC_CONTROL_H__

void ADC_Control_Init(void);
void ADC_Volume_Control(uint8_t *flag, uint16_t *data);
void ADC_Cds_Control(uint8_t *flag, uint16_t *data);

#endif
