#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28; /* 0x43da28 */

extern int FUN_00296f4c(unsigned int, unsigned int);


unsigned char FUN_00210ce0(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00296f4c(*(unsigned int *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x560),param_1);
  return temp_v0 != 0;
}

} /* extern "C" */
