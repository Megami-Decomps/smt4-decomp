/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003286fc` (_code @ 0x3286fc, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044f9a8; /* 0x44f9a8 */
extern unsigned char DAT_0044fb28; /* 0x44fb28 */
extern unsigned char *DAT_0044fcbc; /* 0x44fcbc */
extern unsigned int DAT_0044fcc0; /* 0x44fcc0 */

/* Supplied declaration required: FUN_00243d20. */


void FUN_003286fc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  DAT_0044fcbc = &DAT_0044fb28;
  DAT_0044fcc0 = 8;
  FUN_00243d20(temp_v0,temp_v0 + 0x24,*(unsigned int *)(temp_v0 + 0x8c));
  DAT_0044fcbc = &DAT_0044f9a8;
  DAT_0044fcc0 = 8;
  return;
}
