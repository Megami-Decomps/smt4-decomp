/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f17e4` (_code @ 0x2f17e4, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030c588(int, int, unsigned int *, int *);

/* stack frame of param_4: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int *FUN_002e4e86(int *, unsigned int *);
extern int FUN_002e6dac(int);
/* Supplied declaration required: FUN_0030c588. */
extern unsigned int FUN_00310684(unsigned int, int *);


unsigned long long FUN_002f17e4(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v3 = param_3 & 0xffffff00;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v2 = param_2;
  temp_v4 = param_4;
  temp_v4 = FUN_00310684(0,param_1);
  piVar1 = (int *)FUN_002e4e86(&temp_v2,(unsigned int *)&temp_v4);
  temp_v1 = *piVar1;
  temp_v0 = FUN_002e6dac(temp_v1);
  *param_1 = temp_v0;
  FUN_0030c588(temp_v0,temp_v2,&temp_v3,param_1);
  param_1[2] = *param_1 + temp_v1;
  param_1[1] = *param_1 + temp_v2;
  return romwright_piece_4_4(temp_v2,param_1);
}

} /* extern "C" */
