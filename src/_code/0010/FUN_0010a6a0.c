/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a6a0` (_code @ 0x10a6a0, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern unsigned int DAT_004c3ce0; /* 0x4c3ce0 */

/* Supplied declaration required: FUN_0011b590. */
/* Supplied declaration required: FUN_0011b6a8. */
/* Supplied declaration required: FUN_0011d020. */
/* Supplied declaration required: FUN_00123674. */
/* Supplied declaration required: FUN_002bf2b4. */
/* Supplied declaration required: FUN_002bf2cc. */


void FUN_0010a6a0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  if (param_1 != 2) {
    FUN_002bf2cc(0x3fff);
    FUN_00123674(0x3fff,1);
    FUN_002bf2b4();
  }
  else {
    FUN_0011d020();
  }
  FUN_0011b6a8(&DAT_004c3b20);
  FUN_0011b590(DAT_004c3ce0);
  return;
}
