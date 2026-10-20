/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9a48` (_code @ 0x3b9a48, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int g_gameState; /* 0x5f15fc */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b9a48(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0x578);
  temp_v1 = FUN_0018719c(0x594);
  temp_v2 = temp_v1 == 0 && temp_v0 - 200U < 100;
  if (g_gameState == 0x1a) {
    temp_v2 = 2;
  }
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
