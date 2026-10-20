/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d21dc` (_code @ 0x3d21dc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameState; /* 0x5f15fc */

extern int FUN_00376f94(void);


unsigned char FUN_003d21dc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00376f94();
  return (*(signed char *)((unsigned char *)&g_gameState + 0x27)) != '\0' && temp_v0 >= 101;
}

} /* extern "C" */
