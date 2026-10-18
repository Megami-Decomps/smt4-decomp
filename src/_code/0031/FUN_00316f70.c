/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316f70` (_code @ 0x316f70, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a6264. */
/* Supplied declaration required: FUN_002a63d8. */
/* Supplied declaration required: FUN_002a65d8. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c2b24. */
extern unsigned int FUN_002c2ff0(void);
/* Supplied declaration required: FUN_0031dac4. */


void FUN_00316f70(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)0x4;
  FUN_002c222c();
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = param_1;
  }
  if (((param_2 & 8) != 0) || ((param_2 & 0x40) != 0)) {
    FUN_002a65d8();
  }
  if ((param_2 & 0x20) != 0) {
    FUN_002a63d8(puVar1,0x2020000);
  }
  else if ((param_2 & 0x100) != 0) {
    FUN_002a63d8(puVar1,0x2030000);
  }
  if ((param_2 & 0x10) != 0) {
    FUN_002a6264(puVar1,0x2020000);
  }
  else if ((param_2 & 0x80) != 0) {
    FUN_002a6264(puVar1,0x2030000);
  }
  temp_v0 = FUN_002c2ff0();
  FUN_002c2b24(puVar1,temp_v0,*puVar1);
  puVar3 = puVar1;
  FUN_0031dac4();
  puVar3[8] = (unsigned int)puVar1;
  puVar3[9] = param_1;
  return;
}
