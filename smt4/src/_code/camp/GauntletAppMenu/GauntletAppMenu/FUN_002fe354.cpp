/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe354` (_code @ 0x2fe354, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c43b4(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_0043dc88; /* 0x43dc88 */

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002fe354(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0043dc88 != (unsigned int *)0x0) && (temp_v0 = FUN_002bf244(*DAT_0043dc88), temp_v0 != 0)) {
    FUN_002c43b4(*DAT_0043dc88,0);
    return;
  }
  return;
}

} /* extern "C" */
