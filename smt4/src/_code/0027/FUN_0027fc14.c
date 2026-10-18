/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027fc14` (_code @ 0x27fc14, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_004474f4; /* 0x4474f4 */

/* Supplied declaration required: FUN_003079b4. */


void FUN_0027fc14(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  piVar1 = DAT_004474f4;
  piVar2 = DAT_004474f4 + 7;
  *(unsigned char *)(DAT_004474f4 + 0x87) = 0;
  *piVar1 = param_1;
  piVar1[1] = 0;
  piVar1[2] = 0;
  temp_v0 = *piVar2;
  piVar1[0xa4] = 0;
  piVar1[10] = temp_v0;
  piVar1[0xb] = piVar1[8];
  piVar1[0xc] = piVar1[9];
  if (param_1 != 0) {
    piVar1[0x83] = 0;
    piVar1[0x84] = 0;
    *(unsigned char *)(piVar1 + 0x2c) = 0;
    *(unsigned char *)((int)piVar1 + 0xb1) = 0;
    *(unsigned short *)((int)piVar1 + 0xb2) = 10;
    *(unsigned short *)(piVar1 + 0x2d) = 0;
    piVar1[0x2e] = 0;
    piVar1[0x2f] = 0;
    piVar1[0x30] = 0x3f800000;
    if (param_1 == 8 || param_1 == 9) {
      piVar1[0xa4] = 0x43340000;
    }
  }
  FUN_003079b4();
  return;
}
