#include "LCD_SDD1289.h"
#include "Open1768_LCD.h"

void delay_ms(uint16_t ms)
{
   uint16_t i,j;
   for( i = 0; i < ms; i++ )
   {
      for( j = 0; j < 1141; j++ );
   }
}

void  init_SDD1289(void) {
   //Run only if DeviceCode is 0x8989

   lcdWriteReg(OSCIL_ON,   0x0001);    delay_ms(50);   /* oscillator turn on */
   lcdWriteReg(POW_CTRL1,   0xA8A4);    delay_ms(50);
   lcdWriteReg(POW_CTRL2,   0x0000);    delay_ms(50);
   lcdWriteReg(POW_CTRL3,   0x080C);    delay_ms(50);
   lcdWriteReg(POW_CTRL4,   0x2B00);    delay_ms(50);
   lcdWriteReg(POW_CTRL5,   0x00B0);    delay_ms(50);
   lcdWriteReg(DRV_OUT_CTRL,   0x2B3F);    delay_ms(50);   /* [8:0] = 320 number of lines */
   lcdWriteReg(DRV_WAVE_CTRL,  0x0600);    delay_ms(50);
   lcdWriteReg(SLEEPM,      0x0000);    delay_ms(50);
   lcdWriteReg(ENTRYM,      0x6070);    delay_ms(50);   /* VSYNC interface, 65k colors, Normal Data Bus, display from RAM, 0x6070 */
   lcdWriteReg(CMP_R1,      0x0000);    delay_ms(50);
   lcdWriteReg(CMP_R1,      0x0000);    delay_ms(50);
   lcdWriteReg(HORIZ_P,     0xEF1C);    delay_ms(50);
   lcdWriteReg(VERT_P,      0x0003);    delay_ms(50);
   lcdWriteReg(DISP_CTRL,   0x0133);    delay_ms(50);
   lcdWriteReg(FRAME_CYC,   0x0000);    delay_ms(50);
   lcdWriteReg(GATE_SPOS,   0x0000);    delay_ms(50);   /* gate driver initial scan position set to 0 */
   lcdWriteReg(VERT_SCROLL1,   0x0000);    delay_ms(50);
   lcdWriteReg(VERT_SCROLL2,   0x0000);    delay_ms(50);
   lcdWriteReg(DRVPOS_START1,  0x0000);    delay_ms(50);
   lcdWriteReg(DRVPOS_END1,    0x013F);    delay_ms(50);
   lcdWriteReg(DRVPOS_START2,  0x0000);    delay_ms(50);
   lcdWriteReg(DRVPOS_END2,    0x0000);    delay_ms(50);
   lcdWriteReg(HADRPOS_RAM,    0xEF00);    delay_ms(50);
   lcdWriteReg(VADRPOS_RAM_START,0x0000);    delay_ms(50);
   lcdWriteReg(VADRPOS_RAM_END,0x013F);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL0,   0x0707);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL1,   0x0204);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL2,   0x0204);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL3,   0x0502);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL4,   0x0507);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL5,   0x0204);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL6,   0x0204);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL7,   0x0502);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL8,   0x0302);    delay_ms(50);
   lcdWriteReg(GAMMA_CTRL9,   0x0302);    delay_ms(50);
   lcdWriteReg(DMASK_WRAM1,   0x0000);    delay_ms(50);
   lcdWriteReg(DMASK_WRAM2,   0x0000);    delay_ms(50);
   lcdWriteReg(FRAME_FREQ,    0x8000);    delay_ms(50);
   lcdWriteReg(ADRY_RAM,   0);        /* initial settings for the GDDRAM Y address in the address counter */
   lcdWriteReg(ADRX_RAM,   0);        /* initial settings for the GDDRAM X address in the address counter */

   delay_ms(50);
}
