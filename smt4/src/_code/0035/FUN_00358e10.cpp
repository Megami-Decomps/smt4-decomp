/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358e10` (_code @ 0x358e10, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003590b4(unsigned int);
int FUN_0035952c(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int g_nnCecdHandle; /* 0x473848 */
extern int DAT_0047384c; /* 0x47384c */

/* Supplied declaration required: FUN_003590b4. */
/* Supplied declaration required: FUN_0035952c. */


void FUN_00358e10(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0047384c != 0) {
    FUN_0035952c();
  }
  else if (g_nnCecdHandle != 0) {
    FUN_003590b4(param_1);
    return;
  }
  return;
}

} /* extern "C" */
