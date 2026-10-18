/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467040` (_code @ 0x467040, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c3f4; /* 0x55c3f4 */

/* Supplied declaration required: FUN_00188b60. */
extern int nw_snd_internal_FrameHeap_FrameHeap_sub_object_380298(unsigned int *);


int FUN_00467040(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055c3f4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  temp_v0 = nw_snd_internal_FrameHeap_FrameHeap_sub_object_380298(param_1 + 4);
  FUN_00188b60(temp_v0 - 0xc);
  return temp_v0 - 0x10;
}
