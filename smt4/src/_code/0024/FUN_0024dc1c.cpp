#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


unsigned int FUN_0024dc1c(int param_1)
{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  if (param_1 != 4) {
    if (param_1 == 5 && *(short *)(temp_v0 + 0x74) <= -800) {
      return 1;
    }
    return 0;
  }
  if (*(short *)(temp_v0 + 0x74) >= 800) {
    return 1;
  }
  return 0;
}
} /* extern "C" */
