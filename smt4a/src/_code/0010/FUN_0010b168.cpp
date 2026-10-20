/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b168` (_code @ 0x10b168, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00111560(unsigned int, unsigned int, int);
int FUN_00111644(unsigned int, unsigned int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00111560. */
/* Supplied declaration required: FUN_00111644. */


void FUN_0010b168(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_1 + 0x10) = param_2;
  temp_v0 = param_4;
  FUN_00111560(*(unsigned int *)(param_1 + 0x18),param_2,0);
  temp_v0 = param_2;
  FUN_00111644(*(unsigned int *)(param_1 + 0x18),param_3,&temp_v0);
  return;
}

} /* extern "C" */
