#include "romwright_types.h"

extern "C" {

extern int FUN_001a7a20(int, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(unsigned int);


unsigned char FUN_0019f29c(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  int base = *(int *)(param_1 + 0x210) + 0x70;
  temp_v1 = FUN_002e3390(param_2);
  temp_v0 = FUN_001a7a20(base + 4,param_2,temp_v1);
  if (temp_v0 != 0xffff) {
    temp_v2 = *(int *)(*(int *)(param_1 + 0x108) + 0x14) + temp_v0 * 0x30;
    *param_3 = *(unsigned int *)(temp_v2 + 0xc);
    param_3[1] = *(unsigned int *)(temp_v2 + 0x1c);
    param_3[2] = *(unsigned int *)(temp_v2 + 0x2c);
  }
  return temp_v0 != 0xffff;
}

} /* extern "C" */
