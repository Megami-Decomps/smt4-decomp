/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233488` (_code @ 0x233488, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Supplied declaration required: FUN_00230ae8. */
/* Supplied declaration required: FUN_002334d8. */
/* Supplied declaration required: FUN_002335a4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002334f4) */

void FUN_00233488(int param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr3, in_cr7; 8 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr3;
  unsigned int in_cr7;
  
  FUN_00230ae8(param_1 + 0x55c,param_1 + 0x20);
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 0xc))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  FUN_002335a4(param_1 + 0x20);
  FUN_002334d8(param_1 + 0xdc,2);
  temp_v0 = 0;
  if (param_1 != -0x2a0) {
    temp_v0 = *(int *)(param_1 + 0x2a4);
    if (temp_v0 < 0) {
      temp_v0 = *(int *)(param_1 + 0x2a8);
    }
    if (temp_v0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  coprocessor_function(0,0xb,0,in_cr7,in_cr0,in_cr3);
  *(int *)(temp_v0 * 2 + 0x7c) = temp_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
