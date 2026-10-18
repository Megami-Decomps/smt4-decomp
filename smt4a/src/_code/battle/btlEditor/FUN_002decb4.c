/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002decb4` (_code @ 0x2decb4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005737e0; /* 0x5737e0 */

extern unsigned int FUN_00164a9c(void);
/* Supplied declaration required: FUN_004f4938. */


void FUN_002decb4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  if (DAT_005737e0 != 0) {
    FUN_004f4938(DAT_005737e0,temp_v0);
    return;
  }
  return;
}
