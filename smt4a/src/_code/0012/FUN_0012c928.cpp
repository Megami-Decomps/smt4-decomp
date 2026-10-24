/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012c928` (_code @ 0x12c928, 0xe6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int onlineInstanceTableGetCurrent(void);
int FUN_002e9c0c(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_0030c720(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
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
} param_1_stack;

extern unsigned char LAB_0012ca14; /* 0x12ca14 */
extern unsigned char LAB_0012ca81; /* 0x12ca81 */

extern int _Znwj(unsigned int);
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int _ZN9Obj55aff4C1EPKc(unsigned char *, int);
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0030c720. */


void FUN_0012c928(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [8];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v12 = param_1 + 0x80;
    FUN_002e9c0c();
    piVar5 = *(int **)(param_1 + 0x6c);
    temp_v5 = (unsigned int)(*(unsigned int *)(param_1 + 0x124) >= 10);
    temp_v4 = *(unsigned int *)(param_1 + 0x128);
    temp_v3 = *(unsigned int *)(param_1 + 0x134);
    temp_v2 = *(unsigned int *)(param_1 + 0x130);
    temp_v1 = _ZN9Obj55aff4C1EPKc(temp_v13,param_1 + 0x138);
    temp_v10 = param_1 + 0x408;
    temp_v9 = *(unsigned int *)(param_1 + 0x10c);
    temp_v8 = param_1 + 0x108;
    temp_v11 = temp_v5;
    temp_v6 = param_1 + 0xf8;
    temp_v7 = temp_v4;
    temp_v4 = temp_v2;
    temp_v5 = temp_v3;
    temp_v0 = (**(romwright_code **)(*piVar5 + 0x38))(piVar5,temp_v12,temp_v1,param_1 + 0x100);
    _ZN9Obj55aff4D1Ev(temp_v13);
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(temp_v12 + 0x44);
      temp_v1 = onlineInstanceTableGetCurrent();
      FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x68),temp_v2);
      onlineJobSetStateWaiting(param_1);
      temp_v0 = _Znwj(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0012ca81,0,&LAB_0012ca14);
      }
      FUN_002f7cba(param_1,temp_v12,temp_v1);
      return;
    }
    temp_v7 = 0x8001000d;
  }
  else {
    temp_v7 = 0x80010004;
  }
  temp_v1 = _ZN12OnlineResultC1ERKj((unsigned int *)&temp_v4,(unsigned int *)&temp_v7);
  FUN_0030c720(param_1,temp_v1);
  return;
}

} /* extern "C" */
