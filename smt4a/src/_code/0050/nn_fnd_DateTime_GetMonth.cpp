/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_DateTime_GetMonth` (_code @ 0x502180, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e8c4(int, int [2], int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0016e8c4. */
extern int ll_sdiv(int, int, unsigned int, unsigned int);


int nn_fnd_DateTime_GetMonth(unsigned int *param_1)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int temp_v0;
  int in_r3;
  int temp_v1 [2];
  
  temp_v1[0] = in_r3;
  temp_v0 = ll_sdiv(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (unsigned int)(0x83037bff < *param_1),86400000
                  ,0);
  FUN_0016e8c4(0,temp_v1,0,temp_v0 - 0xb2407);
  return temp_v1[0];
}

} /* extern "C" */
