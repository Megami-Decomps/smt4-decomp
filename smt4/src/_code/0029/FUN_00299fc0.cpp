#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */

extern int FUN_00293edc(unsigned int);


unsigned int FUN_00299fc0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12dc);
  if (((temp_v0 == 4 || temp_v0 == 5) || (temp_v0 == 6 || temp_v0 == 8)) &&
     (temp_v0 = FUN_00293edc(*(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e80)), temp_v0 != 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
