/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001046dc` (_code @ 0x1046dc, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineHandleClose(unsigned int *);
int FUN_002ea614(unsigned int *);

extern unsigned char DAT_005585e0; /* 0x5585e0 */

/* Supplied declaration required: onlineHandleClose. */
/* Supplied declaration required: FUN_002ea614. */


void FUN_001046dc(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005585e0;
  if (*(char *)(param_1 + 0x47) != '\0') {
    onlineHandleClose(param_1 + 0x46);
    *(unsigned char *)(param_1 + 0x47) = 0;
  }
  onlineHandleClose(param_1 + 0x46);
  FUN_002ea614(param_1);
  return;
}

} /* extern "C" */
