/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d230` (_code @ 0x10d230, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdGxCommandListBegin(unsigned int);
int asdGxCommandListEnd(unsigned int, int);

extern int DAT_004e3cfc; /* 0x4e3cfc */
extern signed char DAT_004e3d04; /* 0x4e3d04 */

/* Supplied declaration required: asdGxCommandListBegin. */
/* Supplied declaration required: asdGxCommandListEnd. */


void FUN_0010d230(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != 0) {
    if (DAT_004e3d04 == '\0') {
      if ((DAT_004e3cfc != 0) && (*(int *)(DAT_004e3cfc + 100) == 0)) {
        asdGxCommandListBegin(*(unsigned int *)(DAT_004e3cfc + 0x60));
      }
      DAT_004e3d04 = '\x01';
    }
  }
  else if (DAT_004e3d04 == '\x01') {
    if ((DAT_004e3cfc != 0) && (*(int *)(DAT_004e3cfc + 100) == 0)) {
      asdGxCommandListEnd(*(unsigned int *)(DAT_004e3cfc + 0x60),0);
    }
    DAT_004e3d04 = '\0';
  }
  return;
}

} /* extern "C" */
