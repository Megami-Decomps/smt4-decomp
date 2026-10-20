#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_002b06c4(unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: FUN_002b06c4. */


unsigned int FUN_0031858c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b06c4((unsigned short)FUN_00296cc8());
  FUN_0028dcb0((*(unsigned short *)(temp_v0 + 0x16) & 0x7f) >> 6);
  return 1;
}

} /* extern "C" */
