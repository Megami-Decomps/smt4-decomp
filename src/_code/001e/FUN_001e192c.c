/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e192c` (_code @ 0x1e192c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0025cc14. */
/* Supplied declaration required: FUN_002c4360. */
extern unsigned int FUN_002c5e3c(unsigned int, unsigned int *, unsigned int, unsigned int);


void FUN_001e192c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  temp_v0 = FUN_002c5e3c(param_2,(unsigned int *)&temp_v1,1,0x80);
  FUN_0025cc14(param_1,temp_v0,temp_v1,param_3);
  FUN_002c4360(temp_v0);
  return;
}
