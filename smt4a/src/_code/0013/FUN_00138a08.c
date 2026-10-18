/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138a08` (_code @ 0x138a08, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int DAT_00640118; /* 0x640118 */
extern int DAT_0064011c; /* 0x64011c */


void FUN_00138a08(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = DAT_0064011c;
  temp_v0 = DAT_00640118;
  temp_v3 = 0;
  if (0 < DAT_0064011c) {
    do {
      for (temp_v2 = *(int *)(temp_v0 + temp_v3 * 8); temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 0x4c)) {
        if ((*(unsigned int *)(temp_v2 + 0x1c) & 0x80000) != 0) {
          *(unsigned int *)(temp_v2 + 0x1c) = *(unsigned int *)(temp_v2 + 0x1c) | 0x200000;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v1);
    return;
  }
  return;
}
