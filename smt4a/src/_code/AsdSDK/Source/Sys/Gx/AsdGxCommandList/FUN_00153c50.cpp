/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153c50` (_code @ 0x153c50, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_005b3ff0; /* 0x5b3ff0 */

/* Supplied declaration required: FUN_00163060. */


void FUN_00153c50(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x310,1);
  *puVar1 = DAT_005b3ff0;
  return;
}

} /* extern "C" */
