/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376880` (_code @ 0x376880, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c66cc(...);
int nw_snd_internal_ExternalSoundPlayer_Finalize(...);

extern int nw_snd_internal_ExternalSoundPlayer_ExternalSoundPlayer_sub_object_37B9C8(...); /* 0x37b9c8 */
extern unsigned char DAT_004218f8; /* 0x4218f8 */

/* Supplied declaration required: FUN_002c66cc. */
/* Supplied declaration required: nw_snd_internal_ExternalSoundPlayer_Finalize. */


unsigned int * FUN_00376880(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_004218f8;
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    temp_v0 = 0;
    do {
      nw_snd_internal_ExternalSoundPlayer_Finalize(param_1 + temp_v0 * 4 + 2,param_1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    *(unsigned char *)((int)param_1 + 0x55) = 1;
    *(unsigned char *)(param_1 + 0x15) = 0;
    param_1[1] = 0;
    param_1[0x13] = 0x3f800000;
    param_1[0x14] = 0;
    param_1[0x12] = 0x3f800000;
  }
  FUN_002c66cc(param_1 + 2,nw_snd_internal_ExternalSoundPlayer_ExternalSoundPlayer_sub_object_37B9C8
               ,0x10,4);
  return param_1;
}

} /* extern "C" */
