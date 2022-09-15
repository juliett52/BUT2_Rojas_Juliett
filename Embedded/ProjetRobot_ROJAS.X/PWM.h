#ifndef PWM_H
#define	PWM_H

void InitPWM(void);
//void PWMSetSpeed(float vitesseEnPourcents, unsigned char motor);
void PWMUpdateSpeed();
void PWMSetSpeedConsigne(float vitesseEnPourcents, char motor);

#define MOTEUR_DROIT 0
#define MOTEUR_GAUCHE 101

#endif	/* PWM_H */

