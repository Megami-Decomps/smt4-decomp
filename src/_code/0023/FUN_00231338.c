/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231338` (_code @ 0x231338, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002333d4. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);
extern int FUN_002bf9f0(int);


void FUN_00231338(int param_1)

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
    FUN_002333d4(param_1 + 0x178,0);
    *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffffffd) | 0x1000000;
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  if (temp_v0 == 1) {
    temp_v3 = param_1 + 0x198;
    temp_v0 = FUN_002bf9f0(temp_v3);
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 8) = 2;
    }
    temp_v1 = FUN_002bef70(temp_v3);
    temp_v2 = FUN_002bef7c(temp_v3);
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
