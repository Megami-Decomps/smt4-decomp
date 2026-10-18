/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9fdc` (_code @ 0x2c9fdc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00435d60; /* 0x435d60 */

extern unsigned int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_00335db4. */


void FUN_002c9fdc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  if (DAT_00435d60 != 0) {
    FUN_00335db4(DAT_00435d60,temp_v0);
    return;
  }
  return;
}
