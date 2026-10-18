/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023187c` (_code @ 0x23187c, 0x270 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern char *FUN_00231628(unsigned char *, int);
/* Supplied declaration required: FUN_00231664. */
/* Supplied declaration required: FUN_0024c3f8. */
extern int FUN_002c0ba8(void);


void FUN_0023187c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  short temp_v0;
  unsigned char *puVar2;
  char *pcVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  unsigned char temp_v15 [4];
  int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  
  temp_v4 = 0;
  puVar2 = temp_v15;
  temp_v18 = 0;
  temp_v12 = 0;
  temp_v11 = 0;
  if (param_2 != 0x65) {
    if (param_2 != 0x66) {
      if (param_2 == 0x67) {
        temp_v12 = 0xc694700046ea6000;
        temp_v11 = 0x47108800c684d000;
      }
    }
    else {
      temp_v12 = 0xc68ca00046f23000;
      temp_v11 = 0x47108800c684d000;
    }
  }
  else {
    temp_v12 = 0xc690880046e67800;
    temp_v11 = 0x47147000c6c73800;
  }
  temp_v3 = 0;
  FUN_00231664();
  if (0 < (int)puVar2) {
    temp_v13 = 0x439e80003f000000;
    temp_v14 = 0x43c80000;
    temp_v2 = temp_v4;
    do {
      pcVar3 = (char *)FUN_00231628(temp_v15,temp_v3);
      temp_v4 = temp_v2;
      if (((*pcVar3 == param_2) &&
          ((*(short *)(pcVar3 + 4) == 0 || (temp_v1 = FUN_002c0ba8(), temp_v1 != 0)))) &&
         ((*(short *)(pcVar3 + 6) == 0 || (temp_v1 = FUN_002c0ba8(), temp_v1 == 0)))) {
        if (*(short *)(pcVar3 + 8) == 5) {
          temp_v5 = 0x1bc3;
        }
        else if (*(short *)(pcVar3 + 8) == 6) {
          temp_v5 = 0x1bc4;
        }
        else {
          temp_v5 = 0x1bc5;
        }
        FUN_0024c3f8(0x13,temp_v5,&temp_v16,&temp_v17);
        temp_v0 = *(short *)(pcVar3 + 0x10);
        temp_v4 = temp_v2 + 1;
        temp_v2 = param_1 + temp_v2 * 0x4c;
        temp_v9 = (float)VectorSignedToFloat((int)*(short *)(pcVar3 + 0xe),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0xe88) = 0x13;
        *(char *)(temp_v2 + 0xe8c) = pcVar3[1];
        temp_v7 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned short *)(temp_v2 + 0xeb4) = *(unsigned short *)(pcVar3 + 8);
        *(char *)(temp_v2 + 0xe8d) = pcVar3[2];
        *(unsigned short *)(temp_v2 + 0xeb6) = 0;
        *(unsigned short *)(temp_v2 + 0xe8e) = 0;
        temp_v10 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned short *)(temp_v2 + 0xeb8) = *(unsigned short *)(pcVar3 + 4);
        *(unsigned short *)(temp_v2 + 0xeba) = *(unsigned short *)(pcVar3 + 6);
        *(unsigned short *)(temp_v2 + 0xe90) = temp_v5;
        temp_v10 = temp_v10 * (float)temp_v13;
        *(unsigned int *)(temp_v2 + 0xe9c) = temp_v6;
        temp_v9 = (float)VectorSignedToFloat((int)(short)(int)(((float)((unsigned long long)temp_v13 >> 0x20) /
                                                              (float)temp_v12) *
                                                             (temp_v9 - (float)temp_v11)),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = (float)VectorSignedToFloat((int)(short)(int)(((float)temp_v14 /
                                                              (float)((unsigned long long)temp_v11 >> 0x20)) *
                                                             (temp_v7 - (float)((unsigned long long)temp_v12 >>
                                                                              0x20))),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = VectorSignedToFloat((int)(short)(int)(temp_v9 - temp_v10),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v8 = VectorSignedToFloat((int)(short)(int)(temp_v7 - temp_v10),(unsigned char)(in_fpscr >> 0x16) & 3
                                    );
        *(unsigned int *)(temp_v2 + 0xe94) = temp_v6;
        *(unsigned int *)(temp_v2 + 0xe98) = temp_v8;
        temp_v6 = VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0xea0) = temp_v6;
        *(unsigned short *)(temp_v2 + 0xebc) = 0;
        *(unsigned int *)(temp_v2 + 0xed0) = 0xffffffff;
      }
      temp_v3 = temp_v3 + 1;
      puVar2 = temp_v15;
      FUN_00231664();
      temp_v2 = temp_v4;
    } while (temp_v3 < (int)puVar2);
  }
  *(int *)(param_1 + 0x5a88) = temp_v4;
  *(unsigned int *)(param_1 + 0x61b0) = temp_v18;
  return;
}
