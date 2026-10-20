/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038093c` (_code @ 0x38093c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(int);

extern unsigned char DAT_00421f5c; /* 0x421f5c */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
extern int nw_snd_internal_FrameHeap_FrameHeap_sub_object_380298(unsigned int *);


int FUN_0038093c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00421f5c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  temp_v0 = nw_snd_internal_FrameHeap_FrameHeap_sub_object_380298(param_1 + 4);
  nn_os_CriticalSection_Initialize(temp_v0 - 0xc);
  return temp_v0 - 0x10;
}

} /* extern "C" */
