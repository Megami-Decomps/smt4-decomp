/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005120c8` (_code @ 0x5120c8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001f3dd0; /* 0x1f3dd0 */
extern unsigned int DAT_005c0eb8; /* 0x5c0eb8 */
extern unsigned int DAT_005c0ec0; /* 0x5c0ec0 */
extern unsigned int DAT_005c0ec8; /* 0x5c0ec8 */
extern unsigned char DAT_00646598; /* 0x646598 */

/* Supplied declaration required: FUN_002f5020. */


void FUN_005120c8(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_2 = param_1;
  FUN_002f5020(&DAT_00646598,&LAB_001f3dd0,4,0x18);
  DAT_005c0eb8 = 0xf0111;
  DAT_005c0ec0 = 0xf0110;
  DAT_005c0ec8 = 0x803f0112;
  return;
}
