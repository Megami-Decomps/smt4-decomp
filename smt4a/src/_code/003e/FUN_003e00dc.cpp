#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


void FUN_003e00dc(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  *(unsigned short *)(temp_v0 + 0x5e) = *(unsigned short *)(temp_v0 + 0x5e) & ~param_1;
  return;
}

} /* extern "C" */
