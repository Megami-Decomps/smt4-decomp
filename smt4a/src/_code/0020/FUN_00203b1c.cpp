#include "romwright_types.h"

extern "C" {

extern int FUN_0018719c(unsigned int);


unsigned int FUN_00203b1c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0018719c(0x534);
  if (temp_v0 == 0) {
    temp_v1 = 99;
  }
  else {
    temp_v1 = 999;
  }
  return temp_v1;
}

} /* extern "C" */
