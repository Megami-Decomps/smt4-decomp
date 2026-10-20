/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a96fc` (_code @ 0x4a96fc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00336aec(int, unsigned int, unsigned int, unsigned int, unsigned int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern unsigned char g_btlUi; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00336aec. */


void FUN_004a96fc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  FUN_00336aec((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 0x28c4,param_3,param_2,param_4,param_5,0);
  return;
}

} /* extern "C" */
