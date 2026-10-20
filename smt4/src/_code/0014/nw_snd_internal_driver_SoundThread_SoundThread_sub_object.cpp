/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SoundThread_SoundThread_sub_object` (_code @ 0x140fa0, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(unsigned int *, int);

/* Supplied declaration required: memClear. */


unsigned int * nw_snd_internal_driver_SoundThread_SoundThread_sub_object(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  memClear(param_1 + 6,0x194);
  *(unsigned char *)(param_1 + 0x6d) = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0xffffffff;
  param_1[0x72] = 0;
  param_1[0x75] = (unsigned int)(param_1 + 0x75);
  param_1[0x74] = 0;
  param_1[0x76] = (unsigned int)(param_1 + 0x75);
  param_1[0x78] = (unsigned int)(param_1 + 0x78);
  param_1[0x77] = 0;
  param_1[0x79] = (unsigned int)(param_1 + 0x78);
  param_1[0x7c] = 0;
  *(unsigned char *)(param_1 + 0x7d) = 0;
  *(unsigned char *)((int)param_1 + 0x1f5) = 0;
  *(unsigned char *)((int)param_1 + 0x1f6) = 0;
  *(unsigned char *)((int)param_1 + 0x1f7) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  return param_1;
}

} /* extern "C" */
