/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6c24` (_code @ 0x2f6c24, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027e928(unsigned int);
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_002f6c24(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  char temp_v4;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_0027e928(DAT_0043427c);
  *(unsigned short *)(*(int *)(temp_v2 + 0x28) + 0x14c) = 0xc;
  temp_v2 = FUN_002939f4();
  *(int *)(temp_v2 + 0x1fd4) = (int)(temp_v0 | 0x20000) >> 0x1f;
  *(unsigned int *)(temp_v2 + 0x1fd0) = temp_v0 | 0x20000;
  temp_v2 = FUN_002939f4();
  *(int *)(temp_v2 + 0x1fdc) = (int)(temp_v1 | 0x40000) >> 0x1f;
  temp_v4 = '\0';
  temp_v3 = 4;
  *(unsigned int *)(temp_v2 + 0x1fd8) = temp_v1 | 0x40000;
  do {
    temp_v2 = FUN_002939f4();
    temp_v0 = *(unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v3 * 0x288);
    if ((temp_v0 & 1) == 0 && (temp_v0 & 0x40) == 0) {
      temp_v2 = FUN_0027e928(DAT_0043427c);
      temp_v4 = temp_v4 + '\x01';
      *(char *)(temp_v2 + temp_v3 + 0x38) = (char)temp_v3;
      if ('\x01' < temp_v4) {
        return 1;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x36);
  return 1;
}
