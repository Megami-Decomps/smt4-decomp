#include "romwright_types.h"

extern "C" {

int FUN_003c8738(void);

extern int DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: FUN_003c8738. */


void FUN_003c8790(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f118 != 0) {
    temp_v0 = *(int *)(DAT_0057f118 + 0xc);
  }
  if (DAT_0057f118 == 0 || temp_v0 == 0) {
    return;
  }
  FUN_003c8738();
  return;
}

} /* extern "C" */
