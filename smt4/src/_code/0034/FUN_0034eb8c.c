/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034eb8c` (_code @ 0x34eb8c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_0044d0fc; /* 0x44d0fc */
extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_00471b58; /* 0x471b58 */
extern int DAT_004c40f8; /* 0x4c40f8 */
extern unsigned int DAT_004c40fc; /* 0x4c40fc */
extern int DAT_004c4100; /* 0x4c4100 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002a8554. */
/* Supplied declaration required: FUN_002bd430. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_0034eb8c(unsigned int param_1)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  int *piVar2;
  unsigned int in_lr;
  unsigned char temp_v1;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (DAT_0044d10c <= param_1) {
    return;
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004c40f8);
  piVar2 = (int *)(DAT_0044d100 + param_1 * 0x70);
  if (*piVar2 != 0) {
    FUN_002bd430();
    *piVar2 = 0;
  }
  if (piVar2[1] != 0) {
    (**(romwright_code **)(*DAT_0044d0fc + 4))();
    piVar2[1] = 0;
  }
  DAT_004c4100 = DAT_004c4100 - 1;
  if (DAT_004c4100 != 0) {
    return;
  }
  DAT_004c40fc = 0;
  do {
    temp_v0 = -DAT_004c40f8;
    temp_v1 = (unsigned char)hasExclusiveAccess(0x4c40f8);
  } while (!temp_v1);
  temp_v1 = DAT_004c40f8 != -1;
  DAT_004c40f8 = temp_v0;
  if (temp_v1 && 0 < temp_v0) {
    FUN_002a8554(DAT_00471b58,&DAT_004c40f8,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}
