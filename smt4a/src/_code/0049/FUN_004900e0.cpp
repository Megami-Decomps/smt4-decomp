/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004900e0` (_code @ 0x4900e0, 0x3a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(unsigned int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned int DAT_005f1604; /* 0x5f1604 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_00162e8c(void);
extern int FUN_00284dc4(unsigned int);
extern int FUN_002e707c(void);
extern int FUN_004083a8(unsigned char, unsigned char);
extern unsigned long long *FUN_00492b84(int);


void FUN_004900e0(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned long long *puVar3;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  
  temp_v1 = FUN_00162e8c();
  puVar3 = (unsigned long long *)FUN_00492b84(param_1 + 0x4cc);
  temp_v12 = *puVar3;
  temp_v14 = 0x4320000042f00000;
  temp_v5 = 0;
  piVar4 = (int *)(param_1 + 0x7b8c);
  do {
    temp_v6 = *piVar4;
    temp_v11 = (float)((unsigned long long)temp_v12 >> 0x20);
    if (*(char *)(temp_v1 + 0xd8e) != '\f') {
      temp_v4 = 0;
      temp_v7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1484) / 2,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1488) / 2,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = romwright_piece_4_4((int)(temp_v8 - temp_v11),(int)(temp_v7 - (float)temp_v12));
      if (0 < temp_v6) {
        do {
          temp_v2 = param_1 + temp_v4 * 100;
          if (temp_v5 == 0) {
            temp_v2 = temp_v2 + 0x178c;
          }
          else {
            temp_v2 = temp_v2 + 0x7b94;
          }
          temp_v3 = FUN_004083a8(*(unsigned char *)(temp_v2 + 4),*(unsigned char *)(temp_v2 + 5));
          if (((temp_v3 != 0) && ((int)*(short *)(temp_v2 + 6) == (int)*(char *)(param_1 + 100))) &&
             (*(int *)(temp_v2 + 0x4c) != 0)) {
            temp_v3 = FUN_002e707c();
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v2 + 0x34) = 1;
              *(unsigned char *)(temp_v2 + 0x50) = 0;
            }
            else {
              temp_v3 = FUN_00284dc4(*(unsigned int *)(temp_v2 + 0x4c));
              *(unsigned short *)(temp_v2 + 0x34) = (unsigned short)(temp_v3 != 0);
              *(unsigned char *)(temp_v2 + 0x50) = temp_v3 != 0;
            }
          }
          if (*(short *)(temp_v2 + 0x34) != 0) {
            temp_v11 = (float)VectorSignedToFloat((int)temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v13 >> 0x20),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned short *)(temp_v2 + 0x36) = *(unsigned short *)(temp_v2 + 10);
            temp_v9 = VectorFloatToUnsigned(*(unsigned int *)(temp_v2 + 0x24),3);
            temp_v10 = VectorFloatToUnsigned(*(unsigned int *)(temp_v2 + 0x28),3);
            *(int *)(temp_v2 + 0x38) =
                 (int)(*(float *)(temp_v2 + 0x1c) - (temp_v11 - (float)((unsigned long long)temp_v14 >> 0x20)));
            *(int *)(temp_v2 + 0x3c) = (int)(*(float *)(temp_v2 + 0x20) - (temp_v7 - (float)temp_v14));
            *(unsigned int *)(temp_v2 + 0x40) = temp_v9;
            *(unsigned int *)(temp_v2 + 0x44) = temp_v10;
            temp_v0 = *(short *)(temp_v2 + 0x2c);
            if (*(unsigned char *)(temp_v2 + 4) == DAT_005f1604) {
              if (temp_v0 == 0 || temp_v0 == 4) {
                temp_v9 = 0x9fe7ffff;
              }
              else {
                temp_v9 = 0xffffffff;
              }
            }
            else if (temp_v0 != 0 && temp_v0 != 4) {
              temp_v9 = 0xffffffff;
            }
            else {
              temp_v9 = 0xffffff99;
            }
            *(unsigned int *)(temp_v2 + 0x48) = temp_v9;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v6);
      }
    }
    else {
      temp_v8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1484),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1488),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = 0;
      temp_v13 = romwright_piece_4_4((int)(temp_v7 - temp_v11),(int)(temp_v8 - (float)temp_v12));
      if (0 < temp_v6) {
        do {
          temp_v2 = param_1 + temp_v4 * 100;
          if (temp_v5 == 0) {
            temp_v2 = temp_v2 + 0x178c;
          }
          else {
            temp_v2 = temp_v2 + 0x7b94;
          }
          temp_v3 = FUN_004083a8(*(unsigned char *)(temp_v2 + 4),*(unsigned char *)(temp_v2 + 5));
          if (((temp_v3 != 0) && ((int)*(short *)(temp_v2 + 6) == (int)*(char *)(param_1 + 100))) &&
             (*(int *)(temp_v2 + 0x4c) != 0)) {
            temp_v3 = FUN_002e707c();
            if (temp_v3 != 0) {
              *(unsigned short *)(temp_v2 + 0x34) = 1;
              *(unsigned char *)(temp_v2 + 0x50) = 0;
            }
            else {
              temp_v3 = FUN_00284dc4(*(unsigned int *)(temp_v2 + 0x4c));
              *(unsigned short *)(temp_v2 + 0x34) = (unsigned short)(temp_v3 != 0);
              *(unsigned char *)(temp_v2 + 0x50) = temp_v3 != 0;
            }
          }
          if (*(short *)(temp_v2 + 0x34) != 0) {
            temp_v11 = (float)VectorSignedToFloat((int)temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v13 >> 0x20),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned short *)(temp_v2 + 0x36) = *(unsigned short *)(temp_v2 + 8);
            temp_v9 = VectorFloatToUnsigned(*(unsigned int *)(temp_v2 + 0x14),3);
            temp_v10 = VectorFloatToUnsigned(*(unsigned int *)(temp_v2 + 0x18),3);
            *(int *)(temp_v2 + 0x38) =
                 (int)(*(float *)(temp_v2 + 0xc) - (temp_v11 - (float)((unsigned long long)temp_v14 >> 0x20)));
            *(int *)(temp_v2 + 0x3c) = (int)(*(float *)(temp_v2 + 0x10) - (temp_v7 - (float)temp_v14));
            *(unsigned int *)(temp_v2 + 0x40) = temp_v9;
            *(unsigned int *)(temp_v2 + 0x44) = temp_v10;
            temp_v0 = *(short *)(temp_v2 + 0x2c);
            if (*(unsigned char *)(temp_v2 + 4) == DAT_005f1604) {
              if (temp_v0 == 0 || temp_v0 == 4) {
                temp_v9 = 0x9fe7ffff;
              }
              else {
                temp_v9 = 0xffffffff;
              }
            }
            else if (temp_v0 != 0 && temp_v0 != 4) {
              temp_v9 = 0xffffffff;
            }
            else {
              temp_v9 = 0xffffff99;
            }
            *(unsigned int *)(temp_v2 + 0x48) = temp_v9;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v6);
      }
    }
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 2) {
      *(unsigned char *)(param_1 + 0x7b91) = 0;
      return;
    }
    piVar4 = (int *)(param_1 + 0x7b8c);
    if (temp_v5 != 0) {
      piVar4 = (int *)(param_1 + 0x84f4);
    }
  } while( 1 );
}

} /* extern "C" */
