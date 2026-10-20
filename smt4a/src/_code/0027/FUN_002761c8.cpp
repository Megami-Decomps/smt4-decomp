/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002761c8` (_code @ 0x2761c8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004d6104(int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00571600; /* 0x571600 */

extern unsigned int FUN_00164a9c(void);
/* Supplied declaration required: FUN_004d6104. */


void FUN_002761c8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  if (DAT_00571600 != 0) {
    FUN_004d6104(DAT_00571600,temp_v0);
    return;
  }
  return;
}

} /* extern "C" */
