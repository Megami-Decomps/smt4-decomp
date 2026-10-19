/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00520d80` (_code @ 0x520d80, 0x324 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00520d80_arg1 fn_00520d80_arg1;
struct fn_00520d80_arg1 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x10];
    void *field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
};

extern char *FUN_005203c0(fn_00520d80_arg1 *);


void FUN_00520d80(unsigned int *param_1,fn_00520d80_arg1 *param_2,int param_3,int param_4,
                 unsigned int *param_5)

{
  char *pcVar1;
  unsigned int *puVar2;
  void *pvVar3;
  char *pcVar4;
  int temp_v0;
  char *pcVar6;
  unsigned int temp_v1;
  char *pcVar8;
  int temp_v2;
  int temp_v3;
  
  pcVar1 = (char *)FUN_005203c0(param_2);
  if ((unsigned int *)(pcVar1 + 0x10) != (unsigned int *)0x0) {
    puVar2 = (unsigned int *)(pcVar1 + 0x14);
    *(unsigned int *)(pcVar1 + 0x10) = *param_5;
    *puVar2 = param_5[1];
    *(unsigned int *)(pcVar1 + 0x18) = param_5[2];
    temp_v1 = param_5[4];
    *(unsigned int *)(pcVar1 + 0x20) = temp_v1;
    *(unsigned int **)(temp_v1 + 8) = puVar2;
    *(unsigned int **)(pcVar1 + 0x1c) = param_5 + 1;
    param_5[4] = (unsigned int)puVar2;
  }
  param_2->field_0x18 = param_2->field_0x18 + 1;
  if (((param_2->field_0x14 == (void *)param_4) || (param_3 != 0)) ||
     (*param_5 < *(unsigned int *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar1;
    pvVar3 = param_2->field_0x14;
    if (pvVar3 == (void *)param_4) {
      *(char **)((int)pvVar3 + 4) = pcVar1;
      *(char **)((int)param_2->field_0x14 + 0xc) = pcVar1;
    }
    else if (*(int *)((int)pvVar3 + 8) == param_4) {
      *(char **)((int)pvVar3 + 8) = pcVar1;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar1;
    if (*(int *)((int)param_2->field_0x14 + 0xc) == param_4) {
      *(char **)((int)param_2->field_0x14 + 0xc) = pcVar1;
    }
  }
  *(int *)(pcVar1 + 4) = param_4;
  pcVar4 = pcVar1;
  while ((*(char **)((int)param_2->field_0x14 + 4) != pcVar4 &&
         (pcVar6 = *(char **)(pcVar4 + 4), *pcVar6 == '\0'))) {
    pcVar8 = *(char **)(*(int *)(pcVar6 + 4) + 8);
    if (pcVar6 == pcVar8) {
      pcVar8 = *(char **)(*(int *)(pcVar6 + 4) + 0xc);
      if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\0')) {
        pcVar8 = *(char **)(pcVar6 + 0xc);
        if (pcVar8 == pcVar4) {
          *(unsigned int *)(pcVar6 + 0xc) = *(unsigned int *)(pcVar8 + 8);
          if (*(int *)(pcVar8 + 8) != 0) {
            *(char **)(*(int *)(pcVar8 + 8) + 4) = pcVar6;
          }
          *(unsigned int *)(pcVar8 + 4) = *(unsigned int *)(pcVar6 + 4);
          if (*(char **)((int)param_2->field_0x14 + 4) == pcVar6) {
            *(char **)((int)param_2->field_0x14 + 4) = pcVar8;
          }
          else {
            temp_v0 = *(int *)(pcVar6 + 4);
            if (*(char **)(temp_v0 + 8) == pcVar6) {
              *(char **)(temp_v0 + 8) = pcVar8;
            }
            else {
              *(char **)(temp_v0 + 0xc) = pcVar8;
            }
          }
          *(char **)(pcVar8 + 8) = pcVar6;
          *(char **)(pcVar6 + 4) = pcVar8;
          pcVar4 = pcVar6;
        }
        **(unsigned char **)(pcVar4 + 4) = 1;
        **(unsigned char **)(*(int *)(pcVar4 + 4) + 4) = 0;
        temp_v2 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        temp_v0 = *(int *)(temp_v2 + 8);
        *(unsigned int *)(temp_v2 + 8) = *(unsigned int *)(temp_v0 + 0xc);
        if (*(int *)(temp_v0 + 0xc) != 0) {
          *(int *)(*(int *)(temp_v0 + 0xc) + 4) = temp_v2;
        }
        *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v2 + 4);
        if (*(int *)((int)param_2->field_0x14 + 4) == temp_v2) {
          *(int *)((int)param_2->field_0x14 + 4) = temp_v0;
        }
        else {
          temp_v3 = *(int *)(temp_v2 + 4);
          if (*(int *)(temp_v3 + 0xc) == temp_v2) {
            *(int *)(temp_v3 + 0xc) = temp_v0;
          }
          else {
            *(int *)(temp_v3 + 8) = temp_v0;
          }
        }
        *(int *)(temp_v0 + 0xc) = temp_v2;
        *(int *)(temp_v2 + 4) = temp_v0;
      }
      else {
        *pcVar6 = '\x01';
        *pcVar8 = '\x01';
        **(unsigned char **)(*(int *)(pcVar4 + 4) + 4) = 0;
        pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
      }
    }
    else if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\0')) {
      pcVar8 = *(char **)(pcVar6 + 8);
      if (pcVar8 == pcVar4) {
        *(unsigned int *)(pcVar6 + 8) = *(unsigned int *)(pcVar8 + 0xc);
        if (*(int *)(pcVar8 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar8 + 0xc) + 4) = pcVar6;
        }
        *(unsigned int *)(pcVar8 + 4) = *(unsigned int *)(pcVar6 + 4);
        if (*(char **)((int)param_2->field_0x14 + 4) == pcVar6) {
          *(char **)((int)param_2->field_0x14 + 4) = pcVar8;
        }
        else {
          temp_v0 = *(int *)(pcVar6 + 4);
          if (*(char **)(temp_v0 + 0xc) == pcVar6) {
            *(char **)(temp_v0 + 0xc) = pcVar8;
          }
          else {
            *(char **)(temp_v0 + 8) = pcVar8;
          }
        }
        *(char **)(pcVar8 + 0xc) = pcVar6;
        *(char **)(pcVar6 + 4) = pcVar8;
        pcVar4 = pcVar6;
      }
      **(unsigned char **)(pcVar4 + 4) = 1;
      **(unsigned char **)(*(int *)(pcVar4 + 4) + 4) = 0;
      temp_v0 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      temp_v2 = *(int *)(temp_v0 + 0xc);
      *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v2 + 8);
      if (*(int *)(temp_v2 + 8) != 0) {
        *(int *)(*(int *)(temp_v2 + 8) + 4) = temp_v0;
      }
      *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v0 + 4);
      if (*(int *)((int)param_2->field_0x14 + 4) == temp_v0) {
        *(int *)((int)param_2->field_0x14 + 4) = temp_v2;
      }
      else {
        temp_v3 = *(int *)(temp_v0 + 4);
        if (*(int *)(temp_v3 + 8) == temp_v0) {
          *(int *)(temp_v3 + 8) = temp_v2;
        }
        else {
          *(int *)(temp_v3 + 0xc) = temp_v2;
        }
      }
      *(int *)(temp_v2 + 8) = temp_v0;
      *(int *)(temp_v0 + 4) = temp_v2;
    }
    else {
      *pcVar6 = '\x01';
      *pcVar8 = '\x01';
      **(unsigned char **)(*(int *)(pcVar4 + 4) + 4) = 0;
      pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
    }
  }
  **(unsigned char **)((int)param_2->field_0x14 + 4) = 1;
  *param_1 = (unsigned int)pcVar1;
  return;
}
