#include "romwright_types.h"

extern "C" {

extern int DAT_0044cd88; /* 0x44cd88 */


void FUN_0027cc48(unsigned short param_1,unsigned short param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0044cd88;
  *(unsigned short *)(DAT_0044cd88 + 8) = 0;
  *(unsigned short *)(temp_v0 + 10) = 0;
  *(unsigned short *)(temp_v0 + 4) = param_1;
  *(unsigned short *)(temp_v0 + 6) = param_2;
  return;
}

} /* extern "C" */
