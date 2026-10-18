/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170158` (_code @ 0x170158, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0018b4ec. */
extern unsigned int FUN_001a2a5c(void);


void FUN_00170158(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_001a2a5c();
  FUN_0018b4ec(temp_v0,param_1,param_2,param_3);
  return;
}
