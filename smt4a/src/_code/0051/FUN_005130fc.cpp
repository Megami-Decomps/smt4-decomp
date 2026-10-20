/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005130fc` (_code @ 0x5130fc, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, unsigned int);

typedef int romwright_code(...);
extern romwright_code *DAT_00589510; /* 0x589510 */
extern romwright_code *DAT_00589514; /* 0x589514 */

/* Supplied declaration required: sysMemClear. */


unsigned int FUN_005130fc(romwright_code *param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  pcVar1 = param_1;
  if (DAT_00589510 != (romwright_code *)0x0) {
    pcVar1 = DAT_00589514;
  }
  if ((DAT_00589510 != (romwright_code *)0x0 && pcVar1 != (romwright_code *)0x0) &&
     (piVar2 = (int *)(*DAT_00589510)(0x18), piVar2 != (int *)0x0)) {
    temp_v0 = (*DAT_00589510)(param_3 * 0x1d0);
    *piVar2 = temp_v0;
    if (temp_v0 != 0) {
      sysMemClear(temp_v0,param_3 * 0x1d0);
      if (0 < (int)param_3) {
        temp_v1 = param_3 & 1;
        temp_v0 = param_3 << 1;
        if (temp_v1 == 1) {
          *(int *)(*piVar2 + 0x1cc) = temp_v0;
        }
        temp_v3 = (unsigned int)(temp_v1 == 1);
        for (; (int)temp_v1 < (int)param_3; temp_v1 = temp_v1 + 2) {
          temp_v2 = temp_v3 + 1;
          *(int *)(*piVar2 + temp_v3 * 0x1d0 + 0x1cc) = temp_v0;
          temp_v3 = temp_v3 + 2;
          *(int *)(*piVar2 + temp_v2 * 0x1d0 + 0x1cc) = temp_v0;
        }
      }
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[5] = param_3;
      piVar2[4] = param_2;
      piVar2[3] = 0;
      *(int **)param_1 = piVar2;
      return 1;
    }
    (*DAT_00589514)(piVar2);
  }
  return 0;
}

} /* extern "C" */
