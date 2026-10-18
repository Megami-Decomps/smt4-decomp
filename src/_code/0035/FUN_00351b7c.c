/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351b7c` (_code @ 0x351b7c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004092a0; /* 0x4092a0 */
extern int DAT_0044e9e8; /* 0x44e9e8 */
extern unsigned int DAT_00471bac; /* 0x471bac */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_00360608. */
/* Supplied declaration required: FUN_00360780. */
/* Supplied declaration required: FUN_003607dc. */


void FUN_00351b7c(void)

{
/* irregular: 5 native warning(s); review required */
  FUN_00360608(&DAT_00471bac,&DAT_004092a0);
  FUN_003607dc(1);
  FUN_00360780(&DAT_0044e9e8);
  software_interrupt(0x19);
  if (DAT_0044e9e8 < 0) {
    FUN_002c5468();
    return;
  }
  return;
}
