/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002937c4` (_code @ 0x2937c4, 0x1dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b88c4. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002c4450. */


void FUN_002937c4(void)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  temp_v0 = DAT_0043dcf0;
  temp_v2 = 0;
  if (0 < *(int *)(DAT_0043dcf0 + 0x6b8)) {
    do {
      FUN_002b9008();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v0 + 0x6b8));
  }
  *(unsigned int *)(temp_v0 + 0x6b8) = 0;
  FUN_002c4450(temp_v0 + 0x67c,0x3c,0xffffffff);
  temp_v2 = 0;
  piVar5 = (int *)(temp_v0 + 0x6b8);
  if (*(char *)(temp_v0 + 0x42) == '\0') {
    do {
      temp_v1 = FUN_002b88c4(0x19,temp_v2 + 0x2d);
      temp_v3 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(temp_v0 + temp_v3 + 0x67c) = temp_v1;
      *piVar5 = *(int *)(temp_v0 + 0x6b8) + 1;
    } while (temp_v2 < 4);
    temp_v4 = 0xc;
    if (*(int *)(temp_v0 + 0x2c) != 0) {
      temp_v2 = FUN_002a8a08();
      temp_v4 = *(unsigned char *)(temp_v2 + 0x910b) - 0xc;
    }
    else {
      temp_v2 = FUN_002a8a08();
      if (*(unsigned char *)(temp_v2 + 0x910b) >= 0xc) {
        temp_v2 = 0;
        goto LAB_00293910;
      }
      temp_v2 = FUN_002a8a08();
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x910b);
    }
    temp_v2 = 0;
    if ((int)temp_v4 >= 1) {
LAB_00293910:
      do {
        temp_v1 = FUN_002b88c4(0x19,temp_v2 + 0x31);
        temp_v3 = temp_v2 * 2;
        temp_v2 = temp_v2 + 1;
        *(unsigned short *)(temp_v0 + temp_v3 + 0x684) = temp_v1;
        *piVar5 = *(int *)(temp_v0 + 0x6b8) + 1;
      } while (temp_v2 < (int)temp_v4);
    }
    temp_v1 = FUN_002b88c4(0x19,0x24);
    *(unsigned short *)(temp_v0 + 0x6b4) = temp_v1;
    temp_v1 = FUN_002b88c4(0x19,0x25);
    *(unsigned short *)(temp_v0 + 0x6b6) = temp_v1;
    *piVar5 = *(int *)(temp_v0 + 0x6b8) + 2;
    return;
  }
  do {
    temp_v1 = FUN_002b88c4(0x19,temp_v2 + 0x57);
    temp_v3 = temp_v2 * 2;
    temp_v2 = temp_v2 + 1;
    *(unsigned short *)(temp_v0 + temp_v3 + 0x67c) = temp_v1;
    *piVar5 = *(int *)(temp_v0 + 0x6b8) + 1;
  } while (temp_v2 < 4);
  temp_v3 = 0;
  temp_v2 = FUN_002a8a08();
  if (*(char *)(temp_v2 + 0x910b) != '\0') {
    do {
      temp_v1 = FUN_002b88c4(0x19,temp_v3 + 0x5b);
      temp_v2 = temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      *(unsigned short *)(temp_v0 + temp_v2 + 0x684) = temp_v1;
      *piVar5 = *(int *)(temp_v0 + 0x6b8) + 1;
      temp_v2 = FUN_002a8a08();
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x910b));
  }
  return;
}
