/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1738` (_code @ 0x2a1738, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00588fcc; /* 0x588fcc */
extern unsigned char DAT_0061978c; /* 0x61978c */
extern unsigned char DAT_00619970; /* 0x619970 */
extern unsigned char DAT_00619971; /* 0x619971 */

/* Supplied declaration required: FUN_001628c0. */
extern int FUN_002deb84(void);


unsigned int FUN_002a1738(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned char temp_v1;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    if (DAT_00588fcc >= 4) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)(&DAT_0061978c + DAT_00588fcc * 0x78);
    }
    if (*pcVar2 == '\x02') {
      return 1;
    }
  }
  else {
    if (param_1 == 1) {
      temp_v1 = DAT_00619970 | 4;
    }
    else {
      temp_v1 = DAT_00619970;
      if (param_1 == 2) {
        temp_v1 = 5;
      }
    }
    FUN_001628c0(param_2,DAT_00619971,temp_v1,1);
    DAT_00588fcc = param_2;
    if (param_2 == 0xffffffff) {
      return 1;
    }
  }
  return 0;
}
