/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_anim_PlayPolicy_Loop` (_code @ 0x151500, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014d6f0(void);
int __hardfp_floorf(void);

/* Supplied declaration required: FUN_0014d6f0. */
/* Supplied declaration required: __hardfp_floorf. */


void nw_anim_PlayPolicy_Loop(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 5 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s2;
  
  if (in_s1 - in_s0 != 0.0f) {
    if (in_s2 - in_s0 < 0.0f) {
      __hardfp_floorf();
    }
    FUN_0014d6f0();
  }
  return;
}

} /* extern "C" */
