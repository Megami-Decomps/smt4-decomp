/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a440c` (_code @ 0x3a440c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(void);

extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: jyoucyuGetTableEntry. */
extern char *FUN_004731a4(void);


unsigned int FUN_003a440c(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  
  jyoucyuGetTableEntry();
  pcVar2 = (char *)FUN_004731a4();
  temp_v0 = *pcVar2;
  if ((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x03') {
    *(unsigned char *)(g_aocMain + 0xc0) = 1;
  }
  return 1;
}

} /* extern "C" */
