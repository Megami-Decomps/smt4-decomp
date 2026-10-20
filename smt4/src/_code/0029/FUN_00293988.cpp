#include "romwright_types.h"

extern "C" {

extern int FUN_0026efec(int);


unsigned int FUN_00293988(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (((*(unsigned int *)(param_1 + 0x44a8) & 0x40) == 0) && (*(int *)(param_1 + 0x2f34) - 1U > 3U)) {
    temp_v2 = 0;
    temp_v1 = temp_v2;
    do {
      temp_v0 = FUN_0026efec(temp_v1);
      temp_v1 = temp_v1 + 1;
      if (*(short *)(temp_v0 + 0x48) != 0) {
        temp_v2 = temp_v2 + 1;
      }
    } while (temp_v1 < 0xc);
    if (temp_v2 < 1) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
