/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e05d8` (_code @ 0x2e05d8, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int *DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_002a755c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002e05d8(void)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  piVar1 = DAT_00434260;
  if (DAT_00434260 != (int *)0x0) {
    if (DAT_00434260[1] != 0) {
      FUN_002a755c();
      piVar1[1] = 0;
    }
    if (*piVar1 != 0) {
      FUN_002c4360();
      *piVar1 = 0;
    }
    FUN_002c4360(DAT_00434260);
    DAT_00434260 = (int *)0x0;
  }
  FUN_002c45b8(*(unsigned int *)(temp_v0 + 0x48),0);
  return;
}
