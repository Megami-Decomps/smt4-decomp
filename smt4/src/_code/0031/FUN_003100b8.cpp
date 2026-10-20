/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003100b8` (_code @ 0x3100b8, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(void);

extern int g_aocMain; /* 0x432fc8 */

extern char *FUN_00289594(void);
/* Supplied declaration required: jyoucyuGetTableEntry. */


unsigned int FUN_003100b8(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  
  jyoucyuGetTableEntry();
  pcVar2 = (char *)FUN_00289594();
  temp_v0 = *pcVar2;
  if ((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x03') {
    *(unsigned char *)(g_aocMain + 0xc0) = 1;
  }
  return 1;
}

} /* extern "C" */
