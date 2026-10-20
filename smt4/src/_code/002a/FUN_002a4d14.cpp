#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044ea58; /* 0x44ea58 */


void FUN_002a4d14(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0044ea58 + 0x4));
  temp_v1 = (*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + 0x590;
  *(int *)((*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + 0x80) = (*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + 0x88;
  *(int *)(temp_v0 + 0x84) = temp_v1;
  return;
}

} /* extern "C" */
