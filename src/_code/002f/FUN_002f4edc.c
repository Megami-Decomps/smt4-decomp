/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4edc` (_code @ 0x2f4edc, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044e128; /* 0x44e128 */
extern unsigned char DAT_004c5634; /* 0x4c5634 */
extern int DAT_004c5814; /* 0x4c5814 */
extern unsigned char DAT_004c5818; /* 0x4c5818 */

extern unsigned int FUN_00100bd4(int);
extern int FUN_00289640(void);
extern unsigned int FUN_002bfdfc(unsigned int, unsigned int, unsigned short, unsigned char);


unsigned int FUN_002f4edc(unsigned int param_1)

{
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 != 0) {
    if (DAT_0044e128 >= 4) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)(&DAT_004c5634 + DAT_0044e128 * 0x78);
    }
    if (*pcVar2 != '\x02') {
      return 0;
    }
  }
  else if (((param_1 < 0x10) && (DAT_004c5814 != 0)) &&
          (temp_v0 = DAT_004c5814 + param_1 * 0xc, temp_v0 != 0)) {
    temp_v2 = DAT_004c5818 | 4;
    temp_v1 = FUN_00100bd4(temp_v0);
    DAT_0044e128 = FUN_002bfdfc(1,temp_v1,*(unsigned short *)(temp_v0 + 10) & 0xff,temp_v2);
    if (DAT_0044e128 != 0xffffffff) {
      return 0;
    }
  }
  return 1;
}
