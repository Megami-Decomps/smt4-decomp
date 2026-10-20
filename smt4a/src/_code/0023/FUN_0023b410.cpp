#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_0014afd0(int, int);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */


void FUN_0023b410(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&DAT_00588fd0 + 0x1)) <= 0) {
    FUN_0014384c(0x12);
    temp_v0 = 0;
    do {
      FUN_0014afd0(0x12,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
  }
  (*(signed char *)((unsigned char *)&DAT_00588fd0 + 0x1)) = (*(signed char *)((unsigned char *)&DAT_00588fd0 + 0x1)) + '\x01';
  return;
}

} /* extern "C" */
