/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a72c` (_code @ 0x39a72c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_001846d0. */
extern int FUN_002deb84(void);


unsigned char FUN_0039a72c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f590;
  temp_v2 = FUN_002deb84();
  temp_v1 = DAT_0057f590;
  if ((temp_v2 == 0) && (*(char *)(temp_v0 + 0x19f2) != '\0')) {
    FUN_001846d0(DAT_0057f590 + 0x144c,0xc);
    *(unsigned char *)(temp_v1 + 0x19f1) = 1;
    *(unsigned char *)(temp_v1 + 0x19f0) = 4;
  }
  return *(char *)(temp_v0 + 0x19f1) == '\0';
}
