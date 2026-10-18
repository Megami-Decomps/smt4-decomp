/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034dd9c` (_code @ 0x34dd9c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_00570264; /* 0x570264 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


void FUN_0034dd9c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_00570264 != (unsigned int *)0x0) && (temp_v0 = FUN_00163e40(*DAT_00570264), temp_v0 != 0)) {
    FUN_001631d0(*DAT_00570264,0);
    return;
  }
  return;
}
