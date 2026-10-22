/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045c310` (_code @ 0x45c310, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055be00; /* 0x55be00 */
extern unsigned char DAT_0055be20; /* 0x55be20 */
extern unsigned char DAT_0055c1c4; /* 0x55c1c4 */

extern unsigned int *_ZN9Obj421c90C1Ev(unsigned int *);


void FUN_0045c310(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = (unsigned int)&DAT_0055c1c4;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (unsigned int *)_ZN9Obj421c90C1Ev(param_1 + 3);
  puVar1[0x83] = 0;
  *puVar1 = (unsigned int)&DAT_0055be20;
  puVar1[-3] = (unsigned int)&DAT_0055be00;
  puVar1[0x84] = 0;
  return;
}

} /* extern "C" */
