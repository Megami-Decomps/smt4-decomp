/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd108` (_code @ 0x2fd108, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00112188(int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int onlineContextGetInstance(void);
int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002e78d0(unsigned int, int, int);

/* stack frame of param_9: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_9_stack;

/* Supplied declaration required: FUN_00112188. */
/* Supplied declaration required: onlineContextGetInstance. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int operatorNew(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */


unsigned int
FUN_002fd108(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
            unsigned int param_6,unsigned int param_7,unsigned int param_8,int *param_9)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  int iStack_24;
  int iStack_20;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  temp_v3 = param_3;
  temp_v4 = param_4;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 != 0) {
    temp_v0 = operatorNew(0x1c0);
    if (temp_v0 != 0) {
      FUN_00112188(temp_v0,*(unsigned char *)(param_1 + 0x76),param_1,*(unsigned int *)(param_2 + 0x44),
                   temp_v3,temp_v4,param_5,param_6,param_7,param_8);
    }
    temp_v1 = onlineContextGetInstance();
    FUN_002e78d0(temp_v1,temp_v0,0);
    if (param_9 != (int *)0x0) {
      *param_9 = temp_v0;
    }
    _ZN9Obj55b28cD1Ev(temp_v2);
    temp_v1 = 1;
  }
  else {
    _ZN9Obj55b28cD1Ev(temp_v2);
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
