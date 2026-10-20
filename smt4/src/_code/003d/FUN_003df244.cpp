/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df244` (_code @ 0x3df244, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strncpy(int *, unsigned int, int);

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned char LAB_003df308; /* 0x3df308 */

extern int libc_strncmp(unsigned int, unsigned char *, unsigned int);


void FUN_003df244(unsigned int *param_1,int *param_2)

{
/* irregular: 1 goto(s) */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v3 = *param_2;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v4 = 0;
  temp_v0 = **(unsigned int **)(temp_v3 + 0x10);
  temp_v5 = *(unsigned int *)(temp_v3 + 0x1c);
  if (temp_v5 != 0) {
    do {
      temp_v1 = libc_strncmp(*(unsigned int *)(*(int *)(temp_v3 + 0x18) + temp_v4 * 8),&LAB_003df308,0x40);
      if (temp_v1 == 0) {
        temp_v2 = *(unsigned int *)(*(int *)(temp_v3 + 0x18) + temp_v4 * 8 + 4);
        goto LAB_003df2cc;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5);
  }
  temp_v2 = 0;
LAB_003df2cc:
  strncpy(&temp_v6,temp_v2,0x20);
  temp_v13 = temp_v13 & 0xffffff;
  *param_1 = temp_v0;
  param_1[1] = temp_v6;
  param_1[2] = temp_v7;
  param_1[3] = temp_v8;
  param_1[4] = temp_v9;
  param_1[5] = temp_v10;
  param_1[6] = temp_v11;
  param_1[7] = temp_v12;
  param_1[8] = temp_v13;
  return;
}

} /* extern "C" */
