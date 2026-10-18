/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108798` (_code @ 0x108798, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

extern unsigned char FUN_002bfcb4(unsigned int, unsigned int);
extern int FUN_002c00e8(void);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c3ba8. */


int FUN_00108798(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = FUN_002c0ac8();
  *(unsigned char *)(temp_v1 + 0xee6) = 0;
  temp_v2 = FUN_002c00e8();
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
      FUN_002c3ba8(DAT_0044ea00);
      *(unsigned int *)(*(int *)(temp_v1 + 0xf24) + 0x14) = 0x200;
      *(unsigned int *)(*(int *)(temp_v1 + 0xf24) + 0x18) = 0x200;
      temp_v0 = FUN_002bfcb4(0,*(unsigned int *)(temp_v1 + 0xf24));
      *(unsigned char *)(temp_v1 + 0xee4) = temp_v0;
      *(unsigned char *)(temp_v1 + 0xee6) = 1;
      return 0;
    }
  }
  return 0;
}
