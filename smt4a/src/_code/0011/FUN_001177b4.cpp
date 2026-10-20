/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001177b4` (_code @ 0x1177b4, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned int);
int _ZN9Obj55b28cD1Ev(int *);

typedef int romwright_code(...);
extern unsigned char g_flagBlock; /* 0x594958 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);


void FUN_001177b4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x14)) != '\0') {
    temp_v0 = onlineGetActiveLock();
    FUN_002e6e34(&uStack_18,temp_v0);
    for (temp_v1 = *(int *)(param_1 + 8); *(int *)(param_1 + 0xc) != temp_v1; temp_v1 = temp_v1 + 8) {
      (**(romwright_code **)(**(int **)(temp_v1 + 4) + 0xc))();
    }
    _ZN9Obj55b28cD1Ev(&uStack_18);
    return;
  }
  for (temp_v1 = *(int *)(param_1 + 8); *(int *)(param_1 + 0xc) != temp_v1; temp_v1 = temp_v1 + 8) {
    (**(romwright_code **)(**(int **)(temp_v1 + 4) + 0xc))();
  }
  return;
}

} /* extern "C" */
