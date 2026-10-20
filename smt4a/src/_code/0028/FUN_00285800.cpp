#include "romwright_types.h"

extern "C" {

int FUN_0021af2c(void);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0021af2c. */


void FUN_00285800(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x1374) = 0;
  FUN_0021af2c();
  *(unsigned char *)(temp_v0 + 0x2014) = 0;
  return;
}

} /* extern "C" */
