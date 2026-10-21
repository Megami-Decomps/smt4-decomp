/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecccc` (_code @ 0x2ecccc, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void FUN_002e32a4(int kind, ...);
int asdOperatorDeleteArray(void);
int vectorCount4_002eccc4(int *);
int FUN_00307824(int, int, int, int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_002ecd50; /* 0x2ecd50 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e32a4. */
extern int *wordRefMax(unsigned int *, unsigned int *);
extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: vectorCount4_002eccc4. */
/* Supplied declaration required: FUN_00307824. */
extern unsigned int vectorGrowCapacity_0030c5c6(unsigned int, int *);


unsigned long long FUN_002ecccc(int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  int *piStack_18;
  unsigned int temp_v5;
  
  piStack_18 = param_1;
  temp_v5 = param_2;
  if (param_2 >= 0x40000000) {
    temp_v4 = 0x3fffffff;
    FUN_002e32a4(8,&LAB_002ecd50,&LAB_002ecd50);
  }
  if ((unsigned int)((param_1[2] - *param_1) >> 2) < temp_v5) {
    temp_v0 = vectorCount4_002eccc4(param_1);
    temp_v4 = vectorGrowCapacity_0030c5c6(temp_v0,param_1);
    piVar2 = (int *)wordRefMax(&temp_v5,(unsigned int *)&temp_v4);
    temp_v1 = *piVar2;
    temp_v2 = rt_malloc();
    FUN_00307824(*param_1,param_1[1],temp_v2,param_1);
    for (temp_v3 = *param_1; temp_v3 != param_1[1]; temp_v3 = temp_v3 + 4) {
    }
    asdOperatorDeleteArray();
    temp_v3 = vectorCount4_002eccc4(param_1);
    *param_1 = temp_v2;
    param_1[2] = temp_v2 + temp_v1 * 4;
    param_1[1] = temp_v3 * 4 + temp_v2;
  }
  return romwright_piece_4_4(uStack_1c,temp_v4);
}

} /* extern "C" */
