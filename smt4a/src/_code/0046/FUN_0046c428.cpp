#include "romwright_types.h"

extern "C" {

int FUN_001b3428(int);

extern int DAT_00570260; /* 0x570260 */
extern int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_001b3428. */


void FUN_0046c428(void)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(DAT_0057027c + 0x450c) = 0;
  FUN_001b3428(DAT_00570260 + 0x88);
  return;
}

} /* extern "C" */
