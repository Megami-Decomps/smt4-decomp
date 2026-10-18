/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c304` (_code @ 0x39c304, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0039c350; /* 0x39c350 */
extern int DAT_005e2108; /* 0x5e2108 */
extern int DAT_005e210c; /* 0x5e210c */

/* Supplied declaration required: FUN_002804b0. */


void FUN_0039c304(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005e2108 == 0) {
    FUN_002804b0(&LAB_0039c350,&DAT_005e2108,1);
  }
  if (DAT_005e210c == 0) {
    FUN_002804b0(0x39c36c,&DAT_005e210c,1);
    return;
  }
  return;
}
