/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001584e0` (_code @ 0x1584e0, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_SequenceSoundPlayer_SetTrackParam_float(unsigned int, unsigned int, unsigned char *, int);

extern unsigned char LAB_0037de00; /* 0x37de00 */

/* Supplied declaration required: nw_snd_internal_driver_SequenceSoundPlayer_SetTrackParam_float. */


void FUN_001584e0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  nw_snd_internal_driver_SequenceSoundPlayer_SetTrackParam_float(param_1,param_2,&LAB_0037de00,0);
  return;
}

} /* extern "C" */
