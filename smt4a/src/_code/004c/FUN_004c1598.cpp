/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c1598` (_code @ 0x4c1598, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_003e8bb0(unsigned char [2], unsigned int, unsigned int);
int FUN_003f0e20(...);
int FUN_004c0f74(int, unsigned int);
int FUN_004c28b4(unsigned int, int);
int FUN_004c3ac0(int, unsigned int *);
int FUN_004c8340(unsigned int, unsigned int, int, int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 4 slot(s), 12 byte(s) */
typedef struct {
    unsigned short sp54; /* 0x54: local_54 */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c0f74. */
/* Supplied declaration required: FUN_004c28b4. */
/* Supplied declaration required: FUN_004c3ac0. */
/* Supplied declaration required: FUN_004c8340. */


void FUN_004c1598(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned short temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  unsigned char temp_v8 [2];
  unsigned short temp_v9;
  short temp_v10;
  
  temp_v0 = btlGetMainState();
  temp_v1 = btlGetMainState();
  FUN_003f0e20(temp_v1,param_1);
  temp_v2 = btlGetMainState();
  FUN_003e8bb0(temp_v8,temp_v2,temp_v1);
  if ((int)temp_v10 - 3U >= 8) {
    temp_v3 = param_1;
    FUN_004c8340(param_1,param_2,temp_v9,(int)temp_v10,0xffffffff);
    temp_v6 = temp_v3;
    if (((temp_v3 & 0x60000) != 0) && (temp_v6 == 0)) {
      temp_v6 = 100;
    }
    temp_v4 = temp_v0;
    FUN_003f0e20(temp_v0,param_1);
    FUN_004c3ac0(temp_v9,&temp_v7);
    temp_v5 = temp_v4;
    FUN_004c0f74(temp_v4,temp_v7 & 0xff);
    if (temp_v5 != 0) {
      if (temp_v6 < 100) {
        temp_v6 = 100;
        *(unsigned int *)(temp_v0 + 0x4bc0) = 1;
      }
    }
    else if ((*(char *)(temp_v7 + temp_v4 + 0x2f5) != '\0') && (temp_v6 < 100)) {
      temp_v6 = 100;
    }
    VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_004c28b4(param_1,temp_v9);
  }
  return;
}

} /* extern "C" */
