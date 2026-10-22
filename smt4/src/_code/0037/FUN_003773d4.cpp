/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003773d4` (_code @ 0x3773d4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004219e4; /* 0x4219e4 */
extern unsigned char DAT_00421a04; /* 0x421a04 */
extern unsigned char DAT_00421d68; /* 0x421d68 */

extern unsigned int *_ZN9Obj421c90C1Ev(unsigned int *);


void FUN_003773d4(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = (unsigned int)&DAT_00421d68;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (unsigned int *)_ZN9Obj421c90C1Ev(param_1 + 3);
  puVar1[0x83] = 0;
  *puVar1 = (unsigned int)&DAT_00421a04;
  puVar1[-3] = (unsigned int)&DAT_004219e4;
  puVar1[0x84] = 0;
  return;
}

} /* extern "C" */
