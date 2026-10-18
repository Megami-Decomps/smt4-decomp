/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032716c` (_code @ 0x32716c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044f9a8; /* 0x44f9a8 */
extern unsigned char DAT_0044fb28; /* 0x44fb28 */
extern unsigned char *DAT_0044fcbc; /* 0x44fcbc */
extern unsigned int DAT_0044fcc0; /* 0x44fcc0 */

/* Supplied declaration required: FUN_00243e8c. */


void FUN_0032716c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  DAT_0044fcbc = &DAT_0044fb28;
  DAT_0044fcc0 = 8;
  FUN_00243e8c(temp_v0 + 0x48,temp_v0 + 0x6c,*(unsigned int *)(temp_v0 + 0xd4));
  DAT_0044fcbc = &DAT_0044f9a8;
  DAT_0044fcc0 = 8;
  return;
}
