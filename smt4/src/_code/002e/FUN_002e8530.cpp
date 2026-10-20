#include "romwright_types.h"

extern "C" {

int FUN_002a043c(unsigned int, int);

extern unsigned char DAT_004474f0; /* 0x4474f0 */

/* Supplied declaration required: FUN_002a043c. */


void FUN_002e8530(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x2b0) = 1;
  FUN_002a043c(*(unsigned int *)(temp_v0 + 0x2b4),0);
  return;
}

} /* extern "C" */
