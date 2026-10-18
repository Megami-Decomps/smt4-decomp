/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003100e8` (_code @ 0x3100e8, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432fc8; /* 0x432fc8 */

extern char *FUN_002897fc(void);
/* Supplied declaration required: FUN_002c583c. */


unsigned int FUN_003100e8(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  
  FUN_002c583c();
  pcVar2 = (char *)FUN_002897fc();
  temp_v0 = *pcVar2;
  if ((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x03') {
    *(unsigned char *)(DAT_00432fc8 + 0xc0) = 1;
  }
  return 1;
}
