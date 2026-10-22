/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004045ac` (_code @ 0x4045ac, 0x3a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int gameGetPlayerData(void);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(int);
int FUN_001879d0(...);
int libc_strcmp(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern unsigned char LAB_00404968; /* 0x404968 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern int gameGetPlayerName(void);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: gameGetPlayerData. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: libc_strcmp. */
extern unsigned int FUN_004038e0(int, unsigned short);


void FUN_004045ac(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  unsigned char temp_v8 [64];
  unsigned int temp_v9;
  
  temp_v9 = 0xffffffff;
  temp_v6 = 0.26f;
  FUN_001879d0(g_renderCtx);
  efctSetSpeed();
  temp_v3 = 0;
  do {
    FUN_001835b4(2,0x32,temp_v3,param_2 + (int)temp_v6,param_3,0x65);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  puVar1 = *(unsigned short **)(param_1 + 0x664);
  temp_v2 = temp_v1;
  if (puVar1 != (unsigned short *)0x0) {
    temp_v2 = (unsigned int)*puVar1;
  }
  piVar4 = (int *)(param_1 + 0x664);
  if (puVar1 != (unsigned short *)0x0 && temp_v2 != 0) {
    temp_v0 = FUN_004038e0(param_1,puVar1[2]);
    switch(*(unsigned short *)(*piVar4 + 4)) {
    default:
      temp_v3 = FUN_001834a4(0x32,0x36);
      temp_v7 = 0.26f;
      temp_v6 = temp_v7;
      FUN_001879d0(g_renderCtx);
      FUN_001835b4(2,0x32,1000,(int)*(short *)(temp_v3 + 8) + (int)temp_v7 + param_2,
                   *(short *)(temp_v3 + 10) + param_3,0x65);
      temp_v3 = FUN_001834a4(0x32,3);
      FUN_001879d0(g_renderCtx);
      FUN_001835b4(2,0x32,temp_v0,(int)*(short *)(temp_v3 + 8) + (int)temp_v6 + param_2,
                   *(short *)(temp_v3 + 10) + param_3,0x65);
      break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
    case 0x12:
      drawSetColorFromRGBA8(0x57d8ffff);
      temp_v3 = FUN_001834a4(0x32,0x36);
      temp_v7 = 0.26f;
      temp_v6 = temp_v7;
      FUN_001879d0(g_renderCtx);
      FUN_001835b4(2,0x32,1000,(int)*(short *)(temp_v3 + 8) + (int)temp_v7 + param_2,
                   *(short *)(temp_v3 + 10) + param_3,0x65);
      temp_v3 = FUN_001834a4(0x32,3);
      FUN_001879d0(g_renderCtx);
      temp_v4 = *(short *)(temp_v3 + 10) + param_3;
      temp_v3 = (int)*(short *)(temp_v3 + 8) + (int)temp_v6 + param_2;
      FUN_001835b4(2,0x32,temp_v0,temp_v3,temp_v4,0x65);
      FUN_001835b4(2,0x32,0x3f1,temp_v3,temp_v4,0x66);
      FUN_00183bb0();
    }
    temp_v4 = FUN_001834a4(0x32,4);
    temp_v5 = *(int *)(param_1 + 0x664) + 0x10;
    temp_v3 = temp_v5;
    libc_strcmp(temp_v5,"<pc 0>");
    if (temp_v3 == 0) {
      gameGetPlayerData();
      temp_v5 = gameGetPlayerName();
    }
    textFormatBuffer(temp_v8,&LAB_00404968,temp_v5);
    temp_v3 = FUN_001834a4(0x32,5);
    temp_v6 = 0.26f;
    FUN_001879d0(g_renderCtx);
    temp_v3 = (int)**(short **)(temp_v3 + 0xc) + (int)*(short *)(temp_v4 + 8) + param_2 + (int)temp_v6;
    VectorSignedToFloat(0x9b,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,temp_v9,temp_v8,temp_v3);
    efctSetSpeed();
    return;
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
