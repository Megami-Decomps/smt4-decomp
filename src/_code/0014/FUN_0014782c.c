/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014782c` (_code @ 0x14782c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00147c0c. */
extern unsigned int FUN_002ad4f0(void);


void FUN_0014782c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ad4f0();
  FUN_00147c0c(temp_v0,0xffff8001,param_1,param_2);
  return;
}
