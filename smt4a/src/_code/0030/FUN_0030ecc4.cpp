/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ecc4` (_code @ 0x30ecc4, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(unsigned int *, unsigned char *, int);

extern unsigned char LAB_0012d569; /* 0x12d569 */
extern unsigned int DAT_005c4c40; /* 0x5c4c40 */
extern unsigned int DAT_005c4c44; /* 0x5c4c44 */
extern unsigned int DAT_005c4c48; /* 0x5c4c48 */

extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: emptyStub_002f4370. */


unsigned int * FUN_0030ecc4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_005c4c40 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c40), temp_v0 != 0)) {
    DAT_005c4c44 = 0;
    DAT_005c4c48 = 0;
    emptyStub_002f4370(&DAT_005c4c44,&LAB_0012d569,0x100000);
  }
  return &DAT_005c4c44;
}

} /* extern "C" */
