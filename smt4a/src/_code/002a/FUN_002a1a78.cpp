/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1a78` (_code @ 0x2a1a78, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int DAT_00640118; /* 0x640118 */


unsigned char FUN_002a1a78(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(DAT_00640118 + (param_1 >> 0x14) * 8);
  temp_v1 = temp_v0;
  while( 1 ) {
    if (temp_v1 == 0) {
      return 0;
    }
    if (*(unsigned int *)(temp_v1 + 0x28) == param_1) break;
    temp_v1 = *(int *)(temp_v1 + 0x4c);
  }
  for (; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x4c)) {
    if (*(unsigned int *)(temp_v0 + 0x24) == (param_1 & 0xfffff)) {
      if (*(unsigned char *)(temp_v0 + 0x98) >= 6) {
        return 0;
      }
      return *(unsigned char *)(temp_v0 + 0x98);
    }
  }
  temp_v0 = 0;
  if (*(unsigned char *)(temp_v0 + 0x98) >= 6) {
    return 0;
  }
  return *(unsigned char *)(temp_v0 + 0x98);
}

} /* extern "C" */
