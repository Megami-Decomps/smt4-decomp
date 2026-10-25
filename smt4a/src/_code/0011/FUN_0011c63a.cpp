/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c63a` (_code @ 0x11c63a, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea41e(...);
int _ZNK18OnlineResultRecord7isValidEv(int *);
int onlineJobDispatchInstanceResult(int, int, int *);

/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: _ZNK18OnlineResultRecord7isValidEv. */
/* Supplied declaration required: onlineJobDispatchInstanceResult. */


void FUN_0011c63a(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002ea41e(&uStack_18);
  _ZNK18OnlineResultRecord7isValidEv(&uStack_18);
  FUN_002ea41e(&uStack_18,param_1 + 0x70);
  onlineJobDispatchInstanceResult(param_1,*(unsigned char *)(param_1 + 0x80),&uStack_18);
  return;
}

} /* extern "C" */
