#include "romwright_types.h"

extern "C" {


void FUN_00121fb4(unsigned int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned char *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 6) = 0;
  *(unsigned char *)((int)param_1 + 0x19) = 0;
  *(unsigned char *)((int)param_1 + 0x1a) = 0;
  *(unsigned short *)(param_1 + 7) = 0;
  *(unsigned int *)((int)param_1 + 0x1e) = 0;
  *(unsigned int *)((int)param_1 + 0x22) = 0;
  *(unsigned int *)((int)param_1 + 0x26) = 0;
  *(unsigned int *)((int)param_1 + 0x2a) = 0;
  *(unsigned int *)((int)param_1 + 0x2e) = 0;
  *(unsigned int *)((int)param_1 + 0x32) = 0;
  return;
}

} /* extern "C" */
