/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029dd7c` (_code @ 0x29dd7c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00293ba8(void);

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: FUN_00293ba8. */


void FUN_0029dd7c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  
  temp_v1 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  temp_v0 = *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e66);
  *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e66) = (char)param_1;
  if (temp_v0 != '\b') {
    if (temp_v0 != '\a') {
      return;
    }
    if (param_1 == 7) {
      return;
    }
  }
  else if (param_1 == 8) {
    return;
  }
  *(unsigned int *)(temp_v1 + 0x12e4) = 0;
  FUN_00293ba8();
  *(unsigned char *)(temp_v1 + 0x1e63) = 0;
  return;
}

} /* extern "C" */
