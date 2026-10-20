/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d50c` (_code @ 0x27d50c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(unsigned char [64], unsigned char *, int);

extern unsigned char LAB_0027d57c; /* 0x27d57c */
extern unsigned char LAB_0027d594; /* 0x27d594 */
extern unsigned int DAT_00448c58; /* 0x448c58 */
extern unsigned int DAT_00448c60; /* 0x448c60 */

/* Supplied declaration required: FUN_002be624. */
extern unsigned int FUN_002c5c04(unsigned char *);


void FUN_0027d50c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [64];
  
  DAT_00448c60 = 0x80;
  if (param_1 >= 100) {
    FUN_002be624(temp_v0,&LAB_0027d57c,param_1 - 100);
    DAT_00448c58 = FUN_002c5c04(temp_v0);
    return;
  }
  FUN_002be624(temp_v0,&LAB_0027d594,param_1);
  DAT_00448c58 = FUN_002c5c04(temp_v0);
  return;
}

} /* extern "C" */
