/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a1d4` (_code @ 0x10a1d4, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *DAT_004650a0; /* 0x4650a0 */
extern unsigned int DAT_004650a8; /* 0x4650a8 */
extern unsigned int DAT_004650b8; /* 0x4650b8 */
extern unsigned char DAT_004e3be8; /* 0x4e3be8 */
extern unsigned char DAT_004e3c00; /* 0x4e3c00 */
extern unsigned int DAT_004e3c48; /* 0x4e3c48 */
extern unsigned int DAT_004e3c4c; /* 0x4e3c4c */
extern unsigned int DAT_004e3c50; /* 0x4e3c50 */
extern unsigned short DAT_004e3c54; /* 0x4e3c54 */
extern unsigned short DAT_004e3c56; /* 0x4e3c56 */
extern unsigned char DAT_004e3c58; /* 0x4e3c58 */

extern unsigned int FUN_0011c5e0(void);
/* Supplied declaration required: FUN_0011c71c. */
/* Supplied declaration required: FUN_00128574. */
extern int FUN_002c00d4(unsigned int *);
/* Supplied declaration required: FUN_002c4b30. */


void FUN_0010a1d4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_004650b8 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_004650b8), temp_v0 != 0)) {
    temp_v1 = FUN_0011c5e0();
    FUN_0011c71c(&DAT_004e3be8,temp_v1);
  }
  DAT_004650a0 = &DAT_004e3be8;
  DAT_004e3c00 = 0;
  FUN_00128574(&DAT_004e3be8,0x28,0x91);
  FUN_002c4b30(&DAT_004e3c58,0x7c);
  DAT_004e3c48 = 0;
  DAT_004e3c4c = 0;
  DAT_004e3c50 = 0;
  DAT_004e3c54 = 0;
  DAT_004e3c56 = 0;
  DAT_004650a8 = 0;
  return;
}
