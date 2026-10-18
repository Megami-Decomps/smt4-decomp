/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_DriverCommandManager_ProcessCommand` (_code @ 0x1b1e3c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
/* Supplied declaration required: FUN_001aa228. */
/* Supplied declaration required: FUN_001b8e48. */
extern int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue(int, unsigned int *);


void nw_snd_internal_DriverCommandManager_ProcessCommand
               (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  while (temp_v0 = nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue(param_1,(unsigned int *)&temp_v1),
        temp_v0 != 0) {
    FUN_001b8e48(temp_v1);
    coproc_moveto_Data_Memory_Barrier(0);
    FUN_001aa228(param_1 + 0xb4,temp_v1);
  }
  return;
}
