/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002316c8` (_code @ 0x2316c8, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fb0; /* 0x588fb0 */
extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_0061953c; /* 0x61953c */

extern int FUN_00180008(unsigned int);


void FUN_002316c8(unsigned int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)0x0;
    if (DAT_00588fb0 == 0) {
      puVar2 = &DAT_0061951c;
    }
    else if (DAT_00588fb0 == 1) {
      puVar2 = &DAT_0061953c;
    }
    if ((puVar2[7] & 2) != 0) {
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[2] = param_1;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0x13;
    }
  }
  return;
}

} /* extern "C" */
