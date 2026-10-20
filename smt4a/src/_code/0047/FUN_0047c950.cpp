#include "romwright_types.h"

extern "C" {

extern int FUN_004d08d0(int);
extern int FUN_004d0ba4(int);


int FUN_0047c950(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_004d0ba4(param_1 + 0x2e8);
  temp_v0 = FUN_004d08d0(temp_v0 - 0x34);
  return temp_v0 - 0x2b4;
}

} /* extern "C" */
