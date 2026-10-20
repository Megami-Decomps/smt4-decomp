/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d64dc` (_code @ 0x3d64dc, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_004342f0; /* 0x4342f0 */
extern unsigned int DAT_00493530; /* 0x493530 */
extern unsigned int DAT_00493534; /* 0x493534 */
extern unsigned int DAT_00493538; /* 0x493538 */
extern unsigned int DAT_0049353c; /* 0x49353c */
extern unsigned int DAT_00493540; /* 0x493540 */
extern unsigned int DAT_00493544; /* 0x493544 */
extern unsigned int DAT_00493548; /* 0x493548 */
extern unsigned int DAT_0049354c; /* 0x49354c */
extern unsigned int DAT_00493550; /* 0x493550 */


void FUN_003d64dc(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  puVar1 = (unsigned int *)(param_1 + 0x5c4);
  if (DAT_004342f0 != 2) {
    if (DAT_004342f0 != 1) {
      *puVar1 = in_s0;
      *(unsigned int *)(param_1 + 0x5c8) = in_s1;
      *(unsigned int *)(param_1 + 0x5cc) = in_s2;
      *(unsigned int *)(param_1 + 0x820) = 0;
      *(unsigned int *)(param_1 + 0x81c) = 0;
      *(unsigned int *)(param_1 + 0x818) = 0;
    }
    else {
      DAT_00493530 = *(unsigned int *)(param_1 + 0x818);
      DAT_00493534 = *(unsigned int *)(param_1 + 0x81c);
      DAT_00493538 = *(unsigned int *)(param_1 + 0x820);
      *puVar1 = in_s0;
      *(unsigned int *)(param_1 + 0x5c8) = in_s1;
      *(unsigned int *)(param_1 + 0x5cc) = in_s2;
      DAT_00493544 = DAT_00493538;
      DAT_0049353c = DAT_00493530;
      DAT_00493540 = DAT_00493534;
      *(unsigned int *)(param_1 + 0x820) = 0;
      *(unsigned int *)(param_1 + 0x81c) = 0;
      *(unsigned int *)(param_1 + 0x818) = 0;
      *(unsigned int *)(param_1 + 0x5f0) = *(unsigned int *)(param_1 + 0x7e8);
      *(unsigned int *)(param_1 + 0x5f4) = *(unsigned int *)(param_1 + 0x7ec);
      *(unsigned int *)(param_1 + 0x5f8) = *(unsigned int *)(param_1 + 0x7f0);
      *(unsigned int *)(param_1 + 0x844) = param_3;
      *(unsigned int *)(param_1 + 0x83c) = param_2;
      *(unsigned int *)(param_1 + 0x840) = 0;
      *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x634) | 0x2000;
    }
  }
  else {
    DAT_00493548 = *(unsigned int *)(param_1 + 0x68);
    DAT_0049354c = *(unsigned int *)(param_1 + 0x6c);
    DAT_00493550 = *(unsigned int *)(param_1 + 0x70);
    DAT_00493530 = *(unsigned int *)(param_1 + 0x818);
    DAT_00493534 = *(unsigned int *)(param_1 + 0x81c);
    DAT_00493538 = *(unsigned int *)(param_1 + 0x820);
    *puVar1 = in_s0;
    *(unsigned int *)(param_1 + 0x5c8) = in_s1;
    *(unsigned int *)(param_1 + 0x5cc) = in_s2;
    *(unsigned int *)(param_1 + 0x5f0) = *(unsigned int *)(param_1 + 0x7e8);
    *(unsigned int *)(param_1 + 0x5f4) = *(unsigned int *)(param_1 + 0x7ec);
    *(unsigned int *)(param_1 + 0x5f8) = *(unsigned int *)(param_1 + 0x7f0);
  }
  *(unsigned int *)(param_1 + 0x844) = param_3;
  *(unsigned int *)(param_1 + 0x83c) = param_2;
  *(unsigned int *)(param_1 + 0x840) = 0;
  *(unsigned int *)(param_1 + 0x634) = *(unsigned int *)(param_1 + 0x634) | 0x2000;
  return;
}

} /* extern "C" */
