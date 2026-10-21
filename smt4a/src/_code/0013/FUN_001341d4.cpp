/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001341d4` (_code @ 0x1341d4, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void FUN_002e32a4(int kind, ...);
int asdOperatorDeleteArray(int);
int FUN_003079ae(int *, int, int);
int FUN_003079c6(int, int, int, int *);
int vectorCount8_0030fcf6(int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00134258; /* 0x134258 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e32a4. */
extern int *wordRefMax(unsigned int *, unsigned int *);
/* Supplied declaration required: asdOperatorDeleteArray. */
extern int allocArrayDwords(int *, int, int);
/* Supplied declaration required: FUN_003079ae. */
/* Supplied declaration required: FUN_003079c6. */
/* Supplied declaration required: vectorCount8_0030fcf6. */
extern unsigned int vectorGrowCapacity_0030fcfe(unsigned int, int *);


unsigned long long FUN_001341d4(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
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
  if (param_2 >= 0x20000000) {
    temp_v4 = 0x1fffffff;
    FUN_002e32a4(8,&LAB_00134258,&LAB_00134258);
  }
  if ((unsigned int)((param_1[2] - *param_1) >> 3) < temp_v5) {
    temp_v0 = vectorCount8_0030fcf6(param_1);
    temp_v4 = vectorGrowCapacity_0030fcfe(temp_v0,param_1);
    piVar2 = (int *)wordRefMax(&temp_v5,(unsigned int *)&temp_v4);
    temp_v3 = *piVar2;
    temp_v1 = allocArrayDwords(param_1,temp_v3,*param_1);
    FUN_003079c6(*param_1,param_1[1],temp_v1,param_1);
    FUN_003079ae(param_1,*param_1,param_1[1]);
    asdOperatorDeleteArray(*param_1);
    temp_v2 = vectorCount8_0030fcf6(param_1);
    *param_1 = temp_v1;
    param_1[2] = temp_v1 + temp_v3 * 8;
    param_1[1] = temp_v2 * 8 + temp_v1;
  }
  return romwright_piece_4_4(uStack_1c,temp_v4);
}

} /* extern "C" */
