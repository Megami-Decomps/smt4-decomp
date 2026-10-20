#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


int FUN_003e0164(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  return (int)*(short *)(temp_v0 + 0x1e);
}

} /* extern "C" */
