#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f15fc; /* 0x5f15fc */


void FUN_0047dd18(int param_1)

{
  *(unsigned char *)(param_1 + 0x1a) = 0;
  *(unsigned short *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x1e) = 0;
  *(unsigned int *)(param_1 + 0x22) = 0;
  *(unsigned int *)(param_1 + 0x26) = 0;
  *(unsigned int *)(param_1 + 0x2a) = 0;
  *(unsigned int *)(param_1 + 0x2e) = 0;
  *(unsigned int *)(param_1 + 0x32) = 0;
  (*(unsigned int *)((unsigned char *)&DAT_005f15fc + 0x5c)) = 0;
  return;
}

} /* extern "C" */
