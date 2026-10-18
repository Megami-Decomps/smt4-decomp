/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_anim_PlayPolicy_Loop` (_code @ 0x1c37f8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001b4030. */
/* Supplied declaration required: hardfp_floorf. */


void nw_anim_PlayPolicy_Loop(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 5 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s2;
  
  if (in_s1 - in_s0 != 0.0f) {
    if (in_s2 - in_s0 < 0.0f) {
      hardfp_floorf();
    }
    FUN_001b4030();
  }
  return;
}
