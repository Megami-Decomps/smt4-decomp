/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111dc4` (_code @ 0x111dc4, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineJobSetStateReady(int *);
int sharedRefRelease(int *);
int _ZN18OnlineResultRecordaSERKS_(int *, unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: onlineJobSetStateReady. */
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: _ZN18OnlineResultRecordaSERKS_. */


void FUN_00111dc4(int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  (**(romwright_code **)(*param_1 + 0x34))(param_1,*(romwright_code **)(*param_1 + 0x34),param_1[0x18],param_1[0x19]);
  _ZN18OnlineResultRecordaSERKS_(param_1 + 0x1f,param_2);
  onlineJobSetStateReady(param_1);
  sharedRefRelease(param_1);
  return;
}

} /* extern "C" */
