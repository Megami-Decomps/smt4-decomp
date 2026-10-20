#include "romwright_types.h"

extern "C" {

extern int DAT_0057f2c4; /* 0x57f2c4 */


void FUN_0031faa4(unsigned short param_1,unsigned short param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f2c4;
  *(unsigned short *)(DAT_0057f2c4 + (unsigned int)*(unsigned short *)(DAT_0057f2c4 + 0x1e) * 2 + 0xe) = param_1;
  *(unsigned short *)(temp_v0 + (unsigned int)*(unsigned short *)(temp_v0 + 0x1e) * 2 + 0x16) = param_2;
  *(short *)(temp_v0 + 0x1e) = *(short *)(temp_v0 + 0x1e) + 1;
  return;
}

} /* extern "C" */
