#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00439c88; /* 0x439c88 */

extern int FUN_002062e8(int);


void FUN_003ae2ec(unsigned int param_1,unsigned short *param_2,unsigned short *param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  temp_v1 = FUN_002062e8((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x2460);
  if (temp_v1 != 0) {
    *param_2 = *(unsigned short *)(temp_v0 + 0x7e4e);
    *param_3 = *(unsigned short *)(temp_v0 + 0x7e50);
  }
  return;
}

} /* extern "C" */
