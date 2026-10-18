/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019d84c` (_code @ 0x19d84c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043427c; /* 0x43427c */

extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_0019d84c(void)

{
  if (DAT_0043427c == 0) {
    DAT_0043427c = FUN_002c4b84(0x100,0x100,0,0x3c74,1);
  }
  return;
}
