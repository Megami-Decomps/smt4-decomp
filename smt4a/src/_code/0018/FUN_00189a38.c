/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189a38` (_code @ 0x189a38, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0062d200; /* 0x62d200 */
extern unsigned char DAT_0062d201; /* 0x62d201 */
extern unsigned short DAT_0062d202; /* 0x62d202 */
extern unsigned int DAT_0062d204; /* 0x62d204 */
extern unsigned int DAT_0062d208; /* 0x62d208 */

/* Supplied declaration required: FUN_00189a80. */


void FUN_00189a38(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    temp_v0 = temp_v0 - 0x20;
  }
  if (temp_v0 != 1 && temp_v0 != 0xfffffff9) {
    DAT_0062d201 = 0;
    DAT_0062d202 = 0xedac;
    DAT_0062d200 = 0;
    DAT_0062d204 = param_1;
    DAT_0062d208 = param_2;
    FUN_00189a80(&DAT_0062d200);
    return;
  }
  return;
}
