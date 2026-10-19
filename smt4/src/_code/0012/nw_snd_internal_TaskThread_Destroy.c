/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskThread_Destroy` (_code @ 0x121630, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0014db9c. */
/* Supplied declaration required: FUN_002bb020. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


void nw_snd_internal_TaskThread_Destroy(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  int iStack_18;
  unsigned char temp_v0 [8];
  
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    *(unsigned char *)(param_1 + 5) = 1;
    FUN_002bb020();
    FUN_0014db9c();
    iStack_18 = *param_1;
    puVar1 = temp_v0;
    FUN_002c40f8(puVar1,&iStack_18,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(param_1 + 1) = 1;
    nn_os_Thread_FinalizeImpl((unsigned int)param_1);
    if (*param_1 != 0) {
      software_interrupt(0x23);
      *param_1 = 0;
    }
    param_1[4] = -1;
    *(unsigned char *)((int)param_1 + 0x15) = 0;
  }
  return;
}
