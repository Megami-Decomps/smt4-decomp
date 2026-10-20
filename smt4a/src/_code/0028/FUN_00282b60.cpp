#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_0014afd0(int, int);

extern unsigned char DAT_0057f208; /* 0x57f208 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */


void FUN_00282b60(void)

{
/* irregular: 2 native warning(s); review required */
  if ((*(signed char *)((unsigned char *)&DAT_0057f208 + 0x1)) <= 0) {
    FUN_0014384c(9);
    FUN_0014afd0(9,0);
  }
  (*(signed char *)((unsigned char *)&DAT_0057f208 + 0x1)) = (*(signed char *)((unsigned char *)&DAT_0057f208 + 0x1)) + '\x01';
  return;
}

} /* extern "C" */
