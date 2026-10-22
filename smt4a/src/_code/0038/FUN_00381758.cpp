/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381758` (_code @ 0x381758, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int matrixCopyFull(unsigned char [64], unsigned char [64]);
int mathMatrixApplyScale(unsigned char [64], int *, int);
int matrix43Multiply(unsigned char [64], unsigned char [64], unsigned char [76]);
int FUN_002a1fb4(int, unsigned char [64], int);
int FUN_002a2048(unsigned char [64], int *, int);
int FUN_002b4c30(unsigned char [76], int);
int matrix44SetIdentity(unsigned char [64]);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
} param_4_stack;

/* Supplied declaration required: matrixCopyFull. */
/* Supplied declaration required: mathMatrixApplyScale. */
/* Supplied declaration required: matrix43Multiply. */
/* Supplied declaration required: FUN_002a1fb4. */
/* Supplied declaration required: FUN_002a2048. */
/* Supplied declaration required: FUN_002b4c30. */
/* Supplied declaration required: matrix44SetIdentity. */


void FUN_00381758(int param_1,unsigned int *param_2,int param_3,unsigned int *param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  unsigned char temp_v4 [64];
  unsigned char temp_v5 [76];
  
  if (param_4 != (unsigned int *)0x0) {
    temp_v0 = *param_4;
    temp_v1 = param_4[1];
    temp_v2 = param_4[2];
    mathMatrixApplyScale(temp_v3,&temp_v0,0);
  }
  else {
    matrix44SetIdentity(temp_v3);
  }
  if (param_3 != 0) {
    FUN_002b4c30(temp_v5,param_3);
    matrix43Multiply(temp_v4,temp_v3,temp_v5);
  }
  else {
    matrixCopyFull(temp_v4,temp_v3);
  }
  if (param_2 != (unsigned int *)0x0) {
    temp_v0 = *param_2;
    temp_v1 = param_2[1];
    temp_v2 = param_2[2];
    FUN_002a2048(temp_v4,&temp_v0,2);
  }
  FUN_002a1fb4(param_1 + 0x18,temp_v4,0);
  return;
}

} /* extern "C" */
