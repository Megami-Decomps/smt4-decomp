#include "romwright_types.h"

extern "C" {

int FUN_0024d94c(int, unsigned int);

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: FUN_0024d94c. */


void FUN_0029a0e8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)((unsigned char *)&g_gameGlobals + 0x4);
  FUN_0024d94c(temp_v0 + 0x1300,param_1);
  *(unsigned char *)(temp_v0 + 0x1e66) = 0;
  *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
  return;
}

} /* extern "C" */
