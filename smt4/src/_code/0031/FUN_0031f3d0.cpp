#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_002b06c4(unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: FUN_002b06c4. */


unsigned int FUN_0031f3d0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002b06c4(temp_v0);
  FUN_0028dcb0((*(unsigned char *)(temp_v1 + 0xa5) & 3) >> 1);
  return 1;
}

} /* extern "C" */
