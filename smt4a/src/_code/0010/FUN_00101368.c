/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00101368` (_code @ 0x101368, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_7_stack;

extern int FUN_002e3f88(unsigned char *, unsigned int, unsigned int *);
extern int FUN_002e4c0c(int, unsigned int, unsigned int, unsigned int);


int FUN_00101368(unsigned int param_1,unsigned int param_2,unsigned int *param_3,int param_4,
                unsigned int param_5,unsigned int param_6,int param_7)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_24;
  unsigned int temp_v8;
  unsigned int *puStack_1c;
  int temp_v9;
  
  temp_v5 = (unsigned char *)0x0;
  temp_v0 = param_3[1];
  temp_v4 = param_3[2];
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v3 = 0;
  uStack_24 = param_1;
  temp_v8 = param_2;
  puStack_1c = param_3;
  temp_v9 = param_4;
  temp_v1 = (*(romwright_code *)param_3[6])(param_2);
  if (temp_v9 == 0 && param_7 == 0) {
    while (temp_v2 = (*(romwright_code *)param_3[8])(temp_v1), temp_v2 != 0) {
      temp_v3 = temp_v3 + 1;
      temp_v1 = (*(romwright_code *)param_3[6])(temp_v8);
    }
  }
  if (temp_v1 != 0xffffffff) {
    if ((temp_v0 & 1) == 0) {
      puVar3 = (unsigned int *)*param_3;
      *param_3 = (unsigned int)(puVar3 + 1);
      temp_v5 = (unsigned char *)*puVar3;
    }
    while ((0 < temp_v4 && (temp_v1 != 0xffffffff))) {
      if (temp_v9 != 0) {
        temp_v2 = FUN_002e4c0c(temp_v9,param_5,param_6,temp_v1);
        if (temp_v2 == 0) break;
      }
      else if ((param_7 == 0) && (temp_v2 = (*(romwright_code *)param_3[8])(temp_v1), temp_v2 != 0)) break;
      if ((temp_v0 & 1) == 0) {
        temp_v2 = FUN_002e3f88(temp_v5,temp_v1 & 0xffff,(unsigned int *)&temp_v6);
        if (temp_v2 == -1) {
          temp_v3 = -2;
          return temp_v3;
        }
        temp_v5 = temp_v5 + temp_v2;
      }
      temp_v4 = temp_v4 - 1;
      temp_v3 = temp_v3 + 1;
      temp_v1 = (*(romwright_code *)param_3[6])(temp_v8);
    }
    (*(romwright_code *)param_3[7])(temp_v8);
    if ((temp_v0 & 1) == 0 && param_7 == 0) {
      *temp_v5 = 0;
    }
    if (((int)param_3[2] <= temp_v4) || ((param_7 != 0 && (temp_v4 != 0)))) {
      temp_v3 = -2;
    }
  }
  else {
    temp_v3 = -1;
  }
  return temp_v3;
}
