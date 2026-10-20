/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262f94` (_code @ 0x262f94, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0043e2ac; /* 0x43e2ac */


int FUN_00262f94(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v2 = DAT_0043e2ac + 0x8c;
  if ((int)*(short *)(DAT_0043e2ac + 0x24bac) != 0) {
    temp_v0 = 0;
    while ((temp_v1 = (int)*(char *)(temp_v2 + temp_v0 + 0x90f0), temp_v1 < 0 ||
           ((unsigned int)*(unsigned short *)(temp_v2 + temp_v1 * 0x604 + 0xd6) !=
            (int)*(short *)(DAT_0043e2ac + 0x24bac)))) {
      temp_v0 = temp_v0 + 1;
      if (temp_v0 >= 0x18) {
        return 0;
      }
    }
    temp_v0 = temp_v2 + *(char *)(temp_v2 + temp_v0 + 0x90f0) * 0x604 + 0x90;
  }
  return temp_v0;
}

} /* extern "C" */
