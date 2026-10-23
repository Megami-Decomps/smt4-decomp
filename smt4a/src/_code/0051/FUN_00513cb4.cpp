/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00513cb4` (_code @ 0x513cb4, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_mwmoCriticalSection; /* 0x62d6f8 */

extern unsigned int transformPrepareBlockHistory(int, unsigned int, unsigned int);
extern unsigned int FUN_0034caf4(int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00513cb4(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&g_mwmoCriticalSection);
  if (*(unsigned int *)(param_1 + 0x38) < *(unsigned int *)(param_1 + 8)) {
    temp_v1 = *(int *)(param_1 + 0x30);
    nn_os_CriticalSection_Leave((unsigned int)&g_mwmoCriticalSection);
    temp_v0 = transformPrepareBlockHistory(param_1,param_2,0);
    *(unsigned int *)(*(int *)(param_1 + 0x28) + temp_v1 * 4) = temp_v0;
    temp_v0 = FUN_0034caf4(param_1);
    *(unsigned int *)(*(int *)(param_1 + 0x2c) + temp_v1 * 4) = temp_v0;
    nn_os_CriticalSection_Enter((unsigned int)&g_mwmoCriticalSection);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 8)) {
      *(unsigned int *)(param_1 + 0x30) = 0;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    nn_os_CriticalSection_Leave((unsigned int)&g_mwmoCriticalSection);
    return 1;
  }
  nn_os_CriticalSection_Leave((unsigned int)&g_mwmoCriticalSection);
  return 0;
}

} /* extern "C" */
