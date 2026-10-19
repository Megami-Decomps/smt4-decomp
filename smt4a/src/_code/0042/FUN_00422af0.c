/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422af0` (_code @ 0x422af0, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_005880e8; /* 0x5880e8 */
extern int DAT_005880ec; /* 0x5880ec */
extern unsigned int DAT_00618518; /* 0x618518 */

/* Supplied declaration required: FUN_001bd53c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00422af0(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((int)param_1 < 0) || (DAT_005880e4 <= param_1)) {
    return 0;
  }
  temp_v0 = DAT_005880d8 + param_1 * 0x70;
  nn_os_CriticalSection_Enter((unsigned int)&DAT_00618518);
  if ((*(int *)(temp_v0 + 0x50) != *(int *)(temp_v0 + 0x38)) && (DAT_005880e8 - DAT_005880ec != 0x40)) {
    if (param_2 != 0 && param_3 != 0) {
      FUN_001bd53c(param_2,param_3);
      *(int *)((DAT_005880e8 & 0x3f) * 0xc + 0x618524) = temp_v0;
      *(int *)((DAT_005880e8 & 0x3f) * 0xc + 0x618528) = param_2;
      *(int *)((DAT_005880e8 & 0x3f) * 0xc + 0x61852c) = param_3;
      DAT_005880e8 = DAT_005880e8 + 1;
      *(int *)(temp_v0 + 0x50) = *(int *)(temp_v0 + 0x50) + 1;
    }
    nn_os_CriticalSection_Leave((unsigned int)&DAT_00618518);
    return 1;
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_00618518);
  return 0;
}
