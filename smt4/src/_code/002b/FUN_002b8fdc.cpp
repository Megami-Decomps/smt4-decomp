#include "romwright_types.h"

extern "C" {


int FUN_002b8fdc(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x37c)) {
    do {
      if (*(unsigned short *)(*(int *)(param_1 + 0x380) + temp_v0 * 0x22) == param_2) {
        return *(int *)(param_1 + 0x380) + temp_v0 * 0x22;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x37c));
  }
  return 0;
}

} /* extern "C" */
