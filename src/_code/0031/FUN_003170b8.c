/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003170b8` (_code @ 0x3170b8, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a65a8. */
/* Supplied declaration required: FUN_002a671c. */
/* Supplied declaration required: FUN_002a691c. */
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c2cf0. */
extern unsigned int FUN_002c31bc(void);
/* Supplied declaration required: FUN_0031dc4c. */


void FUN_003170b8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)0x4;
  FUN_002c23f8();
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = param_1;
  }
  if (((param_2 & 8) != 0) || ((param_2 & 0x40) != 0)) {
    FUN_002a691c();
  }
  if ((param_2 & 0x20) != 0) {
    FUN_002a671c(puVar1,0x2020000);
  }
  else if ((param_2 & 0x100) != 0) {
    FUN_002a671c(puVar1,0x2030000);
  }
  if ((param_2 & 0x10) != 0) {
    FUN_002a65a8(puVar1,0x2020000);
  }
  else if ((param_2 & 0x80) != 0) {
    FUN_002a65a8(puVar1,0x2030000);
  }
  temp_v0 = FUN_002c31bc();
  FUN_002c2cf0(puVar1,temp_v0,*puVar1);
  puVar3 = puVar1;
  FUN_0031dc4c();
  puVar3[8] = (unsigned int)puVar1;
  puVar3[9] = param_1;
  return;
}
