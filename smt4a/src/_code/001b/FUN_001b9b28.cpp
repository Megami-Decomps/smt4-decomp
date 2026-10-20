/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b9b28` (_code @ 0x1b9b28, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_LightEvent_Initialize(unsigned int *, int);
int nn_os_LightEvent_Signal(unsigned int *);

extern unsigned char DAT_0055c24c; /* 0x55c24c */

/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: nn_os_LightEvent_Signal. */


unsigned int * FUN_001b9b28(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055c24c;
  param_1[1] = 0;
  param_1[2] = 0;
  nn_os_LightEvent_Initialize(param_1 + 1,1);
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
  *(unsigned char *)(param_1 + 0xb) = 0xff;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0x35) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  nn_os_LightEvent_Signal(param_1 + 1);
  return param_1;
}

} /* extern "C" */
