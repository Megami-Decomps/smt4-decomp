/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012fdc4` (_code @ 0x12fdc4, 0x478 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
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

/* Supplied declaration required: FUN_002b5124. */
/* Supplied declaration required: FUN_002b5148. */
extern int FUN_002bb218(void);
/* Supplied declaration required: FUN_002bdc08. */


void FUN_0012fdc4(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  
  (**(romwright_code **)(*param_1 + 0x28))(param_1);
  temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  if (*(char *)(temp_v2 + 0x10) != '\0') {
    temp_v3 = FUN_002bb218();
    temp_v2 = temp_v3;
    FUN_002b5148(temp_v3,5);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v3 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0xc;
    temp_v4 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
    *(unsigned int *)(temp_v2 + 0x10) = temp_v4;
    FUN_002b5124(temp_v3,temp_v2);
  }
  else {
    if (*(char *)((int)param_1 + 0x87) != '\0') {
      if (param_1[0x24] != 0) {
        param_1[0x24] = param_1[0x24] - 1;
      }
      else if (*(char *)((int)param_1 + 0x8b) == '\0' || *(char *)((int)param_1 + 0x8b) == '\x03') {
        FUN_002bdc08(param_1,0);
        return;
      }
    }
    temp_v1 = 0;
    if (*(char *)((int)param_1 + 0x86) != '\0') {
      if (*(char *)((int)param_1 + 0x8a) == '\x01') {
        if (param_1[0x25] != -1) {
          param_1[0x25] = param_1[0x25] + 1;
        }
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x85) == '\0') {
        return;
      }
      temp_v2 = (**(romwright_code **)(*param_1 + 0x14))(param_1);
      if (temp_v2 == 0) {
        return;
      }
      *(unsigned char *)((int)param_1 + 0x8a) = 1;
      temp_v1 = 1;
      if (param_1[0x25] != -1) {
        param_1[0x25] = param_1[0x25] + 1;
      }
    }
    if ((*(char *)((int)param_1 + 0x89) != '\0') &&
       (temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1), *(char *)(temp_v2 + 0xf) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0012ff28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(romwright_code **)(*param_1 + 0x10))(param_1);
      return;
    }
    temp_v0 = *(char *)((int)param_1 + 0x8b);
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if (temp_v0 == '\x03') {
          if (param_1[0x20] < param_1[0x1f]) {
            param_1[0x20] = param_1[0x20] + 1;
          }
          (**(romwright_code **)(*param_1 + 0x2c))(param_1);
        }
      }
      else if (param_1[0x20] < param_1[0x1f]) {
        param_1[0x20] = param_1[0x20] + 1;
      }
    }
    else {
      (**(romwright_code **)(*param_1 + 0x2c))(param_1);
    }
    piVar6 = (int *)param_1[8];
    if (piVar6 != (int *)0x0) {
      (**(romwright_code **)(*piVar6 + 8))(piVar6,param_1[10],param_1);
    }
    if (param_1[7] != 0) {
      temp_v6 = 0x3f800000;
      temp_v7 = 0x3f800000;
      temp_v8 = 0;
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      if (param_1[0x25] != 0) {
        temp_v6 = param_1[0xc];
        temp_v7 = param_1[0xd];
        temp_v8 = param_1[0xe];
        temp_v9 = param_1[0xf];
        temp_v10 = param_1[0x10];
        temp_v11 = param_1[0x11];
        temp_v12 = param_1[0x12];
        temp_v13 = param_1[0x13];
        temp_v14 = param_1[0x14];
        temp_v15 = param_1[0x15];
      }
      (**(romwright_code **)(*(int *)param_1[7] + 8))((int *)param_1[7],param_1[10],param_1[0x27],&temp_v6);
      param_1[0xc] = temp_v6;
      param_1[0xd] = temp_v7;
      param_1[0xe] = temp_v8;
      param_1[0xf] = temp_v9;
      param_1[0x10] = temp_v10;
      param_1[0x11] = temp_v11;
      param_1[0x12] = temp_v12;
      param_1[0x13] = temp_v13;
      param_1[0x14] = temp_v14;
      param_1[0x15] = temp_v15;
    }
    temp_v2 = param_1[5];
    if (temp_v2 != 0) {
      temp_v3 = *(int *)(temp_v2 + 0x48);
      temp_v5 = *(int *)(temp_v2 + 0x4c);
      param_1[0x18] = *(int *)(temp_v2 + 0x50);
      param_1[0x16] = temp_v3;
      param_1[0x17] = temp_v5;
    }
    (**(romwright_code **)(*param_1 + 0x30))(param_1);
    if (((char)param_1[0x22] == '\0') || (param_1[0x1c] < param_1[0x1b])) {
      temp_v2 = FUN_002bb218();
      if (temp_v1) {
        temp_v3 = temp_v2;
        FUN_002b5148(temp_v2,6);
        *(unsigned int *)(temp_v3 + 0xc) = *(unsigned int *)(temp_v2 + 0x184);
        *(unsigned char *)(temp_v3 + 4) = 5;
        temp_v4 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
        *(unsigned int *)(temp_v3 + 0x10) = temp_v4;
        FUN_002b5124(temp_v2,temp_v3);
        *(unsigned char *)((int)param_1 + 0x86) = 1;
        *(unsigned char *)((int)param_1 + 0x85) = 0;
      }
      if (*(char *)((int)param_1 + 0x8b) != '\x01') {
        if ((*(char *)((int)param_1 + 0x8b) == '\x03') && (param_1[0x1f] <= param_1[0x20])) {
          *(unsigned char *)((int)param_1 + 0x8b) = 0;
        }
      }
      else if (param_1[0x1f] <= param_1[0x20]) {
        temp_v3 = temp_v2;
        FUN_002b5148(temp_v2,6);
        *(unsigned int *)(temp_v3 + 0xc) = *(unsigned int *)(temp_v2 + 0x184);
        *(unsigned char *)(temp_v3 + 4) = 7;
        temp_v4 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
        *(unsigned int *)(temp_v3 + 0x10) = temp_v4;
        *(unsigned char *)(temp_v3 + 0x14) = 1;
        FUN_002b5124(temp_v2,temp_v3);
        *(unsigned char *)((int)param_1 + 0x8b) = 2;
      }
      if ((char)param_1[0x23] != '\0') {
        temp_v3 = temp_v2;
        FUN_002b5148(temp_v2,6);
        *(unsigned int *)(temp_v3 + 0xc) = *(unsigned int *)(temp_v2 + 0x184);
        *(unsigned char *)(temp_v3 + 4) = 7;
        temp_v4 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
        *(unsigned int *)(temp_v3 + 0x10) = temp_v4;
        *(unsigned char *)(temp_v3 + 0x14) = 0;
        FUN_002b5124(temp_v2,temp_v3);
        *(unsigned char *)(param_1 + 0x23) = 0;
      }
      return;
    }
    *(unsigned char *)(param_1 + 0x22) = 0;
  }
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  return;
}
