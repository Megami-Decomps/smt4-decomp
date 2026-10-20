#include "romwright_types.h"

extern "C" {

unsigned int FUN_0030a2c0(unsigned int, unsigned int, unsigned int, unsigned int);

extern unsigned int DAT_0043df58; /* 0x43df58 */

extern unsigned int FUN_002592d8(unsigned int);
extern int FUN_002893d8(void);
extern unsigned int FUN_00296cc8(unsigned int);
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_0030a2c0. */


unsigned int FUN_002220ac(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002592d8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  temp_v3 = FUN_00296cc8(3);
  temp_v4 = FUN_002893d8();
  if (temp_v4 != 0) {
    temp_v4 = FUN_002bf244(DAT_0043df58);
    if (temp_v4 == 0) {
      return 1;
    }
  }
  else {
    DAT_0043df58 = FUN_0030a2c0(temp_v0,temp_v1,temp_v2,temp_v3);
  }
  return 0;
}

} /* extern "C" */
