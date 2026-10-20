#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

extern int FUN_00336d84(int);


int FUN_004aaf94(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  temp_v1 = FUN_00336d84((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v0 + 0x74a0) = 0;
  }
  return temp_v1;
}

} /* extern "C" */
