/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025b408` (_code @ 0x25b408, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002878e4(void);
int mathDistanceBetweenPoints(void);

extern int g_gameState; /* 0x49f91c */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002878e4. */
/* Supplied declaration required: mathDistanceBetweenPoints. */


unsigned int FUN_0025b408(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s4, in_s6, in_s7; 5 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s4;
  float in_s6;
  float in_s7;
  
  if (g_gameState >= 100) {
    FUN_002878e4();
    if (in_s0 < in_s6) {
      return 1;
    }
  }
  else if ((romwright_fabs_4(in_s1 - in_s4) < in_s7) && (mathDistanceBetweenPoints(), in_s0 < in_s6)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
