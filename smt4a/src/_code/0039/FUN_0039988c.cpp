/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039988c` (_code @ 0x39988c, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001664bc(void);
int FUN_00167ba0(void);
int FUN_003c8538(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */
extern int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: FUN_001664bc. */
/* Supplied declaration required: FUN_00167ba0. */
/* Supplied declaration required: FUN_003c8538. */


void FUN_0039988c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_00167ba0();
  temp_v0 = DAT_005b3fe4;
  *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) =
       *(unsigned int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1298) * 4 + 0x12a0) |
       (param_1 & 0xfffff0ff);
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0107;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  temp_v1 = (param_1 & 0x70) >> 4;
  if (temp_v1 >= 2) {
    if (temp_v1 == 6 || temp_v1 == 7) {
      temp_v1 = 2;
    }
    else {
      temp_v1 = 3;
    }
  }
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) = temp_v1 << 0x18;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0x80126;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  FUN_001664bc();
  FUN_003c8538(1);
  return;
}

} /* extern "C" */
