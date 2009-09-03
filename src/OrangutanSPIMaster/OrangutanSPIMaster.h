/*
  OrangutanSPIMaster.h - Library for communicating using the AVR's hardware SPI
      (Serial Peripheral Interface) module in master mode.
*/

/*
 * Written by David Grayson, Sep 2, 2009.
 * Copyright (c) 2009 Pololu Corporation. For more information, see
 *
 *   http://www.pololu.com
 *   http://forum.pololu.com
 *   http://www.pololu.com/docs/0J18
 *
 * You may freely modify and share this code, as long as you keep this
 * notice intact (including the three links above).  Licensed under the
 * Creative Commons BY-SA 3.0 license:
 *
 *   http://creativecommons.org/licenses/by-sa/3.0/
 *
 * Disclaimer: To the extent permitted by law, Pololu provides this work
 * without any warranty.  It might be defective, in which case you agree
 * to be responsible for all resulting costs and damages.
 */

#ifndef OrangutanSPIMaster_h
#define OrangutanSPIMaster_h

#define SPI_EDGE_LEADING  0
#define SPI_EDGE_TRAILING 1

#define SPI_SPEED_DIVIDER_2   0b100
#define SPI_SPEED_DIVIDER_4   0b000
#define SPI_SPEED_DIVIDER_8   0b101
#define SPI_SPEED_DIVIDER_16  0b001
#define SPI_SPEED_DIVIDER_32  0b110
#define SPI_SPEED_DIVIDER_64  0b010
#define SPI_SPEED_DIVIDER_128 0b011

class OrangutanSPIMaster
{
  public:
    static void init(unsigned char samplingEdge, unsigned char speed);
    static unsigned char transmit(unsigned char byteToSend);
    static unsigned char transmitAndDelay(unsigned char byteToSend, unsigned char post_delay_us);
};

#endif

// Local Variables: **
// mode: C++ **
// c-basic-offset: 4 **
// tab-width: 4 **
// indent-tabs-mode: t **
// end: **