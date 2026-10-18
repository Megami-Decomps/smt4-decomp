/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a8c4` (_code @ 0x13a8c4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

/* Supplied declaration required: FUN_00146e50. */
extern unsigned int FUN_002ad3a4(void);


void FUN_0013a8c4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ad3a4();
  FUN_00146e50(temp_v0,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}
