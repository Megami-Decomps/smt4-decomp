#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_002f06c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v2 = 0;
  if (temp_v0 == 0) {
    temp_v2 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v2 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v2 = 0xb;
  }
  temp_v0 = FUN_00296cc8(1);
  temp_v1 = FUN_0027e928(DAT_0043427c);
  temp_v3 = *(int *)(temp_v1 + 0x20);
  FUN_0028dcb0(*(short *)(temp_v3 + temp_v2 * 2 + 0x72) == temp_v0);
  return 1;
}

} /* extern "C" */
