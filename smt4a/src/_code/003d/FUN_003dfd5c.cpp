#include "romwright_types.h"

extern "C" {

extern int FUN_003e46f4(unsigned int);


int FUN_003dfd5c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 4;
  temp_v0 = FUN_003e46f4(0x77);
  if (temp_v0 != 0) {
    temp_v1 = 5;
  }
  temp_v0 = FUN_003e46f4(0x78);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_003e46f4(0x79);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_003e46f4(0x7a);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  if (temp_v1 > 8) {
    temp_v1 = 8;
  }
  return temp_v1;
}

} /* extern "C" */
