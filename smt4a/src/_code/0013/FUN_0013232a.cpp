/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013232a` (_code @ 0x13232a, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00308168(int *, unsigned int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00308168. */


void FUN_0013232a(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int uStack_c;
  
  temp_v0 = *param_2;
  uStack_c = param_4;
  FUN_00308168(&uStack_c,param_1,&temp_v0);
  return;
}

} /* extern "C" */
