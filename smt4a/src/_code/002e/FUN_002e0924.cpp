/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0924` (_code @ 0x2e0924, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0032c810(unsigned int, unsigned int);

/* stack frame of param_4: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

/* Supplied declaration required: FUN_0032c810. */


void FUN_002e0924(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [7];
  
  temp_v1[0] = param_1;
  temp_v1[1] = param_2;
  temp_v1[2] = param_3;
  temp_v1[3] = param_4;
  temp_v1[4] = param_1;
  temp_v0 = 0;
  do {
    FUN_0032c810(temp_v1[temp_v0],temp_v1[temp_v0 + 1]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  return;
}

} /* extern "C" */
