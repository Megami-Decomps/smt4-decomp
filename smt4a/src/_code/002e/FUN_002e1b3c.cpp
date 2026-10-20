#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */

extern int FUN_00275f44(unsigned int, unsigned int);


unsigned char FUN_002e1b3c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00275f44(*(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x680),param_1);
  return temp_v0 != 0;
}

} /* extern "C" */
