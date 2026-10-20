/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eaa64` (_code @ 0x2eaa64, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00132aec(int, int **);
int FUN_002ea852(int, unsigned int, unsigned char [4]);
int FUN_002ea948(unsigned char [36], unsigned int, int);
int FUN_002eac60(int *, int);
int FUN_002eac8e(int *, int);
int FUN_002eacc6(int *, int, unsigned char [36]);
int FUN_002ead38(unsigned char [4], int, int *);

typedef int romwright_code(...);
/* stack frame of param_2: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00132aec. */
/* Supplied declaration required: FUN_002ea852. */
extern unsigned int FUN_002ea93c(int *);
/* Supplied declaration required: FUN_002ea948. */
/* Supplied declaration required: FUN_002eac60. */
/* Supplied declaration required: FUN_002eac8e. */
extern unsigned char FUN_002eacbc(int *);
/* Supplied declaration required: FUN_002eacc6. */
extern int wordRefsEqual_002ead28(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002ead38. */


void FUN_002eaa64(int param_1,int *param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  unsigned char temp_v6 [36];
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9 [4];
  int iStack_18;
  int *temp_v10;
  
  if ((param_2[0x20] == 0) &&
     (iStack_18 = param_1, temp_v10 = param_2, temp_v1 = (**(romwright_code **)(*param_2 + 0x30))(), temp_v1 == 0)
     ) {
    FUN_002eac60(temp_v10,0);
    FUN_002eac8e(temp_v10,0);
    temp_v5[0] = FUN_002eacbc(temp_v10);
    temp_v2 = FUN_002ea93c(temp_v10 + 2);
    temp_v3 = param_1 + 0x54;
    temp_v1 = temp_v3;
    FUN_002ea852(temp_v3,temp_v2,temp_v5);
    if (temp_v1 != 0) {
      temp_v2 = FUN_002ea93c(temp_v10 + 2);
      temp_v0 = FUN_002eacbc(temp_v10);
      temp_v4 = romwright_piece_3_1((((unsigned int)(temp_v4) >> 8) & 0xffffffU),temp_v0);
      FUN_002ea948(temp_v6,temp_v2,temp_v0);
      FUN_002eacc6(&temp_v7,temp_v3,temp_v6);
      temp_v8 = *(unsigned int *)(param_1 + 100);
      temp_v1 = wordRefsEqual_002ead28((unsigned int *)&temp_v7,(unsigned int *)&temp_v8);
      if (temp_v1 == 0) {
        temp_v4 = temp_v7;
        FUN_002ead38(temp_v9,temp_v3,&temp_v4);
      }
      FUN_00132aec(param_1 + 0x70,&temp_v10);
    }
  }
  return;
}

} /* extern "C" */
