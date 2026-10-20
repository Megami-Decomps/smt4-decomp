#include "romwright_types.h"

extern "C" {

int FUN_0030f138(unsigned int, unsigned char *, int);

extern unsigned char DAT_00538b18; /* 0x538b18 */

/* Supplied declaration required: FUN_0030f138. */


void FUN_002fd5c4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030f138(param_1,&DAT_00538b18,0);
  return;
}

} /* extern "C" */
