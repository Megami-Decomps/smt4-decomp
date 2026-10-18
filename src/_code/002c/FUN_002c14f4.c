/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c14f4` (_code @ 0x2c14f4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d4200; /* 0x4d4200 */
extern unsigned char DAT_004d4201; /* 0x4d4201 */
extern unsigned short DAT_004d4202; /* 0x4d4202 */
extern unsigned int DAT_004d4204; /* 0x4d4204 */
extern unsigned int DAT_004d4208; /* 0x4d4208 */

/* Supplied declaration required: FUN_002ad784. */


void FUN_002c14f4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    temp_v0 = temp_v0 - 0x20;
  }
  if (temp_v0 != 1 && temp_v0 != 0xfffffff9) {
    DAT_004d4201 = 0;
    DAT_004d4202 = 0xbca3;
    DAT_004d4200 = 0;
    DAT_004d4204 = param_1;
    DAT_004d4208 = param_2;
    FUN_002ad784(&DAT_004d4200);
    return;
  }
  return;
}
