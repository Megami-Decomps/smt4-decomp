/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5c40` (_code @ 0x2b5c40, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_004d43e0; /* 0x4d43e0 */


unsigned int FUN_002b5c40(int param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  do {
    temp_v2 = *(short *)(param_1 + temp_v5 * 2);
    if (temp_v2 == 0x3a) goto LAB_002b5c8c;
    temp_v1 = temp_v3 >> 0x18;
    temp_v6 = (unsigned int)(char)temp_v2;
    temp_v5 = temp_v5 + 1;
    temp_v3 = temp_v6 | (temp_v3 << 8);
    temp_v4 = temp_v1 | (temp_v4 << 8) | ((int)temp_v6 >> 0x1f);
  } while (temp_v5 < 8);
  temp_v3 = 0;
  temp_v4 = 0;
LAB_002b5c8c:
  if (temp_v3 != 0 || temp_v4 != 0) {
    temp_v5 = 0;
    do {
      temp_v0 = temp_v5 * 0x10;
      if (*(unsigned int *)(&DAT_004d43e0 + temp_v0) == temp_v3 && *(unsigned int *)(temp_v0 + 0x4d43e4) == temp_v4) {
        puVar4 = &DAT_004d43e0 + temp_v5 * 0x10;
        if (puVar4 == (unsigned char *)0x0) {
          return 0;
        }
        return *(unsigned int *)(puVar4 + 8);
      }
      if (*(unsigned int *)(temp_v0 + 0x4d43f4) == temp_v4 && *(unsigned int *)(temp_v0 + 0x4d43f0) == temp_v3) {
        puVar4 = (unsigned char *)(temp_v5 * 0x10 + 0x4d43f0);
        if (puVar4 == (unsigned char *)0x0) {
          return 0;
        }
        return *(unsigned int *)(puVar4 + 8);
      }
      temp_v5 = temp_v5 + 2;
    } while (temp_v5 < 0x20);
  }
  return 0;
}
