#include "romwright_types.h"

extern "C" {

int FUN_002a46d8(int);
int FUN_002a7218(unsigned int);
int FUN_002c415c(...);

extern int DAT_0043dc88; /* 0x43dc88 */

/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0032fdf0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043dc88;
  FUN_002a7218(*(unsigned int *)(DAT_0043dc88 + 0x530));
  FUN_002c415c(*(unsigned int *)(temp_v0 + 0x52c));
  FUN_002c415c(*(unsigned int *)(temp_v0 + 0x528));
  FUN_002a46d8(0xd);
  FUN_002c415c(DAT_0043dc88);
  DAT_0043dc88 = 0;
  return;
}

} /* extern "C" */
