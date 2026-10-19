/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0944` (_code @ 0x2c0944, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002b7dc4. */
/* Supplied declaration required: FUN_002b81e4. */


void FUN_002c0944(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned long long uStack_20;
  
  FUN_002b81e4();
  FUN_002b7dc4(param_1,param_2,param_3,param_4);
  uStack_20 = 0x1024500000001;
  FUN_002adba8(&uStack_20,0x18,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}
