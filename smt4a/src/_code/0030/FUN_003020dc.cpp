/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003020dc` (_code @ 0x3020dc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_00599360; /* 0x599360 */
extern int *DAT_00599364; /* 0x599364 */


void FUN_003020dc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  (**(romwright_code **)(*DAT_00599364 + 0x14))(DAT_00599364,param_1,param_2,param_3,param_4,DAT_00599360);
  return;
}

} /* extern "C" */
