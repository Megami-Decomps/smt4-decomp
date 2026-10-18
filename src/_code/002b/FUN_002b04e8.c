/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b04e8` (_code @ 0x2b04e8, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 11 slot(s), 40 byte(s) */
typedef struct {
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_6_stack;

/* Supplied declaration required: FUN_002af63c. */
extern int FUN_002afef4(unsigned int, int);


void FUN_002b04e8(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned long long param_5,
                 int *param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int uStack_54;
  unsigned int temp_v2;
  unsigned int uStack_4c;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  
  temp_v0 = FUN_002afef4(param_2,param_3);
  temp_v2 = (unsigned int)param_5;
  uStack_4c = (unsigned int)((unsigned long long)param_5 >> 0x20);
  temp_v5 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v10 = 1;
  temp_v11 = 1;
  temp_v1 = param_1;
  if (param_6 != (int *)0x0) {
    temp_v1 = param_1 | 0x28000;
    temp_v6 = *param_6;
    temp_v7 = param_6[1];
    temp_v8 = param_6[2];
    temp_v9 = param_6[3];
    temp_v4 = temp_v9 - temp_v8;
    temp_v5 = temp_v7 - temp_v6;
  }
  uStack_54 = param_4;
  FUN_002af63c(temp_v0,**(int **)(temp_v0 + 4) + (param_3 % 1000) * 0x14,&temp_v1);
  return;
}
