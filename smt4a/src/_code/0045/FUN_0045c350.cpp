#include "romwright_types.h"

extern "C" {

extern int FUN_004611d0(int);


int FUN_0045c350(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_004611d0(param_1 + 0xc);
  return temp_v0 - 0xc;
}

} /* extern "C" */
