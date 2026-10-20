/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003281c4` (_code @ 0x3281c4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00486328(int, unsigned int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int g_naviMain; /* 0x587f28 */

/* Supplied declaration required: FUN_00486328. */


void FUN_003281c4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  if (g_naviMain == 0) {
    return;
  }
  FUN_00486328(g_naviMain + 0x68,param_1,1,param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
