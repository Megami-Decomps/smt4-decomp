/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001911a4` (_code @ 0x1911a4, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019102c(unsigned int *, int);
int FUN_001aa228(void);
int coproc_moveto_Data_Memory_Barrier(int);

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
/* Supplied declaration required: FUN_0019102c. */
/* Supplied declaration required: FUN_001aa228. */
extern int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(unsigned int *, unsigned int);


unsigned int FUN_001911a4(unsigned int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1[0x5b] == 0) {
    if (param_2 == 0) {
      return 0;
    }
    puVar1 = param_1;
    FUN_0019102c(param_1,4);
    puVar1[3] = param_1[0x61];
    *(unsigned char *)(puVar1 + 1) = 0;
    if ((unsigned int *)param_1[0x5c] == (unsigned int *)0x0) {
      param_1[0x5b] = (unsigned int)puVar1;
    }
    else {
      *(unsigned int **)param_1[0x5c] = puVar1;
    }
    param_1[0x5c] = (unsigned int)puVar1;
    *puVar1 = 0;
  }
  temp_v1 = param_1[0x5d];
  coproc_moveto_Data_Memory_Barrier(0);
  if (param_2 != 0) {
    FUN_001aa228();
  }
  else {
    temp_v0 = nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(param_1,param_1[0x5b]);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  *(unsigned int *)(param_1[0x5b] + 8) = temp_v1;
  param_1[0x5d] = param_1[0x5d] + 1;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  return temp_v1;
}

} /* extern "C" */
