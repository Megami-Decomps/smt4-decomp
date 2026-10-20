/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bdef4` (_code @ 0x1bdef4, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
} param_4_stack;


void FUN_001bdef4(int param_1,int param_2,int param_3,int param_4)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  romwright_code *pcVar6;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_5c;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  
  if (param_3 == 0) {
    temp_v9 = 400;
  }
  else {
    temp_v9 = 0x140;
  }
  piVar2 = (int *)(param_2 + param_3 * 0x10);
  if (param_4 != 0) {
    temp_v3 = piVar2[1];
  }
  else {
    temp_v3 = *piVar2;
  }
  temp_v0 = piVar2[2];
  if (temp_v0 == 0) {
    temp_v1 = 0x18;
  }
  else {
    temp_v1 = 0;
    switch(temp_v0) {
    case 1:
      temp_v1 = 3;
      break;
    case 2:
    case 3:
    case 4:
      temp_v1 = 2;
    }
    temp_v1 = temp_v1 << 3;
  }
  temp_v8 = (unsigned int)piVar2[3] >> 2;
  temp_v10 = temp_v1 << 2;
  switch(temp_v0) {
  case 0:
  case 1:
    temp_v5 = temp_v8 * 4 + 3;
    pcVar6 = (romwright_code *)0x1c7e34;
    temp_v7 = 3;
    break;
  case 2:
  case 3:
  case 4:
    temp_v5 = temp_v8 * 4 + 2;
    pcVar6 = (romwright_code *)0x1c7dc4;
    temp_v7 = 2;
    break;
  default:
    return;
  }
  temp_v6 = temp_v8 << 2;
  uStack_5c = 0;
  temp_v4 = 0;
  if ((param_1 != 0) && (temp_v11 = 0, temp_v9 != 0)) {
    temp_v12 = temp_v8 * 8;
    do {
      temp_v2 = 0;
      temp_v0 = temp_v3;
      do {
        (*pcVar6)(param_1,temp_v0,temp_v8,&temp_v4);
        temp_v2 = temp_v2 + 8;
        temp_v0 = temp_v0 + temp_v1;
        param_1 = param_1 + temp_v1 * 8;
      } while (temp_v2 < 0xf0);
      temp_v3 = temp_v3 + temp_v12 * 4;
      param_1 = param_1 + temp_v10 * 4;
      temp_v11 = temp_v11 + 8;
    } while (temp_v11 < temp_v9);
  }
  return;
}

} /* extern "C" */
