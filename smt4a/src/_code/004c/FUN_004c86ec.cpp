/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c86ec` (_code @ 0x4c86ec, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);

/* Supplied declaration required: dataTable04FindById. */


unsigned int FUN_004c86ec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (((param_1 != 0) && (dataTable04FindById(), param_1 != 0)) &&
     ((*(unsigned char *)(param_1 + 0x32) == 0xfb || *(unsigned char *)(param_1 + 0x32) == 0xf9 ||
      (((*(unsigned char *)(param_1 + 0x33) == 0xfb || *(unsigned char *)(param_1 + 0x33) == 0xf9 ||
        (*(unsigned char *)(param_1 + 0x34) == 0xfb || *(unsigned char *)(param_1 + 0x34) == 0xf9)) ||
       (*(unsigned char *)(param_1 + 0x35) == 0xfb || *(unsigned char *)(param_1 + 0x35) == 0xf9)))))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
