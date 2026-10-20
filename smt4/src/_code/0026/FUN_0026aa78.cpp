#include "romwright_types.h"

extern "C" {

extern int padIsButtonDown(unsigned int);


int FUN_0026aa78(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 2;
  temp_v0 = padIsButtonDown(0x12);
  if (temp_v0 != 0) {
    temp_v1 = 3;
  }
  temp_v0 = padIsButtonDown(0x13);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = padIsButtonDown(0x14);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = padIsButtonDown(0x15);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = padIsButtonDown(0x16);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = padIsButtonDown(0x17);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  return temp_v1;
}

} /* extern "C" */
