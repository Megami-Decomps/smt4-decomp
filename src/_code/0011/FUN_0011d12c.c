/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d12c` (_code @ 0x11d12c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_00471a70; /* 0x471a70 */
extern unsigned int DAT_00471a84; /* 0x471a84 */
extern unsigned int DAT_00471a8c; /* 0x471a8c */
extern unsigned int DAT_004e6c5c; /* 0x4e6c5c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00129bf8. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_0011d12c(void)

{
/* irregular: 4 native warning(s); review required */
  FUN_002c38a4(&DAT_004e6c5c);
  if (DAT_00471a70 != '\0') {
    FUN_00129bf8(DAT_00471a8c);
    software_interrupt(0x23);
    DAT_00471a84 = 0;
    DAT_00471a70 = 0;
    FUN_002c3820(&DAT_004e6c5c);
    return;
  }
  FUN_002c3820(&DAT_004e6c5c);
  return;
}
