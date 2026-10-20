/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100e62` (_code @ 0x100e62, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern long long rt_lmul(int, int, int, int);
extern int digitValueInBase(int, int);


int FUN_00100e62(unsigned int param_1,unsigned int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 3 goto(s) */
  int temp_v0;
  unsigned int *puVar2;
  long long *plVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  long long temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  
  temp_v5 = param_4[2];
  temp_v3 = param_4[1];
  temp_v2 = -1;
  do {
    temp_v1 = temp_v2;
    temp_v2 = temp_v1 + 1;
    temp_v10 = (*(romwright_code *)param_4[6])(param_2);
    temp_v0 = (*(romwright_code *)param_4[8])();
  } while (temp_v0 != 0);
  if (temp_v10 == -1) {
    return -1;
  }
  temp_v4 = temp_v3 & 0xfffff9ff;
  temp_v0 = temp_v2;
  temp_v6 = temp_v5;
  temp_v11 = param_3;
  if (0 < temp_v5) {
    if ((int)(temp_v3 << 0x19) < 0) {
      if (temp_v10 != 0x2b) {
        if (temp_v10 != 0x2d) goto LAB_00100ec6;
        temp_v4 = temp_v4 | 0x400;
      }
      temp_v2 = temp_v1 + 2;
      temp_v10 = (*(romwright_code *)param_4[6])(param_2);
      temp_v5 = temp_v5 - 1;
      temp_v0 = temp_v2;
      temp_v6 = temp_v5;
      if (temp_v5 < 1) goto LAB_00100ecc;
    }
LAB_00100ec6:
    temp_v0 = temp_v2;
    temp_v6 = temp_v5;
    if (temp_v10 == 0x30) {
      temp_v3 = temp_v4 | 0x200;
      temp_v6 = temp_v5 - 1;
      temp_v0 = temp_v2 + 1;
      temp_v10 = (*(romwright_code *)param_4[6])(param_2);
      if ((temp_v6 < 1) || ((temp_v10 != 0x78 && (temp_v10 != 0x58)))) {
        temp_v7 = 0;
        if (param_3 == 0) {
          temp_v11 = 8;
          temp_v7 = 0;
        }
      }
      else if ((param_3 == 0) || (temp_v7 = 0, param_3 == 0x10)) {
        temp_v6 = temp_v5 - 2;
        temp_v0 = temp_v2 + 2;
        temp_v10 = (*(romwright_code *)param_4[6])(param_2);
        temp_v11 = 0x10;
        temp_v3 = temp_v4;
        temp_v7 = 0;
      }
      goto LAB_00100f4e;
    }
  }
LAB_00100ecc:
  temp_v3 = temp_v4;
  temp_v7 = 0;
  if (param_3 == 0) {
    temp_v11 = 10;
    temp_v7 = 0;
  }
LAB_00100f4e:
  while( 1 ) {
    temp_v9 = (int)((unsigned long long)temp_v7 >> 0x20);
    temp_v8 = (int)temp_v7;
    if ((temp_v6 < 1) || (temp_v2 = digitValueInBase(temp_v10,temp_v11), temp_v2 < 0)) break;
    temp_v6 = temp_v6 - 1;
    temp_v7 = rt_lmul(temp_v8,temp_v9,temp_v11,temp_v11 >> 0x1f);
    temp_v0 = temp_v0 + 1;
    temp_v10 = (*(romwright_code *)param_4[6])(param_2);
    temp_v3 = temp_v3 | 0x200;
    temp_v7 = temp_v7 + temp_v2;
  }
  (*(romwright_code *)param_4[7])(param_2);
  if ((int)(temp_v3 << 0x16) >= 0) {
    temp_v0 = -2;
  }
  else if ((temp_v3 & 1) == 0) {
    if ((int)(temp_v3 << 0x19) < 0) {
      if ((int)(temp_v3 << 0x15) < 0) {
        temp_v7 = romwright_piece_4_4(-(unsigned int)(temp_v8 != 0) - temp_v9,-temp_v8);
      }
      puVar2 = (unsigned int *)*param_4;
      *param_4 = (unsigned int)(puVar2 + 1);
      plVar3 = (long long *)*puVar2;
    }
    else {
      puVar2 = (unsigned int *)*param_4;
      *param_4 = (unsigned int)(puVar2 + 1);
      plVar3 = (long long *)*puVar2;
    }
    *plVar3 = temp_v7;
  }
  return temp_v0;
}

} /* extern "C" */
