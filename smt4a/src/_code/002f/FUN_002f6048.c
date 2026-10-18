/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6048` (_code @ 0x2f6048, 0x470 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_002f64c4; /* 0x2f64c4 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_00156850(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_001654d8. */
/* Supplied declaration required: FUN_001654e4. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0019d880. */
/* Supplied declaration required: FUN_002f6f44. */
/* Supplied declaration required: FUN_0037ce80. */


void FUN_002f6048(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char *puVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar10;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  int temp_v10;
  float temp_v11;
  unsigned char temp_v12 [64];
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  
  FUN_0019d880();
  temp_v13 = (unsigned int)*(unsigned short *)(param_1 + 0xcca);
  FUN_001677c0();
  temp_v3 = DAT_0059dbb4;
  temp_v2 = FUN_00169294(6,1,0);
  piVar10 = (int *)(temp_v3 + 0x12b8);
  temp_v6 = piVar10[*piVar10 + 2];
  piVar10[*piVar10 + 2] = temp_v2;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  FUN_002f6f44(0x4b,0xc9,0,1);
  temp_v3 = DAT_0059dbb4;
  temp_v2 = FUN_00169294(6,7,0);
  piVar10 = (int *)(temp_v3 + 0x12b8);
  temp_v6 = piVar10[*piVar10 + 2];
  piVar10[*piVar10 + 2] = temp_v2;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  temp_v11 = 0.26f;
  temp_v9 = temp_v11;
  FUN_001879d0(DAT_0059dbb4);
  VectorSignedToFloat((int)temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001634b4(param_1 + 0x5ac);
  temp_v3 = FUN_001834a4(0x1e,0x51);
  temp_v8 = *(unsigned short *)(temp_v3 + 4) & 0xffff7fff;
  temp_v3 = FUN_001834a4(0x1e,0x56);
  temp_v0 = **(short **)(temp_v3 + 0xc);
  temp_v4 = FUN_00156850(temp_v13,0);
  FUN_00100388(temp_v12,&LAB_002f64c4,temp_v4);
  puVar6 = temp_v12;
  FUN_0018408c(puVar6,3);
  temp_v2 = FUN_001834a4(0x1e,0x55);
  temp_v3 = ((int)**(short **)(temp_v2 + 0xc) - (int)(puVar6 + temp_v8 + (int)temp_v0)) / 2;
  FUN_001879d0(DAT_0059dbb4);
  temp_v10 = (int)temp_v9;
  temp_v14 = param_1 + 0x638;
  temp_v6 = FUN_001654d8();
  temp_v15 = *(short *)(temp_v2 + 8) + temp_v3 + temp_v6 + temp_v10;
  temp_v6 = FUN_001654e4(temp_v14);
  temp_v6 = temp_v6 + *(short *)(temp_v2 + 10);
  FUN_001677c0();
  FUN_001835b4(2,0x1e,0x51,temp_v15,temp_v6,0xa6);
  FUN_0037ce80(temp_v13,temp_v15 + 1,temp_v6 + 1,0xa6);
  temp_v6 = FUN_001654d8(temp_v14);
  temp_v1 = *(short *)(temp_v2 + 8);
  temp_v7 = temp_v10 + temp_v8;
  temp_v5 = FUN_001654e4(temp_v14,temp_v6,temp_v7);
  VectorSignedToFloat(temp_v5 + *(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v6 + temp_v1 + temp_v3 + temp_v7 + (int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0xffffffff,temp_v12);
  temp_v3 = DAT_0059dbb4;
  temp_v2 = FUN_00169294(6,1,0);
  piVar10 = (int *)(temp_v3 + 0x12b8);
  temp_v6 = piVar10[*piVar10 + 2];
  piVar10[*piVar10 + 2] = temp_v2;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001634b4(param_1 + 0x868);
  temp_v3 = DAT_0059dbb4;
  temp_v2 = FUN_00169294(6,7,0);
  piVar10 = (int *)(temp_v3 + 0x12b8);
  temp_v6 = piVar10[*piVar10 + 2];
  piVar10[*piVar10 + 2] = temp_v2;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001634b4(param_1 + 0x6c4);
  FUN_001677c0();
  temp_v3 = DAT_0059dbb4;
  temp_v2 = FUN_00169294(6,1,0);
  piVar10 = (int *)(temp_v3 + 0x12b8);
  temp_v6 = piVar10[*piVar10 + 2];
  piVar10[*piVar10 + 2] = temp_v2;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  FUN_002f6f44(0x57,0xc9,1);
  temp_v3 = DAT_0059dbb4;
  temp_v2 = FUN_00169294(6,7,0);
  piVar10 = (int *)(temp_v3 + 0x12b8);
  temp_v6 = piVar10[*piVar10 + 2];
  piVar10[*piVar10 + 2] = temp_v2;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  FUN_001677c0();
  return;
}
