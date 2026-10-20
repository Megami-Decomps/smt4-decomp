/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114c8e` (_code @ 0x114c8e, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030086c(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int FUN_002eb858(unsigned char *, unsigned int, unsigned short);
/* Supplied declaration required: FUN_0030086c. */
extern int wordRefsEqual_003008f0(int *, unsigned int *);


unsigned int FUN_00114c8e(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6 [2];
  
  temp_v4 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = param_1 + 4;
  FUN_0030086c(temp_v0,param_2);
  temp_v3 = temp_v0;
  temp_v0 = wordRefsEqual_003008f0(&temp_v3,(unsigned int *)&temp_v4);
  if (temp_v0 != 0) {
    temp_v6[0] = *(unsigned int *)(param_1 + 0x14);
    temp_v1 = FUN_002eb858(temp_v2,0,
                         (*(unsigned short *)(param_2 + 6) << 8) | (*(unsigned short *)(param_2 + 6) >> 8));
    param_1 = param_1 + 4;
    FUN_0030086c(param_1,temp_v1);
    temp_v5 = param_1;
    temp_v0 = wordRefsEqual_003008f0(&temp_v5,temp_v6);
    if (temp_v0 != 0) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
