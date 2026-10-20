#include "romwright_types.h"

extern "C" {

extern int FUN_002bf244(unsigned int);


void FUN_003273fc(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002bf244(*(unsigned int *)(temp_v1 * 4 + 0x493790));
    if (temp_v0 == 0) {
      *(unsigned int *)(temp_v1 * 4 + 0x493790) = param_1;
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  return;
}

} /* extern "C" */
