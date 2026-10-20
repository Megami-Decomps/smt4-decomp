#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


unsigned int FUN_003dff08(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  if (param_1 != 4) {
    if ((param_1 == 5) && (*(short *)(temp_v0 + 0x60) <= -800)) {
      return 1;
    }
  }
  else if (*(short *)(temp_v0 + 0x60) >= 800) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
