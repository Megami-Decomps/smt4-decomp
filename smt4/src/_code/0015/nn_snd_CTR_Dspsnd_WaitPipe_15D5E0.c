/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_WaitPipe_15D5E0` (_code @ 0x15d5e0, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void nn_snd_CTR_Dspsnd_WaitPipe_15D5E0(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int iStack_18;
  unsigned char temp_v0 [8];
  
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 2));
  iStack_18 = *param_1;
  puVar1 = temp_v0;
  FUN_002c40f8(puVar1,&iStack_18,1,0,0xffffffff,0xffffffff);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  software_interrupt(0x19);
  if (*param_1 < 0) {
    FUN_002c526c();
  }
  *(char *)((int)param_1 + 0x1319) = *(char *)((int)param_1 + 0x1319) + '\x01';
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 2));
  return;
}
