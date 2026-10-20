/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f8a2` (_code @ 0x30f8a2, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001208b0(int *, unsigned int);
int FUN_002e78d0(int, int *, int);
int onlineJobSetStateRunning(int *);
int FUN_0030facc(int, int *);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_001208b0. */
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: onlineJobSetStateRunning. */
/* Supplied declaration required: FUN_0030facc. */


void FUN_0030f8a2(int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  if (*(char *)((int)param_2 + 0x22) == '\x03') {
    onlineJobSetStateRunning(param_2);
    if (*(char *)(param_1 + 0x1ed) != '\0') {
      (**(romwright_code **)(*param_2 + 0x14))(param_2,0);
    }
    FUN_001208b0(param_2,param_3);
  }
  if (*(char *)((int)param_2 + 0x22) != '\x05') {
    FUN_002e78d0(param_1,param_2,0);
    return;
  }
  FUN_0030facc(param_1,param_2);
  return;
}

} /* extern "C" */
