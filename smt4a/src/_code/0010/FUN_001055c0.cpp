/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001055c0` (_code @ 0x1055c0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002ebadc(unsigned int, int);
int FUN_002ebbfc(unsigned int);

extern signed char DAT_00594962; /* 0x594962 */
extern unsigned char DAT_0062e5cc; /* 0x62e5cc */

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002ebadc. */
/* Supplied declaration required: FUN_002ebbfc. */


void FUN_001055c0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  _ZN9Obj55b28cC1EPv(&uStack_18,&DAT_0062e5cc);
  if (DAT_00594962 != '\0') {
    FUN_002ebadc(param_1,1);
  }
  else {
    FUN_002ebbfc(param_1);
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return;
}

} /* extern "C" */
