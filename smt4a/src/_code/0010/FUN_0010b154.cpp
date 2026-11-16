#include "romwright_types.h"

extern "C" {

int libc_wcsncpyShort(unsigned char *, unsigned int, int);

extern unsigned char DAT_00630430; /* 0x630430 */

/* Supplied declaration required: libc_wcsncpyShort. */


void FUN_0010b154(int param_1)

{
/* irregular: 1 native warning(s); review required */
  libc_wcsncpyShort(&DAT_00630430,*(unsigned int *)(param_1 + 4),0x7f);
  return;
}

} /* extern "C" */
