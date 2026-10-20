/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300252` (_code @ 0x300252, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00133508(int, int, unsigned char [32]);
int onlineMutexLock(void);
int onlineMutexUnlock(void);
int FUN_0030ed3c(int, int);
int rt_memcpy_w(unsigned char [32], unsigned int, int);

/* Supplied declaration required: FUN_00133508. */
/* Supplied declaration required: onlineMutexLock. */
/* Supplied declaration required: onlineMutexUnlock. */
/* Supplied declaration required: FUN_0030ed3c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00300252(int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  
  if (param_1[4] != 0) {
    onlineMutexLock();
  }
  for (temp_v1 = 0; temp_v1 < (unsigned int)param_1[1]; temp_v1 = temp_v1 + 1) {
    rt_memcpy_w(temp_v2,*param_1 + temp_v1 * 0x34 + 0x14,0x20);
    temp_v0 = *(int *)(param_2 + 4);
    if (temp_v0 != *(int *)(param_2 + 8)) {
      *(int *)(param_2 + 4) = temp_v0 + 0x20;
      FUN_0030ed3c(param_2,temp_v0);
    }
    else {
      FUN_00133508(param_2,temp_v0,temp_v2);
    }
  }
  if (param_1[4] != 0) {
    onlineMutexUnlock();
  }
  return;
}

} /* extern "C" */
