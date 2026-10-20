/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfb48` (_code @ 0x2dfb48, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287be4(void);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
} param_1_stack;

extern unsigned char g_lmapScene; /* 0x447e88 */
extern int g_mapEnemy; /* 0x447600 */
extern unsigned char DAT_0049fb1c; /* 0x49fb1c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_0025b4b0(unsigned int *, float *, unsigned int);
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287be4. */
extern unsigned int randNextInRange(unsigned int);


unsigned int FUN_002dfb48(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  int temp_v19;
  float temp_v20;
  unsigned int uStack_64;
  
  temp_v0 = g_mapEnemy;
  temp_v4 = 0;
  temp_v13 = 250.0f;
  temp_v14 = 560.0f;
  temp_v12 = 25.0f;
  temp_v15 = 500.0f;
  temp_v11 = 0x44610000;
  temp_v10 = 0x3c8efa35420c0000;
  do {
    temp_v11 = romwright_piece_4_4(*(unsigned int *)((*(int *)((unsigned char *)&(*(int *)((unsigned char *)&g_lmapScene - 0x994)) + 0x994)) + 0x20),(int)temp_v11);
    temp_v8 = romwright_piece_4_4(*(unsigned int *)((*(int *)((unsigned char *)&(*(int *)((unsigned char *)&g_lmapScene - 0x994)) + 0x994)) + 0x24),*(unsigned int *)((*(int *)((unsigned char *)&(*(int *)((unsigned char *)&g_lmapScene - 0x994)) + 0x994)) + 0x1c));
    temp_v1 = *(unsigned int *)(temp_v0 + 0x3044);
    temp_v7 = *(float *)((*(int *)((unsigned char *)&g_lmapScene - 0x994)) + 0x18);
    if ((*(short *)((unsigned char *)&DAT_0049fb1c + 0x44)) != 0) {
      if (0 < (int)temp_v1) {
        temp_v5 = (float)VectorSignedToFloat((int)(temp_v1 + 1) / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
        if ((temp_v1 & 1) != 0) {
          temp_v7 = temp_v7 - temp_v5 * temp_v12;
        }
        else {
          temp_v7 = temp_v7 + temp_v5 * temp_v12;
        }
        if ((int)temp_v1 >= 0xd) {
          temp_v2 = randNextInRange(0x32);
          temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = temp_v5 + temp_v15;
        }
        else {
          temp_v2 = randNextInRange(0x32);
          temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = temp_v5 + (float)temp_v11;
        }
      }
      else {
        temp_v2 = randNextInRange(0x32);
        temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = temp_v5 + (float)temp_v11;
      }
    }
    else {
      if (0 < (int)temp_v1) {
        temp_v5 = (float)VectorSignedToFloat((int)(temp_v1 + 1) / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
        if ((temp_v1 & 1) != 0) {
          temp_v7 = temp_v7 - temp_v5 * (float)temp_v10;
        }
        else {
          temp_v7 = temp_v7 + temp_v5 * (float)temp_v10;
        }
      }
      if ((int)temp_v1 >= 0xd) {
        temp_v2 = randNextInRange(0x32);
        temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = temp_v5 + temp_v13;
      }
      else {
        temp_v2 = randNextInRange(0x32);
        temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = temp_v5 + temp_v14;
      }
    }
    temp_v7 = temp_v7 * (float)((unsigned long long)temp_v10 >> 0x20);
    temp_v6 = temp_v7;
    FUN_0028250c();
    temp_v9 = (float)((unsigned long long)temp_v8 >> 0x20);
    temp_v7 = (float)temp_v8 + temp_v7 * temp_v5;
    FUN_00282390();
    temp_v9 = temp_v9 + temp_v6 * temp_v5;
    temp_v17 = (float)((unsigned long long)temp_v11 >> 0x20) + (float)temp_v10;
    *(int *)(temp_v0 + 0x3044) = *(int *)(temp_v0 + 0x3044) + 1;
    temp_v19 = *(unsigned int *)((*(int *)((unsigned char *)&(*(int *)((unsigned char *)&g_lmapScene - 0x994)) + 0x994)) + 0x1c);
    uStack_64 = *(unsigned int *)((*(int *)((unsigned char *)&(*(int *)((unsigned char *)&g_lmapScene - 0x994)) + 0x994)) + 0x24);
    temp_v20 = *(float *)((*(int *)((unsigned char *)&(*(int *)((unsigned char *)&g_lmapScene - 0x994)) + 0x994)) + 0x20) + (float)temp_v10;
    temp_v16 = temp_v7;
    temp_v18 = temp_v9;
    temp_v3 = FUN_0025b4b0((unsigned int *)&temp_v19,&temp_v16,0);
    if (temp_v3 == -1) {
      *(float *)(param_1 + 0x20) = temp_v7;
      *(int *)(param_1 + 0x24) = (int)((unsigned long long)temp_v11 >> 0x20);
      *(float *)(param_1 + 0x28) = temp_v9;
      FUN_00287be4();
      *(float *)(param_1 + 0x2c) = temp_v16;
      return 1;
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 4) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
