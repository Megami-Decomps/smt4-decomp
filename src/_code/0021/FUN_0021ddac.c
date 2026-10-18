/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ddac` (_code @ 0x21ddac, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_00447a2c; /* 0x447a2c */


void FUN_0021ddac(int param_1,unsigned short param_2,unsigned short param_3)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (0 < DAT_00447a2c) {
    while (*(int *)(temp_v0 * 0x178 + 0x4a1390) != param_1) {
      temp_v0 = temp_v0 + 1;
      if (DAT_00447a2c <= temp_v0) {
        return;
      }
    }
    *(unsigned short *)(temp_v0 * 0x178 + 0x4a13ca) = param_2;
    *(unsigned short *)(temp_v0 * 0x178 + 0x4a13cc) = param_3;
  }
  return;
}
