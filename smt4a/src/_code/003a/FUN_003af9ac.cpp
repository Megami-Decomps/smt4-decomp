#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int FUN_003d2158(int, int);

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_003d2158. */


unsigned int FUN_003af9ac(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  FUN_001846d0((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0xb00,2);
  *(unsigned char *)(temp_v0 + 0x17c) = 4;
  if (*(int *)(temp_v0 + 0x18c) != 0) {
    FUN_003d2158(*(int *)(temp_v0 + 0x18c),0);
    *(unsigned int *)(temp_v0 + 0x18c) = 0;
  }
  return 1;
}

} /* extern "C" */
