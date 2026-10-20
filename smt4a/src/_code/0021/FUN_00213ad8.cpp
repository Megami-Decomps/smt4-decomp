#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);

extern unsigned char DAT_0057f3b4; /* 0x57f3b4 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00213ad8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0057f3b4 + 0xc));
  if ((*(unsigned int * *)((unsigned char *)&DAT_0057f3b4 + 0xc)) != (unsigned int *)0x0) {
    FUN_001631d0(*(*(unsigned int * *)((unsigned char *)&DAT_0057f3b4 + 0xc)),0);
    FUN_0019a5a0(puVar1);
    (*(unsigned int * *)((unsigned char *)&DAT_0057f3b4 + 0xc)) = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
