/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043080c` (_code @ 0x43080c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00430258(unsigned int);
int FUN_0043070c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_nnCecdHandle; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_00430258. */
/* Supplied declaration required: FUN_0043070c. */


void FUN_0043080c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_0043070c();
    return;
  }
  if (g_nnCecdHandle != 0) {
    FUN_00430258(param_1);
  }
  return;
}

} /* extern "C" */
