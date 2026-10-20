#include "romwright_types.h"

extern "C" {

extern int FUN_0015688c(void);


unsigned int FUN_002e5db4(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0015688c();
  if ((temp_v0 == 0) || (*(short *)(temp_v0 + 300) != 0xaf)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
