/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002348a8` (_code @ 0x2348a8, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c3fe4. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */


unsigned int FUN_002348a8(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int iStack_18;
  unsigned char temp_v0 [8];
  
  if (*param_1 != 0) {
    iStack_18 = *param_1;
    puVar1 = temp_v0;
    FUN_002c40f8(puVar1,&iStack_18,1,0,0,0);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
    if (((unsigned int)puVar1 & 0x3ff) == 0x3fe) {
      return 0;
    }
  }
  iStack_18 = *param_1;
  puVar1 = temp_v0;
  FUN_002c40f8(puVar1,&iStack_18,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  *(unsigned char *)(param_1 + 1) = 1;
  FUN_002c3fe4(param_1);
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return 1;
}
