/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f5c4` (_code @ 0x30f5c4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002eb56c(void);
int FUN_002ecef0(void);
int FUN_002ecf40(void);
int FUN_0030f69c(int, unsigned int, int);
int FUN_0030f78c(...);

extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002eb56c. */
/* Supplied declaration required: FUN_002ecef0. */
/* Supplied declaration required: FUN_002ecf40. */
/* Supplied declaration required: FUN_0030f69c. */
/* Supplied declaration required: FUN_0030f78c. */
extern int FUN_0030f798(void);


void FUN_0030f5c4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  _ZN9Obj55b28cC1EPv(&uStack_18,&DAT_0062e6a0);
  FUN_002eb56c();
  temp_v0 = FUN_0030f798();
  if ((((temp_v0 != 0) && (temp_v0 = onlineContextGetInstance(), temp_v0 != 0)) &&
      (temp_v1 = FUN_0030f78c(), temp_v1 == 0)) && (temp_v1 = FUN_0030f78c(temp_v0), temp_v1 == 0)) {
    FUN_002ecef0();
    _ZN9Obj55b28cD1Ev(&uStack_18);
    FUN_0030f69c(temp_v0,param_1,0);
    FUN_002ecf40();
    return;
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return;
}

} /* extern "C" */
