/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e618` (_code @ 0x34e618, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_0044d110; /* 0x44d110 */
extern int DAT_0044d114; /* 0x44d114 */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

/* Supplied declaration required: FUN_002a4b0c. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_0034e618(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (((int)param_1 < 0) || (DAT_0044d10c <= param_1)) {
    return 0;
  }
  temp_v0 = DAT_0044d100 + param_1 * 0x70;
  nn_os_CriticalSection_Enter(&DAT_004c40f8);
  if ((*(int *)(temp_v0 + 0x50) != *(int *)(temp_v0 + 0x38)) && (DAT_0044d110 - DAT_0044d114 != 0x40)) {
    if (param_2 != 0 && param_3 != 0) {
      FUN_002a4b0c(param_2,param_3);
      *(int *)((DAT_0044d110 & 0x3f) * 0xc + 0x4c4104) = temp_v0;
      *(int *)((DAT_0044d110 & 0x3f) * 0xc + 0x4c4108) = param_2;
      *(int *)((DAT_0044d110 & 0x3f) * 0xc + 0x4c410c) = param_3;
      DAT_0044d110 = DAT_0044d110 + 1;
      *(int *)(temp_v0 + 0x50) = *(int *)(temp_v0 + 0x50) + 1;
    }
    nn_os_CriticalSection_Leave(&DAT_004c40f8);
    return 1;
  }
  nn_os_CriticalSection_Leave(&DAT_004c40f8);
  return 0;
}
