/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010144c` (_code @ 0x10144c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

extern int FUN_002e4c0c(int, unsigned int, unsigned int, int);


int FUN_0010144c(unsigned int param_1,unsigned int param_2,unsigned int *param_3,int param_4,
                unsigned int param_5,unsigned int param_6,int param_7)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar5;
  int temp_v3;
  int temp_v4;
  
  puVar5 = (unsigned short *)0x0;
  temp_v0 = param_3[1];
  temp_v2 = 0;
  temp_v3 = param_3[2];
  temp_v4 = (*(romwright_code *)param_3[6])(param_2);
  if (param_4 == 0 && param_7 == 0) {
    while (temp_v1 = (*(romwright_code *)param_3[8])(temp_v4), temp_v1 != 0) {
      temp_v2 = temp_v2 + 1;
      temp_v4 = (*(romwright_code *)param_3[6])(param_2);
    }
  }
  if (temp_v4 != -1) {
    if ((temp_v0 & 1) == 0) {
      puVar2 = (unsigned int *)*param_3;
      *param_3 = (unsigned int)(puVar2 + 1);
      puVar5 = (unsigned short *)*puVar2;
    }
    while ((0 < temp_v3 && (temp_v4 != -1))) {
      if (param_4 != 0) {
        temp_v1 = FUN_002e4c0c(param_4,param_5,param_6,temp_v4);
        if (temp_v1 == 0) break;
      }
      else if ((param_7 == 0) && (temp_v1 = (*(romwright_code *)param_3[8])(temp_v4), temp_v1 != 0)) break;
      if ((temp_v0 & 1) == 0) {
        *puVar5 = (short)temp_v4;
        puVar5 = puVar5 + 1;
      }
      temp_v3 = temp_v3 - 1;
      temp_v2 = temp_v2 + 1;
      temp_v4 = (*(romwright_code *)param_3[6])(param_2);
    }
    (*(romwright_code *)param_3[7])(param_2);
    if ((temp_v0 & 1) == 0 && param_7 == 0) {
      *puVar5 = 0;
    }
    if (((int)param_3[2] <= temp_v3) || ((param_7 != 0 && (temp_v3 != 0)))) {
      temp_v2 = -2;
    }
  }
  else {
    temp_v2 = -1;
  }
  return temp_v2;
}
