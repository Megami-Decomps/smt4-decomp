/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303d74` (_code @ 0x303d74, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b744(int);
int _ZN9Obj55b28cC1EPv(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002e9b30(int, int, unsigned int, int);
int FUN_002f3dde(int, int *, unsigned int, int *);
int FUN_002f4db0(int *, int, unsigned int, int);

/* stack frame of param_3: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_0010b744. */
extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002e9b30. */
extern int FUN_002ea6fc(unsigned int *, unsigned char *);
extern unsigned int streamWriterFinish(unsigned int);
/* Supplied declaration required: FUN_002f3dde. */
extern int FUN_002f4d9c(int, unsigned short);
/* Supplied declaration required: FUN_002f4db0. */


void FUN_00303d74(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [4];
  int temp_v8;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned char temp_v9 [12];
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    FUN_0010b744(param_1);
    return;
  }
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(temp_v9,temp_v0 + 0x58);
  temp_v0 = *(int *)(param_2 + 0x74);
  if (temp_v0 == 0) {
    temp_v0 = *(int *)(param_1 + 0x24);
    if (temp_v0 == 0) {
      temp_v0 = *(int *)(param_1 + 0x40);
      if (temp_v0 != 0) goto LAB_00303db6;
      temp_v6 = 0x80010001;
      temp_v1 = _ZN12OnlineResultC1ERKj((unsigned int *)&temp_v3,(unsigned int *)&temp_v6);
      FUN_002e9b30(param_2,3,temp_v1,0);
      _ZN9Obj55b28cD1Ev(temp_v9);
      return;
    }
  }
  else {
LAB_00303db6:
    temp_v0 = FUN_002f4d9c(temp_v0,*(unsigned short *)(param_1 + 0x20));
    if (temp_v0 == 0) {
      temp_v6 = 0x80010001;
      temp_v1 = _ZN12OnlineResultC1ERKj((unsigned int *)&temp_v3,(unsigned int *)&temp_v6);
      FUN_002e9b30(param_2,3,temp_v1,0);
      _ZN9Obj55b28cD1Ev(temp_v9);
      return;
    }
  }
  temp_v1 = streamWriterFinish(param_3);
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  FUN_002f4db0(&temp_v8,temp_v0,temp_v1,1);
  temp_v7[0] = 0;
  temp_v2 = FUN_002ea6fc((unsigned int *)&temp_v8,temp_v7);
  if (temp_v2 == 0) {
    *(unsigned int *)(param_2 + 0x4c) = *(unsigned int *)(temp_v0 + 0x78);
    *(int *)(param_2 + 0x48) = temp_v0;
    _ZN9Obj55b28cD1Ev(temp_v9);
    return;
  }
  temp_v3 = temp_v8;
  temp_v4 = uStack_28;
  temp_v5 = uStack_24;
  FUN_002f3dde(param_2,&temp_v3,uStack_24,&temp_v6);
  _ZN9Obj55b28cD1Ev(temp_v9);
  return;
}

} /* extern "C" */
