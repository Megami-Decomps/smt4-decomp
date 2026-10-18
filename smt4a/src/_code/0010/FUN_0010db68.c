/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010db68` (_code @ 0x10db68, 0x10a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_0010dc74; /* 0x10dc74 */

/* Supplied declaration required: FUN_0010d59c. */
/* Supplied declaration required: FUN_0010d798. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e76b6(void);
extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
extern int FUN_002f4e86(unsigned char *);
/* Supplied declaration required: FUN_002f7850. */
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002f7e38. */
extern unsigned int FUN_002f7e4c(int, unsigned int, int, int);
/* Supplied declaration required: FUN_002f7e84. */


void FUN_0010db68(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11 [20];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    FUN_0010d59c(param_1);
    temp_v9 = param_1 + 0xa0;
    FUN_002e9c0c();
    FUN_002f7e38(temp_v9,*(unsigned int *)(param_1 + 0x13c));
    FUN_0010d798(param_1);
    if (*(int **)(param_1 + 0x154) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x154) + 4))();
      *(unsigned int *)(param_1 + 0x154) = 0;
    }
    temp_v10 = FUN_002e760a(0x4c);
    temp_v2 = 0;
    if (temp_v10 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0x8c);
      temp_v6 = FUN_002e76b6();
      temp_v3 = param_1 + 0x170;
      temp_v5 = 0x4000;
      temp_v8 = 0;
      temp_v4 = *(unsigned int *)(param_1 + 0x124);
      temp_v7 = temp_v2;
      temp_v2 = FUN_002f7e4c(temp_v10,*(unsigned int *)(param_1 + 0x6c),param_1 + 0x158,param_1 + 0x164)
      ;
    }
    *(unsigned int *)(param_1 + 0x154) = temp_v2;
    temp_v3 = (unsigned int)*(unsigned char *)(param_1 + 0x78);
    temp_v4 = param_1 + 0x68;
    temp_v5 = 0x4000;
    FUN_002f7e84(temp_v11,param_1 + 0x100,temp_v9,param_1 + 0x70);
    temp_v0 = FUN_002f4e86(temp_v11);
    if (temp_v0 != 0) {
      temp_v1 = *(unsigned int *)(temp_v9 + 0x44);
      temp_v2 = FUN_002e9af4();
      FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x6c),temp_v1);
      FUN_002f7cb0(param_1);
      temp_v0 = FUN_002e760a(0x10);
      temp_v2 = 0;
      if (temp_v0 != 0) {
        temp_v2 = FUN_002ea3c0(temp_v0,0x10d5cd,0,&LAB_0010dc74);
      }
      FUN_002f7cba(param_1,temp_v9,temp_v2);
      return;
    }
    temp_v6 = 0x8001000d;
  }
  else {
    temp_v6 = 0x80010004;
  }
  temp_v2 = FUN_002e7908(&temp_v3,(unsigned int *)&temp_v6);
  FUN_002f7850(param_1,temp_v2);
  return;
}
