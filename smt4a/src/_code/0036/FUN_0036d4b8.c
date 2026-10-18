/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d4b8` (_code @ 0x36d4b8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: FUN_002e6dd0. */


void FUN_0036d4b8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  for (; (int)param_1 < 0x1f; param_1 = param_1 + 1) {
    temp_v0 = 0;
    if (param_1 + 1 < 0x20) {
      temp_v0 = DAT_0057f69c + (param_1 + 1) * 100 + 0x2720c;
    }
    if (param_1 < 0x20) {
      FUN_002e59f8(temp_v0,DAT_0057f69c + param_1 * 100 + 0x2720c,100);
    }
  }
  FUN_002e6dd0(DAT_0057f69c + 0x27e28,100);
  return;
}
