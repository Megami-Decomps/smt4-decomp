#include "romwright_types.h"

extern "C" {

int FUN_00293ba8(void);

extern unsigned char DAT_0044e140; /* 0x44e140 */

/* Supplied declaration required: FUN_00293ba8. */


void FUN_0026d670(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0044e140 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x12e4) = 0;
  FUN_00293ba8();
  *(unsigned char *)(temp_v0 + 0x1e63) = 0;
  return;
}

} /* extern "C" */
