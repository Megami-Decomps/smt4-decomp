/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fb70` (_code @ 0x10fb70, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011f03c(int, int, unsigned char [8], int, int, int);
int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int FUN_002e9c0c(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_002fa6e8(int);
int FUN_002fa6f8(int, int, unsigned int);
int FUN_002fa794(unsigned char [8], int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0010fa5d; /* 0x10fa5d */
extern unsigned char LAB_0010fc30; /* 0x10fc30 */

/* Supplied declaration required: FUN_0011f03c. */
extern int _Znwj(unsigned int);
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
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


void FUN_0010fb70(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [12];
  int temp_v4;
  unsigned char temp_v5 [16];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002e9c0c();
    temp_v0 = _Znwj(0x10);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0010fa5d,0,&LAB_0010fc30);
    }
    else {
      temp_v1 = 0;
    }
    FUN_002f7cba(param_1,param_1 + 0x130,temp_v1);
    FUN_002fa794(temp_v2,param_1 + 0xac);
    temp_v0 = *(int *)(param_1 + 0x6c);
    FUN_0011f03c(temp_v0,param_1 + 0x130,temp_v2,param_1 + 0x80,param_1 + 0x8c,param_1 + 0x94);
    _ZN9Obj55aff4D1Ev(temp_v2);
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0x140) != '\x01') {
        temp_v1 = FUN_002ea3c0(temp_v5,&LAB_0010fa5d,0,&LAB_0010fc30);
        FUN_002ea3d0(param_1,temp_v1);
      }
      else {
        onlineJobSetStateWaiting(param_1);
      }
    }
    else {
      temp_v4 = 0x8001000d;
      temp_v1 = _ZN12OnlineResultC1ERKj(temp_v3,(unsigned int *)&temp_v4);
      FUN_002fa6f8(param_1,3,temp_v1);
    }
  }
  else {
    FUN_002fa6e8(param_1);
  }
  return;
}

} /* extern "C" */
