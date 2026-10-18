/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e971c` (_code @ 0x3e971c, 0x3bc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_00236420. */
/* Supplied declaration required: FUN_00236454. */
/* Supplied declaration required: FUN_002364b0. */
/* Supplied declaration required: FUN_002a2db4. */
/* Supplied declaration required: FUN_002a2ddc. */
/* Supplied declaration required: FUN_002c2be8. */
/* Supplied declaration required: FUN_0036a314. */
/* Supplied declaration required: FUN_003e9ad8. */
/* Supplied declaration required: FUN_003e9ba8. */
/* Supplied declaration required: FUN_003e9e34. */
/* Supplied declaration required: FUN_003e9ff8. */
/* Supplied declaration required: FUN_003ea084. */
/* Supplied declaration required: FUN_003ea174. */


/* WARNING: Type propagation algorithm not settling */

void FUN_003e971c(int *param_1,int *param_2,int *param_3)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned char *puVar5;
  int temp_v3;
  int temp_v4;
  int *temp_v5 [2];
  unsigned char temp_v6 [4];
  int temp_v7;
  
  temp_v5[0] = (int *)*param_1;
  switch(temp_v5[0][4]) {
  case 0:
    FUN_0036a314(param_2,param_3);
    if ((~param_2[0xf] & 8U) != 0) {
      temp_v2 = param_2[0xf] & 0xfffff9ff;
      param_2[0xf] = temp_v2;
      if ((((float)param_2[0xc] == (float)param_2[0xd]) &&
          ((float)param_2[0xc] == (float)param_2[0xe])) &&
         (param_2[0xf] = temp_v2 | 0x400, param_2[0xc] == 0x3f800000)) {
        param_2[0xf] = temp_v2 | 0x600;
      }
    }
    FUN_002364b0(param_2);
    FUN_00236454(param_2);
    FUN_00236420(param_2);
    return;
  case 1:
    FUN_003e9e34(temp_v5,param_2);
    break;
  case 2:
    piVar4 = (int *)param_2[3];
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + (int)(param_2 + 3));
    }
    if (temp_v5[0][5] == 0) {
      temp_v1 = param_3[1];
      temp_v3 = param_3[2];
      temp_v4 = param_3[3];
      piVar4[3] = *param_3;
      piVar4[4] = temp_v1;
      piVar4[5] = temp_v3;
      piVar4[6] = temp_v4;
      temp_v5[0] = piVar4;
      temp_v0 = FUN_002c2be8(piVar4 + 3);
      FUN_002a2db4(temp_v6,temp_v5);
      *(unsigned int *)(temp_v7 + 8) = temp_v0;
      return;
    }
    break;
  case 3:
    puVar5 = (unsigned char *)*param_3;
    if (puVar5 != (unsigned char *)0x0) {
      puVar5 = puVar5 + (int)param_3;
    }
    if (temp_v5[0][5] == 0) {
      temp_v1 = *(int *)(puVar5 + 0x1c);
      if (temp_v1 != 0) {
        puVar5 = (unsigned char *)((int)(puVar5 + 0x1c) + temp_v1);
      }
      else {
        puVar5 = (unsigned char *)0x0;
      }
      temp_v5[0] = param_2;
      FUN_002a2ddc(temp_v5,puVar5);
      return;
    }
    break;
  case 4:
    if (temp_v5[0][5] == 0) {
      temp_v3 = param_3[1];
      temp_v4 = param_3[2];
      temp_v1 = param_3[3];
      param_2[1] = *param_3;
      param_2[2] = temp_v3;
      param_2[3] = temp_v4;
      param_2[4] = temp_v1;
      temp_v1 = FUN_002c2be8(param_2 + 1);
      param_2[9] = temp_v1;
      return;
    }
    break;
  case 5:
    FUN_003ea174(temp_v5,param_2);
    return;
  case 6:
    if (temp_v5[0][5] != 0) {
      if (temp_v5[0][5] == 1) {
        *(char *)((int)param_2 + 0x1f6) = (char)*param_3;
      }
      return;
    }
    *(char *)(param_2 + 0xc) = (char)*param_3;
    break;
  case 7:
    *(char *)(param_2 + 9) = (char)*param_3;
    return;
  case 8:
    *(char *)(param_2 + 1) = (char)*param_3;
    return;
  case 9:
    if (temp_v5[0][5] == 0) {
      FUN_0036a314(param_2 + 0x13,param_3);
      param_2[0x22] = param_2[0x22] | 0x800;
      return;
    }
    break;
  case 10:
    temp_v1 = *param_2;
    if (temp_v1 == -0x80000000) {
      if (temp_v5[0][5] == 0) {
        temp_v1 = param_3[1];
        temp_v3 = param_3[2];
        param_2[2] = *param_3;
        param_2[3] = temp_v1;
        param_2[4] = temp_v3;
        return;
      }
      if (temp_v5[0][5] == 1) {
        param_2[5] = *param_3;
      }
      return;
    }
    if (temp_v1 != 0x20000000) {
      if (temp_v1 != 0x40000000) {
        return;
      }
      if (temp_v5[0][5] != 0) {
        if (temp_v5[0][5] != 2) {
          return;
        }
        temp_v1 = *param_3;
        temp_v3 = param_3[1];
        temp_v4 = param_3[2];
        param_2 = param_2 + 5;
        *param_2 = temp_v1;
        param_2[1] = temp_v3;
        param_2[2] = temp_v4;
        return;
      }
    }
    else if (temp_v5[0][5] != 3) {
      return;
    }
    temp_v1 = *param_3;
    temp_v3 = param_3[1];
    temp_v4 = param_3[2];
    param_2 = param_2 + 2;
    *param_2 = temp_v1;
    param_2[1] = temp_v3;
    param_2[2] = temp_v4;
    return;
  case 0xb:
    FUN_003ea084(temp_v5,param_2);
    return;
  case 0xc:
    if (temp_v5[0][5] == 0) {
      *(char *)(param_2 + 0x2d) = (char)*param_3;
    }
    return;
  case 0xd:
    FUN_003e9ba8(temp_v5,param_2);
    return;
  case 0xe:
    FUN_003e9ad8(temp_v5,param_2);
    return;
  case 0xf:
    FUN_003e9ff8(temp_v5,param_2);
    return;
  case 0x10:
    if (temp_v5[0][5] == 0) {
      temp_v1 = param_3[1];
      temp_v3 = param_3[2];
      temp_v4 = param_3[3];
      param_2[0x2e] = *param_3;
      param_2[0x2f] = temp_v1;
      param_2[0x30] = temp_v3;
      param_2[0x31] = temp_v4;
      temp_v1 = FUN_002c2be8(param_2 + 0x2e);
      param_2[0x32] = temp_v1;
      return;
    }
    break;
  case 0x11:
    if (temp_v5[0][5] == 0) {
      temp_v1 = *param_3;
      temp_v3 = param_3[1];
      temp_v4 = param_3[2];
      param_2[0x30] = param_3[3];
      param_2[0x2d] = temp_v1;
      param_2[0x2e] = temp_v3;
      param_2[0x2f] = temp_v4;
      return;
    }
  }
  return;
}
