/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290e98` (_code @ 0x290e98, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001642e4(unsigned int, int *, int, int);
int FUN_0019a5a0(unsigned int);
int FUN_00272204(unsigned int, unsigned int, int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00272204. */


void FUN_00290e98(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  FUN_001642e4(param_2,&temp_v0,1,0x80);
  FUN_00272204(param_1,param_2,temp_v0,param_3);
  FUN_0019a5a0(param_2);
  return;
}

} /* extern "C" */
