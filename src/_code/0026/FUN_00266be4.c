/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00266be4` (_code @ 0x266be4, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_004e2f68; /* 0x4e2f68 */
extern unsigned int DAT_004e312c; /* 0x4e312c */
extern signed char DAT_004e3134; /* 0x4e3134 */


unsigned int FUN_00266be4(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((DAT_004e3134 != '\0') && (param_1 < 0x10)) {
    temp_v0 = 1 << (param_1 & 0xff);
    if (*(int *)(&DAT_004e2f68 + param_1 * 4) == 0) {
      DAT_004e312c = DAT_004e312c & ~temp_v0;
    }
    if ((temp_v0 & DAT_004e312c) != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
