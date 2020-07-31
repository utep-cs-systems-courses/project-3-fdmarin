#include <msp430.h>

#include "libTimer.h"

#include "led.h"

#include "switches.h"

#include "buzzer.h"

#include "triangle.h"

#include "stateMachine.h"

#include <lcdutils.h>

#include <lcddraw.h>



void main(void)

{

  configureClocks();



  led_init();

  lcd_init();

  switch_init();

  buzzer_init();

  u_char width = screenWidth, height = screenHeight;

  //enableWDTInterrupts();

  clearScreen(COLOR_BLACK);

  drawTriforce();



  or_sr(0x18);  // CPU off, GIE on

} 
