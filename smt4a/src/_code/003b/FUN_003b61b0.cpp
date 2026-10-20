#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_001846d0. */


unsigned int FUN_003b61b0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x191) = 1;
  *(unsigned char *)(temp_v0 + 0x192) = 1;
  *(unsigned char *)(temp_v0 + 400) = 3;
  FUN_001846d0(temp_v0 + 0x1820,0x1d);
  return 1;
}

} /* extern "C" */
