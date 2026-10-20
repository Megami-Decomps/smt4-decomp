#include "romwright_types.h"

extern "C" {

extern int padIsButtonDown(unsigned int);


int FUN_0029aafc(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 4;
  temp_v0 = padIsButtonDown(0x77);
  if (temp_v0 != 0) {
    temp_v1 = 5;
  }
  temp_v0 = padIsButtonDown(0x78);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = padIsButtonDown(0x79);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = padIsButtonDown(0x7a);
  if (temp_v0 != 0) {
    temp_v1 = temp_v1 + 1;
  }
  if (temp_v1 > 8) {
    temp_v1 = 8;
  }
  return temp_v1;
}

} /* extern "C" */
