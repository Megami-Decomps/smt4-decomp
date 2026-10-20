/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ff2c` (_code @ 0x10ff2c, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011f30c(int, int, int, unsigned char [8]);
int onlineStringDestroy(unsigned char [8]);
int FUN_002e9c0c(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_002fa6e8(int);
int FUN_002fa6f8(int, int, unsigned int);
int FUN_002fa794(unsigned char [8], int);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0010fa5d; /* 0x10fa5d */
extern unsigned char LAB_0010fff8; /* 0x10fff8 */

/* Supplied declaration required: FUN_0011f30c. */
extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: onlineStringDestroy. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002fa6e8. */
/* Supplied declaration required: FUN_002fa6f8. */
/* Supplied declaration required: FUN_002fa794. */


void FUN_0010ff2c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [12];
  unsigned int temp_v9 [2];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002e9c0c();
    temp_v0 = operatorNew(0x10);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0010fa5d,0,&LAB_0010fff8);
    }
    else {
      temp_v1 = 0;
    }
    FUN_002f7cba(param_1,param_1 + 0x130,temp_v1);
    FUN_002fa794(temp_v7,param_1 + 0xac);
    temp_v3 = param_1 + 0x80;
    temp_v6 = *(unsigned int *)(param_1 + 0xa8);
    temp_v5 = *(unsigned int *)(param_1 + 0xa4);
    temp_v4 = param_1 + 0x9c;
    temp_v2 = param_1 + 0x7c;
    temp_v0 = *(int *)(param_1 + 0x6c);
    FUN_0011f30c(temp_v0,param_1 + 0x130,param_1 + 0x70,temp_v7);
    onlineStringDestroy(temp_v7);
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0x140) != '\x01') {
        temp_v1 = FUN_002ea3c0(&temp_v2,&LAB_0010fa5d,0,&LAB_0010fff8);
        FUN_002ea3d0(param_1,temp_v1);
      }
      else {
        onlineJobSetStateWaiting(param_1);
      }
    }
    else {
      temp_v9[0] = 0x8001000d;
      temp_v1 = FUN_002e7908(temp_v8,temp_v9);
      FUN_002fa6f8(param_1,3,temp_v1);
    }
  }
  else {
    FUN_002fa6e8(param_1);
  }
  return;
}

} /* extern "C" */
