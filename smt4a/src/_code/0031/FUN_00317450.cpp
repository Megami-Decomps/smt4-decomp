#include "romwright_types.h"

extern "C" {

extern int FUN_003174bc(void);


int FUN_00317450(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003174bc();
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0x208;
  }
  return temp_v0;
}

} /* extern "C" */
