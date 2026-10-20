/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116254` (_code @ 0x116254, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011ce04(int, int, unsigned int);
int FUN_0011d444(int, int, unsigned int, int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002f451c(int *, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_0030202c(int, int, unsigned int);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0011633c; /* 0x11633c */

/* Supplied declaration required: FUN_0011ce04. */
/* Supplied declaration required: FUN_0011d444. */
extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002f451c. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0030202c. */


void FUN_00116254(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  
  temp_v7 = param_1 + 0x110;
  FUN_002f451c(&temp_v8,*(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x20));
  *(unsigned int *)(param_1 + 0x168) = temp_v8;
  *(unsigned int *)(param_1 + 0x16c) = temp_v9;
  temp_v3 = param_1 + 0x188;
  if (*(int *)(param_1 + 0x108) != 0) {
    temp_v1 = *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x10);
    temp_v5 = *(unsigned int *)(param_1 + 0x100);
    temp_v4 = *(unsigned int *)(param_1 + 0x104);
    temp_v2 = *(unsigned int *)(param_1 + 0xfc);
    temp_v6 = *(int *)(param_1 + 0x108);
    FUN_0011ce04(temp_v1,temp_v7,*(unsigned int *)(param_1 + 0x1a8));
  }
  else {
    temp_v5 = *(unsigned int *)(param_1 + 0x100);
    temp_v4 = *(unsigned int *)(param_1 + 0x104);
    temp_v2 = *(unsigned int *)(param_1 + 0xfc);
    temp_v1 = *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x10);
    FUN_0011d444(temp_v1,temp_v7,*(unsigned int *)(param_1 + 0x1a8),param_1 + 0xf0);
  }
  if (temp_v1 != 0) {
    if (*(char *)(param_1 + 0x120) != '\x01') {
      temp_v0 = FUN_002ea3c0(&temp_v2,0x116345,0,&LAB_0011633c);
      FUN_002ea3d0(param_1,temp_v0);
    }
    else {
      onlineJobSetStateWaiting(param_1);
      temp_v1 = operatorNew(0x10);
      temp_v0 = 0;
      if (temp_v1 != 0) {
        temp_v0 = FUN_002ea3c0(temp_v1,0x116345,0,&LAB_0011633c);
      }
      FUN_002f7cba(param_1,temp_v7,temp_v0);
    }
  }
  else {
    temp_v5 = 0x8001000d;
    temp_v0 = FUN_002e7908((unsigned int *)&temp_v2,(unsigned int *)&temp_v5);
    FUN_0030202c(param_1,3,temp_v0);
  }
  return;
}

} /* extern "C" */
