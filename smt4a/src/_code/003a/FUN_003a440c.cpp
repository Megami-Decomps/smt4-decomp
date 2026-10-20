/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a440c` (_code @ 0x3a440c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00180008(void);

extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_00180008. */
extern char *FUN_004731a4(void);


unsigned int FUN_003a440c(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  
  FUN_00180008();
  pcVar2 = (char *)FUN_004731a4();
  temp_v0 = *pcVar2;
  if ((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x03') {
    *(unsigned char *)(DAT_00570260 + 0xc0) = 1;
  }
  return 1;
}

} /* extern "C" */
