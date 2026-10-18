/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003563a4` (_code @ 0x3563a4, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int FUN_00239c50(void);
/* Supplied declaration required: FUN_00356c78. */


void FUN_003563a4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  temp_v0 = FUN_00239c50();
  FUN_00356c78(&temp_v0,param_2);
  return;
}
