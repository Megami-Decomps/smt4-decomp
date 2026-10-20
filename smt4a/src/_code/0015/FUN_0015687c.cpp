#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


int FUN_0015687c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  return temp_v0 + 0x4c;
}

} /* extern "C" */
