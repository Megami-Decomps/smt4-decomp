/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneNode_CreateChildren` (_code @ 0x459ab8, 0x408 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;


int nw_gfx_SceneNode_CreateChildren(int param_1,int *param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  int *temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int *temp_v9;
  int *temp_v10;
  int *temp_v11;
  unsigned int temp_v12;
  
  temp_v3 = 0;
  temp_v4 = param_2;
  temp_v9 = param_2;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if (*(int *)(param_1 + 0x44) != 0) {
      temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,*(int *)(param_1 + 0x44) << 2,0x20);
      if (temp_v1 == 0) {
        temp_v3 = -0x80000000;
      }
      if (temp_v3 < 0) {
        return temp_v3;
      }
      temp_v8 = 0;
      puVar3 = (unsigned int *)(param_1 + 0x14);
      temp_v0 = *(unsigned int *)(param_1 + 0x44) & 0x3fffffff;
      *(unsigned int *)(param_1 + 0x10) = 0;
      temp_v10 = (int *)0x0;
      temp_v11 = (int *)0x0;
      temp_v12 = 0;
      temp_v5 = temp_v1;
      temp_v7 = temp_v0;
      if ((int **)puVar3 != &temp_v4) {
        temp_v5 = *(int *)(param_1 + 0x18);
        temp_v7 = *(unsigned int *)(param_1 + 0x20);
        temp_v4 = (int *)*puVar3;
        *puVar3 = (unsigned int)param_2;
        *(int *)(param_1 + 0x18) = temp_v1;
        *(int *)(param_1 + 0x1c) = temp_v1;
        *(unsigned int *)(param_1 + 0x20) = temp_v0;
      }
      temp_v6 = temp_v5;
      temp_v1 = 0;
      if (temp_v4 != (int *)0x0) {
        temp_v1 = temp_v5;
      }
      if (temp_v4 != (int *)0x0 && temp_v1 != 0) {
        (**(romwright_code **)(*temp_v4 + 0xc))(temp_v4,temp_v5);
      }
      temp_v2 = 1;
      temp_v1 = ((int)temp_v11 - (int)temp_v10) >> 2;
      piVar4 = temp_v10;
      if (temp_v1 + 1 >= 2) {
        do {
          temp_v2 = temp_v2 + 1;
          if (*piVar4 != 0) {
            *(unsigned int *)(*piVar4 + 0xc) = 0;
          }
          piVar4 = piVar4 + 1;
        } while (temp_v2 < temp_v1 + 1);
      }
      temp_v11 = temp_v10;
      if (temp_v9 == (int *)0x0 || temp_v10 == (int *)0x0) {
        return temp_v3;
      }
    }
    else {
      temp_v8 = 0;
      temp_v9 = (int *)0x0;
      *(unsigned int *)(param_1 + 0x10) = 0;
      puVar3 = (unsigned int *)(param_1 + 0x14);
      temp_v4 = (int *)0x0;
      temp_v5 = 0;
      temp_v10 = (int *)0x0;
      temp_v11 = (int *)0x0;
      temp_v7 = 0;
      temp_v12 = 0;
      if ((int **)puVar3 != &temp_v4) {
        temp_v5 = *(int *)(param_1 + 0x18);
        temp_v7 = *(unsigned int *)(param_1 + 0x20);
        temp_v4 = (int *)*puVar3;
        *(unsigned int *)(param_1 + 0x18) = 0;
        *(unsigned int *)(param_1 + 0x1c) = 0;
        *(unsigned int *)(param_1 + 0x20) = 0;
        *puVar3 = 0;
      }
      temp_v6 = temp_v5;
      temp_v1 = 0;
      if (temp_v4 != (int *)0x0) {
        temp_v1 = temp_v5;
      }
      if (temp_v4 != (int *)0x0 && temp_v1 != 0) {
        (**(romwright_code **)(*temp_v4 + 0xc))(temp_v4,temp_v5);
      }
      temp_v2 = 1;
      temp_v1 = ((int)temp_v11 - (int)temp_v10) >> 2;
      piVar4 = temp_v10;
      if (temp_v1 + 1 >= 2) {
        do {
          temp_v2 = temp_v2 + 1;
          if (*piVar4 != 0) {
            *(unsigned int *)(*piVar4 + 0xc) = 0;
          }
          piVar4 = piVar4 + 1;
        } while (temp_v2 < temp_v1 + 1);
      }
      temp_v11 = temp_v10;
      if (temp_v9 == (int *)0x0 || temp_v10 == (int *)0x0) {
        return 0;
      }
    }
  }
  else {
    temp_v8 = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
    puVar3 = (unsigned int *)(param_1 + 0x14);
    temp_v5 = 0;
    temp_v10 = (int *)0x0;
    temp_v11 = (int *)0x0;
    temp_v7 = 0x40000000;
    temp_v12 = 0x40000000;
    if ((int **)puVar3 != &temp_v4) {
      temp_v5 = *(int *)(param_1 + 0x18);
      temp_v7 = *(unsigned int *)(param_1 + 0x20);
      temp_v4 = (int *)*puVar3;
      *puVar3 = (unsigned int)param_2;
      *(unsigned int *)(param_1 + 0x18) = 0;
      *(unsigned int *)(param_1 + 0x1c) = 0;
      *(unsigned int *)(param_1 + 0x20) = 0x40000000;
    }
    temp_v6 = temp_v5;
    temp_v1 = 0;
    if (temp_v4 != (int *)0x0) {
      temp_v1 = temp_v5;
    }
    if (temp_v4 != (int *)0x0 && temp_v1 != 0) {
      (**(romwright_code **)(*temp_v4 + 0xc))(temp_v4,temp_v5);
    }
    temp_v2 = 1;
    temp_v1 = ((int)temp_v11 - (int)temp_v10) >> 2;
    piVar4 = temp_v10;
    if (temp_v1 + 1 >= 2) {
      do {
        temp_v2 = temp_v2 + 1;
        if (*piVar4 != 0) {
          *(unsigned int *)(*piVar4 + 0xc) = 0;
        }
        piVar4 = piVar4 + 1;
      } while (temp_v2 < temp_v1 + 1);
    }
    temp_v11 = temp_v10;
    if (temp_v9 == (int *)0x0 || temp_v10 == (int *)0x0) {
      return 0;
    }
  }
  temp_v10 = temp_v11;
  (**(romwright_code **)(*temp_v9 + 0xc))(temp_v9);
  return temp_v3;
}

} /* extern "C" */
