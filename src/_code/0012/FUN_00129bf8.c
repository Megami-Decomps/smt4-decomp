/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129bf8` (_code @ 0x129bf8, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00139750. */
/* Supplied declaration required: FUN_0013b11c. */
/* Supplied declaration required: FUN_0013b5e0. */
/* Supplied declaration required: FUN_002ad264. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c3fe4. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */


void FUN_00129bf8(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned char *puVar1;
  int uStack_18;
  unsigned char temp_v0 [4];
  
  *(unsigned char *)(param_1 + 0x77) = 1;
  software_interrupt(0x18);
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_002c526c();
  }
  uStack_18 = *(unsigned int *)(param_1 + 0x6c);
  puVar1 = temp_v0;
  FUN_002c40f8(puVar1,&uStack_18,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  *(unsigned char *)(param_1 + 0x70) = 1;
  FUN_002c3fe4(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x6c) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0x6c) = 0;
  }
  FUN_002c38a4(param_1);
  FUN_002ad264();
  FUN_0013b5e0();
  FUN_0013b11c(param_1 + 0x58);
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  FUN_00139750(param_1 + 0x38);
  if (*(int *)(param_1 + 0x2c) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  FUN_002c3820(param_1);
  *(unsigned int *)(param_1 + 8) = 0xffffffff;
  return;
}
