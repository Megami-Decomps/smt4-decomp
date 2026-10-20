#include "romwright_types.h"

extern "C" {

int FUN_002fb4b8(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_002fb4b8. */


void FUN_004a9d1c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x74a0) = 8;
  FUN_002fb4b8(temp_v0 + 8);
  return;
}

} /* extern "C" */
