/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c298` (_code @ 0x25c298, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00119c28(unsigned char [16]);

/* Supplied declaration required: FUN_00119c28. */
extern int jyoucyuGetTableEntry(unsigned int);


void FUN_0025c298(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [16];
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    FUN_00119c28(temp_v1);
  }
  return;
}

} /* extern "C" */
