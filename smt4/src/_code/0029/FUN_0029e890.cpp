#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


void FUN_0029e890(int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12ef) = (char)param_1;
  if (param_1 < 0) {
    *(unsigned char *)(temp_v0 + 0x12f4) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x12f4) = param_2;
  }
  return;
}

} /* extern "C" */
