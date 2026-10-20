/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb744` (_code @ 0x2eb744, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002eb690(int **, int *);


unsigned long long FUN_002eb744(int *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  int temp_v0;
  int *temp_v1;
  int *temp_v2;
  int temp_v3;
  int *temp_v4;
  
  temp_v2 = (int *)param_1[2];
  temp_v1 = param_1;
  temp_v4 = param_4;
  while( 1 ) {
    temp_v3 = param_1[4];
    temp_v0 = FUN_002eb690(&temp_v2,&temp_v3);
    if (temp_v0 == 0) break;
    temp_v1 = temp_v2;
    (**(romwright_code **)(*param_1 + 0x14))(&temp_v4,param_1,&temp_v1);
    temp_v2 = temp_v4;
  }
  return romwright_piece_4_4(temp_v2,temp_v1);
}

} /* extern "C" */
