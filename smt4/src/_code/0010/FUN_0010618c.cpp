#include "romwright_types.h"

extern "C" {

int FUN_002c4f8c(unsigned int, unsigned int);
int FUN_002c501c(void);

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c4f8c. */
/* Supplied declaration required: FUN_002c501c. */


unsigned int FUN_0010618c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c501c();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c501c();
    FUN_002c4f8c(DAT_0044ea00,temp_v1);
  }
  return 0;
}

} /* extern "C" */
