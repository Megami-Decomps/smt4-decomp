/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2ea0` (_code @ 0x2e2ea0, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c4160. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_002e2ea0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  int uStack_18;
  unsigned char temp_v0 [4];
  
  uStack_18 = *(unsigned int *)(param_1 + 0x44);
  puVar1 = temp_v0;
  FUN_002c42fc(puVar1,&uStack_18,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c5468();
  }
  *(unsigned char *)(param_1 + 0x48) = 1;
  FUN_002c41e8(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0x44) = 0;
  }
  FUN_002c4160(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x4c) = 0;
  }
  return;
}
