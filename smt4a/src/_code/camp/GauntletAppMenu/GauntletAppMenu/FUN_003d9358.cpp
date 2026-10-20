#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);
int FUN_0019c364(unsigned int);
int FUN_001add24(int);

extern int DAT_0057f238; /* 0x57f238 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */


void FUN_003d9358(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f238;
  FUN_0019c364(*(unsigned int *)(DAT_0057f238 + 0x530));
  FUN_0019a5a0(*(unsigned int *)(temp_v0 + 0x52c));
  FUN_0019a5a0(*(unsigned int *)(temp_v0 + 0x528));
  FUN_001add24(0xd);
  FUN_0019a5a0(DAT_0057f238);
  DAT_0057f238 = 0;
  return;
}

} /* extern "C" */
