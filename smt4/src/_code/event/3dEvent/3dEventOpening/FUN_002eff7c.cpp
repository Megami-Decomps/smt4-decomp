#include "romwright_types.h"

extern "C" {

int FUN_002a4d14(void);
int FUN_002c08f0(unsigned int);
int FUN_002c415c(unsigned int);

extern unsigned int DAT_0043df98; /* 0x43df98 */

/* Supplied declaration required: FUN_002a4d14. */
/* Supplied declaration required: FUN_002c08f0. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002eff7c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_002a4d14();
  FUN_002c08f0(param_1);
  FUN_002c415c(DAT_0043df98);
  DAT_0043df98 = 0;
  return;
}

} /* extern "C" */
