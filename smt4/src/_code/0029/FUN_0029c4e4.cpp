#include "romwright_types.h"

extern "C" {

int FUN_0024d7d0(int, unsigned int);

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: FUN_0024d7d0. */


void FUN_0029c4e4(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)((unsigned char *)&g_gameGlobals + 0x4);
  FUN_0024d7d0(temp_v0 + 0x18b0,param_1);
  if (param_2 != 0) {
    *(unsigned short *)(temp_v0 + 0x18b8) = *(unsigned short *)(temp_v0 + 0x18bc);
    *(unsigned short *)(temp_v0 + 0x18ba) = *(unsigned short *)(temp_v0 + 0x18be);
  }
  return;
}

} /* extern "C" */
