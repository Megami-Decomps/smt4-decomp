/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125f7c` (_code @ 0x125f7c, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern unsigned char DAT_004c5634; /* 0x4c5634 */


unsigned int FUN_00125f7c(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  
  temp_v0 = 0;
  temp_v1 = 0;
  do {
    if (temp_v1 >= 4) {
      puVar3 = (unsigned char *)0x0;
    }
    else {
      puVar3 = &DAT_004c5634 + temp_v1 * 0x78;
    }
    if ((puVar3[0x76] != '\0') && ((puVar3[0x74] & 4) == 0)) {
      temp_v0 = 1;
      puVar3[0x76] = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 4);
  return temp_v0;
}
