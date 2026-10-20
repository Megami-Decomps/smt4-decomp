#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0030ffe0(unsigned int, unsigned int);


unsigned int FUN_0030c79c(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_0030ffe0(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 4));
  return temp_v0 ^ 1;
}

} /* extern "C" */
