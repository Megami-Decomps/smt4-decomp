#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


int FUN_003e0034(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  return (int)*(short *)(temp_v0 + 0x2c);
}

} /* extern "C" */
