/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b270` (_code @ 0x10b270, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011dda0(int, unsigned int, int, unsigned int, unsigned int, unsigned int);
int onlineContextGetInstance(void);
int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002e78d0(unsigned int, int, int);
int FUN_002f451c(int *, unsigned int);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

/* Supplied declaration required: FUN_0011dda0. */
/* Supplied declaration required: onlineContextGetInstance. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int operatorNew(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002f451c. */


unsigned int
FUN_0010b270(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [12];
  int iStack_24;
  int iStack_20;
  unsigned int temp_v5;
  unsigned int uStack_18;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  temp_v5 = param_3;
  uStack_18 = param_4;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(temp_v4,temp_v0 + 0x58);
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 != 0) {
    FUN_002f451c(&temp_v2,*(unsigned int *)(param_1 + 0x20));
    *(unsigned int *)(param_2 + 0x5c) = temp_v3;
    *(unsigned int *)(param_2 + 0x58) = temp_v2;
    temp_v0 = operatorNew(0x128);
    if (temp_v0 != 0) {
      FUN_0011dda0(temp_v0,*(unsigned int *)(param_2 + 0x44),param_1,temp_v5,param_4,param_5);
    }
    temp_v1 = onlineContextGetInstance();
    FUN_002e78d0(temp_v1,temp_v0,0);
    _ZN9Obj55b28cD1Ev(temp_v4);
    temp_v1 = 1;
  }
  else {
    _ZN9Obj55b28cD1Ev(temp_v4);
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
