/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002311a4` (_code @ 0x2311a4, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00233240. */
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
extern int FUN_002bf818(int);


void FUN_002311a4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    FUN_00233240(param_1 + 0x178,0);
    *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffffffd) | 0x1000000;
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  if (temp_v0 == 1) {
    temp_v3 = param_1 + 0x198;
    temp_v0 = FUN_002bf818(temp_v3);
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 8) = 2;
    }
    temp_v1 = FUN_002bed98(temp_v3);
    temp_v2 = FUN_002beda4(temp_v3);
    temp_v4 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x164) = temp_v1;
    *(unsigned int *)(param_1 + 0x168) = temp_v4;
    return;
  }
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfeffffff;
  }
  return;
}
