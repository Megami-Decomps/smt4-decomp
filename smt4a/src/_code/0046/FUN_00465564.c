/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00465564` (_code @ 0x465564, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c24c; /* 0x55c24c */
extern unsigned char DAT_0055c2ac; /* 0x55c2ac */
extern unsigned char DAT_0055c2dc; /* 0x55c2dc */

/* Supplied declaration required: FUN_001a08d0. */
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */


unsigned int * FUN_00465564(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  param_1[0x11] = (unsigned int)&DAT_0055c2dc;
  *param_1 = (unsigned int)&DAT_0055c2ac;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(unsigned char *)((int)param_1 + 0x52) = 1;
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x88]) {
      do {
        if (param_1[temp_v0 * 0xf2 + 0x8a] != 0) {
          nw_snd_internal_driver_StreamBufferPool_Free(param_1[0x19]);
          param_1[temp_v0 * 0xf2 + 0x8a] = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x88]);
    }
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x88]) {
      do {
        if (param_1[temp_v0 * 0xf2 + 0x8b] != 0) {
          nw_snd_internal_driver_Voice_Free();
          param_1[temp_v0 * 0xf2 + 0x8b] = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x88]);
    }
    param_1[0x19] = 0;
    *(unsigned char *)(param_1 + 3) = 0;
    *(unsigned char *)(param_1 + 0x14) = 0;
    FUN_001a08d0(param_1);
  }
  *param_1 = (unsigned int)&DAT_0055c24c;
  return param_1;
}
