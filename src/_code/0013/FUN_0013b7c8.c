/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b7c8` (_code @ 0x13b7c8, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_004656c8; /* 0x4656c8 */
extern unsigned char DAT_004656c9; /* 0x4656c9 */

/* Supplied declaration required: FUN_0013b844. */
/* Supplied declaration required: FUN_0013b8bc. */


void FUN_0013b7c8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_004656c8 != '\0') {
    temp_v0 = (unsigned int)DAT_004656c9;
    FUN_0013b8bc();
    if (temp_v0 == 0xc9405001) {
      FUN_0013b844(DAT_004656c9);
      return;
    }
  }
  return;
}
