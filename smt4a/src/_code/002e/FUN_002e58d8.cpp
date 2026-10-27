#include "romwright_types.h"

extern "C" {

extern unsigned char g_eventEffect; /* 0x57f3b4 */


unsigned int FUN_002e58d8(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (((*(int *)((unsigned char *)&g_eventEffect + 0x8)) != 0) && (*(int *)((*(int *)((unsigned char *)&g_eventEffect + 0x8)) + 8) == 3)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
