/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ad80` (_code @ 0x36ad80, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00352d30(unsigned int *);
int VectorSignedToFloat(int, int);

extern unsigned int DAT_005f16bc; /* 0x5f16bc */
extern unsigned int DAT_005f16c0; /* 0x5f16c0 */
extern unsigned int DAT_005f16c4; /* 0x5f16c4 */
extern unsigned int DAT_005f16c8; /* 0x5f16c8 */
extern signed char DAT_005f18c4; /* 0x5f18c4 */
extern unsigned char DAT_005f1b70; /* 0x5f1b70 */
extern int DAT_005f1b74; /* 0x5f1b74 */
extern int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b7c; /* 0x5f1b7c */
extern unsigned int DAT_005f1b80; /* 0x5f1b80 */
extern unsigned int DAT_005f1b84; /* 0x5f1b84 */
extern unsigned int DAT_005f1b88; /* 0x5f1b88 */
extern unsigned int DAT_005f1b8c; /* 0x5f1b8c */
extern unsigned int DAT_005f1b90; /* 0x5f1b90 */
extern unsigned int DAT_005f1b94; /* 0x5f1b94 */
extern unsigned int DAT_005f1b98; /* 0x5f1b98 */
extern unsigned int DAT_005f1b9c; /* 0x5f1b9c */
extern unsigned int DAT_005f1ba0; /* 0x5f1ba0 */
extern unsigned int DAT_005f1ba4; /* 0x5f1ba4 */
extern unsigned int DAT_005f1ba8; /* 0x5f1ba8 */
extern unsigned int DAT_005f1bac; /* 0x5f1bac */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00352d30. */


void FUN_0036ad80(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  
  temp_v1 = *param_1;
  temp_v0 = gameFlagsGetBlock();
  if (DAT_005f18c4 != '\0') {
    DAT_005f18c4 = '\0';
  }
  else {
    FUN_00352d30(&DAT_005f16c0);
    DAT_005f1b70 = 1;
    DAT_005f1b74 = (int)*(short *)(temp_v0 + 0x2e);
    DAT_005f1b78 = (int)*(short *)(temp_v0 + 0x30);
    DAT_005f1b7c = *(unsigned int *)(temp_v0 + 0xe10);
    DAT_005f1b80 = VectorSignedToFloat((int)*(short *)(temp_v0 + 0x32),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b84 = VectorSignedToFloat((int)*(short *)(temp_v0 + 0x34),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b88 = VectorSignedToFloat((int)*(short *)(temp_v0 + 0x36),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b8c = VectorSignedToFloat((int)*(short *)(temp_v0 + 0x38),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b90 = VectorSignedToFloat((int)*(short *)(temp_v0 + 0x38),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b94 = *(unsigned int *)(temp_v1 + 0x30);
    DAT_005f1b98 = *(unsigned int *)(temp_v1 + 0x34);
    DAT_005f1b9c = DAT_005f16c0;
    DAT_005f1ba0 = DAT_005f16c4;
    DAT_005f1ba4 = DAT_005f16c8;
    DAT_005f1ba8 = DAT_005f16bc;
    DAT_005f1bac = DAT_005f16bc;
  }
  return;
}

} /* extern "C" */
