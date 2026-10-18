/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001677c0` (_code @ 0x1677c0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_00630730; /* 0x630730 */
extern float DAT_00630740; /* 0x630740 */
extern float DAT_00630750; /* 0x630750 */
extern float DAT_00630760; /* 0x630760 */
extern unsigned char DAT_00630775; /* 0x630775 */
extern float DAT_0063077c; /* 0x63077c */


void FUN_001677c0(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if ((int)in_s0 >= 0x3f800001) {
    in_s0 = 1.0f;
  }
  if (in_s0 < 0.0f) {
    in_s0 = 0.0f;
  }
  DAT_0063077c = in_s0;
  DAT_00630730 = in_s0;
  DAT_00630740 = in_s0;
  DAT_00630750 = in_s0;
  DAT_00630760 = in_s0;
  DAT_00630775 = 1;
  return;
}
