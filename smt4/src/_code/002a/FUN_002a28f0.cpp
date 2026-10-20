/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a28f0` (_code @ 0x2a28f0, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
} param_4_stack;


void FUN_002a28f0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  romwright_code *pcVar6;
  int temp_v4;
  int iStack_68;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_5c;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  
  if (param_3 == 0) {
    temp_v8 = 400;
  }
  else {
    temp_v8 = 0x140;
  }
  piVar1 = (int *)(param_2 + param_3 * 0x10);
  if (param_4 != 0) {
    temp_v3 = piVar1[1];
  }
  else {
    temp_v3 = *piVar1;
  }
  temp_v1 = piVar1[2];
  if (temp_v1 == 0) {
    temp_v0 = 0x18;
  }
  else {
    temp_v0 = 0;
    switch(temp_v1) {
    case 1:
      temp_v0 = 3;
      break;
    case 2:
    case 3:
    case 4:
      temp_v0 = 2;
    }
    temp_v0 = temp_v0 << 3;
  }
  temp_v7 = (unsigned int)piVar1[3] >> 2;
  temp_v9 = temp_v0 << 2;
  switch(temp_v1) {
  case 0:
  case 1:
    iStack_68 = temp_v7 * 4 + 3;
    pcVar6 = (romwright_code *)0x15a634;
    temp_v6 = 3;
    break;
  case 2:
  case 3:
  case 4:
    iStack_68 = temp_v7 * 4 + 2;
    pcVar6 = (romwright_code *)0x15a5c4;
    temp_v6 = 2;
    break;
  default:
    return;
  }
  temp_v5 = temp_v7 << 2;
  uStack_5c = 0;
  temp_v4 = 0;
  if ((param_1 != 0) && (temp_v10 = 0, temp_v8 != 0)) {
    temp_v11 = temp_v7 * 8;
    do {
      temp_v2 = 0;
      temp_v1 = temp_v3;
      do {
        (*pcVar6)(param_1,temp_v1,temp_v7,&temp_v4);
        temp_v2 = temp_v2 + 8;
        temp_v1 = temp_v1 + temp_v0;
        param_1 = param_1 + temp_v0 * 8;
      } while (temp_v2 < 0xf0);
      temp_v3 = temp_v3 + temp_v11 * 4;
      param_1 = param_1 + temp_v9 * 4;
      temp_v10 = temp_v10 + 8;
    } while (temp_v10 < temp_v8);
  }
  return;
}

} /* extern "C" */
