/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe9d2` (_code @ 0x2fe9d2, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00307e26(unsigned int [2], int, int *, unsigned int **);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00307e26. */


void FUN_002fe9d2(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *temp_v0;
  int temp_v1;
  unsigned int temp_v2 [2];
  
  temp_v0 = *(unsigned int **)(param_1 + 0x10);
  temp_v1 = *temp_v0;
  temp_v2[0] = param_4;
  FUN_00307e26(temp_v2,param_1,&temp_v1,&temp_v0);
  return;
}

} /* extern "C" */
