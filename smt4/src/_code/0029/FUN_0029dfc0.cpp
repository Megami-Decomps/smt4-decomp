#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


void FUN_0029dfc0(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e60) = (char)param_1;
  if (((param_1 == 0) && (*(char *)(temp_v0 + 0x1e67) != '\t')) &&
     (temp_v1 = *(int *)(temp_v0 + 0x12dc), (temp_v1 == 4 || temp_v1 == 5) || temp_v1 == 6)) {
    *(unsigned int *)(temp_v0 + 0x12e0) = 0;
  }
  return;
}

} /* extern "C" */
