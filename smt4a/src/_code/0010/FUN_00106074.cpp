/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106074` (_code @ 0x106074, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);
int sharedRefRelease(void);
int FUN_002ecf28(void);
int FUN_002ecf40(void);

extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: FUN_002ecf28. */
/* Supplied declaration required: FUN_002ecf40. */


void FUN_00106074(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int uStack_10;
  unsigned int uStack_c;
  unsigned int uStack_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  FUN_002e6e34(&uStack_10,&DAT_0062e6a0);
  FUN_002ecf28();
  sharedRefRelease();
  _ZN9Obj55b28cD1Ev(&uStack_10);
  FUN_002ecf40();
  return;
}

} /* extern "C" */
