/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031297c` (_code @ 0x31297c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0058103c; /* 0x58103c */


void FUN_0031297c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = DAT_0058103c;
  temp_v3 = 0;
  temp_v4 = 0x80;
  *(unsigned char *)(DAT_0058103c + 0x1c) = 0;
  do {
    temp_v2 = temp_v0 + temp_v3 * 0x194;
    temp_v5 = *(char *)(temp_v2 + 0x1dc) != '\0';
    temp_v1 = 0;
    if (temp_v5) {
      temp_v1 = *(int *)(temp_v2 + 0x1f0);
    }
    if ((((temp_v5 && temp_v1 != 0x1d) && (temp_v1 != 0x31 && temp_v1 != 0x1e)) &&
        (temp_v1 != 0x1f && temp_v1 != 0x30)) &&
       (((temp_v1 != 0x22 && temp_v1 != 0x23 && (temp_v1 != 0x25 && temp_v1 != 0x28)) &&
        ((temp_v1 = *(int *)(temp_v2 + 0x1e0), temp_v1 == 8 || temp_v1 == 10 ||
         ((temp_v1 == 0xc || temp_v1 == 0xe) || temp_v1 == 0x10)))))) {
      *(unsigned int *)(temp_v2 + 0x1e0) = 6;
      *(unsigned int *)(temp_v2 + 0x1e4) = 1;
    }
    temp_v4 = temp_v4 - 1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v4 != 0);
  return;
}

} /* extern "C" */
