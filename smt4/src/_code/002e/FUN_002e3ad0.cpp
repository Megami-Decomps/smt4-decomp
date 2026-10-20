#include "romwright_types.h"

extern "C" {

int FUN_0029c43c(unsigned int, int);

extern unsigned int DAT_00434228; /* 0x434228 */

extern int FUN_002485b8(void);
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: FUN_0029c43c. */


unsigned int FUN_002e3ad0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_00434228 = FUN_00296cc8();
  temp_v0 = FUN_002485b8();
  if (temp_v0 != 0) {
    FUN_0029c43c(DAT_00434228,0);
  }
  return 1;
}

} /* extern "C" */
