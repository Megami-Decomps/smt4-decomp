/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d6f0` (_code @ 0x29d6f0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002941b0(void);
int distSpatial(void);

extern int g_gameState; /* 0x5f15fc */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002941b0. */
/* Supplied declaration required: distSpatial. */


unsigned int FUN_0029d6f0(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s4, in_s6, in_s7; 5 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s4;
  float in_s6;
  float in_s7;
  
  if (g_gameState >= 100) {
    FUN_002941b0();
    if (in_s0 < in_s6) {
      return 1;
    }
  }
  else if ((romwright_fabs_4(in_s1 - in_s4) < in_s7) && (distSpatial(), in_s0 < in_s6)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
