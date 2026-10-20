/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f3ee` (_code @ 0x30f3ee, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00135ab4(unsigned char [8], int, int *);
int onlineJobSetStateReady(void);
int FUN_002eb338(int *, unsigned char [8], unsigned int);
int onlineTimeGetNow(unsigned char [8]);
int FUN_0030f3e0(unsigned int);
int FUN_0030f558(int, int *);
int FUN_0030f58c(int, int *);

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_00135ab4. */
/* Supplied declaration required: onlineJobSetStateReady. */
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: onlineTimeGetNow. */
/* Supplied declaration required: FUN_0030f3e0. */
/* Supplied declaration required: FUN_0030f558. */
/* Supplied declaration required: FUN_0030f58c. */


void FUN_0030f3ee(int param_1,int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [8];
  unsigned char temp_v9 [8];
  int iStack_18;
  int temp_v10;
  int iStack_10;
  
  temp_v0 = *(char *)(param_2 + 0x22);
  iStack_18 = param_1;
  temp_v10 = param_2;
  iStack_10 = param_3;
  if (temp_v0 != '\0') {
    if (temp_v0 == '\x01') {
      temp_v2 = *(unsigned int *)(param_2 + 0x24);
      onlineTimeGetNow(temp_v8);
      FUN_002eb338(&temp_v6,temp_v8,temp_v2);
      temp_v4 = temp_v7;
      temp_v3 = temp_v6;
      temp_v5 = temp_v10;
      FUN_00135ab4(temp_v9,param_1 + 0x110,&temp_v3);
      FUN_0030f3e0(*(unsigned int *)(param_1 + 0x54));
      return;
    }
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') {
        FUN_0030f3e0(*(unsigned int *)(param_1 + 0x54));
        return;
      }
      temp_v1 = param_1 + 0xe8;
    }
    else {
      temp_v1 = param_1 + 0xfc;
    }
  }
  else {
    onlineJobSetStateReady();
    temp_v1 = param_1 + 0xe8;
  }
  if (param_3 != 0) {
    FUN_0030f58c(temp_v1,&temp_v10);
  }
  else {
    FUN_0030f558(temp_v1,&temp_v10);
  }
  FUN_0030f3e0(*(unsigned int *)(param_1 + 0x54));
  return;
}

} /* extern "C" */
