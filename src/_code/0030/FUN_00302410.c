/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00302410` (_code @ 0x302410, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_002c32a0(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);


void FUN_00302410(int param_1)

{
/* irregular: irregular input(s): in_s0 */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_s0;
  
  temp_v3 = *(int *)(param_1 + 0xc0);
  temp_v0 = FUN_002c32a0(0x10000,0x100,0,temp_v3 * 0x34,0x10,1);
  if (0 < temp_v3) {
    in_s0 = 0x408487ee;
  }
  temp_v1 = 0;
  if (0 < temp_v3) {
    do {
      temp_v2 = temp_v1 + 1;
      *(unsigned int *)(temp_v0 + temp_v1 * 0x34 + 4) = in_s0;
      temp_v1 = temp_v2;
    } while (temp_v2 < temp_v3);
  }
  return;
}
