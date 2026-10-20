#include "romwright_types.h"

extern "C" {

int FUN_0021a610(int);
int FUN_003d4bbc(unsigned int);

extern unsigned int DAT_00619988; /* 0x619988 */

/* Supplied declaration required: FUN_0021a610. */
/* Supplied declaration required: FUN_003d4bbc. */


void FUN_003d9280(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    for (temp_v0 = (&DAT_00619988)[(temp_v1 & 0xff) * 4]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
      FUN_0021a610(temp_v0);
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  temp_v1 = 0;
  do {
    FUN_003d4bbc(temp_v1 & 0xff);
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  return;
}

} /* extern "C" */
