/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001010f0` (_code @ 0x1010f0, 0xe2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;


int FUN_001010f0(unsigned int param_1,unsigned int param_2,unsigned int *param_3,int param_4,int param_5)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar6;
  int temp_v4;
  
  puVar6 = (unsigned char *)0x0;
  temp_v0 = param_3[1];
  temp_v3 = 0;
  temp_v4 = param_3[2];
  temp_v1 = (*(romwright_code *)param_3[6])(param_2);
  if (param_4 == 0 && param_5 == 0) {
    while (temp_v2 = (*(romwright_code *)param_3[8])(temp_v1), temp_v2 != 0) {
      temp_v3 = temp_v3 + 1;
      temp_v1 = (*(romwright_code *)param_3[6])(param_2);
    }
  }
  if (temp_v1 != -1) {
    if ((temp_v0 & 1) == 0) {
      puVar3 = (unsigned int *)*param_3;
      *param_3 = (unsigned int)(puVar3 + 1);
      puVar6 = (unsigned char *)*puVar3;
    }
    while ((0 < temp_v4 && (temp_v1 != -1))) {
      if (param_4 != 0) {
        if ((*(unsigned int *)(((int)(((unsigned int)(temp_v1 >> 0x1f) >> 0x1b) + temp_v1) >> 5) * 4 + param_4) &
            (1 << ((temp_v1 % 0x20) & 0xffU))) == 0) break;
      }
      else if ((param_5 == 0) && (temp_v2 = (*(romwright_code *)param_3[8])(temp_v1), temp_v2 != 0)) break;
      if ((temp_v0 & 1) == 0) {
        *puVar6 = (char)temp_v1;
        puVar6 = puVar6 + 1;
      }
      temp_v4 = temp_v4 - 1;
      temp_v3 = temp_v3 + 1;
      temp_v1 = (*(romwright_code *)param_3[6])(param_2);
    }
    (*(romwright_code *)param_3[7])(param_2);
    if ((temp_v0 & 1) == 0 && param_5 == 0) {
      *puVar6 = 0;
    }
    if (((int)param_3[2] <= temp_v4) || ((param_5 != 0 && (temp_v4 != 0)))) {
      temp_v3 = -2;
    }
  }
  else {
    temp_v3 = -1;
  }
  return temp_v3;
}
