#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */

extern int FUN_0029e9cc(unsigned short);


void FUN_0026dafc(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  if ((((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) != 0) && (*(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e66) != '\r')) &&
     ((*(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e66) != '\x06' ||
      (temp_v1 = FUN_0029e9cc(*(unsigned short *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1300)), temp_v1 != 0)))) {
    *(unsigned int *)(temp_v0 + 0x1898) = param_1;
  }
  return;
}

} /* extern "C" */
