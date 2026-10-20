/* NON_MATCHING: romwright 0.5.0 decompilation of `onlineSockAddrConstruct` (_code @ 0x2e995c, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrInit(unsigned int *);

extern unsigned char DAT_005585d0; /* 0x5585d0 */

/* Supplied declaration required: onlineSockAddrInit. */


unsigned int * onlineSockAddrConstruct(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005585d0;
  onlineSockAddrInit(param_1);
  return param_1;
}

} /* extern "C" */
