/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00162790` (_code @ 0x162790, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00181ae0(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00181ae0. */
extern unsigned int wstrlen(unsigned int);


void FUN_00162790(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = wstrlen(param_3);
  FUN_00181ae0(param_2,param_1,param_3,temp_v0);
  return;
}

} /* extern "C" */
