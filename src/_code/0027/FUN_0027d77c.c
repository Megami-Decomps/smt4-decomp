/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d77c` (_code @ 0x27d77c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0027d7ec; /* 0x27d7ec */
extern unsigned char LAB_0027d804; /* 0x27d804 */
extern unsigned int DAT_00448c58; /* 0x448c58 */
extern unsigned int DAT_00448c60; /* 0x448c60 */

/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002c5e2c(unsigned char *);


void FUN_0027d77c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [64];
  
  DAT_00448c60 = 0x80;
  if (param_1 >= 100) {
    FUN_002be7fc(temp_v0,&LAB_0027d7ec,param_1 - 100);
    DAT_00448c58 = FUN_002c5e2c(temp_v0);
    return;
  }
  FUN_002be7fc(temp_v0,&LAB_0027d804,param_1);
  DAT_00448c58 = FUN_002c5e2c(temp_v0);
  return;
}
