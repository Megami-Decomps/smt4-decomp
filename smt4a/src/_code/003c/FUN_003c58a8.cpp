#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f208; /* 0x57f208 */


void FUN_003c58a8(unsigned char param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f208 + 0xc));
  if ((*(int *)((unsigned char *)&DAT_0057f208 + 0xc)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f208 + 0xc)) + 0x1c) = param_2;
    *(unsigned char *)(temp_v0 + 0x1d) = param_1;
  }
  return;
}

} /* extern "C" */
