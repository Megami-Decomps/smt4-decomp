/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5a80` (_code @ 0x3f5a88, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {


typedef int romwright_code(...);
extern romwright_code *DAT_0044e930; /* 0x44e930 */
extern romwright_code *DAT_0044e934; /* 0x44e934 */

/* Supplied declaration required: memClear. */


unsigned int FUN_003f5a80(romwright_code *param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  pcVar1 = param_1;
  if (DAT_0044e930 != (romwright_code *)0x0) {
    pcVar1 = DAT_0044e934;
  }
  if ((DAT_0044e930 != (romwright_code *)0x0 && pcVar1 != (romwright_code *)0x0) &&
     (piVar2 = (int *)(*DAT_0044e930)(0x18), piVar2 != (int *)0x0)) {
    temp_v0 = (*DAT_0044e930)(param_3 * 0x1d0);
    *piVar2 = temp_v0;
    if (temp_v0 != 0) {
      reinterpret_cast<int>(memClear(reinterpret_cast<void*>(temp_v0), param_3 * 0x1d0));
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
    (*DAT_0044e934)(piVar2);
  }
  return 0;
}

} /* extern "C" */
