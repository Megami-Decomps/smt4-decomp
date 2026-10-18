/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126d1c` (_code @ 0x126d1c, 0x644 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_00126274(int *, int);
extern int FUN_00126358(int *, int);
/* Supplied declaration required: FUN_00126ba0. */
/* Supplied declaration required: FUN_002e6dd4. */
extern int FUN_0030db5c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0030dce8. */
/* Supplied declaration required: FUN_0030dd02. */
/* Supplied declaration required: FUN_0030dd7e. */
/* Supplied declaration required: FUN_0030de32. */
/* Supplied declaration required: aeabi_uidivmod. */


unsigned int FUN_00126d1c(int *param_1,int param_2)

{
/* irregular: 18 unstructured edge(s); 12 goto(s); 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  char temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  char temp_v9;
  char temp_v10;
  char temp_v11;
  int *piVar13;
  unsigned int temp_v12;
  int temp_v13;
  
  if ((((param_1 == (int *)0x0) || (piVar13 = (int *)param_1[7], piVar13 == (int *)0x0)) ||
      (param_2 >= 6)) || (param_2 < 0)) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((piVar13[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)"stream error";
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
    param_1[6] = (int)"buffer error";
    return 0xfffffffb;
  }
  temp_v5 = piVar13[10];
  piVar13[10] = param_2;
  *piVar13 = (int)param_1;
  if (piVar13[1] != 0x2a) {
LAB_00126f96:
    if (piVar13[1] == 0x45) goto LAB_00126fa2;
    goto LAB_0012703c;
  }
  if (piVar13[6] != 2) {
    if ((piVar13[0x22] >= 2) || (temp_v1 = piVar13[0x21], 1 >= temp_v1)) {
      temp_v1 = 0;
    }
    else if (temp_v1 < 6) {
      temp_v1 = 1;
    }
    else if (temp_v1 == 6) {
      temp_v1 = 2;
    }
    else {
      temp_v1 = 3;
    }
    temp_v12 = (temp_v1 << 6) | (piVar13[0xc] * 0x1000 - 0x7800U);
    if (piVar13[0x1b] != 0) {
      temp_v12 = temp_v12 | 0x20;
    }
    aeabi_uidivmod(temp_v12,0x1f);
    piVar13[1] = 0x71;
    FUN_0030dce8(piVar13,(0x1f - temp_v7) + temp_v12);
    if (piVar13[0x1b] != 0) {
      FUN_0030dce8(piVar13,(unsigned int)param_1[0xc] >> 0x10);
      FUN_0030dce8(piVar13,param_1[0xc] & 0xffff);
    }
    temp_v1 = FUN_0030db5c(0,0);
    param_1[0xc] = temp_v1;
    goto LAB_00126f96;
  }
  temp_v1 = 0;
  FUN_0030dd02(0,0);
  param_1[0xc] = temp_v1;
  temp_v1 = piVar13[5];
  piVar13[5] = temp_v1 + 1;
  *(unsigned char *)(piVar13[2] + temp_v1) = 0x1f;
  temp_v1 = piVar13[5];
  piVar13[5] = temp_v1 + 1;
  *(unsigned char *)(piVar13[2] + temp_v1) = 0x8b;
  temp_v1 = piVar13[5];
  piVar13[5] = temp_v1 + 1;
  *(unsigned char *)(piVar13[2] + temp_v1) = 8;
  piVar3 = (int *)piVar13[7];
  if (piVar3 != (int *)0x0) {
    temp_v1 = *piVar3;
    temp_v9 = '\0';
    if (piVar3[0xb] != 0) {
      temp_v9 = '\x02';
    }
    if (piVar3[4] == 0) {
      temp_v10 = '\0';
    }
    else {
      temp_v10 = '\x04';
    }
    if (piVar3[7] == 0) {
      temp_v11 = '\0';
    }
    else {
      temp_v11 = '\b';
    }
    if (piVar3[9] == 0) {
      temp_v3 = '\0';
    }
    else {
      temp_v3 = '\x10';
    }
    temp_v8 = piVar13[5];
    piVar13[5] = temp_v8 + 1;
    *(char *)(piVar13[2] + temp_v8) = (temp_v1 != 0) + temp_v9 + temp_v10 + temp_v11 + temp_v3;
    temp_v1 = piVar13[5];
    temp_v6 = *(unsigned int *)(piVar13[7] + 4);
    piVar13[5] = temp_v1 + 1;
    *(char *)(piVar13[2] + temp_v1) = (char)temp_v6;
    temp_v1 = piVar13[5];
    temp_v6 = *(unsigned int *)(piVar13[7] + 4);
    piVar13[5] = temp_v1 + 1;
    *(char *)(piVar13[2] + temp_v1) = (char)((unsigned int)temp_v6 >> 8);
    temp_v1 = piVar13[5];
    temp_v6 = *(unsigned int *)(piVar13[7] + 4);
    piVar13[5] = temp_v1 + 1;
    *(char *)(piVar13[2] + temp_v1) = (char)((unsigned int)temp_v6 >> 0x10);
    temp_v1 = piVar13[5];
    temp_v6 = *(unsigned int *)(piVar13[7] + 4);
    piVar13[5] = temp_v1 + 1;
    *(char *)(piVar13[2] + temp_v1) = (char)((unsigned int)temp_v6 >> 0x18);
    if (piVar13[0x21] != 9) {
      if ((piVar13[0x22] >= 2) || (1 >= piVar13[0x21])) {
        temp_v4 = 4;
      }
      else {
        temp_v4 = 0;
      }
    }
    else {
      temp_v4 = 2;
    }
    temp_v1 = piVar13[5];
    piVar13[5] = temp_v1 + 1;
    *(unsigned char *)(piVar13[2] + temp_v1) = temp_v4;
    temp_v1 = piVar13[5];
    temp_v6 = *(unsigned int *)(piVar13[7] + 0xc);
    piVar13[5] = temp_v1 + 1;
    *(char *)(piVar13[2] + temp_v1) = (char)temp_v6;
    if (*(int *)(piVar13[7] + 0x10) != 0) {
      temp_v1 = piVar13[5];
      temp_v6 = *(unsigned int *)(piVar13[7] + 0x14);
      piVar13[5] = temp_v1 + 1;
      *(char *)(piVar13[2] + temp_v1) = (char)temp_v6;
      temp_v1 = piVar13[5];
      temp_v6 = *(unsigned int *)(piVar13[7] + 0x14);
      piVar13[5] = temp_v1 + 1;
      *(char *)(piVar13[2] + temp_v1) = (char)((unsigned int)temp_v6 >> 8);
    }
    if (*(int *)(piVar13[7] + 0x2c) != 0) {
      temp_v1 = param_1[0xc];
      FUN_0030dd02(temp_v1,piVar13[2],piVar13[5]);
      param_1[0xc] = temp_v1;
    }
    piVar13[1] = 0x45;
    piVar13[8] = 0;
LAB_00126fa2:
    if (*(int *)(piVar13[7] + 0x10) != 0) {
      temp_v12 = piVar13[5];
      while( 1 ) {
        temp_v2 = temp_v12;
        if ((unsigned int)piVar13[8] >= (*(unsigned int *)(piVar13[7] + 0x14) & 0xffff)) break;
        temp_v2 = piVar13[5];
        if (temp_v2 == piVar13[3]) {
          if ((*(int *)(piVar13[7] + 0x2c) != 0) && (temp_v12 < temp_v2)) {
            temp_v1 = param_1[0xc];
            FUN_0030dd02(temp_v1,piVar13[2] + temp_v12,temp_v2 - temp_v12);
            param_1[0xc] = temp_v1;
          }
          FUN_0030de32(param_1);
          temp_v2 = piVar13[5];
          temp_v12 = temp_v2;
          if (temp_v2 == piVar13[3]) break;
        }
        temp_v4 = *(unsigned char *)(*(int *)(piVar13[7] + 0x10) + piVar13[8]);
        piVar13[5] = temp_v2 + 1;
        *(unsigned char *)(piVar13[2] + temp_v2) = temp_v4;
        piVar13[8] = piVar13[8] + 1;
      }
      if ((*(int *)(piVar13[7] + 0x2c) != 0) && (temp_v2 < (unsigned int)piVar13[5])) {
        temp_v1 = param_1[0xc];
        FUN_0030dd02(temp_v1,piVar13[2] + temp_v2,piVar13[5] - temp_v2);
        param_1[0xc] = temp_v1;
      }
      if (piVar13[8] != *(int *)(piVar13[7] + 0x14)) {
LAB_0012703c:
        if (piVar13[1] == 0x49) goto LAB_00127042;
        goto LAB_001270ba;
      }
      piVar13[1] = 0x49;
      piVar13[8] = 0;
    }
    else {
      piVar13[1] = 0x49;
    }
LAB_00127042:
    if (*(int *)(piVar13[7] + 0x1c) != 0) {
      temp_v12 = piVar13[5];
      do {
        temp_v2 = piVar13[5];
        if (temp_v2 == piVar13[3]) {
          if ((*(int *)(piVar13[7] + 0x2c) != 0) && (temp_v12 < temp_v2)) {
            temp_v1 = param_1[0xc];
            FUN_0030dd02(temp_v1,piVar13[2] + temp_v12,temp_v2 - temp_v12);
            param_1[0xc] = temp_v1;
          }
          FUN_0030de32(param_1);
          temp_v12 = piVar13[5];
          if (temp_v12 == piVar13[3]) {
            temp_v0 = 1;
            break;
          }
        }
        temp_v13 = piVar13[8];
        temp_v8 = *(int *)(piVar13[7] + 0x1c);
        piVar13[8] = temp_v13 + 1;
        temp_v1 = piVar13[5];
        temp_v9 = *(char *)(temp_v8 + temp_v13);
        piVar13[5] = temp_v1 + 1;
        *(char *)(piVar13[2] + temp_v1) = temp_v9;
        temp_v0 = 0;
      } while (temp_v9 != '\0');
      if ((*(int *)(piVar13[7] + 0x2c) != 0) && (temp_v12 < (unsigned int)piVar13[5])) {
        temp_v1 = param_1[0xc];
        FUN_0030dd02(temp_v1,piVar13[2] + temp_v12,piVar13[5] - temp_v12);
        param_1[0xc] = temp_v1;
      }
      if (temp_v0) {
LAB_001270ba:
        if (piVar13[1] == 0x5b) goto LAB_001270d0;
        goto LAB_0012715a;
      }
      piVar13[1] = 0x5b;
      piVar13[8] = 0;
    }
    else {
      piVar13[1] = 0x5b;
    }
LAB_001270d0:
    if (*(int *)(piVar13[7] + 0x24) != 0) {
      temp_v12 = piVar13[5];
      do {
        temp_v2 = piVar13[5];
        if (temp_v2 == piVar13[3]) {
          if ((*(int *)(piVar13[7] + 0x2c) != 0) && (temp_v12 < temp_v2)) {
            temp_v1 = param_1[0xc];
            FUN_0030dd02(temp_v1,piVar13[2] + temp_v12,temp_v2 - temp_v12);
            param_1[0xc] = temp_v1;
          }
          FUN_0030de32(param_1);
          temp_v12 = piVar13[5];
          if (temp_v12 == piVar13[3]) {
            temp_v0 = 1;
            break;
          }
        }
        temp_v13 = piVar13[8];
        temp_v8 = *(int *)(piVar13[7] + 0x24);
        piVar13[8] = temp_v13 + 1;
        temp_v1 = piVar13[5];
        temp_v9 = *(char *)(temp_v8 + temp_v13);
        piVar13[5] = temp_v1 + 1;
        *(char *)(piVar13[2] + temp_v1) = temp_v9;
        temp_v0 = 0;
      } while (temp_v9 != '\0');
      if ((*(int *)(piVar13[7] + 0x2c) != 0) && (temp_v12 < (unsigned int)piVar13[5])) {
        temp_v1 = param_1[0xc];
        FUN_0030dd02(temp_v1,piVar13[2] + temp_v12,piVar13[5] - temp_v12);
        param_1[0xc] = temp_v1;
      }
      if (temp_v0) {
LAB_0012715a:
        if (piVar13[1] != 0x67) goto LAB_001271b2;
      }
      else {
        piVar13[1] = 0x67;
      }
    }
    else {
      piVar13[1] = 0x67;
    }
    if (*(int *)(piVar13[7] + 0x2c) != 0) {
      if ((unsigned int)piVar13[3] < piVar13[5] + 2U) {
        FUN_0030de32(param_1);
      }
      temp_v1 = piVar13[5];
      if ((unsigned int)piVar13[3] >= temp_v1 + 2U) {
        temp_v8 = param_1[0xc];
        piVar13[5] = temp_v1 + 1;
        *(char *)(piVar13[2] + temp_v1) = (char)temp_v8;
        temp_v8 = param_1[0xc];
        temp_v1 = piVar13[5];
        piVar13[5] = temp_v1 + 1;
        *(char *)(piVar13[2] + temp_v1) = (char)((unsigned int)temp_v8 >> 8);
        temp_v1 = 0;
        FUN_0030dd02(0,0);
        param_1[0xc] = temp_v1;
        piVar13[1] = 0x71;
      }
    }
    else {
      piVar13[1] = 0x71;
    }
  }
  else {
    temp_v1 = piVar13[5];
    piVar13[5] = temp_v1 + 1;
    *(unsigned char *)(piVar13[2] + temp_v1) = 0;
    temp_v1 = piVar13[5];
    piVar13[5] = temp_v1 + 1;
    *(unsigned char *)(piVar13[2] + temp_v1) = 0;
    temp_v1 = piVar13[5];
    piVar13[5] = temp_v1 + 1;
    *(unsigned char *)(piVar13[2] + temp_v1) = 0;
    temp_v1 = piVar13[5];
    piVar13[5] = temp_v1 + 1;
    *(unsigned char *)(piVar13[2] + temp_v1) = 0;
    temp_v1 = piVar13[5];
    piVar13[5] = temp_v1 + 1;
    *(unsigned char *)(piVar13[2] + temp_v1) = 0;
    if (piVar13[0x21] != 9) {
      if ((piVar13[0x22] >= 2) || (1 >= piVar13[0x21])) {
        temp_v4 = 4;
      }
      else {
        temp_v4 = 0;
      }
    }
    else {
      temp_v4 = 2;
    }
    temp_v1 = piVar13[5];
    piVar13[5] = temp_v1 + 1;
    *(unsigned char *)(piVar13[2] + temp_v1) = temp_v4;
    temp_v1 = piVar13[5];
    piVar13[5] = temp_v1 + 1;
    *(unsigned char *)(piVar13[2] + temp_v1) = 3;
    piVar13[1] = 0x71;
  }
LAB_001271b2:
  if (piVar13[5] != 0) {
    FUN_0030de32(param_1);
    if (param_1[4] == 0) {
      piVar13[10] = -1;
      return 0;
    }
  }
  else if (((param_1[1] == 0) && (param_2 <= temp_v5)) && (param_2 != 4)) {
    param_1[6] = (int)"buffer error";
    return 0xfffffffb;
  }
  if (piVar13[1] == 0x29a) {
    if (param_1[1] != 0) {
      param_1[6] = (int)"buffer error";
      return 0xfffffffb;
    }
LAB_00127200:
    if (piVar13[0x1d] == 0) {
      if (param_2 == 0) {
        return 0;
      }
      if (piVar13[1] == 0x29a) goto LAB_001272b2;
    }
  }
  else if (param_1[1] == 0) goto LAB_00127200;
  if (piVar13[0x22] != 2) {
    if (piVar13[0x22] != 3) {
      temp_v5 = (**(romwright_code **)(piVar13[0x21] * 0xc + 0x543fc0))(piVar13,param_2);
    }
    else {
      temp_v5 = FUN_00126358(piVar13,param_2);
    }
  }
  else {
    temp_v5 = FUN_00126274(piVar13,param_2);
  }
  if (temp_v5 == 2) {
    piVar13[1] = 0x29a;
    goto LAB_0012725a;
  }
  if (temp_v5 == 3) {
    piVar13[1] = 0x29a;
    goto LAB_001272b2;
  }
  if (temp_v5 != 0) {
    if (temp_v5 == 1) {
      if (param_2 != 1) {
        if ((param_2 != 5) && (FUN_0030dd7e(piVar13,0,0), param_2 == 3)) {
          *(unsigned short *)(piVar13[0x11] + (piVar13[0x13] * 2 - 2)) = 0;
          FUN_002e6dd4(piVar13[0x11],piVar13[0x13] * 2 - 2);
          if (piVar13[0x1d] == 0) {
            piVar13[0x1b] = 0;
            piVar13[0x17] = 0;
          }
        }
      }
      else {
        FUN_00126ba0(piVar13);
      }
      FUN_0030de32(param_1);
      if (param_1[4] == 0) {
        piVar13[10] = -1;
        return 0;
      }
    }
LAB_001272b2:
    if (param_2 == 4) {
      if (0 < piVar13[6]) {
        if (piVar13[6] != 2) {
          FUN_0030dce8(piVar13,(unsigned int)param_1[0xc] >> 0x10);
          FUN_0030dce8(piVar13,param_1[0xc] & 0xffff);
        }
        else {
          temp_v5 = piVar13[5];
          temp_v1 = param_1[0xc];
          piVar13[5] = temp_v5 + 1;
          *(char *)(piVar13[2] + temp_v5) = (char)temp_v1;
          temp_v1 = param_1[0xc];
          temp_v5 = piVar13[5];
          piVar13[5] = temp_v5 + 1;
          *(char *)(piVar13[2] + temp_v5) = (char)((unsigned int)temp_v1 >> 8);
          temp_v5 = param_1[0xc];
          temp_v1 = piVar13[5];
          piVar13[5] = temp_v1 + 1;
          *(char *)(piVar13[2] + temp_v1) = (char)((unsigned int)temp_v5 >> 0x10);
          temp_v1 = param_1[0xc];
          temp_v5 = piVar13[5];
          piVar13[5] = temp_v5 + 1;
          *(char *)(piVar13[2] + temp_v5) = (char)((unsigned int)temp_v1 >> 0x18);
          temp_v5 = piVar13[5];
          temp_v1 = param_1[2];
          piVar13[5] = temp_v5 + 1;
          *(char *)(piVar13[2] + temp_v5) = (char)temp_v1;
          temp_v1 = param_1[2];
          temp_v5 = piVar13[5];
          piVar13[5] = temp_v5 + 1;
          *(char *)(piVar13[2] + temp_v5) = (char)((unsigned int)temp_v1 >> 8);
          temp_v1 = param_1[2];
          temp_v5 = piVar13[5];
          piVar13[5] = temp_v5 + 1;
          *(char *)(piVar13[2] + temp_v5) = (char)((unsigned int)temp_v1 >> 0x10);
          temp_v1 = param_1[2];
          temp_v5 = piVar13[5];
          piVar13[5] = temp_v5 + 1;
          *(char *)(piVar13[2] + temp_v5) = (char)((unsigned int)temp_v1 >> 0x18);
        }
        FUN_0030de32(param_1);
        if (0 < piVar13[6]) {
          piVar13[6] = -piVar13[6];
        }
        if (piVar13[5] != 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  else {
LAB_0012725a:
    if (param_1[4] != 0) {
      return 0;
    }
    piVar13[10] = -1;
  }
  return 0;
}
