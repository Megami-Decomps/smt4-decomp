/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001087f4` (_code @ 0x1087f4, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bfadc. */
extern int FUN_002bff10(void);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c39a4. */


int FUN_001087f4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = FUN_002c08f0();
  *(unsigned char *)(temp_v1 + 0xee6) = 0;
  temp_v2 = FUN_002bff10();
  if ((temp_v2 == 0) && (*(char *)(temp_v1 + 0xedc) != '\0')) {
    temp_v4 = *(char *)(temp_v1 + 0xedd) == '\0';
    temp_v2 = 0;
    if (!temp_v4) {
      temp_v2 = *(int *)(temp_v1 + 0xfdc);
    }
    if (temp_v4 || temp_v2 == 0) {
      return temp_v2;
    }
    temp_v3 = temp_v1 + 0xf00;
    temp_v4 = *(char *)(temp_v1 + 0xfd8) == '\0';
    if (temp_v4) {
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0xf28);
    }
    if (temp_v4 && temp_v3 == 0) {
      FUN_002c39a4(DAT_0044ea00);
      temp_v0 = 0;
      *(unsigned int *)(*(int *)(temp_v1 + 0xf24) + 0x14) = 0x200;
      *(unsigned int *)(*(int *)(temp_v1 + 0xf24) + 0x18) = 0x200;
      FUN_002bfadc(0,*(unsigned int *)(temp_v1 + 0xf24));
      *(unsigned char *)(temp_v1 + 0xee4) = temp_v0;
      *(unsigned char *)(temp_v1 + 0xee6) = 1;
      return 0;
    }
  }
  return 0;
}
