#include "romwright_types.h"

extern "C" {

int FUN_0024c614(unsigned int, int, unsigned int);

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_0024c614. */
extern int FUN_00296cc8(void);


unsigned int FUN_0030b4c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 0xb;
  }
  FUN_0024c614(DAT_0043427c,0x1a,temp_v1);
  return 1;
}

} /* extern "C" */
