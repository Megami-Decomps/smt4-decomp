/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00453e78` (_code @ 0x453e78, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00456558(...);
int FUN_005070d4(int, unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned int libc_strlen(int);
/* Supplied declaration required: FUN_00456558. */
/* Supplied declaration required: FUN_005070d4. */
extern int nw_ut_ResDicPatricia_Get(int *, int, unsigned int);


void FUN_00453e78(int param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8 [2];
  int temp_v9 [6];
  
  temp_v4 = 0;
  temp_v6 = *(int *)(*(int *)(param_2 + 8) + 0x10);
  if (0 < temp_v6) {
    temp_v7 = 0;
    do {
      piVar1 = (int *)(*(int *)(param_2 + 8) + 0x14);
      temp_v1 = *piVar1;
      temp_v2 = temp_v7;
      if (temp_v1 != 0) {
        temp_v2 = (int)piVar1 + temp_v1;
      }
      temp_v9[0] = 0;
      if (temp_v2 != 0) {
        piVar1 = (int *)(temp_v2 + temp_v4 * 0x10 + 0x28);
        temp_v2 = *piVar1;
        temp_v9[0] = temp_v7;
        if (temp_v2 != 0) {
          temp_v9[0] = (int)piVar1 + temp_v2;
        }
      }
      switch(*(unsigned int *)(temp_v9[0] + 0x10)) {
      default:
        temp_v2 = temp_v7;
        goto LAB_00453fc0;
      case 1:
        temp_v2 = *(int *)(temp_v9[0] + 0x1c);
        break;
      case 2:
        temp_v2 = *(int *)(temp_v9[0] + 0x1c);
        break;
      case 3:
        temp_v2 = *(int *)(temp_v9[0] + 0x1c);
        break;
      case 4:
        temp_v2 = *(int *)(temp_v9[0] + 0x1c);
        break;
      case 5:
        temp_v2 = *(int *)(temp_v9[0] + 0x1c);
      }
      temp_v1 = temp_v7;
      if (temp_v2 != 0) {
        temp_v1 = temp_v2 + temp_v9[0] + 0x1c;
      }
      piVar1 = (int *)(*(int *)(param_1 + 8) + 0xc0);
      temp_v2 = *piVar1;
      temp_v8[0] = temp_v7;
      if (temp_v2 != 0) {
        temp_v8[0] = (int)piVar1 + temp_v2;
      }
      if (!(temp_v8[0] == 0 || temp_v1 == 0)) {
        temp_v0 = libc_strlen(temp_v1);
        temp_v2 = nw_ut_ResDicPatricia_Get(temp_v8,temp_v1,temp_v0);
        if (temp_v2 != 0) {
          temp_v2 = ((temp_v2 - temp_v8[0]) - 0x1c) >> 4;
        }
        else {
          temp_v2 = -1;
        }
      }
      else {
        temp_v2 = -1;
      }
LAB_00453fc0:
      temp_v5 = *(int *)(*(int *)(param_1 + 0x164) + temp_v2 * 4);
      *(int *)(*(int *)(param_2 + 0x24) + temp_v4 * 4) = temp_v2;
      FUN_005070d4(temp_v5,*(unsigned int *)(temp_v9[0] + 0x10));
      temp_v1 = FUN_00456558(temp_v5,temp_v9);
      temp_v2 = temp_v1;
      if (*(int *)(temp_v9[0] + 0x10) == 2) {
        temp_v3 = *(int *)(temp_v1 + 0xc);
        temp_v2 = temp_v7;
        if (temp_v3 != 0) {
          temp_v2 = temp_v1 + 0xc + temp_v3;
        }
      }
      *(int *)(*(int *)(param_2 + 0x44) + temp_v4 * 4) = temp_v2 + *(int *)(temp_v9[0] + 8);
      FUN_005070d4(temp_v5,*(unsigned int *)(temp_v9[0] + 0x10));
      temp_v0 = FUN_00456558(temp_v5,temp_v9);
      *(unsigned int *)(*(int *)(param_2 + 0x34) + temp_v4 * 4) = temp_v0;
      temp_v2 = FUN_005070d4(temp_v5,*(unsigned int *)(temp_v9[0] + 0x10));
      if (temp_v2 != 0) {
        temp_v1 = FUN_00456558(temp_v5,temp_v9,*(unsigned int *)(temp_v5 + 8));
        temp_v2 = temp_v1;
        if (*(int *)(temp_v9[0] + 0x10) == 2) {
          temp_v5 = *(int *)(temp_v1 + 0xc);
          temp_v2 = temp_v7;
          if (temp_v5 != 0) {
            temp_v2 = temp_v1 + 0xc + temp_v5;
          }
        }
        *(int *)(*(int *)(param_2 + 0x54) + temp_v4 * 4) = *(int *)(temp_v9[0] + 8) + temp_v2;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v6);
  }
  return;
}

} /* extern "C" */
