/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040307c` (_code @ 0x40307c, 0x488 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);
int FUN_00344cd0(...);
int FUN_00404050(...);
int FUN_00404f40(...);

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_00344cd0. */
/* Supplied declaration required: FUN_00404050. */
/* Supplied declaration required: FUN_00404f40. */
extern unsigned int tableFlagBit2(unsigned int);
extern unsigned int tableFlagBit1(void);


void FUN_0040307c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  
  temp_v0 = vec2GetXInt(param_1 + 0x14c);
  temp_v1 = vec2GetYInt(param_1 + 0x14c);
  efctSetSpeed();
  FUN_001835b4(2,0x32,0x4d,temp_v0,temp_v1,0x60);
  FUN_001835b4(2,0x32,0x4e,temp_v0,temp_v1,0x60);
  FUN_001835b4(2,0x32,0x4a,temp_v0,temp_v1,0x65);
  FUN_001835b4(2,0x32,0x4b,temp_v0,temp_v1,0x65);
  FUN_001835b4(2,0x32,0x4c,temp_v0,temp_v1,0x66);
  temp_v8 = 0;
  do {
    FUN_001835b4(2,0x32,temp_v8 * 2 + 0x4f,temp_v0,temp_v1,0x6a);
    FUN_001835b4(2,0x32,temp_v8 * 2 + 0x50,temp_v0,temp_v1,0x6a);
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 9);
  efctSetSpeed();
  temp_v8 = 0;
  do {
    if (*(int *)(param_1 + 0x660) <= temp_v8) break;
    temp_v2 = (unsigned int)*(unsigned short *)(param_1 + (*(int *)(param_1 + 0xf8) + temp_v8) * 2 + 0x408);
    temp_v3 = tableFlagBit1();
    temp_v4 = tableFlagBit2(temp_v2);
    if (*(int *)(param_1 + 0xf4) == temp_v8) {
      temp_v5 = FUN_001834a4(0x32,temp_v8 + 0x72);
      temp_v12 = 0x9fe7ffff;
      temp_v6 = FUN_00284140((int)*(short *)(param_1 + temp_v8 * 2 + 0x10c));
      if ((temp_v6 == 1 || temp_v6 == 2) || temp_v6 == 6) {
        temp_v12 = 0xf5ff9fff;
      }
      temp_v7 = *(short *)(temp_v5 + 8) + temp_v0;
      temp_v11 = *(short *)(temp_v5 + 10) + temp_v1;
      if (*(char *)(param_1 + 4) != '\b') {
        efctSetSpeed();
        temp_v9 = 0;
        do {
          FUN_001835b4(2,0x32,temp_v9 + 0x7d,temp_v7,temp_v11,0x7e);
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < 3);
        efctSetSpeed();
        FUN_001835b4(2,0x32,0x80,temp_v7,temp_v11,0x7e);
        if (!((temp_v6 != 1 && temp_v6 != 2) && temp_v6 != 6)) {
          FUN_001835b4(2,0x32,0xa2,temp_v7,temp_v11,0x83);
          FUN_001835b4(2,0x32,0xa3,temp_v7,temp_v11,0x83);
          FUN_001835b4(2,0x32,0xa4,temp_v7,temp_v11,0x88);
          temp_v10 = 0xa5;
        }
        else {
          FUN_001835b4(2,0x32,0x81,temp_v7,temp_v11,0x83);
          FUN_001835b4(2,0x32,0x82,temp_v7,temp_v11,0x83);
          FUN_001835b4(2,0x32,0x83,temp_v7,temp_v11,0x88);
          temp_v10 = 0xa1;
        }
        efctSetSpeed();
        FUN_001835b4(2,0x32,temp_v10,temp_v7,temp_v11,0x8d);
        efctSetSpeed();
      }
      FUN_00404f40(param_1,temp_v2,*(short *)(temp_v5 + 8) + temp_v0,*(short *)(temp_v5 + 10) + temp_v1,temp_v3,
                   temp_v4,temp_v12);
    }
    else {
      temp_v5 = FUN_001834a4(0x32,temp_v8 + 0x67);
      FUN_00404050(param_1,temp_v2,*(short *)(temp_v5 + 8) + temp_v0,*(short *)(temp_v5 + 10) + temp_v1,temp_v3,
                   temp_v4);
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 10);
  efctSetSpeed();
  FUN_00344cd0(param_1 + 0x90,temp_v0,temp_v1,0x32,0x88,0x89,0x8a,0x84,0x85,0x86,0x87,
               (int)*(short *)(param_1 + 0x126),(int)*(short *)(param_1 + 0x122),
               (int)*(short *)(param_1 + 0x124),0x6a,0);
  if (*(unsigned char *)(param_1 + 4) >= 4) {
    efctSetSpeed();
    FUN_001835b4(2,0x32,0x95,temp_v0,temp_v1,0x97);
    efctSetSpeed();
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
