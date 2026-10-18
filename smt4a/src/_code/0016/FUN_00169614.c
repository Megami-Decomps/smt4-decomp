/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169614` (_code @ 0x169614, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0063e900; /* 0x63e900 */
extern unsigned char DAT_0063e904; /* 0x63e904 */
extern unsigned char DAT_0063e905; /* 0x63e905 */
extern int DAT_0063f504; /* 0x63f504 */
extern int DAT_0063f508; /* 0x63f508 */

/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */


void FUN_00169614(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((param_1 != 0xffffffff) && (1 >= param_1)) &&
     (temp_v0 = param_1 * 0x3c, *(int *)(temp_v0 + 0x63e8dc) != 0)) {
    (&DAT_0063e905)[temp_v0] = 0x40;
    (&DAT_0063e900)[param_1 * 0xf] = 0;
    (&DAT_0063e904)[temp_v0] = 0;
    nw_snd_SoundHeap_LoadState(temp_v0 + 0x63e8cc,*(unsigned int *)(temp_v0 + 0x63e8f8));
    DAT_0063f504 = temp_v0 + 0x63e8cc;
  }
  else {
    DAT_0063f504 = 0;
  }
  if (((param_2 != 0xffffffff) && (param_2 < 2)) &&
     (temp_v0 = param_2 * 0x3c, *(int *)(temp_v0 + 0x63e8dc) != 0)) {
    (&DAT_0063e905)[temp_v0] = 0x40;
    (&DAT_0063e900)[param_2 * 0xf] = 0;
    (&DAT_0063e904)[temp_v0] = 0;
    nw_snd_SoundHeap_LoadState(temp_v0 + 0x63e8cc,*(unsigned int *)(temp_v0 + 0x63e8f8));
    DAT_0063f508 = temp_v0 + 0x63e8cc;
    return;
  }
  DAT_0063f508 = 0;
  return;
}
