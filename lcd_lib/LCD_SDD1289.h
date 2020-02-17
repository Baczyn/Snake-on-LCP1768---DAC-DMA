/**
 * \file lcdas.h
 */


#ifndef __LCD_SYMBOLS_INH
#define __LCD_SYMBOLS_INH


#include "LPC17xx.h"

//#define OSCIL_ON 0x0000      //Oscillator -- moved to Open1786.h
#define POW_CTRL1 0x0003   //Power control 1
#define POW_CTRL2 0x000C   //Power control 2
#define POW_CTRL3 0x000D   //Power control 3
#define POW_CTRL4 0x000E   //Power control 4
#define POW_CTRL5 0x001E   //Power control 5
#define DRV_OUT_CTRL  0x0001   //Driver Output Control
#define DRV_WAVE_CTRL 0x0002   //LCD-Driving-Waveform Control
#define SLEEPM  0x0010    //Sleep mode
#define ENTRYM  0x0011    //Entry Mode
#define CMP_R1  0x0005    //Compare register 1
#define CMP_R2  0x0006    //Compare register 2
#define HORIZ_P 0x0016    //Horizontal Porch
#define VERT_P  0x0017    //Vertical Porch
#define DISP_CTRL 0x0007    //Display Control
#define FRAME_CYC 0x000B    //Frame Cycle Control
#define GATE_SPOS 0x000F    //Gate Scan Position
#define VERT_SCROLL1  0x0041  //Vertical Scroll Control 1-th Screen
#define VERT_SCROLL2  0x0042  //Vertical Scroll Control 2-nd Screen
#define DRVPOS_START1 0x0048  //First Screen driving position Start
#define DRVPOS_END1   0x0049  //First Screen driving position End
#define DRVPOS_START2 0x004A  //Second Screen driving position Start
#define DRVPOS_END2   0x004B  //Second Screen driving position End
#define HADRPOS_RAM       0x0044  //Horizontal RAM address position
#define VADRPOS_RAM_START 0x0045  //Vertical RAM address position Start
#define VADRPOS_RAM_END   0x0046  //Vertical RAM address position End
#define GAMMA_CTRL0 0x0030    //Gamma Control 0
#define GAMMA_CTRL1 0x0031    //Gamma Control 1
#define GAMMA_CTRL2 0x0032    //Gamma Control 2
#define GAMMA_CTRL3 0x0033    //Gamma Control 3
#define GAMMA_CTRL4 0x0034    //Gamma Control 4
#define GAMMA_CTRL5 0x0035    //Gamma Control 5
#define GAMMA_CTRL6 0x0036    //Gamma Control 6
#define GAMMA_CTRL7 0x0037    //Gamma Control 7
#define GAMMA_CTRL8 0x003A    //Gamma Control 8
#define GAMMA_CTRL9 0x003B    //Gamma Control 9
#define DMASK_WRAM1 0x0023    //RAM write data mask 1
#define DMASK_WRAM2 0x0024    //RAM write data mask 2
#define FRAME_FREQ  0x0025    //Frame Frequency Control
#define ADRY_RAM    0x004f    //RAM address set Y
#define ADRX_RAM    0x004e    //RAM address set X
#define DATA_RAM    0x0022    //RAM data

/**
 * Defines initial rotation of the screen.
 */
#define DISP_ORIENTATION  0  /* angle 0 90 */

#if  ( DISP_ORIENTATION == 90 ) || ( DISP_ORIENTATION == 270 )

/**
 * Screen width
 */
#define  LCD_MAX_X  320
/**
 * Screen height
 */
#define  LCD_MAX_Y  240

#elif  ( DISP_ORIENTATION == 0 ) || ( DISP_ORIENTATION == 180 )

/**
 * Screen width
 */
#define  LCD_MAX_X  240
/**
 * Screen height
 */
#define  LCD_MAX_Y  320

#endif


/**
 * \defgroup LCDColors Predefined colors for the LCD
 *
 * Colors in rgb565 format defined as 16-bit unsigned numbers ready to use by the programmer
 * @{
 */
#define LCDWhite           0xFFFF
#define LCDBlack           0x0000
#define LCDGrey            0xa534
#define LCDBlue            0x001F
#define LCDBlueSea         0x05BF
#define LCDPastelBlue      0x051F
#define LCDViolet          0xB81F
#define LCDMagenta         0xF81F
#define LCDRed             0xF800
#define LCDGinger          0xFAE0
#define LCDGreen           0x07E0
#define LCDCyan            0x7FFF
#define LCDYellow          0xFFE0
/**
 * @}
 */
#endif

#ifndef __LCD_SDD1289_H
#define __LCD_SDD1289_H

/*****************************
 *  LCD controler configuration
 */
void init_SDD1289(void);

#endif

