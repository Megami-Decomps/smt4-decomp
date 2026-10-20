/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1ed4` (_code @ 0x2e1ed4, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00257510(void);
int FUN_002ae9ec(int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00257510. */
extern unsigned int categoryIdFromIndex(int);
/* Supplied declaration required: FUN_002ae9ec. */


void FUN_002e1ed4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00257510();
  if (param_1 != 0) {
    temp_v0 = categoryIdFromIndex((int)*(short *)(param_1 + 0x22));
    FUN_002ae9ec(2,0x13,temp_v0,param_2,param_3,param_4);
  }
  return;
}

} /* extern "C" */
