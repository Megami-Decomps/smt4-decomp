/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122b34` (_code @ 0x122b34, 0x9a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010391c(int);
int onlineCallContextWait(unsigned char [96], unsigned int);
int sharedRefRelease(unsigned int);
int FUN_002ea00c(unsigned char [96]);
int onlineJobSetStateDone(void);
int FUN_002eca44(unsigned char [96]);
int FUN_002f7290(unsigned int *, unsigned char [96]);

typedef int romwright_code(...);
extern unsigned char DAT_0055b300; /* 0x55b300 */

/* Supplied declaration required: FUN_0010391c. */
/* Supplied declaration required: onlineCallContextWait. */
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: FUN_002ea00c. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002eca44. */
/* Supplied declaration required: FUN_002f7290. */
extern int ptrHolderDestroyAlias(unsigned int *);


void FUN_00122b34(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char temp_v1 [96];
  
  *param_1 = (unsigned int)&DAT_0055b300;
  if (param_1[0x1e] != 0) {
    FUN_002eca44(temp_v1);
    FUN_002f7290(param_1,temp_v1);
    onlineCallContextWait(temp_v1,0xffffffff);
    FUN_002ea00c(temp_v1);
  }
  piVar1 = (int *)param_1[0x52];
  param_1[0x52] = 0;
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))();
  }
  if (param_1[0x47] != 0) {
    if (*(char *)(param_1[0x47] + 0x22) != '\x05') {
      onlineJobSetStateDone();
    }
    sharedRefRelease(param_1[0x47]);
    param_1[0x47] = 0;
  }
  if (param_1[0x48] != 0) {
    if (*(char *)(param_1[0x48] + 0x22) != '\x05') {
      onlineJobSetStateDone();
    }
    sharedRefRelease(param_1[0x48]);
    param_1[0x48] = 0;
  }
  if ((int *)param_1[0x49] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x49] + 4))();
  }
  temp_v0 = ptrHolderDestroyAlias(param_1 + 0x51);
  FUN_0010391c(temp_v0 - 0x144);
  return;
}

} /* extern "C" */
