/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00413af4` (_code @ 0x413af4, 0x32c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void FUN_002e32a4(int kind, ...);
int asdOperatorDeleteArray(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char LAB_00413e24; /* 0x413e24 */

/* Supplied declaration required: FUN_002e32a4. */
extern unsigned char *rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */


/* WARNING: Removing unreachable block (ram,0x00413b8c) */

void FUN_00413af4(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *puVar7;
  unsigned char *puVar8;
  int temp_v3;
  unsigned char *puVar10;
  unsigned char *puVar11;
  unsigned char *puVar12;
  unsigned char *puVar13;
  
  temp_v1 = *(int *)(param_2 + 0xec) - *(int *)(param_2 + 0xe8);
  temp_v2 = (int)(((long long)(int)temp_v1 * -0x4de9bd37 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
  if ((unsigned int)((temp_v2 >> 7) - (temp_v2 >> 0x1f)) <= param_3) {
    temp_v2 = (int)(((long long)(int)temp_v1 * -0x4de9bd37 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
    FUN_002e32a4(9,&LAB_00413e24,&LAB_00413e24,param_3,(temp_v2 >> 7) - (temp_v2 >> 0x1f));
  }
  temp_v2 = *(int *)(param_2 + 0xe8);
  *param_1 = 0;
  temp_v2 = temp_v2 + param_3 * 0xb8;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = *(unsigned char **)(temp_v2 + 0x34);
  puVar12 = *(unsigned char **)(temp_v2 + 0x38);
  puVar13 = (unsigned char *)*param_1;
  temp_v2 = 0;
  puVar3 = puVar2;
  if (puVar12 != puVar2) {
    do {
      puVar3 = puVar3 + 1;
      temp_v2 = temp_v2 + 1;
    } while (puVar12 != puVar3);
    puVar3 = (unsigned char *)param_1[1];
    if ((unsigned char *)(param_1[2] - (int)puVar13) < puVar3 + (temp_v2 - (int)puVar13)) {
      temp_v1 = param_1[1] - (int)puVar13;
      puVar10 = (unsigned char *)(temp_v1 + (temp_v1 >> 1) + (temp_v1 >> 3));
      if (puVar10 < (unsigned char *)(temp_v1 + 0x20)) {
        puVar10 = (unsigned char *)(temp_v1 + 0x20);
      }
      if (puVar10 <= puVar3 + (temp_v2 - (int)puVar13)) {
        puVar10 = puVar3 + (temp_v2 - (int)puVar13);
      }
      puVar7 = (unsigned char *)rt_malloc();
      puVar11 = puVar7;
      for (puVar3 = (unsigned char *)*param_1; puVar3 != puVar13; puVar3 = puVar3 + 1) {
        if (puVar11 != (unsigned char *)0x0) {
          *puVar11 = *puVar3;
        }
        puVar11 = puVar11 + 1;
      }
      puVar3 = puVar7 + ((int)puVar13 - *param_1);
      for (; puVar12 != puVar2; puVar2 = puVar2 + 1) {
        if (puVar3 != (unsigned char *)0x0) {
          *puVar3 = *puVar2;
        }
        puVar3 = puVar3 + 1;
      }
      puVar3 = (unsigned char *)param_1[1];
      puVar2 = puVar7 + (int)(puVar13 + (temp_v2 - *param_1));
      for (; puVar13 != puVar3; puVar13 = puVar13 + 1) {
        if (puVar2 != (unsigned char *)0x0) {
          *puVar2 = *puVar13;
        }
        puVar2 = puVar2 + 1;
      }
      temp_v0 = *param_1;
      temp_v3 = param_1[1];
      asdOperatorDeleteArray();
      *param_1 = (int)puVar7;
      param_1[1] = (int)(puVar7 + temp_v2 + (temp_v3 - temp_v0));
      param_1[2] = (int)(puVar7 + (int)puVar10);
      return;
    }
    puVar10 = puVar13 + temp_v2;
    param_1[1] = (int)(puVar3 + temp_v2);
    if (puVar10 < puVar3) {
      puVar7 = puVar3 + -temp_v2;
      puVar11 = puVar3;
      for (puVar10 = puVar7; puVar10 != puVar3; puVar10 = puVar10 + 1) {
        if (puVar11 != (unsigned char *)0x0) {
          *puVar11 = *puVar10;
        }
        puVar11 = puVar11 + 1;
      }
      temp_v1 = (int)puVar7 - (int)puVar13;
      if (0 < (int)temp_v1) {
        if ((temp_v1 & 1) != 0) {
          puVar7 = puVar7 + -1;
          puVar3 = puVar3 + -1;
          *puVar3 = *puVar7;
        }
        for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
          puVar3[-1] = puVar7[-1];
          puVar7 = puVar7 + -2;
          puVar3 = puVar3 + -2;
          *puVar3 = *puVar7;
        }
      }
      for (; puVar12 != puVar2; puVar2 = puVar2 + 1) {
        *puVar13 = *puVar2;
        puVar13 = puVar13 + 1;
      }
    }
    else {
      temp_v1 = (int)puVar3 - (int)puVar13;
      puVar11 = puVar3;
      puVar7 = puVar2;
      puVar8 = puVar2;
      if (temp_v1 != 0) {
        if (temp_v1 >= 0x80000000) {
          do {
            temp_v1 = temp_v1 - 1;
            puVar7 = puVar7 + 1;
            puVar8 = puVar7;
          } while (temp_v1 != 0);
        }
        else if (0 < (int)temp_v1) {
          for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
          }
          puVar7 = puVar2 + temp_v1;
          puVar8 = puVar7;
        }
      }
      for (; puVar1 = puVar13, puVar12 != puVar7; puVar7 = puVar7 + 1) {
        if (puVar11 != (unsigned char *)0x0) {
          *puVar11 = *puVar7;
        }
        puVar11 = puVar11 + 1;
      }
      for (; puVar1 != puVar3; puVar1 = puVar1 + 1) {
        if (puVar10 != (unsigned char *)0x0) {
          *puVar10 = *puVar1;
        }
        puVar10 = puVar10 + 1;
      }
      if (puVar8 != puVar2) {
        do {
          puVar3 = puVar2 + 1;
          *puVar13 = *puVar2;
          puVar13 = puVar13 + 1;
          puVar2 = puVar3;
        } while (puVar8 != puVar3);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
