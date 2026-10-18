/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010821c` (_code @ 0x10821c, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00117da4. */
extern int FUN_002bff10(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c39a4. */


int FUN_0010821c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002c08f0();
  temp_v1 = FUN_002bff10(0);
  if (((temp_v1 == 0) && (*(char *)(temp_v0 + 0xedc) != '\0')) && (*(char *)(temp_v0 + 0xedd) != '\0')) {
    temp_v2 = *(char *)(temp_v0 + 0xee6) == '\0';
    temp_v1 = 0;
    if (!temp_v2) {
      temp_v1 = *(int *)(temp_v0 + 0xfdc);
    }
    if (temp_v2 || temp_v1 == 0) {
      return temp_v1;
    }
    if (*(char *)(temp_v0 + 0xfd8) == '\0') {
      FUN_002c39a4(DAT_0044ea00);
      FUN_00117da4(0);
      return 0;
    }
  }
  return 0;
}
