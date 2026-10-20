/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1f04` (_code @ 0x1b1f04, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_SoundThread_SoundThread_sub_object(unsigned char *);

extern unsigned int DAT_005c0f88; /* 0x5c0f88 */
extern unsigned char DAT_00646e88; /* 0x646e88 */

extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nw_snd_internal_driver_SoundThread_SoundThread_sub_object. */


unsigned char * FUN_001b1f04(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_005c0f88 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c0f88), temp_v0 != 0)) {
    nw_snd_internal_driver_SoundThread_SoundThread_sub_object(&DAT_00646e88);
  }
  return &DAT_00646e88;
}

} /* extern "C" */
