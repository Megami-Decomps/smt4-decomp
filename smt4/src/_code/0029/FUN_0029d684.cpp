/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d684` (_code @ 0x29d684, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00258a24(int);
int FUN_00293ba8(void);
int timerStart(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: FUN_00258a24. */
/* Supplied declaration required: FUN_00293ba8. */
/* Supplied declaration required: timerStart. */


void FUN_0029d684(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  if (*(int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12dc) == 2 || *(int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12dc) == 3) {
    return;
  }
  if (param_1 != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e60) = 0;
    temp_v2 = *(int *)(temp_v1 + 0x12dc);
    if ((temp_v2 == 4 || temp_v2 == 5) || temp_v2 == 6) {
      *(unsigned int *)(temp_v1 + 0x12e0) = 4;
    }
    if ((temp_v2 != 4 && temp_v2 != 5) && temp_v2 != 6) {
      *(unsigned int *)(temp_v1 + 0x12dc) = 4;
      *(unsigned int *)(temp_v1 + 0x12e0) = 8;
    }
    timerStart(temp_v1 + 0x7ec,4,0);
  }
  else {
    temp_v0 = *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e66);
    if (((temp_v0 == '\b') || (temp_v0 == '\t' || temp_v0 == '\n')) || (temp_v0 == '\v' || temp_v0 == '\a')) {
      *(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12e8) = 1;
      FUN_00293ba8();
    }
  }
  if (*(char *)(temp_v1 + 0x1e67) == '\x05' || *(char *)(temp_v1 + 0x1e67) == '\x06') {
    FUN_00258a24(0);
    return;
  }
  FUN_00258a24((int)*(char *)(temp_v1 + 0x1e62));
  return;
}

} /* extern "C" */
