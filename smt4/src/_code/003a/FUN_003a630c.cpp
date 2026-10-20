#include "romwright_types.h"

extern "C" {

extern int FUN_0028e9d4(unsigned int);


unsigned int FUN_003a630c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0x3b7;
  do {
    temp_v0 = FUN_0028e9d4(temp_v1);
    if (temp_v0 != 0) {
      return 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 <= 0x47e);
  temp_v1 = 0x47f;
  do {
    temp_v0 = FUN_0028e9d4(temp_v1);
    if (temp_v0 != 0) {
      return 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 <= 0x79e);
  return 0;
}

} /* extern "C" */
