/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd440` (_code @ 0x2bd440, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_SoundThread_SoundThread_sub_object(unsigned char *);

extern unsigned int DAT_00472364; /* 0x472364 */
extern unsigned char DAT_004ea4c8; /* 0x4ea4c8 */

extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nw_snd_internal_driver_SoundThread_SoundThread_sub_object. */


unsigned char * FUN_002bd440(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00472364 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_00472364), temp_v0 != 0)) {
    nw_snd_internal_driver_SoundThread_SoundThread_sub_object(&DAT_004ea4c8);
  }
  return &DAT_004ea4c8;
}

} /* extern "C" */
