/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6db4` (_code @ 0x3f6db4, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern unsigned char DAT_004d43e0; /* 0x4d43e0 */


unsigned int FUN_003f6db4(int param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v3 = 0;
  temp_v2 = 0;
  temp_v4 = 0;
  do {
    temp_v5 = (unsigned int)*(char *)(param_1 + temp_v4);
    if (temp_v5 == 0x3a) goto LAB_003f6df8;
    temp_v1 = temp_v3 >> 0x18;
    temp_v4 = temp_v4 + 1;
    temp_v3 = temp_v5 | (temp_v3 << 8);
    temp_v2 = temp_v1 | (temp_v2 << 8) | ((int)temp_v5 >> 0x1f);
  } while (temp_v4 < 8);
  temp_v3 = 0;
  temp_v2 = 0;
LAB_003f6df8:
  if (temp_v3 != 0 || temp_v2 != 0) {
    temp_v4 = 0;
    do {
      temp_v0 = temp_v4 * 0x10;
      if (temp_v2 == *(unsigned int *)(temp_v0 + 0x4d43e4) && temp_v3 == *(unsigned int *)(&DAT_004d43e0 + temp_v0)) {
        puVar3 = &DAT_004d43e0 + temp_v4 * 0x10;
        if (puVar3 == (unsigned char *)0x0) {
          return 0;
        }
        return *(unsigned int *)(puVar3 + 8);
      }
      if (*(unsigned int *)(temp_v0 + 0x4d43f4) == temp_v2 && temp_v3 == *(unsigned int *)(temp_v0 + 0x4d43f0)) {
        puVar3 = (unsigned char *)(temp_v4 * 0x10 + 0x4d43f0);
        if (puVar3 == (unsigned char *)0x0) {
          return 0;
        }
        return *(unsigned int *)(puVar3 + 8);
      }
      temp_v4 = temp_v4 + 2;
    } while (temp_v4 < 0x20);
  }
  return 0;
}

} /* extern "C" */
