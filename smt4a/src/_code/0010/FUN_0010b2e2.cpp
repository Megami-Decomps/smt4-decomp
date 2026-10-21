/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b2e2` (_code @ 0x10b2e2, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineContextGetInstance(void);
int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002e78d0(unsigned int, unsigned int, int);

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

extern unsigned int FUN_0011e0d4(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: onlineContextGetInstance. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int operatorNew(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */


unsigned int
FUN_0010b2e2(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
            ,unsigned int param_6,unsigned int param_7)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  unsigned int temp_v4;
  int iStack_20;
  unsigned int temp_v5;
  unsigned int uStack_18;
  
  temp_v4 = param_1;
  iStack_20 = param_2;
  temp_v5 = param_3;
  uStack_18 = param_4;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(temp_v3,temp_v0 + 0x58);
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 != 0) {
    temp_v0 = operatorNew(0x1a0);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0011e0d4(temp_v0,*(unsigned int *)(param_2 + 0x44),temp_v4,temp_v5,param_4,param_5,
                           param_6,param_7);
    }
    temp_v2 = onlineContextGetInstance();
    FUN_002e78d0(temp_v2,temp_v1,0);
    _ZN9Obj55b28cD1Ev(temp_v3);
    temp_v1 = 1;
  }
  else {
    _ZN9Obj55b28cD1Ev(temp_v3);
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
