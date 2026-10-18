/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158c48` (_code @ 0x158c48, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_002c31e8(int *, int, unsigned int);
extern unsigned int FUN_002c3290(int);


void FUN_00158c48(int param_1,int param_2,int param_3)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v4 = 0;
  temp_v5 = *(int *)(*(int *)(param_2 + 8) + 0x10);
  if (0 < temp_v5) {
    temp_v6 = 0;
    do {
      piVar1 = (int *)(*(int *)(param_2 + 8) + 0x14);
      temp_v1 = *piVar1;
      temp_v2 = temp_v6;
      if (temp_v1 != 0) {
        temp_v2 = (int)piVar1 + temp_v1;
      }
      if (temp_v2 == 0) {
        temp_v2 = 0;
      }
      else {
        piVar1 = (int *)(temp_v2 + temp_v4 * 0x10 + 0x28);
        temp_v1 = *piVar1;
        temp_v2 = temp_v6;
        if (temp_v1 != 0) {
          temp_v2 = temp_v1 + (int)piVar1;
        }
      }
      temp_v1 = *(int *)(temp_v2 + 4);
      if (temp_v1 != 0) {
        temp_v1 = temp_v1 + temp_v2 + 4;
      }
      else {
        temp_v1 = 0;
      }
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x220) + 8) + 0x1c);
      temp_v2 = *piVar1;
      temp_v7 = temp_v6;
      if (temp_v2 != 0) {
        temp_v7 = (int)piVar1 + temp_v2;
      }
      if (!(temp_v7 == 0 || temp_v1 == 0)) {
        temp_v0 = FUN_002c3290(temp_v1);
        temp_v2 = FUN_002c31e8(&temp_v7,temp_v1,temp_v0);
        if (temp_v2 != 0) {
          temp_v3 = *(int *)(temp_v2 + 0xc);
          temp_v1 = temp_v6;
          if (temp_v3 != 0) {
            temp_v1 = temp_v2 + 0xc + temp_v3;
          }
        }
        else {
          temp_v1 = 0;
        }
      }
      else {
        temp_v1 = 0;
      }
      temp_v2 = *(int *)(temp_v1 + 8);
      if (param_3 != 0) {
        temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x220) + 0x1c))();
        *(int *)(*(int *)(param_2 + 0x44) + temp_v4 * 4) = *(int *)(temp_v1 + 4) + temp_v2 * 0x30;
      }
      else {
        temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x220) + 0xc))();
        *(int *)(*(int *)(param_2 + 0x44) + temp_v4 * 4) = *(int *)(temp_v1 + 4) + temp_v2 * 0x40;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5);
  }
  *(char *)(*(int *)(param_1 + 0x228) + 100) = (char)param_3;
  return;
}
