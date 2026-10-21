/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028e6d0` (_code @ 0x28e6d0, 0x260 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextDrawDirectoryEntry(...);
int FUN_00296b3c(unsigned int, int, unsigned int, int, int, unsigned char *, int);
int objFlagsSetBits(unsigned int, int);
int FUN_002d65d0(void);
int FUN_002e20b4(void);

typedef struct fn_0028e6d0_arg0 fn_0028e6d0_arg0;
struct fn_0028e6d0_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    char field_0x9; /* +0x9 */
    char field_0xa; /* +0xa */
    unsigned char pad_0xb[0x1];
    uint field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    int field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    undefined1 field_0x2c; /* +0x2c */
    byte field_0x2d; /* +0x2d */
    unsigned char pad_0x2e[0x6];
    byte field_0x34; /* +0x34 */
    byte field_0x35; /* +0x35 */
    unsigned char pad_0x36[0x9db];
    byte field_0xa11; /* +0xa11 */
    unsigned char pad_0xa12[0x26];
    undefined4 field_0xa38; /* +0xa38 */
};

/* stack frame of param_7: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

extern unsigned char LAB_0028e930; /* 0x28e930 */

/* Supplied declaration required: asdTextDrawDirectoryEntry. */
/* Supplied declaration required: FUN_00296b3c. */
extern int FUN_002b89a4(unsigned int);
/* Supplied declaration required: objFlagsSetBits. */
/* Supplied declaration required: FUN_002d65d0. */
/* Supplied declaration required: FUN_002e20b4. */
extern int FUN_00309ba0(void);


void FUN_0028e6d0(fn_0028e6d0_arg0 *param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 int param_6,unsigned int param_7)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = param_1->field_0x4;
  temp_v2 = param_1->field_0xa38;
  temp_v0 = param_1->field_0x8;
  temp_v5 = param_1->field_0xc;
  objFlagsSetBits(temp_v1,8);
  FUN_002d65d0();
  FUN_002e20b4();
  if (param_2 == 0) {
    param_1->field_0x2c = 1;
  }
  else {
    param_1->field_0x2c = 0;
    if (param_1->field_0x2d != 0) {
      FUN_00296b3c(temp_v1,3,0xffffffff,0,3,&LAB_0028e930,param_2);
    }
    else if (param_4 != 0xc) {
      if (param_4 != 0xb) {
        if (param_4 != 0x13) {
          if ((((param_4 == 1 || param_4 == 2) || (param_4 == 3 || param_4 == 4)) ||
              (param_4 == 5 || param_4 == 6)) ||
             ((param_4 == 0x10 || param_4 == 0x11) || param_4 == 0x12)) {
            temp_v4 = 4;
          }
          else {
            temp_v4 = 3;
          }
        }
        else {
          temp_v2 = 0xffffffff;
          temp_v4 = 4;
        }
      }
      else {
        temp_v2 = 0xffffffff;
        temp_v4 = 3;
      }
      asdTextDrawDirectoryEntry(temp_v1,temp_v4,temp_v2,0,3,param_2,param_3);
    }
    else {
      asdTextDrawDirectoryEntry(temp_v1,3,0xffffffff,0,3,param_2,param_3);
    }
  }
  FUN_002d65d0();
  FUN_002e20b4();
  if (param_1->field_0xa11 == 0x14) {
    param_1->field_0x9 = (char)param_4;
  }
  else {
    param_1->field_0x9 = param_1->field_0xa11;
  }
  param_1->field_0xc = param_5;
  param_1->field_0x18 = param_7;
  param_1->field_0x1c = 0xffffffff;
  if (((param_1->field_0x34 != 0) && (param_1->field_0x34 == 1)) &&
     (param_1->field_0xc = param_5 & 0xfffffff7, param_1->field_0x35 != 0)) {
    param_1->field_0xa = '\0';
    temp_v3 = 1;
    param_1->field_0x8 = 1;
  }
  else {
    param_1->field_0xa = (char)param_6;
    if (param_6 != 0) {
      temp_v3 = 2;
      if (param_6 == 1 || param_6 == 2) {
        param_1->field_0x8 = 2;
      }
    }
    else {
      temp_v3 = 1;
      param_1->field_0x8 = 1;
    }
  }
  if ((param_5 & 1) != 0 && temp_v0 != 0) {
    temp_v6 = (temp_v5 & 1) != 0;
    if (temp_v6) {
      temp_v3 = param_1->field_0x14;
    }
    if (temp_v6 && temp_v3 != 0) {
      temp_v3 = FUN_00309ba0();
      if (((temp_v3 != 0) || (temp_v3 = FUN_002b89a4(0), temp_v3 == 0)) && (param_1->field_0x8 == 2)) {
        param_1->field_0x8 = 6;
      }
      return;
    }
  }
  param_1->field_0x14 = 0;
  temp_v3 = FUN_00309ba0();
  if (((temp_v3 != 0) || (temp_v3 = FUN_002b89a4(0), temp_v3 == 0)) && (param_1->field_0x8 == 2)) {
    param_1->field_0x8 = 6;
  }
  return;
}

} /* extern "C" */
