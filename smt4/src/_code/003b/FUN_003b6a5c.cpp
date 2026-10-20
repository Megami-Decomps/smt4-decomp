/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6a5c` (_code @ 0x3b6a5c, 0x32c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025086c(...);
int FUN_002be5a4(...);
int FUN_002bed3c(void);
int FUN_002bf288(int, int, int, int, int, int);
int VectorSignedToFloat(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0025086c. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_003b6a5c(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  unsigned char temp_v6 [76];
  
  temp_v3 = FUN_002bf4f8(0x28,0xca);
  FUN_002bf288(2,0x28,0xc2,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x65);
  FUN_002bf288(2,0x28,0xc3,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6a);
  FUN_002bf288(2,0x28,0xc4,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6f);
  FUN_002bf288(2,0x28,0xc5,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x74);
  FUN_002bf288(2,0x28,0xc6,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x79);
  temp_v5 = *(unsigned int *)(param_1 + 0xd550) >> 0xc;
  if (temp_v5 >= 10000) {
    temp_v5 = 9999;
  }
  temp_v4 = FUN_002bf4f8(0x28,0xcb);
  temp_v0 = temp_v5 / 1000;
  if (temp_v0 != 0) {
    FUN_0025086c(temp_v0,temp_v6);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_3,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0x7a4c00ff,temp_v6,(int)*(short *)(temp_v4 + 8));
  }
  temp_v1 = (temp_v5 % 1000) / 100;
  temp_v5 = (temp_v5 % 1000) % 100;
  if (temp_v0 != 0 || temp_v1 != 0) {
    temp_v4 = FUN_002bf4f8(0x28,0xc9);
    FUN_0025086c(temp_v1,temp_v6);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_3,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0x7a4c00ff,temp_v6,(int)*(short *)(temp_v4 + 8));
  }
  temp_v2 = temp_v5 / 10;
  if ((temp_v0 != 0 || temp_v1 != 0) || temp_v2 != 0) {
    temp_v4 = FUN_002bf4f8(0x28,200);
    FUN_0025086c(temp_v2,temp_v6);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_3,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0x7a4c00ff,temp_v6,(int)*(short *)(temp_v4 + 8));
  }
  temp_v4 = FUN_002bf4f8(0x28,199);
  FUN_0025086c(temp_v5 % 10,temp_v6);
  VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_3,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(3,0x7a4c00ff,temp_v6,(int)*(short *)(temp_v4 + 8));
  FUN_002bed3c();
  return;
}

} /* extern "C" */
