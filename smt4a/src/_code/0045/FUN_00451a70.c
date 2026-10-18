/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00451a70` (_code @ 0x451a70, 0x2a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_0045247c. */
/* Supplied declaration required: FUN_00503d9c. */
/* Supplied declaration required: FUN_00504630. */
/* Supplied declaration required: nw_gfx_ShaderBinaryInfo_AnalyzeBinary. */


unsigned int FUN_00451a70(int *param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar10;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  
  if ((param_2 == (unsigned int *)0x0) || (puVar10 = param_2, (~*param_2 & 0x80000002) != 0)) {
    puVar10 = (unsigned int *)0x0;
  }
  if (puVar10[0xd] != 0) {
    piVar1 = (int *)((int)puVar10 + puVar10[0xd] + 0x34);
  }
  else {
    piVar1 = (int *)0x0;
  }
  if (*piVar1 == 0) {
    puVar10[0x11] = (unsigned int)param_1;
    temp_v5 = 0;
    if (temp_v5 < (int)puVar10[8]) {
      do {
        if (puVar10[0xd] != 0) {
          temp_v0 = (int)puVar10 + puVar10[0xd] + 0x34;
        }
        else {
          temp_v0 = 0;
        }
        *(unsigned int **)(temp_v0 + temp_v5 * 4) = param_2;
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < (int)puVar10[8]);
    }
    temp_v10 = param_4;
    piVar1 = (int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x298,4);
    if (piVar1 != (int *)0x0) {
      if (puVar10[7] != 0) {
        temp_v5 = (int)puVar10 + puVar10[7] + 0x1c;
      }
      else {
        temp_v5 = 0;
      }
      *piVar1 = temp_v5;
      piVar1[1] = 0;
      piVar1[0x22] = 0;
      piVar1[0x23] = 0;
      piVar1[0xa4] = 0;
      temp_v0 = 0;
      piVar1[0xa5] = 0;
      temp_v5 = 0;
      do {
        temp_v0 = temp_v0 + 2;
        piVar1[temp_v5 + 2] = 0;
        piVar1[temp_v5 + 3] = 0;
        temp_v5 = temp_v5 + 2;
      } while (temp_v0 < 0x20);
    }
    puVar10[0x10] = (unsigned int)piVar1;
    nw_gfx_ShaderBinaryInfo_AnalyzeBinary();
    piVar3 = piVar1;
    FUN_00504630(piVar1);
    temp_v1 = (**(romwright_code **)(*param_1 + 8))(param_1,piVar3,4);
    temp_v8 = 0x451bbc;
    FUN_00503d9c(piVar1,temp_v1,piVar3);
    puVar10[0xf] = (unsigned int)piVar1;
    puVar10[0xe] = temp_v1;
    temp_v5 = 0;
    if (temp_v5 < (int)puVar10[10]) {
      do {
        temp_v1 = puVar10[0xb];
        if (temp_v1 != 0) {
          temp_v0 = (int)puVar10 + temp_v1 + 0x2c;
        }
        else {
          temp_v0 = 0;
        }
        piVar1 = (int *)(temp_v0 + temp_v5 * 4);
        temp_v0 = *piVar1;
        if (temp_v0 != 0) {
          temp_v0 = (int)piVar1 + temp_v0;
        }
        else {
          temp_v0 = 0;
        }
        temp_v7 = puVar10[0xd];
        if (temp_v7 != 0) {
          temp_v2 = (int)puVar10 + temp_v7 + 0x34;
        }
        else {
          temp_v2 = 0;
        }
        if (temp_v1 != 0) {
          temp_v3 = (int)puVar10 + temp_v1 + 0x2c;
        }
        else {
          temp_v3 = 0;
        }
        temp_v6 = 0;
        piVar1 = (int *)(temp_v3 + temp_v5 * 4);
        temp_v3 = *piVar1;
        if (temp_v3 != 0) {
          temp_v3 = (int)piVar1 + temp_v3;
        }
        else {
          temp_v3 = 0;
        }
        temp_v4 = *(unsigned int *)(temp_v3 + 0x10);
        temp_v9 = temp_v4 == 0;
        if (-1 < (int)temp_v4) {
          temp_v8 = puVar10[0xc];
          temp_v9 = temp_v8 == temp_v4;
        }
        if (!temp_v9 && (-1 < (int)temp_v4 && (int)temp_v4 <= (int)temp_v8)) {
          if (temp_v7 != 0) {
            temp_v3 = (int)puVar10 + temp_v7 + 0x34;
          }
          else {
            temp_v3 = 0;
          }
          temp_v6 = *(unsigned int *)(temp_v3 + temp_v4 * 4);
        }
        if (temp_v1 != 0) {
          temp_v3 = (int)puVar10 + temp_v1 + 0x2c;
        }
        else {
          temp_v3 = 0;
        }
        piVar1 = (int *)(temp_v3 + temp_v5 * 4);
        temp_v3 = *piVar1;
        if (temp_v3 != 0) {
          temp_v3 = (int)piVar1 + temp_v3;
        }
        else {
          temp_v3 = 0;
        }
        *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v2 + *(int *)(temp_v0 + 0xc) * 4);
        if (puVar10[0xb] != 0) {
          temp_v0 = (int)puVar10 + puVar10[0xb] + 0x2c;
        }
        else {
          temp_v0 = 0;
        }
        piVar1 = (int *)(temp_v0 + temp_v5 * 4);
        temp_v0 = *piVar1;
        if (temp_v0 != 0) {
          temp_v0 = (int)piVar1 + temp_v0;
        }
        else {
          temp_v0 = 0;
        }
        *(unsigned int *)(temp_v0 + 8) = temp_v6;
        if (puVar10[0xb] != 0) {
          temp_v0 = (int)puVar10 + puVar10[0xb] + 0x2c;
        }
        else {
          temp_v0 = 0;
        }
        piVar1 = (int *)(temp_v0 + temp_v5 * 4);
        temp_v10 = *piVar1;
        if (temp_v10 != 0) {
          temp_v10 = (int)piVar1 + temp_v10;
        }
        else {
          temp_v10 = 0;
        }
        temp_v8 = 0x451cf8;
        FUN_0045247c(&temp_v10,param_1);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < (int)puVar10[10]);
    }
  }
  return 0;
}
