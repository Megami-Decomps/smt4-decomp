/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126dd4` (_code @ 0x126dd4, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

/* Supplied declaration required: FUN_0015a3f4. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_00126dd4(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_0044d10c) {
    FUN_002c3aa8(&DAT_004c40f8);
    FUN_0015a3f4(*(unsigned int *)(DAT_0044d100 + param_1 * 0x70),0);
    FUN_002c3a24(&DAT_004c40f8);
    return;
  }
  return;
}
