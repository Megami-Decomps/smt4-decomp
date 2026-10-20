/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d130c` (_code @ 0x4d130c, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00571660; /* 0x571660 */
extern unsigned int DAT_00571664; /* 0x571664 */
extern unsigned int DAT_00571678; /* 0x571678 */
extern unsigned int DAT_0057167c; /* 0x57167c */
extern unsigned int DAT_00571680; /* 0x571680 */
extern unsigned int DAT_00571684; /* 0x571684 */
extern unsigned int DAT_005716a0; /* 0x5716a0 */
extern unsigned int DAT_005716a4; /* 0x5716a4 */
extern unsigned int DAT_005716c8; /* 0x5716c8 */
extern unsigned int DAT_005716cc; /* 0x5716cc */
extern unsigned int DAT_005716f0; /* 0x5716f0 */
extern unsigned int DAT_005716f4; /* 0x5716f4 */
extern unsigned int DAT_00571708; /* 0x571708 */
extern unsigned int DAT_0057170c; /* 0x57170c */
extern unsigned int DAT_00571718; /* 0x571718 */
extern unsigned int DAT_0057171c; /* 0x57171c */
extern unsigned int DAT_00571720; /* 0x571720 */
extern unsigned int DAT_00571724; /* 0x571724 */


void FUN_004d130c(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_2 + 0x45a8);
  temp_v0 = *puVar3;
  temp_v1 = *(unsigned int *)(param_2 + 0x45ac);
  if (!((DAT_005716cc & temp_v1) == 0 && (DAT_005716c8 & temp_v0) == 0)) {
    temp_v0 = ~DAT_00571718 &
            (temp_v0 | DAT_00571660 | DAT_00571680 | DAT_005716f0 | DAT_00571708 | DAT_005716a0);
    temp_v1 = (DAT_0057170c | temp_v1 | DAT_00571664 | DAT_00571684 | DAT_005716f4 | DAT_005716a4) &
            ~DAT_0057171c;
  }
  else {
    if ((DAT_00571720 & temp_v0) != 0 || (DAT_00571724 & temp_v1) != 0) {
      temp_v1 = temp_v1 | DAT_00571664 | DAT_00571684 | DAT_005716f4 | DAT_0057170c | DAT_005716a4 |
              DAT_0057171c;
      *puVar3 = temp_v0 | DAT_00571660 | DAT_00571680 | DAT_005716f0 | DAT_00571708 | DAT_005716a0 |
                DAT_00571718;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v1;
      return;
    }
    temp_v0 = ((temp_v0 & ~DAT_00571660) | DAT_00571678) & ~DAT_00571680 & ~DAT_005716f0 & ~DAT_00571708
            & ~DAT_00571718;
    temp_v1 = ((temp_v1 & ~DAT_00571664) | DAT_0057167c) & ~DAT_00571684 & ~DAT_005716f4 & ~DAT_0057170c
            & ~DAT_0057171c;
  }
  *puVar3 = temp_v0;
  *(unsigned int *)(param_2 + 0x45ac) = temp_v1;
  return;
}

} /* extern "C" */
