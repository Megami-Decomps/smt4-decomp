/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110600` (_code @ 0x110600, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002fb344(int *, int, int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002fb344. */
extern int wordRefsEqual_002fb3a6(int *, unsigned int *);


unsigned int FUN_00110600(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned int temp_v4 [2];
  int iStack_18;
  int uStack_14;
  int iStack_10;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  iStack_10 = param_3;
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(temp_v2,temp_v0 + 0x58);
  if (param_3 != 1) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = param_1 + 0x20;
  }
  FUN_002fb344(&temp_v3,param_1,&uStack_14);
  temp_v4[0] = *(unsigned int *)(param_1 + 0x10);
  temp_v0 = wordRefsEqual_002fb3a6(&temp_v3,temp_v4);
  if (temp_v0 != 0) {
    _ZN9Obj55b28cD1Ev(temp_v2);
    temp_v1 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(temp_v3 + 0x14);
    _ZN9Obj55b28cD1Ev(temp_v2);
  }
  return temp_v1;
}

} /* extern "C" */
