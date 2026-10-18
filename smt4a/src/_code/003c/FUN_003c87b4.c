/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c87b4` (_code @ 0x3c87b4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_001846d0. */
extern int FUN_002deb84(void);


unsigned char FUN_003c87b4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f590;
  temp_v3 = FUN_002deb84();
  temp_v1 = DAT_0057f590;
  if ((temp_v3 == 0) && (*(char *)(temp_v0 + 0x19fb) != '\0')) {
    FUN_001846d0(DAT_0057f590 + 0x15f0,0xf);
    FUN_001846d0(temp_v1 + 0x167c,0x10);
    FUN_001846d0(temp_v1 + 0x1794,0x12);
    *(unsigned char *)(temp_v1 + 0x19fa) = 1;
    if (*(int *)(temp_v1 + 0x19fc) == 0) {
      temp_v2 = 6;
    }
    else {
      temp_v2 = 4;
    }
    *(unsigned char *)(temp_v1 + 0x19f9) = temp_v2;
  }
  return *(char *)(temp_v0 + 0x19fa) == '\0';
}
