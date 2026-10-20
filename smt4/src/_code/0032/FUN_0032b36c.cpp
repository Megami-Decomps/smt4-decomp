#include "romwright_types.h"

extern "C" {

int FUN_00291730(unsigned int *);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_00291998(void);
int FUN_002b827c(int);
int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00291730. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_00291998. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0032b36c(void)

{
/* irregular: 7 native warning(s); review required */
  FUN_002b827c(3);
  FUN_00291998();
  FUN_00291944();
  FUN_002917b8();
  if (DAT_0044cdf0 != (unsigned int *)0x0) {
    FUN_002c43b4(*DAT_0044cdf0,0);
    FUN_00291730(DAT_0044cdf0 + 0x10);
    FUN_002c415c(DAT_0044cdf0);
    DAT_0044cdf0 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
