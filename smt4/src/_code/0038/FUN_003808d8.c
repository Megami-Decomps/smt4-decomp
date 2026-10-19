/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003808d8` (_code @ 0x3808d8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00380894(); /* 0x380894 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern unsigned int nw_snd_internal_FrameHeap_Alloc(int, unsigned int, romwright_code *, unsigned int);


unsigned int FUN_003808d8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 4);
  nn_os_CriticalSection_Enter(param_1 + 4);
  temp_v0 = nw_snd_internal_FrameHeap_Alloc(param_1 + 0x10,param_2,FUN_00380894,0);
  nn_os_CriticalSection_Leave(param_1 + 4);
  nn_os_CriticalSection_Leave(param_1 + 4);
  return temp_v0;
}
