/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003560dc` (_code @ 0x3560dc, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */
extern unsigned int DAT_004d431c; /* 0x4d431c */

/* Supplied declaration required: FUN_002adb54. */
extern int FUN_002adb84(unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned int);
extern unsigned long long FUN_002b5d0c(unsigned int *);


int FUN_003560dc(unsigned int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  char *pcVar5;
  unsigned int temp_v3;
  int temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6 [2];
  int temp_v7;
  int temp_v8;
  unsigned int uStack_24;
  
  temp_v3 = 0;
  if (param_3 != 0) {
    temp_v3 = 0x12345678;
  }
  temp_v7 = DAT_0044e660;
  temp_v6[0] = 0xc;
  if (param_3 == 0) {
    temp_v3 = 6;
  }
  temp_v2 = FUN_002adb84((unsigned int *)&temp_v7,(unsigned int *)&temp_v8,temp_v3,2,param_2);
  temp_v1 = uStack_24;
  temp_v0 = temp_v8;
  temp_v3 = DAT_0044e660;
  if (-1 < temp_v2) {
    temp_v5 = FUN_002b5d0c(&DAT_004d431c);
    pcVar5 = (char *)((unsigned long long)temp_v5 >> 0x20);
    puVar4 = (unsigned int *)temp_v5;
    if (puVar4 != (unsigned int *)0x0) {
      pcVar5 = "敌5拌5戠5";
      *puVar4 = (unsigned int)"敌5拌5戠5";
      puVar4[2] = temp_v0;
      puVar4[3] = temp_v1;
      puVar4[1] = temp_v3;
      temp_v4 = 0;
    }
    else {
      temp_v4 = -0x279fb9a7;
    }
    *param_1 = (unsigned int)puVar4;
    temp_v2 = 0;
    if (temp_v4 < 0) {
      temp_v6[0] = DAT_0044e660;
      FUN_002adb54(temp_v6,pcVar5,temp_v8,uStack_24);
      temp_v2 = temp_v4;
    }
  }
  return temp_v2;
}
