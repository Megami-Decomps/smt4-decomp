/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030968c` (_code @ 0x30968c, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00248ae8(int);
int FUN_002b7014(void);
int FUN_002b703c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */
extern int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: FUN_00248ae8. */
/* Supplied declaration required: FUN_002b7014. */
/* Supplied declaration required: FUN_002b703c. */


void FUN_0030968c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002b703c();
  temp_v0 = DAT_004729e0;
  *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) =
       *(unsigned int *)(g_titleScene + *(int *)(g_titleScene + 0x128c) * 4 + 0x1294) |
       (param_1 & 0xfffff0ff);
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0107;
  DAT_004729e4 = DAT_004729e4 + 2;
  temp_v1 = (param_1 & 0x70) >> 4;
  if (temp_v1 >= 2) {
    if (temp_v1 == 6 || temp_v1 == 7) {
      temp_v1 = 2;
    }
    else {
      temp_v1 = 3;
    }
  }
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) = temp_v1 << 0x18;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0x80126;
  DAT_004729e4 = DAT_004729e4 + 2;
  FUN_002b7014();
  FUN_00248ae8(1);
  return;
}

} /* extern "C" */
