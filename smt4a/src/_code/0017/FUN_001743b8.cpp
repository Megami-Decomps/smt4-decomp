/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001743b8` (_code @ 0x1743b8, 0x4e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017572c(int, int);
int FUN_0019102c(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 11 slot(s), 44 byte(s) */
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
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: FUN_0017572c. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_001743b8(int *param_1)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  
  temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  if (((char)param_1[0x27] != '\0') &&
     (temp_v3 = (**(romwright_code **)(*param_1 + 0x20))(param_1), *(char *)(temp_v3 + 0xf) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00174414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    return;
  }
  if (*(char *)(temp_v2 + 0x10) != '\0') {
    temp_v3 = FUN_00175678();
    temp_v2 = temp_v3;
    FUN_0019102c(temp_v3,5);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v3 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0xc;
    temp_v4 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
    *(unsigned int *)(temp_v2 + 0x10) = temp_v4;
    FUN_0017572c(temp_v3,temp_v2);
  }
  else {
    temp_v2 = (**(romwright_code **)(*param_1 + 0x14))(param_1);
    if (temp_v2 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 0x9a) != '\0') {
      if (param_1[0x29] != 0) {
        param_1[0x29] = param_1[0x29] - 1;
      }
      else if (*(char *)((int)param_1 + 0xa1) == '\0' || *(char *)((int)param_1 + 0xa1) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x001744f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(romwright_code **)(*param_1 + 0x10))(param_1);
        return;
      }
    }
    temp_v1 = 0;
    if (*(char *)((int)param_1 + 0x99) != '\0') {
      if ((char)param_1[0x28] == '\x01') goto LAB_00174528;
    }
    else {
      if ((char)param_1[0x26] == '\0') {
        return;
      }
      temp_v2 = (**(romwright_code **)(*param_1 + 0x14))(param_1);
      if (temp_v2 == 0) {
        return;
      }
      *(unsigned char *)(param_1 + 0x28) = 1;
      temp_v1 = 1;
LAB_00174528:
      if (param_1[0x2a] != -1) {
        param_1[0x2a] = param_1[0x2a] + 1;
      }
      temp_v5 = (unsigned int)*(unsigned char *)((int)param_1 + 0xa1);
      temp_v8 = temp_v5 != 2;
      if (temp_v8) {
        temp_v5 = param_1[0x2b];
      }
      if (temp_v8 && temp_v5 != 0xffffffff) {
        param_1[0x2b] = temp_v5 + 1;
      }
    }
    temp_v0 = *(char *)((int)param_1 + 0xa1);
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if (temp_v0 == '\x03') {
          if (param_1[0x21] < param_1[0x20]) {
            param_1[0x21] = param_1[0x21] + 1;
          }
          (**(romwright_code **)(*param_1 + 0x28))(param_1);
        }
      }
      else if (param_1[0x21] < param_1[0x20]) {
        param_1[0x21] = param_1[0x21] + 1;
      }
    }
    else {
      (**(romwright_code **)(*param_1 + 0x28))(param_1);
    }
    piVar7 = (int *)param_1[8];
    if (piVar7 != (int *)0x0) {
      (**(romwright_code **)(*piVar7 + 8))(piVar7,param_1[10],param_1);
    }
    if (param_1[7] != 0) {
      temp_v9 = 0x3f800000;
      temp_v10 = 0x3f800000;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0;
      temp_v18 = 0;
      if (param_1[0x2a] != 0) {
        temp_v9 = param_1[0xc];
        temp_v10 = param_1[0xd];
        temp_v11 = param_1[0xe];
        temp_v12 = param_1[0xf];
        temp_v13 = param_1[0x10];
        temp_v14 = param_1[0x11];
        temp_v15 = param_1[0x12];
        temp_v16 = param_1[0x13];
        temp_v17 = param_1[0x14];
        temp_v18 = param_1[0x15];
      }
      (**(romwright_code **)(*(int *)param_1[7] + 8))((int *)param_1[7],param_1[10],param_1[0x2c],&temp_v9);
      param_1[0xc] = temp_v9;
      param_1[0xd] = temp_v10;
      param_1[0xe] = temp_v11;
      param_1[0xf] = temp_v12;
      param_1[0x10] = temp_v13;
      param_1[0x11] = temp_v14;
      param_1[0x12] = temp_v15;
      param_1[0x13] = temp_v16;
      param_1[0x14] = temp_v17;
      param_1[0x15] = temp_v18;
    }
    temp_v2 = param_1[5];
    if (temp_v2 != 0) {
      temp_v3 = *(int *)(temp_v2 + 0x48);
      temp_v6 = *(int *)(temp_v2 + 0x4c);
      temp_v7 = *(int *)(temp_v2 + 0x50);
      param_1[0x19] = *(int *)(temp_v2 + 0x54);
      param_1[0x16] = temp_v3;
      param_1[0x17] = temp_v6;
      param_1[0x18] = temp_v7;
    }
    (**(romwright_code **)(*param_1 + 0x30))(param_1);
    if ((*(char *)((int)param_1 + 0x9b) == '\0') || (param_1[0x1d] < param_1[0x1c])) {
      temp_v2 = FUN_00175678();
      if (temp_v1) {
        temp_v3 = temp_v2;
        FUN_0019102c(temp_v2,6);
        *(unsigned int *)(temp_v3 + 0xc) = *(unsigned int *)(temp_v2 + 0x184);
        *(unsigned char *)(temp_v3 + 4) = 5;
        temp_v4 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
        *(unsigned int *)(temp_v3 + 0x10) = temp_v4;
        FUN_0017572c(temp_v2,temp_v3);
        *(unsigned char *)((int)param_1 + 0x99) = 1;
        *(unsigned char *)(param_1 + 0x26) = 0;
      }
      if (*(char *)((int)param_1 + 0xa1) != '\x01') {
        if ((*(char *)((int)param_1 + 0xa1) == '\x03') && (param_1[0x20] <= param_1[0x21])) {
          *(unsigned char *)((int)param_1 + 0xa1) = 0;
        }
      }
      else if (param_1[0x20] <= param_1[0x21]) {
        temp_v3 = temp_v2;
        FUN_0019102c(temp_v2,6);
        *(unsigned int *)(temp_v3 + 0xc) = *(unsigned int *)(temp_v2 + 0x184);
        *(unsigned char *)(temp_v3 + 4) = 7;
        temp_v4 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
        *(unsigned int *)(temp_v3 + 0x10) = temp_v4;
        *(unsigned char *)(temp_v3 + 0x14) = 1;
        FUN_0017572c(temp_v2,temp_v3);
        *(unsigned char *)((int)param_1 + 0xa1) = 2;
      }
      if (*(char *)((int)param_1 + 0xa3) != '\0') {
        temp_v3 = temp_v2;
        FUN_0019102c(temp_v2,6);
        *(unsigned int *)(temp_v3 + 0xc) = *(unsigned int *)(temp_v2 + 0x184);
        *(unsigned char *)(temp_v3 + 4) = 7;
        temp_v4 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
        *(unsigned int *)(temp_v3 + 0x10) = temp_v4;
        *(unsigned char *)(temp_v3 + 0x14) = 0;
        FUN_0017572c(temp_v2,temp_v3);
        *(unsigned char *)((int)param_1 + 0xa3) = 0;
      }
      if (*(char *)((int)param_1 + 0xa2) != '\x01') {
        if ((*(char *)((int)param_1 + 0xa2) == '\x03') && (param_1[0x24] <= param_1[0x25])) {
          *(unsigned char *)((int)param_1 + 0xa2) = 0;
        }
        return;
      }
      if (param_1[0x24] <= param_1[0x25]) {
        *(unsigned char *)((int)param_1 + 0xa2) = 2;
      }
      return;
    }
    *(unsigned char *)((int)param_1 + 0x9b) = 0;
  }
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  return;
}

} /* extern "C" */
