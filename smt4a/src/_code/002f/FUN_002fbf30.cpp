/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbf30` (_code @ 0x2fbf30, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int FUN_00307604(int, int, int, int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int *_ZSt3maxIjERKT_S2_S2_(unsigned int *, unsigned int *);
extern int rt_malloc(int);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00307604. */
extern unsigned int bufGrowCapacity(int, int *);


/* WARNING: Removing unreachable block (ram,0x002fbf42) */

unsigned long long FUN_002fbf30(int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_1c;
  int *piStack_18;
  unsigned int temp_v4;
  
  if ((unsigned int)(param_1[2] - *param_1) < param_2) {
    piStack_18 = param_1;
    temp_v4 = param_2;
    temp_v3 = bufGrowCapacity(param_1[1] - *param_1,param_1);
    piVar1 = (int *)_ZSt3maxIjERKT_S2_S2_(&temp_v4,(unsigned int *)&temp_v3);
    temp_v2 = *piVar1;
    temp_v0 = rt_malloc(temp_v2);
    FUN_00307604(*param_1,param_1[1],temp_v0,param_1);
    for (temp_v1 = *param_1; temp_v1 != param_1[1]; temp_v1 = temp_v1 + 1) {
    }
    asdOperatorDeleteArray(*param_1);
    temp_v1 = *param_1;
    *param_1 = temp_v0;
    param_1[2] = temp_v0 + temp_v2;
    param_1[1] = (param_1[1] - temp_v1) + temp_v0;
  }
  return romwright_piece_4_4(uStack_1c,temp_v3);
}

} /* extern "C" */
