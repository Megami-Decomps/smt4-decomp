#include "romwright_types.h"

extern "C" {

extern int FUN_00254db0(void);


int FUN_0022a344(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00254db0();
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0x20c;
  }
  return temp_v0;
}

} /* extern "C" */
