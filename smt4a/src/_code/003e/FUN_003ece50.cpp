#include "romwright_types.h"

extern "C" {

extern int FUN_004d87e4(unsigned int);


unsigned char FUN_003ece50(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_004d87e4(*(unsigned int *)(param_1 + 0x22bc));
  return temp_v0 != 0;
}

} /* extern "C" */
