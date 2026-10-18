/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010124e` (_code @ 0x10124e, 0x11a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 8 slot(s), 30 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

extern int FUN_002e3cb8(unsigned short *, unsigned int, unsigned int *);


int FUN_0010124e(unsigned int param_1,unsigned int param_2,unsigned int *param_3,int param_4,int param_5)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar7;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8 [4];
  unsigned int uStack_24;
  unsigned int temp_v9;
  unsigned int *puStack_1c;
  int temp_v10;
  
  puVar7 = (unsigned short *)0x0;
  temp_v1 = param_3[1];
  temp_v4 = 0;
  temp_v5 = param_3[2];
  temp_v0 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  uStack_24 = param_1;
  temp_v9 = param_2;
  puStack_1c = param_3;
  temp_v10 = param_4;
  temp_v2 = (*(romwright_code *)param_3[6])(param_2);
  if (temp_v10 == 0 && param_5 == 0) {
    while (temp_v3 = (*(romwright_code *)param_3[8])(temp_v2), temp_v3 != 0) {
      temp_v4 = temp_v4 + 1;
      temp_v2 = (*(romwright_code *)param_3[6])(temp_v9);
    }
  }
  if (temp_v2 != 0xffffffff) {
    if ((temp_v1 & 1) == 0) {
      puVar4 = (unsigned int *)*param_3;
      *param_3 = (unsigned int)(puVar4 + 1);
      puVar7 = (unsigned short *)*puVar4;
    }
    while ((0 < temp_v5 && (temp_v2 != 0xffffffff))) {
      if (temp_v10 != 0) {
        if ((*(unsigned int *)(((int)(((unsigned int)((int)temp_v2 >> 0x1f) >> 0x1b) + temp_v2) >> 5) * 4 + temp_v10) &
            (1 << (((int)temp_v2 % 0x20) & 0xffU))) == 0) break;
      }
      else if ((param_5 == 0) && (temp_v3 = (*(romwright_code *)param_3[8])(temp_v2), temp_v3 != 0)) break;
      temp_v3 = FUN_002e3cb8(temp_v8,temp_v2 & 0xff,(unsigned int *)&temp_v6);
      if (temp_v3 == -1) {
        (*(romwright_code *)param_3[7])(temp_v9);
        temp_v4 = -2;
        return temp_v4;
      }
      if (temp_v3 != -2) {
        temp_v0 = 0;
        if ((temp_v1 & 1) == 0) {
          *puVar7 = temp_v8[0];
          puVar7 = puVar7 + 1;
        }
        temp_v5 = temp_v5 - 1;
      }
      else {
        temp_v0 = 1;
      }
      temp_v4 = temp_v4 + 1;
      temp_v2 = (*(romwright_code *)param_3[6])(temp_v9);
    }
    (*(romwright_code *)param_3[7])(temp_v9);
    if (!temp_v0) {
      if ((temp_v1 & 1) == 0 && param_5 == 0) {
        *puVar7 = 0;
      }
      if (temp_v5 < (int)param_3[2]) {
        if (param_5 == 0) {
          return temp_v4;
        }
        if (temp_v5 == 0) {
          return temp_v4;
        }
      }
    }
    temp_v4 = -2;
  }
  else {
    temp_v4 = -1;
  }
  return temp_v4;
}
