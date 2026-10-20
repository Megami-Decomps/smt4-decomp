#include "romwright_types.h"

extern "C" {

int FUN_002d85f8(unsigned int, int);

extern int DAT_0043ded0; /* 0x43ded0 */

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002d85f8. */


void FUN_00221d58(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (DAT_0043ded0 != 0) {
    temp_v1 = 0;
    *(char *)(DAT_0043ded0 + 0x5c) = (char)param_1;
    if (param_1 != 0) {
      do {
        temp_v0 = FUN_002bf244(*(unsigned int *)(DAT_0043ded0 + temp_v1 * 4 + 0x34));
        if (temp_v0 != 0) {
          FUN_002d85f8(*(unsigned int *)(DAT_0043ded0 + temp_v1 * 4 + 0x34),1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 10);
      return;
    }
    do {
      temp_v0 = FUN_002bf244(*(unsigned int *)(DAT_0043ded0 + temp_v1 * 4 + 0x34));
      if (temp_v0 != 0) {
        FUN_002d85f8(*(unsigned int *)(DAT_0043ded0 + temp_v1 * 4 + 0x34),0);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
  }
  return;
}

} /* extern "C" */
