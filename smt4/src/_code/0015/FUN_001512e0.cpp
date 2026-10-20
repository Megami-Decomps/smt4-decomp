/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001512e0` (_code @ 0x1512e0, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4040(unsigned int *);

extern unsigned char DAT_00421ddc; /* 0x421ddc */

/* Supplied declaration required: FUN_002c4040. */
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


unsigned int * FUN_001512e0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421ddc;
  param_1[1] = 0;
  param_1[2] = 0;
  nn_os_LightEvent_Initialize((unsigned int)(param_1 + 1),1);
  *(unsigned char *)(param_1 + 3) = 0;
  *(unsigned char *)((int)param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0xe) = 0;
  *(unsigned char *)((int)param_1 + 0xf) = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(unsigned char *)((int)param_1 + 0x2e) = 0;
  *(unsigned char *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0x35) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_002c4040(param_1 + 1);
  return param_1;
}

} /* extern "C" */
