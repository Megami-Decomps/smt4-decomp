#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */

extern int FUN_00224880(unsigned int);


unsigned char FUN_002a21e8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00224880(*(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x680));
  return temp_v0 == 2;
}

} /* extern "C" */
