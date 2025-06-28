#ifndef __LED_PATTERN_H_
#define	__LED_PATTERN_H_
void LED_Pattern_Init_One(void);
void LED_Pattern_Init_Two(void);
void LED_Pattern_Init_Three(void);
void LED_Pattern_Init_Four(void);

void LED_Pattern_One(uint8_t *flag);
void LED_Pattern_Two(uint8_t *flag);
void LED_Pattern_Three(uint8_t *flag);
void LED_Pattern_Four(uint8_t *flag, uint8_t *sequence);

void LED_Patterns(uint8_t pattern, uint8_t *sequence, uint8_t *flag);
#endif
