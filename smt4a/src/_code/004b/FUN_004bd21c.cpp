#include "romwright_types.h"

extern "C" {

extern int FUN_003e46f4(unsigned int);


unsigned int FUN_004bd21c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 4;
  temp_v0 = FUN_003e46f4(0x7b);
  if (temp_v0 != 0) {
    temp_v1 = 5;
  }
  temp_v0 = FUN_003e46f4(0x7c);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_003e46f4(0x7d);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_003e46f4(0x7e);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  if (temp_v1 > 8) {
    temp_v1 = 8;
  }
  return temp_v1;
}

} /* extern "C" */
