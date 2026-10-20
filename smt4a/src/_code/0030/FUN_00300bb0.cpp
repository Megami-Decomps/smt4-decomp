/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300bb0` (_code @ 0x300bb0, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00132fac(void);
int FUN_002e6e34(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);
int operatorDelete(void);

extern int DAT_00599374; /* 0x599374 */
extern int DAT_00599378; /* 0x599378 */
extern unsigned int DAT_005c4c18; /* 0x5c4c18 */
extern unsigned char DAT_006306ac; /* 0x6306ac */

/* Supplied declaration required: FUN_00132fac. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: operatorDelete. */


void FUN_00300bb0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,&DAT_006306ac);
  DAT_00599374 = DAT_00599374 - 1;
  if (DAT_00599374 == 0) {
    if (DAT_00599378 != 0) {
      FUN_00132fac();
      operatorDelete();
    }
    DAT_00599378 = 0;
    DAT_005c4c18 = 0;
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return;
}

} /* extern "C" */
