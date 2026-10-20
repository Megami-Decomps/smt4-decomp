/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_MasterManager_ExecuteEffect` (_code @ 0x15e090, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015ea24(int, int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0015ea24. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_FxDelay_UpdateBuffer(unsigned int, unsigned int);


void nn_snd_CTR_MasterManager_ExecuteEffect(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int iStack_20;
  int iStack_1c;
  
  nn_os_CriticalSection_Enter(param_1 + 0x44);
  temp_v3 = param_3 + 0x280;
  iStack_20 = param_3 + 0x500;
  iStack_1c = param_3 + 0x780;
  temp_v1 = param_1 + param_2 * 8;
  temp_v0 = *(int *)(temp_v1 + 0x34);
  temp_v2 = param_3;
  if (temp_v0 != 0) {
    nn_snd_CTR_FxDelay_UpdateBuffer(temp_v0,(unsigned int)&temp_v2);
  }
  else {
    temp_v0 = *(int *)(temp_v1 + 0x38);
    if (temp_v0 != 0) {
      FUN_0015ea24(temp_v0,&temp_v2);
    }
  }
  nn_os_CriticalSection_Leave(param_1 + 0x44);
  return;
}

} /* extern "C" */
