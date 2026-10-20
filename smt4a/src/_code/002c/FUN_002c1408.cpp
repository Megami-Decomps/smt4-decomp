#include "romwright_types.h"

extern "C" {

int FUN_004d0d70(int);

extern int FUN_0014af84(void);
/* Supplied declaration required: FUN_004d0d70. */


unsigned int FUN_002c1408(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0014af84();
  temp_v1 = 0;
  unsigned short *ps = (unsigned short *)(temp_v0 + 0x27e04);
  ps[4] = 0;
  do {
    FUN_004d0d70(temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return 1;
}

} /* extern "C" */
