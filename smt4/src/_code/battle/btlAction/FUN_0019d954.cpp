/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019d954` (_code @ 0x19d954, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c498c(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002c498c. */


void FUN_0019d954(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0043427c == 0) {
    temp_v0 = 0x100;
    FUN_002c498c(0x100,0x100,0,0x3c74,1);
    DAT_0043427c = temp_v0;
  }
  return;
}

} /* extern "C" */
