/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1c34` (_code @ 0x2d1c34, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned char LAB_002d1d6c; /* 0x2d1d6c */
extern unsigned char LAB_002d1d84; /* 0x2d1d84 */
extern int DAT_004474d8; /* 0x4474d8 */

/* Supplied declaration required: FUN_002a14e8. */
/* Supplied declaration required: FUN_002be7fc. */


unsigned int FUN_002d1c34(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned char temp_v2 [128];
  
  temp_v1 = DAT_004474d8;
  temp_v0 = *(short *)(DAT_004474d8 + 0x14);
  if (temp_v0 != 3) {
    if (temp_v0 < 3) {
      if (temp_v0 == 0) {
        return 1;
      }
      if ((temp_v0 != 1) && (temp_v0 == 2)) {
        if (*(int *)(DAT_004474d8 + 0x18) < 1) {
          *(unsigned short *)(DAT_004474d8 + 0x14) = 10;
        }
        else {
          FUN_002be7fc(temp_v2,&LAB_002d1d6c);
          FUN_002a14e8(temp_v2,DAT_004474d8 + 0x28,3,0x80);
          *(short *)(DAT_004474d8 + 0x14) = *(short *)(DAT_004474d8 + 0x14) + 1;
        }
      }
    }
    else if (temp_v0 != 10) {
      if (temp_v0 != 0xb) {
        if (temp_v0 == 99) {
          return 1;
        }
      }
      else if (*(int *)(DAT_004474d8 + 0x20) != 0) {
        *(unsigned int *)(DAT_004474d8 + 0x24) = 4;
        *(unsigned short *)(temp_v1 + 0x14) = 99;
      }
    }
    else {
      FUN_002be7fc(temp_v2,&LAB_002d1d84,(int)*(short *)(DAT_004474d8 + 0x1c),
                   (int)*(short *)(DAT_004474d8 + 0x1c),(int)*(short *)(DAT_004474d8 + 0x1e));
      FUN_002a14e8(temp_v2,DAT_004474d8 + 0x20,3,0x80);
      *(short *)(DAT_004474d8 + 0x14) = *(short *)(DAT_004474d8 + 0x14) + 1;
    }
  }
  else if (*(int *)(DAT_004474d8 + 0x28) != 0) {
    *(unsigned int *)(DAT_004474d8 + 0x24) = 4;
    *(unsigned short *)(temp_v1 + 0x14) = 10;
  }
  return 0;
}
