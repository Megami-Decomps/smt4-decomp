#include "romwright_types.h"

extern "C" {

extern int FUN_002a60b4(unsigned int, int);


unsigned char FUN_003af2a4(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002a60b4(0x14,temp_v1);
    if (temp_v0 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002a60b4(0x15,temp_v1);
    if (temp_v0 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  return temp_v2 >= 9;
}

} /* extern "C" */
