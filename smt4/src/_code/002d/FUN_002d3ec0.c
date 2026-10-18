/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d3ec0` (_code @ 0x2d3ec0, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e58; /* 0x447e58 */

/* Supplied declaration required: FUN_00152bec. */
extern int FUN_001e34fc(int, int, unsigned int);
/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002e00e0. */
extern int FUN_00316d64(int, int);


unsigned int FUN_002d3ec0(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  short temp_v2;
  int unaff_r4;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v2 = *(short *)(DAT_00447e58 + 0xe3e);
  if (temp_v2 == 0) {
    temp_v3 = 0;
    do {
      temp_v4 = DAT_00447e58 + temp_v3 * 0x38;
      if (((*(char *)(temp_v4 + 0xc) != '\0') &&
          (temp_v1 = FUN_00316d64((int)*(short *)(temp_v4 + 0x34),(int)*(short *)(temp_v4 + 0x36)),
          temp_v1 == 0)) && (*(int *)(temp_v4 + 0x3c) != 0)) {
        FUN_00152bec();
        *(unsigned char *)(temp_v4 + 0xf) = 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x40);
  }
  else {
    if (temp_v2 != 1) {
      if (temp_v2 != 2) {
        return 0;
      }
      temp_v3 = FUN_001e34fc((int)*(short *)(DAT_00447e58 + 0xe42),
                           (int)*(short *)(DAT_00447e58 + 0xe44),1);
      if (temp_v3 == 0) {
        return 0;
      }
      return 1;
    }
    temp_v2 = *(short *)(DAT_00447e58 + 0xe40) + 1;
    if (temp_v2 >= 2) {
      unaff_r4 = 0;
    }
    *(short *)(DAT_00447e58 + 0xe40) = temp_v2;
    if (temp_v2 < 2) {
      return 0;
    }
    do {
      temp_v3 = DAT_00447e58 + unaff_r4 * 0x38;
      temp_v5 = *(char *)(temp_v3 + 0xc) != '\0';
      temp_v0 = '\0';
      if (temp_v5) {
        temp_v0 = *(char *)(temp_v3 + 0xf);
      }
      if (temp_v5 && temp_v0 != '\0') {
        if (*(int *)(temp_v3 + 0x3c) != 0) {
          FUN_002a775c();
          *(unsigned int *)(temp_v3 + 0x3c) = 0;
        }
        if (*(int *)(temp_v3 + 0x38) != 0) {
          FUN_002e00e0();
          *(unsigned int *)(temp_v3 + 0x38) = 0;
        }
        *(char *)(temp_v3 + 0xc) = '\0';
        *(unsigned char *)(temp_v3 + 0xf) = 0;
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < 0x40);
  }
  temp_v3 = DAT_00447e58;
  *(short *)(DAT_00447e58 + 0xe3e) = *(short *)(DAT_00447e58 + 0xe3e) + 1;
  *(unsigned short *)(temp_v3 + 0xe40) = 0;
  return 0;
}
