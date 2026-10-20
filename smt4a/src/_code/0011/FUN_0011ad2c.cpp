/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ad2c` (_code @ 0x11ad2c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011c9f8(unsigned char [8]);
int onlineInstanceTableGetCurrent(void);
int vectorCopyHeader(int, unsigned char [12]);
int FUN_002e9c0c(int);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(unsigned char [12], int);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_00306ef8(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0011adf0; /* 0x11adf0 */
extern unsigned char LAB_0011adfd; /* 0x11adfd */

/* Supplied declaration required: FUN_0011c9f8. */
extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea41e. */
extern unsigned char refIsNonNegative(int);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_00306ef8. */


void FUN_0011ad2c(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [8];
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9 [12];
  int temp_v10;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v0 = param_1 + 0x90;
    if (*(char *)(param_1 + 0xa0) != '\x02') {
      FUN_002ea41e(temp_v9,temp_v0);
      vectorCopyHeader(param_1 + 0x178,temp_v9);
    }
    FUN_002e9c0c(temp_v0);
    FUN_0011c9f8(temp_v4);
    temp_v7 = *(unsigned int *)(param_1 + 0x140);
    temp_v5 = *(unsigned int *)(param_1 + 0x110);
    temp_v6 = *(unsigned int *)(param_1 + 0x114);
    temp_v8 = refIsNonNegative(param_1 + 0x178);
    temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x6c) + 0x30))
                      (*(int **)(param_1 + 0x6c),temp_v0,temp_v4);
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(param_1 + 0xd4);
      temp_v2 = onlineInstanceTableGetCurrent();
      FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x68),temp_v3);
      onlineJobSetStateWaiting(param_1);
      temp_v1 = operatorNew(0x10);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v2 = FUN_002ea3c0(temp_v1,&LAB_0011adfd,0,&LAB_0011adf0);
      }
      FUN_002f7cba(param_1,temp_v0,temp_v2);
      return;
    }
    temp_v10 = 0x8001000d;
  }
  else {
    temp_v10 = 0x80010004;
  }
  temp_v2 = FUN_002e7908(temp_v9,(unsigned int *)&temp_v10);
  FUN_00306ef8(param_1,temp_v2);
  return;
}

} /* extern "C" */
