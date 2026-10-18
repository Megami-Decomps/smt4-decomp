/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158444` (_code @ 0x158444, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0037dd34; /* 0x37dd34 */

/* Supplied declaration required: nw_snd_internal_driver_SequenceSoundPlayer_SetTrackParam_float. */


void FUN_00158444(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  nw_snd_internal_driver_SequenceSoundPlayer_SetTrackParam_float(param_1,param_2,&LAB_0037dd34,0);
  return;
}
