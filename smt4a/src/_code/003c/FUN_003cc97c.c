/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cc97c` (_code @ 0x3cc97c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0019a364. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_003cc97c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1;
  int uStack_10;
  
  puVar1 = (unsigned int *)&uStack_10;
  software_interrupt(0x24);
  uStack_10 = param_4;
  if (*(int *)(param_1 + 0x4c) < 0) {
    FUN_002e3140();
  }
  *(unsigned int *)(param_1 + 0x24) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x58) = param_2;
  FUN_0019a364(puVar1,*(unsigned int *)(param_1 + 0x4c),1);
  if ((int)puVar1 < 0) {
    FUN_002e3140();
  }
  while( 1 ) {
    temp_v0 = *(unsigned int *)(param_1 + 0x58);
    temp_v1 = temp_v0 == 0xffffffff;
    if (temp_v1) {
      temp_v0 = (unsigned int)*(unsigned char *)(param_1 + 0x5c);
    }
    if (temp_v1 && temp_v0 == 0) break;
    FUN_001bcd48(100000,0);
  }
  return;
}
