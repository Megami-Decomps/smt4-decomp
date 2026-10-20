#include "romwright_types.h"

extern "C" {

int FUN_002e98ea(unsigned char *, unsigned int, int);

extern unsigned char DAT_00630430; /* 0x630430 */

/* Supplied declaration required: FUN_002e98ea. */


void FUN_0010b154(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e98ea(&DAT_00630430,*(unsigned int *)(param_1 + 4),0x7f);
  return;
}

} /* extern "C" */
