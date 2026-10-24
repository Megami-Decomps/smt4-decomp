/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111482` (_code @ 0x111482, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineContextGetInstance(void);
int _ZN9Obj55b28cC1EPv(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int FUN_002e78d0(unsigned int, int, int);
int strDestroy(unsigned char [32]);
int FUN_002ece14(unsigned char [32], unsigned int);

/* stack frame of param_7: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp60; /* 0x60: local_60 */
} param_7_stack;

extern int FUN_001059f4(int, unsigned int, unsigned int, unsigned int, unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: onlineContextGetInstance. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int _Znwj(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ece14. */


unsigned int
FUN_00111482(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
            ,unsigned int param_6,unsigned int param_7)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [16];
  int iStack_24;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_18;
  
  iStack_24 = param_1;
  temp_v5 = param_2;
  temp_v6 = param_3;
  uStack_18 = param_4;
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(temp_v4,temp_v0 + 0x58);
  temp_v0 = FUN_002e789a(param_1);
  if (temp_v0 != 0) {
    FUN_002ece14(temp_v3,temp_v6);
    temp_v1 = _Znwj(0x98);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_001059f4(temp_v1,param_7,*(unsigned int *)(param_1 + 0x44),temp_v5,temp_v3,param_4
                           ,param_5);
    }
    *(unsigned int *)(temp_v0 + 0x90) = param_6;
    temp_v2 = onlineContextGetInstance();
    FUN_002e78d0(temp_v2,temp_v0,0);
    strDestroy(temp_v3);
    _ZN9Obj55b28cD1Ev(temp_v4);
    temp_v2 = 1;
  }
  else {
    _ZN9Obj55b28cD1Ev(temp_v4);
    temp_v2 = 0;
  }
  return temp_v2;
}

} /* extern "C" */
