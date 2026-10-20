#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(void);
int FUN_002e3328(void);
int FUN_003fab40(void);

extern unsigned int *DAT_00588120; /* 0x588120 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_003fab40. */


void FUN_0035b394(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00588120[3] != 0) {
    FUN_003fab40();
    FUN_002e3328();
    DAT_00588120[3] = 0;
  }
  temp_v0 = FUN_00163e40(*DAT_00588120);
  if (temp_v0 != 0) {
    FUN_001631d0(*DAT_00588120,0);
  }
  if (DAT_00588120 != (unsigned int *)0x0) {
    FUN_0019a5a0();
    DAT_00588120 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
