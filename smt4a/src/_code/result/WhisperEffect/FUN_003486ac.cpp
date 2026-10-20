#include "romwright_types.h"

extern "C" {

extern int DAT_00588c54; /* 0x588c54 */

extern int FUN_002deb84(int);


unsigned int FUN_003486ac(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (DAT_00588c54 == 0) {
    temp_v0 = 1;
  }
  else {
    temp_v1 = FUN_002deb84(DAT_00588c54);
    if (temp_v1 == 0) {
      *(unsigned char *)(DAT_00588c54 + 8) = 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
