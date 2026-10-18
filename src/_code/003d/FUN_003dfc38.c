/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfc38` (_code @ 0x3dfc38, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int FUN_00239c50(void);
/* Supplied declaration required: FUN_00356d94. */


void FUN_003dfc38(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  temp_v0 = FUN_00239c50();
  FUN_00356d94(&temp_v0,param_2);
  return;
}
