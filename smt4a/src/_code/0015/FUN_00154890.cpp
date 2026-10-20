/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154890` (_code @ 0x154890, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001742e4(int, int);
int nw_snd_SoundHeap_LoadState(int, unsigned int);

extern unsigned char DAT_0063e984; /* 0x63e984 */
extern unsigned char DAT_0063e986; /* 0x63e986 */
extern unsigned char DAT_0063e987; /* 0x63e987 */
extern unsigned int DAT_0063f50c; /* 0x63f50c */

/* Supplied declaration required: FUN_001742e4. */
/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */


unsigned int FUN_00154890(unsigned int param_1)

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
  if (((!temp_v5) && (temp_v3 = 0, temp_v1 = DAT_0063f50c, param_1 < 4)) &&
     (temp_v0 = param_1 * 0x3c, (&DAT_0063e986)[temp_v0] != '\0')) {
    if (unaff_r5 != 0) {
      temp_v4 = 0;
      do {
        temp_v2 = *(int *)(temp_v0 + 0x63e94c + temp_v4 * 4 + 0x20);
        if (temp_v2 != 0) {
          FUN_001742e4(temp_v2,0);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      (&DAT_0063e984)[temp_v0] = 0x40;
      if ((&DAT_0063e987)[temp_v0] != '\0') {
        nw_snd_SoundHeap_LoadState(temp_v0 + 0x63e94c,*(unsigned int *)(temp_v0 + 0x63e980));
      }
    }
    temp_v3 = 1;
    temp_v1 = temp_v0 + 0x63e94c;
  }
  DAT_0063f50c = temp_v1;
  return temp_v3;
}

} /* extern "C" */
