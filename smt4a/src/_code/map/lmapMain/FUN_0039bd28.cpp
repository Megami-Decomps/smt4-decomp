/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bd28` (_code @ 0x39bd28, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_003b5714(int, unsigned int, unsigned int);
int VectorSignedToFloat(...);

extern int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b7c; /* 0x5f1b7c */
extern unsigned int DAT_005f1b80; /* 0x5f1b80 */
extern unsigned int DAT_005f1b84; /* 0x5f1b84 */
extern unsigned int DAT_005f1b88; /* 0x5f1b88 */
extern unsigned int DAT_005f1b8c; /* 0x5f1b8c */
extern unsigned int DAT_005f1b90; /* 0x5f1b90 */
extern int DAT_005f1b94; /* 0x5f1b94 */
extern unsigned int DAT_005f1b98; /* 0x5f1b98 */
extern unsigned int DAT_005f1b9c; /* 0x5f1b9c */
extern unsigned int DAT_005f1ba0; /* 0x5f1ba0 */
extern unsigned int DAT_005f1ba4; /* 0x5f1ba4 */
extern unsigned int DAT_005f1ba8; /* 0x5f1ba8 */
extern unsigned int DAT_005f1bac; /* 0x5f1bac */
extern unsigned int DAT_005f1bb0; /* 0x5f1bb0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: scrGetArg. */
extern int dataTableGetRecord23(void);
/* Supplied declaration required: FUN_003b5714. */


unsigned int FUN_0039bd28(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  
  *(unsigned char *)(param_2 + 0x574) = 1;
  *(unsigned char *)(param_2 + 0x4cf) = 1;
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  temp_v3 = scrGetArg(3);
  temp_v4 = scrGetArg(4);
  temp_v5 = scrGetArg(5);
  temp_v6 = temp_v0;
  FUN_003b5714(temp_v0,temp_v1,temp_v2);
  if (temp_v6 != -1) {
    temp_v6 = dataTableGetRecord23();
    DAT_005f1b7c = (unsigned int)*(unsigned char *)(temp_v6 + 3);
    DAT_005f1b80 = VectorSignedToFloat((int)*(short *)(temp_v6 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b84 = VectorSignedToFloat((int)*(short *)(temp_v6 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b88 = VectorSignedToFloat((int)*(short *)(temp_v6 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b8c = VectorSignedToFloat((int)*(short *)(temp_v6 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b90 = VectorSignedToFloat((int)*(short *)(temp_v6 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b74 = temp_v0;
    DAT_005f1b78 = temp_v1;
  }
  temp_v6 = temp_v3;
  FUN_003b5714(temp_v3,temp_v4,temp_v5);
  if (temp_v6 != -1) {
    temp_v6 = dataTableGetRecord23();
    DAT_005f1b9c = VectorSignedToFloat((int)*(short *)(temp_v6 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1bb0 = (unsigned int)*(unsigned char *)(temp_v6 + 3);
    DAT_005f1ba0 = VectorSignedToFloat((int)*(short *)(temp_v6 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1ba4 = VectorSignedToFloat((int)*(short *)(temp_v6 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1ba8 = VectorSignedToFloat((int)*(short *)(temp_v6 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1bac = VectorSignedToFloat((int)*(short *)(temp_v6 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f1b94 = temp_v3;
    DAT_005f1b98 = temp_v4;
  }
  return 1;
}

} /* extern "C" */
