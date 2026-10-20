/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f188` (_code @ 0x37f188, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4038(unsigned int *);
int nw_snd_internal_driver_StreamBufferPool_Free(unsigned int);
int nw_snd_internal_driver_Voice_Free(void);

extern unsigned char DAT_00421ddc; /* 0x421ddc */
extern unsigned char DAT_00421e14; /* 0x421e14 */
extern unsigned char DAT_00421e44; /* 0x421e44 */

/* Supplied declaration required: FUN_002c4038. */
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */


unsigned int * FUN_0037f188(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  param_1[0x11] = (unsigned int)&DAT_00421e44;
  *param_1 = (unsigned int)&DAT_00421e14;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(unsigned char *)((int)param_1 + 0x52) = 1;
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x34]) {
      do {
        if (param_1[temp_v0 * 0xd0 + 0x36] != 0) {
          nw_snd_internal_driver_StreamBufferPool_Free(param_1[0x19]);
          param_1[temp_v0 * 0xd0 + 0x36] = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x34]);
    }
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x34]) {
      do {
        if (param_1[temp_v0 * 0xd0 + 0x42] != 0) {
          nw_snd_internal_driver_Voice_Free();
          param_1[temp_v0 * 0xd0 + 0x42] = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x34]);
    }
    param_1[0x19] = 0;
    *(unsigned char *)(param_1 + 3) = 0;
    *(unsigned char *)(param_1 + 0x14) = 0;
    FUN_002c4038(param_1);
  }
  *param_1 = (unsigned int)&DAT_00421ddc;
  return param_1;
}

} /* extern "C" */
