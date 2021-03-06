/***************************************************************************************************
  Filename:       MT_SYS.h
  Revised:        $Date: 2008-01-17 12:22:57 -0800 (Thu, 17 Jan 2008) $
  Revision:       $Revision: 16223 $

  Description:   Monitor test functions for System

  Copyright 2007 Texas Instruments Incorporated. All rights reserved.

  IMPORTANT: Your use of this Software is limited to those specific rights
  granted under the terms of a software license agreement between the user
  who downloaded the software, his/her employer (which must be your employer)
  and Texas Instruments Incorporated (the "License").  You may not use this
  Software unless you agree to abide by the terms of the License. The License
  limits your use, and you acknowledge, that the Software may not be modified,
  copied or distributed unless embedded on a Texas Instruments microcontroller
  or used solely and exclusively in conjunction with a Texas Instruments radio
  frequency transceiver, which is integrated into your product.  Other than for
  the foregoing purpose, you may not use, reproduce, copy, prepare derivative
  works of, modify, distribute, perform, display or sell this Software and/or
  its documentation for any purpose.

  YOU FURTHER ACKNOWLEDGE AND AGREE THAT THE SOFTWARE AND DOCUMENTATION ARE
  PROVIDED ?AS IS? WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED,
  INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE,
  NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL
  TEXAS INSTRUMENTS OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT,
  NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER
  LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
  INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE
  OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT
  OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
  (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

  Should you have any questions regarding your right to use this Software,
  contact Texas Instruments Incorporated at www.TI.com.

 ***************************************************************************************************/
#ifndef MT_SYS_H
#define MT_SYS_H

#ifdef __cplusplus
extern "C"
{
#endif

/***************************************************************************************************
 * DEFINES
 ***************************************************************************************************/
/* SYS_OSAL_EVENT ID */
#define MT_SYS_OSAL_EVENT_0     0x0800
#define MT_SYS_OSAL_EVENT_1     0x0400
#define MT_SYS_OSAL_EVENT_2     0x0200
#define MT_SYS_OSAL_EVENT_3     0x0100
#define MT_SYS_OSAL_EVENT_MASK  MT_SYS_OSAL_EVENT_0 | MT_SYS_OSAL_EVENT_1 | MT_SYS_OSAL_EVENT_2 | MT_SYS_OSAL_EVENT_3

/***************************************************************************************************
 * EXTERNAL FUNCTIONS
 ***************************************************************************************************/

#if defined (MT_SYS_FUNC)
/*
 * Process MT_SYS commands
 */
extern uint8 MT_SysCommandProcessing(uint8 *pBuf);
#endif

/*
 * Reset indication
 */
extern void MT_SysResetInd( void );

/*
 * Osal Timer expired
 */
extern void MT_SysOsalTimerExpired(uint8 Id);

#ifdef __cplusplus
}
#endif

#endif /* MTEL_H */

/***************************************************************************************************
 ***************************************************************************************************/
