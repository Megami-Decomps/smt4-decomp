/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f1b2c` (_code @ 0x4f1b2c, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

extern int DAT_00571530; /* 0x571530 */
extern unsigned int g_cameraAlternateProgressStart; /* 0x5e1530 */
extern unsigned int DAT_005e1534; /* 0x5e1534 */
extern unsigned int DAT_005e1538; /* 0x5e1538 */
extern unsigned int g_cameraAlternateProgressPrevious; /* 0x5e153c */
extern unsigned int DAT_005e1540; /* 0x5e1540 */
extern unsigned int DAT_005e1544; /* 0x5e1544 */
extern unsigned int g_cameraUnoffsetStartPosition; /* 0x5e1548 */
extern unsigned int DAT_005e154c; /* 0x5e154c */
extern unsigned int DAT_005e1550; /* 0x5e1550 */


void FUN_004f1b2c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  puVar1 = (unsigned int *)(param_1 + 0x5dc);
  if (DAT_00571530 != 2) {
    if (DAT_00571530 != 1) {
      *puVar1 = in_s0;
      *(unsigned int *)(param_1 + 0x5e0) = in_s1;
      *(unsigned int *)(param_1 + 0x5e4) = in_s2;
      *(unsigned int *)(param_1 + 0x88c) = 0;
      *(unsigned int *)(param_1 + 0x888) = 0;
      *(unsigned int *)(param_1 + 0x884) = 0;
    }
    else {
      g_cameraAlternateProgressStart = *(unsigned int *)(param_1 + 0x884);
      DAT_005e1534 = *(unsigned int *)(param_1 + 0x888);
      DAT_005e1538 = *(unsigned int *)(param_1 + 0x88c);
      *puVar1 = in_s0;
      *(unsigned int *)(param_1 + 0x5e0) = in_s1;
      *(unsigned int *)(param_1 + 0x5e4) = in_s2;
      DAT_005e1544 = DAT_005e1538;
      g_cameraAlternateProgressPrevious = g_cameraAlternateProgressStart;
      DAT_005e1540 = DAT_005e1534;
      *(unsigned int *)(param_1 + 0x88c) = 0;
      *(unsigned int *)(param_1 + 0x888) = 0;
      *(unsigned int *)(param_1 + 0x884) = 0;
      *(unsigned int *)(param_1 + 0x608) = *(unsigned int *)(param_1 + 0x854);
      *(unsigned int *)(param_1 + 0x60c) = *(unsigned int *)(param_1 + 0x858);
      *(unsigned int *)(param_1 + 0x610) = *(unsigned int *)(param_1 + 0x85c);
      *(unsigned int *)(param_1 + 0x8b0) = param_3;
      *(unsigned int *)(param_1 + 0x8a8) = param_2;
      *(unsigned int *)(param_1 + 0x8ac) = 0;
      *(unsigned int *)(param_1 + 0x64c) = *(unsigned int *)(param_1 + 0x64c) | 0x2000;
    }
  }
  else {
    g_cameraUnoffsetStartPosition = *(unsigned int *)(param_1 + 0x7c);
    DAT_005e154c = *(unsigned int *)(param_1 + 0x80);
    DAT_005e1550 = *(unsigned int *)(param_1 + 0x84);
    g_cameraAlternateProgressStart = *(unsigned int *)(param_1 + 0x884);
    DAT_005e1534 = *(unsigned int *)(param_1 + 0x888);
    DAT_005e1538 = *(unsigned int *)(param_1 + 0x88c);
    *puVar1 = in_s0;
    *(unsigned int *)(param_1 + 0x5e0) = in_s1;
    *(unsigned int *)(param_1 + 0x5e4) = in_s2;
    *(unsigned int *)(param_1 + 0x608) = *(unsigned int *)(param_1 + 0x854);
    *(unsigned int *)(param_1 + 0x60c) = *(unsigned int *)(param_1 + 0x858);
    *(unsigned int *)(param_1 + 0x610) = *(unsigned int *)(param_1 + 0x85c);
  }
  *(unsigned int *)(param_1 + 0x8b0) = param_3;
  *(unsigned int *)(param_1 + 0x8a8) = param_2;
  *(unsigned int *)(param_1 + 0x8ac) = 0;
  *(unsigned int *)(param_1 + 0x64c) = *(unsigned int *)(param_1 + 0x64c) | 0x2000;
  return;
}

} /* extern "C" */
