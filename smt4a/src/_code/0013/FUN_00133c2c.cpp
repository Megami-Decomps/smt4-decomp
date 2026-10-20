/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133c2c` (_code @ 0x133c2c, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(int, unsigned char *, unsigned char *);
int asdOperatorDeleteArray(int);
int FUN_00307a98(int, int, int, int *);
int destroyRangeElem40(int *, int, int);
int vectorCountx28_0030fd70(int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00133cb8; /* 0x133cb8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e32a4. */
extern int *wordRefMax(unsigned int *, unsigned int *);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00307a98. */
/* Supplied declaration required: destroyRangeElem40. */
extern int vectorAllocx28(int *, int, int);
/* Supplied declaration required: vectorCountx28_0030fd70. */
extern unsigned int vectorGrowCapacity_0030fd7e(unsigned int, int *);
extern unsigned int __aeabi_idivmod(int, unsigned int);


unsigned long long FUN_00133c2c(int *param_1,unsigned int param_2)

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
  if (param_2 >= 0x6666667) {
    temp_v5 = 0x6666666;
    FUN_002e32a4(8,&LAB_00133cb8,&LAB_00133cb8);
  }
  temp_v0 = __aeabi_idivmod(param_1[2] - *param_1,0x28);
  if (temp_v0 < temp_v6) {
    temp_v1 = vectorCountx28_0030fd70(param_1);
    temp_v5 = vectorGrowCapacity_0030fd7e(temp_v1,param_1);
    piVar3 = (int *)wordRefMax(&temp_v6,(unsigned int *)&temp_v5);
    temp_v4 = *piVar3;
    temp_v2 = vectorAllocx28(param_1,temp_v4,*param_1);
    FUN_00307a98(*param_1,param_1[1],temp_v2,param_1);
    destroyRangeElem40(param_1,*param_1,param_1[1]);
    asdOperatorDeleteArray(*param_1);
    temp_v3 = vectorCountx28_0030fd70(param_1);
    *param_1 = temp_v2;
    param_1[2] = temp_v2 + temp_v4 * 0x28;
    param_1[1] = temp_v3 * 0x28 + temp_v2;
  }
  return romwright_piece_4_4(uStack_1c,temp_v5);
}

} /* extern "C" */
