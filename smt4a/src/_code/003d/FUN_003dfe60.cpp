#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


unsigned int FUN_003dfe60(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001801a4();
  if (*(short *)(temp_v0 + 0x60) <= -9) {
    temp_v1 = 5;
  }
  else if (*(short *)(temp_v0 + 0x60) >= 9) {
    temp_v1 = 4;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
