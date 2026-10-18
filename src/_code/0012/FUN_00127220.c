/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00127220` (_code @ 0x127220, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */
extern unsigned int DAT_004d431c; /* 0x4d431c */

/* Supplied declaration required: FUN_002adb54. */
extern int FUN_002adb84(unsigned int *, unsigned int *, unsigned int, unsigned int);
extern unsigned long long FUN_002b5d0c(unsigned int *);


int FUN_00127220(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  char *pcVar6;
  int temp_v4;
  unsigned long long temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int uStack_24;
  unsigned int temp_v9 [2];
  
  temp_v9[0] = DAT_0044e660;
  temp_v7 = 0xc;
  temp_v6 = param_2;
  temp_v3 = FUN_002adb84(temp_v9,(unsigned int *)&temp_v8,7,2);
  temp_v2 = uStack_24;
  temp_v1 = temp_v8;
  temp_v0 = DAT_0044e660;
  if (-1 < temp_v3) {
    temp_v5 = FUN_002b5d0c(&DAT_004d431c);
    pcVar6 = (char *)((unsigned long long)temp_v5 >> 0x20);
    puVar5 = (unsigned int *)temp_v5;
    if (puVar5 != (unsigned int *)0x0) {
      pcVar6 = "敌5拌5戠5";
      *puVar5 = (unsigned int)"敌5拌5戠5";
      puVar5[2] = temp_v1;
      puVar5[3] = temp_v2;
      puVar5[1] = temp_v0;
      temp_v4 = 0;
    }
    else {
      temp_v4 = -0x279fb9a7;
    }
    *param_1 = (unsigned int)puVar5;
    temp_v3 = 0;
    if (temp_v4 < 0) {
      temp_v6 = DAT_0044e660;
      FUN_002adb54(&temp_v6,pcVar6,temp_v8,uStack_24);
      temp_v3 = temp_v4;
    }
  }
  return temp_v3;
}
