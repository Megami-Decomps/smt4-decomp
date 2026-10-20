/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249964` (_code @ 0x249964, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0040b730(unsigned int, unsigned int);
int FUN_0040b9ac(unsigned int, unsigned int, unsigned int);
int FUN_0040ba38(unsigned int, int);

extern int DAT_00581288; /* 0x581288 */

/* Supplied declaration required: FUN_0040b730. */
/* Supplied declaration required: FUN_0040b9ac. */
/* Supplied declaration required: FUN_0040ba38. */


void FUN_00249964(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0040ba38(*(unsigned int *)(DAT_00581288 + 0x1a8),0x1c0);
  temp_v0 = 0;
  if (*(char *)(DAT_00581288 + 0x1ac) == '\0') {
    do {
      FUN_0040b730(*(unsigned int *)(DAT_00581288 + 0x1a8),temp_v0 & 0xff);
      temp_v0 = temp_v0 + 1;
    } while ((int)temp_v0 < 3);
    return;
  }
  do {
    FUN_0040b9ac(*(unsigned int *)(DAT_00581288 + 0x1a8),temp_v0 & 0xff,
                 *(unsigned int *)(DAT_00581288 + temp_v0 * 4 + 0x1b0));
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 3);
  return;
}

} /* extern "C" */
