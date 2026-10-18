/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119da8` (_code @ 0x119da8, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e2634; /* 0x4e2634 */
extern unsigned char DAT_004e2636; /* 0x4e2636 */
extern unsigned char DAT_004e2637; /* 0x4e2637 */
extern unsigned int DAT_004e3180; /* 0x4e3180 */

/* Supplied declaration required: FUN_002bda30. */
/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */


unsigned int FUN_00119da8(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int unaff_r5;
  unsigned char temp_v5;
  
  temp_v5 = param_1 == 0xffffffff;
  if (temp_v5) {
    param_1 = 0;
  }
  temp_v3 = param_1;
  temp_v1 = param_1;
  if (((!temp_v5) && (temp_v3 = 0, temp_v1 = DAT_004e3180, param_1 < 4)) &&
     (temp_v0 = param_1 * 0x3c, (&DAT_004e2636)[temp_v0] != '\0')) {
    if (unaff_r5 != 0) {
      temp_v4 = 0;
      do {
        temp_v2 = *(int *)(temp_v0 + 0x4e25fc + temp_v4 * 4 + 0x20);
        if (temp_v2 != 0) {
          FUN_002bda30(temp_v2,0);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      (&DAT_004e2634)[temp_v0] = 0x40;
      if ((&DAT_004e2637)[temp_v0] != '\0') {
        nw_snd_SoundHeap_LoadState(temp_v0 + 0x4e25fc,*(unsigned int *)(temp_v0 + 0x4e2630));
      }
    }
    temp_v3 = 1;
    temp_v1 = temp_v0 + 0x4e25fc;
  }
  DAT_004e3180 = temp_v1;
  return temp_v3;
}
