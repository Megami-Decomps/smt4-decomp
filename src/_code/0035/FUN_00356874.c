/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356874` (_code @ 0x356874, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int **DAT_0044e660; /* 0x44e660 */
extern unsigned int DAT_004d431c; /* 0x4d431c */

/* Supplied declaration required: FUN_002adb54. */
extern int FUN_002adb84(unsigned int **, unsigned int *, unsigned int);
extern unsigned long long FUN_002b5d0c(unsigned int *);


int FUN_00356874(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int **ppuVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  char *pcVar6;
  int temp_v3;
  unsigned long long temp_v4;
  unsigned int **temp_v5;
  unsigned int uStack_34;
  int temp_v6;
  unsigned int uStack_2c;
  unsigned int temp_v7;
  unsigned int **temp_v8;
  unsigned int uStack_20;
  unsigned int *temp_v9;
  
  temp_v5 = (unsigned int **)&temp_v8;
  temp_v7 = 1;
  uStack_20 = 1;
  temp_v9 = (unsigned int *)DAT_0044e660;
  uStack_34 = 1;
  temp_v8 = temp_v5;
  temp_v2 = FUN_002adb84(&temp_v9,(unsigned int *)&temp_v6,param_2);
  temp_v1 = uStack_2c;
  temp_v0 = temp_v6;
  ppuVar1 = DAT_0044e660;
  if (-1 < temp_v2) {
    temp_v4 = FUN_002b5d0c(&DAT_004d431c);
    pcVar6 = (char *)((unsigned long long)temp_v4 >> 0x20);
    puVar5 = (unsigned int *)temp_v4;
    if (puVar5 != (unsigned int *)0x0) {
      pcVar6 = "敌5拌5戠5";
      *puVar5 = (unsigned int)"敌5拌5戠5";
      puVar5[2] = temp_v0;
      puVar5[3] = temp_v1;
      puVar5[1] = (unsigned int)ppuVar1;
      temp_v3 = 0;
    }
    else {
      temp_v3 = -0x279fb9a7;
    }
    *param_1 = (unsigned int)puVar5;
    temp_v2 = 0;
    if (temp_v3 < 0) {
      temp_v5 = DAT_0044e660;
      FUN_002adb54(&temp_v5,pcVar6,temp_v6,uStack_2c);
      temp_v2 = temp_v3;
    }
  }
  return temp_v2;
}
