/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116594` (_code @ 0x116594, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int _ZN9Obj55b28cD1Ev(int *);

typedef int romwright_code(...);
extern unsigned char g_systemTable; /* 0x59935c */

extern int onlineContextGetInstance(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


void FUN_00116594(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int uStack_10;
  unsigned int uStack_c;
  unsigned int uStack_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(&uStack_10,temp_v0 + 0x58);
  if ((*(int * *)((unsigned char *)&g_systemTable + 0xc)) != (int *)0x0) {
    (**(romwright_code **)(*(*(int * *)((unsigned char *)&g_systemTable + 0xc)) + 0xc))();
  }
  _ZN9Obj55b28cD1Ev(&uStack_10);
  return;
}

} /* extern "C" */
