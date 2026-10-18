/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004232e0` (_code @ 0x4232e0, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;


unsigned int FUN_004232e0(int param_1,int *param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c) != 4) &&
      (*(unsigned int *)(param_3 + 0x14) <= param_5)) &&
     (temp_v1 = param_4, temp_v0 = (**(romwright_code **)(*param_2 + 0x10))(param_2,&temp_v1),
     (-temp_v0 & temp_v1) != 0)) {
    temp_v0 = param_1 + (*(unsigned int *)(param_1 + 0x58) & 3) * 0x14;
    *(unsigned int *)(temp_v0 + 0x14) = param_5;
    *(int **)(temp_v0 + 8) = param_2;
    *(int *)(temp_v0 + 0xc) = param_3;
    *(unsigned int *)(temp_v0 + 0x10) = param_4;
    *(unsigned char *)(temp_v0 + 0x18) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    return 1;
  }
  return 0;
}
