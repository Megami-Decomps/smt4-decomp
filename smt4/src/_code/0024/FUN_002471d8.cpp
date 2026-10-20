#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


unsigned int FUN_002471d8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b63ac();
  if (*(short *)(temp_v0 + 0x74) <= -9) {
    temp_v1 = 5;
  }
  else if (*(short *)(temp_v0 + 0x74) >= 9) {
    temp_v1 = 4;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
