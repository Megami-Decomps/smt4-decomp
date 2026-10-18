/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8148` (_code @ 0x3c8148, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0024f15c. */
/* Supplied declaration required: FUN_00275c2c. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4160. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_003c8148(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int uStack_18;
  unsigned char temp_v1 [4];
  
  uStack_18 = *(unsigned int *)(param_1 + 0xa4);
  puVar1 = temp_v1;
  FUN_002c42fc(puVar1,&uStack_18,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c5468();
  }
  *(unsigned char *)(param_1 + 0xa8) = 1;
  FUN_002c41e8(param_1 + 0xa4);
  if (*(int *)(param_1 + 0xa4) != 0) {
    software_interrupt(0x23);
    *(unsigned int *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_002c4160();
    temp_v0 = *(int *)(param_1 + 0xb0);
    if (temp_v0 != 0) {
      FUN_002c4160();
      FUN_002b2520(temp_v0);
    }
    *(unsigned int *)(param_1 + 0xb0) = 0;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xac) = 0;
  }
  *(unsigned int *)(param_1 + 0xc0) = 0xffffffff;
  if (*(int *)(param_1 + 0xa0) != 0) {
    *(unsigned int *)(param_1 + 0xa0) = 0;
  }
  FUN_00275c2c();
  FUN_0024f15c(param_1);
  *(unsigned int *)(param_1 + 0x80) = 0;
  return;
}
