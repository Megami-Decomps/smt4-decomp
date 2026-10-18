/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037df5c` (_code @ 0x37df5c, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421d54; /* 0x421d54 */

/* Supplied declaration required: nw_snd_internal_CurveLfoParam_Initialize. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_InitParam. */


unsigned int * FUN_0037df5c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421d54;
  *(unsigned char *)((int)param_1 + 5) = 0;
  nw_snd_internal_CurveLfoParam_Initialize(param_1 + 0x15);
  *(unsigned char *)(param_1 + 0x1b) = 0;
  *(unsigned char *)((int)param_1 + 0x6d) = 0;
  *(unsigned short *)((int)param_1 + 0x6e) = 0;
  *(unsigned short *)(param_1 + 0x1c) = 0;
  *(unsigned char *)((int)param_1 + 0x72) = 0;
  *(unsigned char *)((int)param_1 + 0x73) = 0;
  *(unsigned short *)(param_1 + 0x1d) = 0;
  *(unsigned short *)((int)param_1 + 0x76) = 0;
  *(unsigned char *)(param_1 + 0x1e) = 0;
  *(unsigned char *)((int)param_1 + 0x79) = 0;
  *(unsigned short *)((int)param_1 + 0x7a) = 0;
  *(unsigned short *)(param_1 + 0x1f) = 0;
  *(unsigned char *)((int)param_1 + 0x7e) = 0;
  *(unsigned char *)((int)param_1 + 0x7f) = 0;
  *(unsigned short *)(param_1 + 0x20) = 0;
  *(unsigned short *)((int)param_1 + 0x82) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  nw_snd_internal_driver_SequenceTrack_InitParam(param_1);
  return param_1;
}
