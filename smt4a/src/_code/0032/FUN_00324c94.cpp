#include "romwright_types.h"

extern "C" {

extern unsigned int gameFlagsGetBlock(void);
extern unsigned long long FUN_00324f74(int, unsigned int);


void FUN_00324c94(int param_1,unsigned char param_2)

{
  unsigned int temp_v0;
  unsigned long long temp_v1;
  
  temp_v0 = gameFlagsGetBlock();
  temp_v1 = FUN_00324f74(param_1,temp_v0);
  if ((int)temp_v1 != 0) {
    *(unsigned char *)((int)((unsigned long long)temp_v1 >> 0x20) + param_1 + 0xe48) = param_2;
  }
  return;
}

} /* extern "C" */
