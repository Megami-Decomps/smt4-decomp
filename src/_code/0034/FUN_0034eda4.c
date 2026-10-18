/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034eda4` (_code @ 0x34eda4, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_0044d0fc; /* 0x44d0fc */
extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

/* Supplied declaration required: FUN_002bd620. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_0034eda4(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  
  if (param_1 < DAT_0044d10c) {
    FUN_002c3aa8(&DAT_004c40f8);
    piVar1 = (int *)(DAT_0044d100 + param_1 * 0x70);
    if (*piVar1 != 0) {
      FUN_002bd620();
      *piVar1 = 0;
    }
    if (piVar1[1] != 0) {
      (**(romwright_code **)(*DAT_0044d0fc + 4))();
      piVar1[1] = 0;
    }
    FUN_002c3a24(&DAT_004c40f8);
    return;
  }
  return;
}
