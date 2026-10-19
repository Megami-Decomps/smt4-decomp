/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7b78` (_code @ 0x2a7b78, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421d18; /* 0x421d18 */

/* Supplied declaration required: FUN_002c4040. */
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


unsigned int * FUN_002a7b78(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421d18;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  nn_os_LightEvent_Initialize((unsigned int)(param_1 + 3),1);
  *(unsigned char *)(param_1 + 5) = 0;
  param_1[6] = 0;
  FUN_002c4040(param_1 + 3);
  return param_1;
}
