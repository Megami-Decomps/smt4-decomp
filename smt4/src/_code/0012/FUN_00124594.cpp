#include "romwright_types.h"

extern "C" {

int FUN_001397bc(unsigned short *, unsigned int);

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */

/* Supplied declaration required: FUN_001397bc. */


void FUN_00124594(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = (*(unsigned short * *)((unsigned char *)&DAT_0043e2a8 + 0xc));
  if (param_1 <= *(*(unsigned short * *)((unsigned char *)&DAT_0043e2a8 + 0xc))) {
    *(*(unsigned short * *)((unsigned char *)&DAT_0043e2a8 + 0xc)) = *(*(unsigned short * *)((unsigned char *)&DAT_0043e2a8 + 0xc)) - (short)param_1;
    FUN_001397bc(puVar1,param_1);
    return;
  }
  return;
}

} /* extern "C" */
