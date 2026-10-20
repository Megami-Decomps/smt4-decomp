#include "romwright_types.h"

extern "C" {

extern int FUN_00481104(unsigned int);


unsigned int FUN_0049ca48(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0x3b7;
  do {
    temp_v0 = FUN_00481104(temp_v1);
    if (temp_v0 != 0) {
      return 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 <= 0x47e);
  temp_v1 = 0x47f;
  do {
    temp_v0 = FUN_00481104(temp_v1);
    if (temp_v0 != 0) {
      return 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 <= 0x79e);
  return 0;
}

} /* extern "C" */
