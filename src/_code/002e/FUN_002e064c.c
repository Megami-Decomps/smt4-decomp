/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e064c` (_code @ 0x2e064c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int *DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_002a7218. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002e064c(void)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  piVar1 = DAT_00434260;
  if (DAT_00434260 != (int *)0x0) {
    if (DAT_00434260[1] != 0) {
      FUN_002a7218();
      piVar1[1] = 0;
    }
    if (*piVar1 != 0) {
      FUN_002c415c();
      *piVar1 = 0;
    }
    FUN_002c415c(DAT_00434260);
    DAT_00434260 = (int *)0x0;
  }
  FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x48),0);
  return;
}
