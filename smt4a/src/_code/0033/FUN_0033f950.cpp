/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f950` (_code @ 0x33f950, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00486328(int, unsigned int, int, int, int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_naviMain; /* 0x587f28 */

/* Supplied declaration required: FUN_00486328. */


void FUN_0033f950(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (g_naviMain == 0) {
    return;
  }
  FUN_00486328(g_naviMain + 0x68,param_1,0,0,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
