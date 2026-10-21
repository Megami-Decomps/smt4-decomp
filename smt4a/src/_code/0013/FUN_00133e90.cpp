/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133e90` (_code @ 0x133e90, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void FUN_002e32a4(int kind, ...);
int asdOperatorDeleteArray(int);
int FUN_00307a28(int, int, int, int *);
int vectorSize24A(int *);
int destroyRangeElem24(int *, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00133f18; /* 0x133f18 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e32a4. */
extern int *wordRefMax(unsigned int *, unsigned int *);
extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00307a28. */
extern unsigned int vectorGrowCapacity_00307a4a(unsigned int, int *);
/* Supplied declaration required: vectorSize24A. */
/* Supplied declaration required: destroyRangeElem24. */
extern unsigned int __aeabi_idivmod(int, unsigned int);


unsigned long long FUN_00133e90(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int uStack_1c;
  int *piStack_18;
  unsigned int temp_v6;
  
  piStack_18 = param_1;
  temp_v6 = param_2;
  if (param_2 >= 0xaaaaaab) {
    temp_v5 = 0xaaaaaaa;
    FUN_002e32a4(8,&LAB_00133f18,&LAB_00133f18);
  }
  temp_v0 = __aeabi_idivmod(param_1[2] - *param_1,0x18);
  if (temp_v0 < temp_v6) {
    temp_v1 = vectorSize24A(param_1);
    temp_v5 = vectorGrowCapacity_00307a4a(temp_v1,param_1);
    piVar3 = (int *)wordRefMax(&temp_v6,(unsigned int *)&temp_v5);
    temp_v2 = *piVar3;
    temp_v3 = rt_malloc();
    FUN_00307a28(*param_1,param_1[1],temp_v3,param_1);
    destroyRangeElem24(param_1,*param_1,param_1[1]);
    asdOperatorDeleteArray(*param_1);
    temp_v4 = vectorSize24A(param_1);
    *param_1 = temp_v3;
    param_1[2] = temp_v3 + temp_v2 * 0x18;
    param_1[1] = temp_v4 * 0x18 + temp_v3;
  }
  return romwright_piece_4_4(uStack_1c,temp_v5);
}

} /* extern "C" */
