/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6a3c` (_code @ 0x3b6a3c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_0057f554; /* 0x57f554 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


void FUN_003b6a3c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0057f554 != (unsigned int *)0x0) && (temp_v0 = FUN_00163e40(*DAT_0057f554), temp_v0 != 0)) {
    FUN_001631d0(*DAT_0057f554,0);
    return;
  }
  return;
}
