/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012df5c` (_code @ 0x12df5c, 0x494 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int DAT_00471c40; /* 0x471c40 */

/* Supplied declaration required: FUN_0014011c. */
/* Supplied declaration required: FUN_0014de4c. */
/* Supplied declaration required: nw_gfx_internal_CalcSetupActivateVertexAttributeCommandSize. */
/* Supplied declaration required: nw_gfx_internal_CalcSetupDeactivateVertexAttributeCommandSize. */
/* Supplied declaration required: nw_gfx_res_ResShader_Dereference. */


void FUN_0012df5c(int *param_1,int param_2,int *param_3)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  int *piVar5;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  int *unaff_r6;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int iStack_2c;
  int temp_v12;
  
  puVar2 = (unsigned int *)0x0;
  if (param_3 == (int *)0x0) {
    puVar2 = &DAT_00471c40;
  }
  if (param_3 == (int *)0x0) {
    param_3 = (int *)*puVar2;
  }
  if (*(int *)(param_2 + 200) != 0) {
    temp_v1 = param_2 + 200 + *(int *)(param_2 + 200);
  }
  else {
    temp_v1 = 0;
  }
  piVar4 = (int *)(temp_v1 + *(int *)(*param_1 + 0x18) * 4);
  temp_v1 = *piVar4;
  if (temp_v1 != 0) {
    unaff_r6 = (int *)(temp_v1 + (int)piVar4);
  }
  if (temp_v1 == 0) {
    unaff_r6 = (int *)0x0;
  }
  temp_v1 = *(int *)(param_2 + 0xc0);
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + param_2 + 0xc0;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 == 0) {
    temp_v1 = 0;
  }
  else {
    piVar4 = (int *)(temp_v1 + *(int *)(*param_1 + 0x1c) * 0x10 + 0x28);
    temp_v1 = *piVar4;
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 + (int)piVar4;
    }
    else {
      temp_v1 = 0;
    }
  }
  if (*(int *)(temp_v1 + 0x284) != 0) {
    temp_v12 = temp_v1 + 0x284 + *(int *)(temp_v1 + 0x284);
  }
  else {
    temp_v12 = 0;
  }
  piVar4 = &temp_v12;
  nw_gfx_res_ResShader_Dereference();
  temp_v3 = piVar4[0xb];
  if (temp_v3 != 0) {
    temp_v3 = (int)(piVar4 + 0xb) + temp_v3;
  }
  else {
    temp_v3 = 0;
  }
  piVar4 = (int *)(temp_v3 + *(int *)(temp_v1 + 0x28c) * 4);
  temp_v3 = *piVar4;
  if (temp_v3 != 0) {
    temp_v1 = temp_v3 + (int)piVar4;
  }
  if (temp_v3 == 0) {
    temp_v1 = 0;
  }
  if (*unaff_r6 == 0x10000001) {
    piVar4 = unaff_r6;
    nw_gfx_internal_CalcSetupActivateVertexAttributeCommandSize(unaff_r6,temp_v1);
    piVar5 = unaff_r6;
    nw_gfx_internal_CalcSetupDeactivateVertexAttributeCommandSize(unaff_r6,temp_v1);
    temp_v6 = (int)piVar4 + (int)piVar5;
    temp_v3 = (**(romwright_code **)(*param_3 + 8))(param_3,temp_v6,4);
    temp_v10 = temp_v3 + temp_v6;
    temp_v9 = temp_v3;
    temp_v11 = temp_v3;
    iStack_2c = temp_v6;
    FUN_0014de4c(&temp_v9,unaff_r6,temp_v1);
    FUN_0014011c(&temp_v9,unaff_r6,temp_v1);
    *(int *)(*param_1 + 0x60) = temp_v3;
    *(int **)(*param_1 + 100) = piVar4;
    *(int *)(*param_1 + 0x68) = *(int *)(*param_1 + 0x60) + (int)piVar4;
    *(int **)(*param_1 + 0x6c) = piVar5;
    *(int **)(*param_1 + 0x80) = param_3;
    temp_v8 = *param_1;
    *(unsigned int *)(temp_v8 + 0x2c) = *(unsigned int *)(temp_v8 + 0x2c) & 0xfffffffc;
    *(unsigned int *)(temp_v8 + 0x38) = 0;
    *(unsigned int *)(temp_v8 + 0x40) = 0;
    *(unsigned int *)(temp_v8 + 0x44) = 0;
    *(unsigned int *)(temp_v8 + 0x48) = 0;
    *(unsigned int *)(temp_v8 + 0x4c) = 0;
    *(unsigned int *)(temp_v8 + 0x50) = 0;
    *(unsigned int *)(temp_v8 + 0x54) = 0;
    *(unsigned int *)(temp_v8 + 0x58) = 0;
    *(unsigned int *)(temp_v8 + 0x30) = 0x80000007;
    *(unsigned int *)(temp_v8 + 0x5c) = 0;
    temp_v3 = -1;
    *(unsigned int *)(temp_v8 + 0x34) = 0xf02c0;
    temp_v6 = 0;
    *(unsigned int *)(temp_v8 + 0x3c) = 0x7f02c1;
    if (unaff_r6[0xf] != 0) {
      piVar4 = (int *)((int)unaff_r6 + unaff_r6[0xf] + 0x3c);
    }
    else {
      piVar4 = (int *)0x0;
    }
    if (*piVar4 != 0) {
      temp_v4 = (int)piVar4 + *piVar4;
    }
    else {
      temp_v4 = 0;
    }
    temp_v2 = 0;
    if ((*(unsigned int *)(temp_v4 + 8) & 2) != 0) {
      temp_v3 = 0;
      temp_v2 = temp_v4;
    }
    do {
      if (temp_v2 != 0) {
        if (*(int *)(temp_v2 + 0x2c) != 0) {
          temp_v4 = temp_v2 + 0x2c + *(int *)(temp_v2 + 0x2c);
        }
        else {
          temp_v4 = 0;
        }
        piVar4 = (int *)(temp_v4 + temp_v3 * 4);
        temp_v4 = *piVar4;
        if (temp_v4 != 0) {
          temp_v4 = temp_v4 + (int)piVar4;
        }
        else {
          temp_v4 = 0;
        }
      }
      else {
        if (unaff_r6[0xf] != 0) {
          temp_v4 = (int)unaff_r6 + unaff_r6[0xf] + 0x3c;
        }
        else {
          temp_v4 = 0;
        }
        piVar4 = (int *)(temp_v4 + temp_v6 * 4);
        temp_v4 = *piVar4;
        if (temp_v4 != 0) {
          temp_v4 = temp_v4 + (int)piVar4;
        }
        else {
          temp_v4 = 0;
        }
      }
      if (-1 < *(char *)(temp_v1 + *(unsigned int *)(temp_v4 + 4) + 0x4c)) {
        temp_v5 = *(unsigned int *)(temp_v4 + 4);
        if ((*(unsigned int *)(temp_v4 + 8) & 1) != 0) {
          temp_v0 = *(char *)(temp_v4 + 0x10);
          switch(temp_v5) {
          case 0:
            temp_v4 = 6;
            break;
          case 1:
            temp_v4 = 5;
            break;
          case 2:
            temp_v4 = 4;
            break;
          case 3:
            temp_v4 = 2;
            break;
          case 4:
            temp_v4 = 10;
            break;
          case 5:
            temp_v4 = 9;
            break;
          case 6:
            temp_v4 = 8;
            break;
          case 7:
            temp_v4 = -2;
            break;
          case 8:
            temp_v4 = 7;
            break;
          default:
            temp_v4 = -1;
          }
          if (-1 < temp_v4) {
            *(unsigned int *)(temp_v8 + 0x30 + temp_v4 * 4) = 0x3f800000;
          }
        }
        else {
          temp_v0 = *(char *)(temp_v4 + 0x28);
          switch(temp_v5) {
          case 0:
            temp_v7 = 6;
            break;
          case 1:
            temp_v7 = 5;
            break;
          case 2:
            temp_v7 = 4;
            break;
          case 3:
            temp_v7 = 2;
            break;
          case 4:
            temp_v7 = 10;
            break;
          case 5:
            temp_v7 = 9;
            break;
          case 6:
            temp_v7 = 8;
            break;
          case 7:
            temp_v7 = -2;
            break;
          case 8:
            temp_v7 = 7;
            break;
          default:
            temp_v7 = -1;
          }
          if (-1 < temp_v7) {
            *(unsigned int *)(temp_v8 + 0x30 + temp_v7 * 4) = *(unsigned int *)(temp_v4 + 0x2c);
          }
        }
        if (temp_v0 == '\x04') {
          if (temp_v5 != 3) {
            if (temp_v5 == 8) {
              *(unsigned int *)(temp_v8 + 0x2c) = *(unsigned int *)(temp_v8 + 0x2c) | 2;
            }
          }
          else {
            *(unsigned int *)(temp_v8 + 0x2c) = *(unsigned int *)(temp_v8 + 0x2c) | 1;
          }
        }
      }
      if (temp_v2 != 0) {
        temp_v3 = temp_v3 + 1;
        if (*(int *)(temp_v2 + 0x28) <= temp_v3) {
          temp_v2 = 0;
          temp_v3 = -1;
          goto LAB_0012e37c;
        }
      }
      else {
LAB_0012e37c:
        temp_v6 = temp_v6 + 1;
        if (unaff_r6[0xe] <= temp_v6) break;
        if (unaff_r6[0xf] != 0) {
          temp_v4 = (int)unaff_r6 + unaff_r6[0xf] + 0x3c;
        }
        else {
          temp_v4 = 0;
        }
        piVar4 = (int *)(temp_v4 + temp_v6 * 4);
        temp_v4 = *piVar4;
        if (temp_v4 != 0) {
          temp_v4 = (int)piVar4 + temp_v4;
        }
        else {
          temp_v4 = 0;
        }
        if ((*(unsigned int *)(temp_v4 + 8) & 2) != 0) {
          temp_v3 = 0;
          temp_v2 = temp_v4;
        }
      }
    } while (-1 < temp_v6);
  }
  *(unsigned int *)(*param_1 + 0x2c) = *(unsigned int *)(*param_1 + 0x2c) | 8;
  return;
}
