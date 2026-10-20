/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e2bc` (_code @ 0x31e2bc, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned int FUN_002c30c4(int);
extern int nw_ut_ResDicPatricia_Get(int *, int, unsigned int);


void FUN_0031e2bc(int param_1,int param_2,unsigned char param_3)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v4 = 0;
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + 0xd0);
  temp_v5 = *piVar1;
  if (temp_v5 != 0) {
    temp_v5 = (int)piVar1 + temp_v5;
  }
  else {
    temp_v5 = 0;
  }
  if (temp_v5 != 0 && param_2 != 0) {
    temp_v0 = FUN_002c30c4(param_2);
    temp_v1 = nw_ut_ResDicPatricia_Get(&temp_v5,param_2,temp_v0);
    if ((temp_v1 != 0) && (temp_v1 = ((temp_v1 - temp_v5) - 0x1c) >> 4, temp_v1 != -1)) {
      temp_v2 = *(int *)(param_1 + 0x2c);
      if (*(int *)(temp_v2 + 0x17c) != *(int *)(temp_v2 + 0x180)) {
        temp_v4 = *(int *)(temp_v2 + 0x17c) + temp_v1 * 8;
      }
      else {
        piVar1 = (int *)(*(int *)(temp_v2 + 8) + 0xd0);
        temp_v3 = *piVar1;
        temp_v2 = temp_v4;
        if (temp_v3 != 0) {
          temp_v2 = (int)piVar1 + temp_v3;
        }
        if (temp_v2 == 0) {
          temp_v4 = 0;
        }
        else {
          piVar1 = (int *)(temp_v2 + temp_v1 * 0x10 + 0x28);
          temp_v1 = *piVar1;
          if (temp_v1 != 0) {
            temp_v4 = temp_v1 + (int)piVar1;
          }
        }
      }
      *(unsigned char *)(temp_v4 + 4) = param_3;
    }
  }
  return;
}

} /* extern "C" */
