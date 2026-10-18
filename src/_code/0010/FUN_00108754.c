/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108754` (_code @ 0x108754, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

extern unsigned char FUN_002bfadc(unsigned int, unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c39a4. */


char FUN_00108754(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = FUN_002c08f0();
  *(unsigned char *)(temp_v2 + 0xee5) = 0;
  temp_v3 = *(char *)(temp_v2 + 0xedc) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v2 + 0xedd);
  }
  if ((temp_v3 && temp_v0 != '\0') && (temp_v0 = '\0', *(int *)(temp_v2 + 0xfdc) != 0)) {
    if ((*(char *)(temp_v2 + 0xfd8) == '\0') && (*(char *)(temp_v2 + 0xf28) == '\0')) {
      FUN_002c39a4(DAT_0044ea00);
      *(unsigned int *)(*(int *)(temp_v2 + 0xf20) + 0x14) = 0x200;
      *(unsigned int *)(*(int *)(temp_v2 + 0xf20) + 0x18) = 0x200;
      temp_v1 = FUN_002bfadc(0,*(unsigned int *)(temp_v2 + 0xf20));
      *(unsigned char *)(temp_v2 + 0xee4) = temp_v1;
      *(unsigned char *)(temp_v2 + 0xee5) = 1;
      return '\0';
    }
    temp_v0 = '\0';
  }
  return temp_v0;
}
