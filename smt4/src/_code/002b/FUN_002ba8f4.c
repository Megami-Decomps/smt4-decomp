/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba8f4` (_code @ 0x2ba8f4, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: nn_os_Thread_FinalizeImpl. */


void FUN_002ba8f4(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char temp_v1 [4];
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    puVar1 = temp_v1;
    FUN_002c40f8(puVar1,&temp_v0,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(param_1 + 1) = 1;
    nn_os_Thread_FinalizeImpl(param_1);
    if (*param_1 != 0) {
      software_interrupt(0x23);
      *param_1 = 0;
    }
  }
  return;
}
