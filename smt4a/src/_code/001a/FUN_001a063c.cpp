/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a063c` (_code @ 0x1a063c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_001a0778(int, int);
extern int FUN_001a07c4(int, int *, int, unsigned int);


void FUN_001a063c(int *param_1,int param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0 && param_2 != 0) {
    temp_v1 = param_4;
    temp_v0 = FUN_001a0778(temp_v0,((temp_v0 - param_1[2]) & 0xfffffffcU) + 0x18);
    *param_1 = temp_v0;
    temp_v0 = FUN_001a07c4(temp_v0,&temp_v1,param_2,param_3);
    *param_1 = temp_v0;
    if ((unsigned int *)param_1[3] != (unsigned int *)0x0) {
      *(unsigned int *)param_1[3] = (unsigned int)(temp_v0 - param_1[2]) >> 3;
    }
    param_1[2] = *param_1;
    param_1[3] = temp_v1;
    if (param_1[4] == 0) {
      param_1[4] = (*param_1 - param_1[1]) & 0xfffffffc;
    }
  }
  return;
}

} /* extern "C" */
