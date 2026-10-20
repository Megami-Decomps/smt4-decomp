#include "romwright_types.h"

extern "C" {

extern int FUN_004ffba8(unsigned int);


unsigned int FUN_003c4cfc(int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  char *p = (char *)*param_1 + 0x9b4;
  
  if ((*p == '\0') ||
     (temp_v0 = FUN_004ffba8(*(unsigned int *)(*(int *)(p + 0x14) + 4)), temp_v0 == 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
