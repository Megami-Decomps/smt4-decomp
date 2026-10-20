/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012140c` (_code @ 0x12140c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f30c4(unsigned int *);

typedef int romwright_code(...);
extern unsigned char DAT_0055afcc; /* 0x55afcc */
extern unsigned char DAT_00594ad8; /* 0x594ad8 */

/* Supplied declaration required: FUN_002f30c4. */


unsigned int * FUN_0012140c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055afcc;
  FUN_002f30c4(param_1);
  if ((*(int * *)((unsigned char *)&DAT_00594ad8 + 0x48)) != (int *)0x0) {
    (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_00594ad8 + 0x48)) + 0xc))((*(int * *)((unsigned char *)&DAT_00594ad8 + 0x48)),param_1[0xf]);
  }
  return param_1;
}

} /* extern "C" */
