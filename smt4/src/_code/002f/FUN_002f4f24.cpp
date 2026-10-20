/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4f24` (_code @ 0x2f4f24, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bfc24(int, unsigned int, int, int);

extern unsigned int DAT_0044e128; /* 0x44e128 */
extern unsigned char DAT_004c5634; /* 0x4c5634 */
extern int DAT_004c5814; /* 0x4c5814 */
extern unsigned char DAT_004c5818; /* 0x4c5818 */

extern unsigned int FUN_00100bd4(int);
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_002bfc24. */


unsigned int FUN_002f4f24(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = scrGetCommandFrame();
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
    temp_v3 = DAT_004c5818 | 4;
    temp_v1 = FUN_00100bd4(temp_v0);
    temp_v2 = 1;
    FUN_002bfc24(1,temp_v1,*(unsigned short *)(temp_v0 + 10) & 0xff,temp_v3);
    DAT_0044e128 = temp_v2;
    if (temp_v2 != 0xffffffff) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
