/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6c82` (_code @ 0x2f6c82, 0x9a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int lessU32Alt(...);
int FUN_002f6e54(unsigned char [8], int, int *, int *);
int FUN_0030a7bc(int [2]);

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
} param_2_stack;

/* Supplied declaration required: lessU32Alt. */
/* Supplied declaration required: FUN_002f6e54. */
extern int wordRefsDiffer_0030a728(int *, unsigned int *);
/* Supplied declaration required: FUN_0030a7bc. */


int FUN_002f6c82(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4 [2];
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *temp_v10;
  int temp_v11;
  unsigned char temp_v12 [8];
  int temp_v13;
  unsigned int uStack_18;
  
  temp_v10 = &temp_v5;
  temp_v8 = param_1 + 0x19;
  temp_v1 = *(int *)(param_1 + 0x10);
  temp_v3 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  temp_v13 = param_1;
  uStack_18 = param_2;
  while (temp_v3 != 0) {
    temp_v0 = lessU32Alt(temp_v8,temp_v3 + 0x10,param_2);
    if (temp_v0 != 0) {
      temp_v3 = *(int *)(temp_v3 + 0xc);
    }
    else {
      temp_v1 = temp_v3;
      temp_v3 = *(int *)(temp_v3 + 8);
    }
  }
  temp_v7 = param_1 + 0x19;
  temp_v3 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  temp_v0 = *(int *)(param_1 + 0x10);
  while (temp_v2 = temp_v3, temp_v2 != 0) {
    temp_v3 = lessU32Alt(temp_v7,param_2,temp_v2 + 0x10);
    if (temp_v3 != 0) {
      temp_v3 = *(int *)(temp_v2 + 8);
      temp_v0 = temp_v2;
    }
    else {
      temp_v3 = *(int *)(temp_v2 + 0xc);
    }
  }
  temp_v10[1] = temp_v0;
  temp_v3 = 0;
  temp_v4[0] = temp_v1;
  temp_v5 = temp_v1;
  while (temp_v1 = wordRefsDiffer_0030a728(temp_v4,(unsigned int *)&temp_v6), temp_v1 != 0) {
    temp_v3 = temp_v3 + 1;
    FUN_0030a7bc(temp_v4);
  }
  temp_v9 = temp_v6;
  temp_v11 = temp_v5;
  FUN_002f6e54(temp_v12,temp_v13,&temp_v11,&temp_v9);
  return temp_v3;
}

} /* extern "C" */
