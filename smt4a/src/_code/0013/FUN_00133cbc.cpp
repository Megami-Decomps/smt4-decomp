/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133cbc` (_code @ 0x133cbc, 0xfa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(int);
int FUN_00307a7a(int, int, int);
int vectorCapacity40(int *);
int FUN_0030fd28(...);
int FUN_0030fd40(...);
int FUN_0030fd70(...);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int *FUN_002e4e86(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307a7a. */
/* Supplied declaration required: vectorCapacity40. */
/* Supplied declaration required: FUN_0030fd28. */
/* Supplied declaration required: FUN_0030fd40. */
extern int *FUN_0030fd62(int *, int, unsigned int);
/* Supplied declaration required: FUN_0030fd70. */
extern unsigned int FUN_0030fd7e(unsigned int, int *);


unsigned long long FUN_00133cbc(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int *temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v5 = param_2;
  if (param_2 != param_1) {
    temp_v6 = param_3;
    temp_v7 = param_4;
    temp_v0 = FUN_0030fd70(param_2);
    temp_v1 = vectorCapacity40(param_1);
    if (temp_v1 < temp_v0) {
      temp_v2 = FUN_0030fd70(param_1);
      temp_v7 = FUN_0030fd7e(temp_v2,param_1);
      temp_v6 = FUN_0030fd70(param_2);
      piVar4 = (int *)FUN_002e4e86((unsigned int *)&temp_v6,(unsigned int *)&temp_v7);
      temp_v3 = *piVar4;
      temp_v5 = (int *)FUN_0030fd62(param_1,temp_v3,0);
      FUN_0030fd40(*param_2,param_2[1],temp_v5,param_1);
      FUN_0030fd28(param_1,*param_1,param_1[1]);
      temp_v4 = *param_1;
      vectorCapacity40(param_1);
      FUN_002e6e14(temp_v4);
      *param_1 = (int)temp_v5;
      temp_v4 = FUN_0030fd70(param_2);
      temp_v3 = *param_1 + temp_v3 * 0x28;
      param_1[1] = temp_v4 * 0x28 + *param_1;
    }
    else {
      temp_v0 = FUN_0030fd70(param_1);
      temp_v1 = FUN_0030fd70(param_2);
      if (temp_v0 < temp_v1) {
        temp_v3 = FUN_0030fd70(param_1);
        temp_v3 = temp_v3 * 0x28;
        FUN_00307a7a(*param_2,*param_2 + temp_v3,*param_1);
        temp_v4 = FUN_0030fd70(param_2);
        param_1[1] = temp_v4 * 0x28 + *param_1;
        FUN_0030fd40(*param_2 + temp_v3,param_2[1],*param_1 + temp_v3,param_1);
        return romwright_piece_4_4(temp_v5,param_1);
      }
      temp_v2 = FUN_00307a7a(*param_2,param_2[1],*param_1);
      FUN_0030fd28(param_1,temp_v2,param_1[1]);
      temp_v3 = FUN_0030fd70(param_2);
      temp_v3 = temp_v3 * 0x28 + *param_1;
      param_1[1] = temp_v3;
    }
    param_1[2] = temp_v3;
  }
  return romwright_piece_4_4(temp_v5,param_1);
}

} /* extern "C" */
