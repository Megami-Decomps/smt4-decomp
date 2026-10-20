#include "romwright_types.h"

extern "C" {

extern int FUN_0043f990(unsigned int);


int FUN_0043d604(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_0043f990(param_2);
  return temp_v0 + param_1 + 0x3f94;
}

} /* extern "C" */
