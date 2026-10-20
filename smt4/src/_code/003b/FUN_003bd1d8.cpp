/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bd1d8` (_code @ 0x3bd1d8, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022aa38(int, unsigned int);
int FUN_0022ab08(int, unsigned int *);
int FUN_00246134(unsigned int, int, int, unsigned int);
int FUN_00247478(unsigned char [2], unsigned int, unsigned int);
int FUN_00282924(...);
int FUN_002939f4(void);
int FUN_003bd9e8(unsigned int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 3 slot(s), 8 byte(s) */
typedef struct {
    unsigned short sp40; /* 0x40: local_40 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0022aa38. */
/* Supplied declaration required: FUN_0022ab08. */
/* Supplied declaration required: FUN_00246134. */
/* Supplied declaration required: FUN_00247478. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_003bd9e8. */


void FUN_003bd1d8(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  unsigned char temp_v6 [2];
  unsigned short temp_v7;
  short temp_v8;
  
  temp_v0 = FUN_002939f4();
  temp_v1 = FUN_002939f4();
  FUN_00282924(temp_v1,param_1);
  temp_v2 = FUN_002939f4();
  FUN_00247478(temp_v6,temp_v2,temp_v1);
  if ((int)temp_v8 - 3U >= 8) {
    FUN_00246134(param_2,temp_v7,(int)temp_v8,0xffffffff);
    temp_v4 = param_2;
    if (((param_2 & 0x60000) != 0) && (temp_v4 == 0)) {
      temp_v4 = 100;
    }
    temp_v3 = temp_v0;
    FUN_00282924(temp_v0,param_1);
    FUN_0022ab08(temp_v7,&temp_v5);
    FUN_0022aa38(temp_v3,temp_v5 & 0xff);
    if ((temp_v3 != 0) && (temp_v4 < 100)) {
      temp_v4 = 100;
      *(unsigned int *)(temp_v0 + 0x48b8) = 1;
    }
    VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_003bd9e8(param_1,temp_v7);
  }
  return;
}

} /* extern "C" */
