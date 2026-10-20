#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

extern int FUN_00381198(int);
extern int FUN_003bcf68(int);


unsigned int FUN_004abfec(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  temp_v0 = FUN_00381198((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  if ((temp_v0 == 0) || (temp_v1 = FUN_003bcf68(temp_v1 + 0x24bc), temp_v1 == 0)) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
