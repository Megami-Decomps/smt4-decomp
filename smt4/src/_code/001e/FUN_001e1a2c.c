/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1a2c` (_code @ 0x1e1a2c, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0025c9dc. */
/* Supplied declaration required: FUN_002c415c. */
extern unsigned int FUN_002c5c14(unsigned int, unsigned int *, unsigned int, unsigned int);


void FUN_001e1a2c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  temp_v0 = FUN_002c5c14(param_2,(unsigned int *)&temp_v1,1,0x80);
  FUN_0025c9dc(param_1,temp_v0,temp_v1,param_3);
  FUN_002c415c(temp_v0);
  return;
}
