/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021dfbc` (_code @ 0x21dfbc, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447a78; /* 0x447a78 */


void FUN_0021dfbc(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = DAT_00447a78;
  temp_v3 = 0;
  temp_v4 = 0x80;
  *(unsigned char *)(DAT_00447a78 + 0x17) = 0;
  do {
    temp_v1 = temp_v0 + temp_v3 * 0x194;
    temp_v5 = *(char *)(temp_v1 + 0x1d0) != '\0';
    temp_v2 = 0;
    if (temp_v5) {
      temp_v2 = *(int *)(temp_v1 + 0x1e4);
    }
    if ((((temp_v5 && temp_v2 != 0x1d) && (temp_v2 != 0x26 && temp_v2 != 0x1e)) &&
        (temp_v2 != 0x1f && temp_v2 != 0x25)) &&
       ((temp_v2 = *(int *)(temp_v1 + 0x1d4), temp_v2 == 8 || temp_v2 == 10 ||
        ((temp_v2 == 0xc || temp_v2 == 0xe) || temp_v2 == 0x10)))) {
      *(unsigned int *)(temp_v1 + 0x1d4) = 6;
      *(unsigned int *)(temp_v1 + 0x1d8) = 1;
    }
    temp_v4 = temp_v4 - 1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v4 != 0);
  return;
}
