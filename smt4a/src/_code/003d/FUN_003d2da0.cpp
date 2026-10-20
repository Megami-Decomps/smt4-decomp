#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_00168980(void);
int FUN_0019a5a0(unsigned int *);
int FUN_0035b304(void);
int FUN_0037b450(void);
int FUN_0049274c(unsigned int *);
int FUN_00493154(void);

extern unsigned int *DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_00168980. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_0049274c. */
/* Supplied declaration required: FUN_00493154. */


void FUN_003d2da0(void)

{
/* irregular: 7 native warning(s); review required */
  FUN_00168980();
  FUN_00493154();
  FUN_0035b304();
  FUN_0037b450();
  if (DAT_00587f28 != (unsigned int *)0x0) {
    FUN_001631d0(*DAT_00587f28,0);
    FUN_0049274c(DAT_00587f28 + 0x1a);
    FUN_0019a5a0(DAT_00587f28);
    DAT_00587f28 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
