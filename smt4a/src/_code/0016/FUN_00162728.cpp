#include "romwright_types.h"

extern "C" {

int FUN_00188d08(unsigned short *, unsigned int);

extern unsigned char g_gameDataBlocks; /* 0x57f698 */

/* Supplied declaration required: FUN_00188d08. */


void FUN_00162728(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = (*(unsigned short * *)((unsigned char *)&g_gameDataBlocks + 0xc));
  if (param_1 <= *(*(unsigned short * *)((unsigned char *)&g_gameDataBlocks + 0xc))) {
    *(*(unsigned short * *)((unsigned char *)&g_gameDataBlocks + 0xc)) = *(*(unsigned short * *)((unsigned char *)&g_gameDataBlocks + 0xc)) - (short)param_1;
    FUN_00188d08(puVar1,param_1);
    return;
  }
  return;
}

} /* extern "C" */
