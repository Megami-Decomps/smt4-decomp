/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ee7c8` (_code @ 0x1ee7c8, 0x17c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0029eb58. */
/* Supplied declaration required: FUN_0029edfc. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_0032c4bc. */


void FUN_001ee7c8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar7;
  
  temp_v2 = DAT_0044e190;
  *(unsigned short *)(DAT_0044e190 + 0x2230) = 0;
  *(unsigned short *)(temp_v2 + 0x2232) = 0;
  FUN_002c4b30(temp_v2 + 0xe30,0x1400);
  puVar7 = (unsigned short *)0x0;
  do {
    puVar4 = puVar7;
    FUN_002b9364();
    if ((puVar4 != (unsigned short *)0x0) && ((puVar4[3] & 1) != 0)) {
      if (*(char *)(param_1 + (unsigned int)*puVar4) != '\0') {
        *(unsigned short *)(temp_v2 + *(short *)(temp_v2 + 0x2230) * 4 + 0xe30) = *puVar4;
        temp_v1 = *(unsigned char *)(param_1 + (unsigned int)*puVar4);
        *(unsigned short *)(temp_v2 + *(short *)(temp_v2 + 0x2230) * 4 + 0xe32) = (unsigned short)temp_v1;
        if (temp_v1 != 0) {
          *(short *)(temp_v2 + 0x2232) = *(short *)(temp_v2 + 0x2232) + 1;
        }
        *(short *)(temp_v2 + 0x2230) = *(short *)(temp_v2 + 0x2230) + 1;
      }
    }
    puVar7 = (unsigned short *)(((int)puVar7 + 1U) & 0xffff);
  } while (puVar7 < (unsigned short *)0x500);
  temp_v3 = temp_v2 + 0x223c;
  FUN_0029fae8(temp_v3,(int)*(short *)(temp_v2 + 0x2230),9,4,1,1);
  temp_v4 = (int)*(short *)(temp_v2 + 0x2230);
  if ((temp_v4 >= 1) && ((int)*(short *)(temp_v2 + 0x2234) + *(short *)(temp_v2 + 0x2236) * 4 >= temp_v4)) {
    temp_v0 = (short)((int)((temp_v4 - 1) + ((unsigned int)((temp_v4 - 1) >> 0x1f) >> 0x1e)) >> 2);
    *(short *)(temp_v2 + 0x2236) = temp_v0;
    *(short *)(temp_v2 + 0x2234) = *(short *)(temp_v2 + 0x2230) + (temp_v0 * -4 - 1);
    FUN_0029edfc(temp_v3);
    FUN_0029eb58(temp_v3,(int)*(short *)(temp_v2 + 0x2234));
  }
  else {
    FUN_0029edfc(temp_v3,(int)*(short *)(temp_v2 + 0x2236));
    FUN_0029eb58(temp_v3,(int)*(short *)(temp_v2 + 0x2234));
  }
  FUN_0032c4bc();
  *(unsigned char *)(temp_v2 + 0x410) = 1;
  return;
}
