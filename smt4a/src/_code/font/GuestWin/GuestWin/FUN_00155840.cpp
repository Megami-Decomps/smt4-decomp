/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155840` (_code @ 0x155840, 0x450 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00157558(int);
int FUN_00162790(...);
int FUN_0016432c(...);
int efctSetSpeed(void);
int FUN_00169a1c(...);
int FUN_0018152c(...);
int FUN_001835b4(...);
int FUN_00183788(...);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern int g_guestWin; /* 0x57f570 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
extern int FUN_001632fc(void);
/* Supplied declaration required: FUN_0016432c. */
extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00168518(int, unsigned short);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00169a1c. */
extern unsigned int FUN_0017760c(int);
extern int FUN_00177654(void);
extern unsigned int FUN_00180114(unsigned short);
/* Supplied declaration required: FUN_0018152c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183788. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
extern int gameGetOptions(void);
extern int FUN_001b34b8(void);


unsigned int FUN_00155840(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned int in_fpscr;
  float temp_v9;
  unsigned char temp_v10 [40];
  
  temp_v4 = g_guestWin;
  if ((((*(int *)(g_guestWin + 8) != 0) && (temp_v1 = FUN_001b34b8(), temp_v1 != 0)) && (temp_v1 != 1))
     && (temp_v1 = gameGetOptions(), *(short *)(temp_v1 + 0x62) != 0)) {
    FUN_00157558(g_renderCtx);
    temp_v3 = g_renderCtx;
    temp_v2 = FUN_001692ac(1,0);
    piVar10 = (int *)(temp_v3 + 0x1258);
    temp_v7 = *piVar10;
    temp_v8 = piVar10[temp_v7 + 2];
    *piVar10 = temp_v7 + 1;
    piVar10[temp_v7 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v8 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    temp_v3 = FUN_001654d8(temp_v4 + 0x30);
    temp_v9 = 0.25f;
    FUN_001879d0(g_renderCtx);
    temp_v4 = FUN_001654e4(temp_v4 + 0x30);
    efctSetSpeed();
    temp_v2 = FUN_001834a4(8,0xda);
    temp_v7 = FUN_001632fc();
    if (temp_v7 != 0) {
      temp_v2 = FUN_001834a4(8,0xdb);
    }
    temp_v7 = g_renderCtx;
    temp_v8 = temp_v3 + (int)temp_v9 + (int)*(short *)(temp_v2 + 8);
    temp_v4 = *(short *)(temp_v2 + 10) + temp_v4;
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar10 = (int *)(temp_v7 + 0x12b8);
    temp_v2 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = temp_v3;
    if (*(char *)(temp_v7 + 0x12d0) != '\0' || temp_v2 != temp_v3) {
      (**(romwright_code **)(temp_v7 + 0x12d4))();
      *(unsigned char *)(temp_v7 + 0x12d0) = 0;
    }
    FUN_001835b4(2,8,0xc9,temp_v8,temp_v4,0x15);
    temp_v3 = g_renderCtx;
    temp_v2 = packNibblesAndByte(6,7,0);
    piVar10 = (int *)(temp_v3 + 0x12b8);
    temp_v7 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = temp_v2;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v7 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x12d4))();
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
    FUN_001835b4(2,8,0xca,temp_v8,temp_v4,0x1a);
    FUN_001835b4(2,8,0xcb,temp_v8,temp_v4,0x1a);
    FUN_001835b4(2,8,0xcc,temp_v8,temp_v4,0x1a);
    FUN_001835b4(2,8,0xcd,temp_v8,temp_v4,0x1a);
    FUN_001835b4(2,8,0xce,temp_v8,temp_v4,0x1f);
    FUN_001835b4(2,8,0xcf,temp_v8,temp_v4,0x1f);
    temp_v5 = FUN_0017760c(temp_v1);
    FUN_00183788((int)*(short *)(temp_v1 + 0x2a),temp_v5,0,0,8,0xd0,0xd3,0xd2,0xd1,temp_v8,temp_v4,0x24,0);
    temp_v3 = FUN_001834a4(8,0xd9);
    temp_v2 = FUN_00177654();
    if (temp_v2 != 0) {
      temp_v1 = gameGetOptions();
      temp_v0 = *(unsigned short *)(temp_v1 + 0x12e);
      temp_v1 = gameGetOptions();
      temp_v1 = FUN_00168518((int)*(short *)(temp_v1 + 300),temp_v0);
      FUN_00169a1c(*(unsigned short *)(temp_v1 + 100),*(short *)(temp_v3 + 8) + temp_v8,
                   *(short *)(temp_v3 + 10) + temp_v4,0x24);
      temp_v1 = gameGetOptions();
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v1 + 300);
      FUN_0016432c(temp_v6);
      FUN_00100388(temp_v10,temp_v6);
    }
    else {
      FUN_0018152c((int)*(short *)(temp_v1 + 0x62),*(short *)(temp_v3 + 8) + temp_v8,
                   *(short *)(temp_v3 + 10) + temp_v4,0x24,0);
      temp_v5 = FUN_00180114(*(unsigned short *)(temp_v1 + 0x62));
      FUN_00100388(temp_v10,temp_v5);
    }
    temp_v1 = FUN_001834a4(8,0xd8);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xff,temp_v10);
    FUN_00183bb0();
    efctSetSpeed();
    temp_v4 = g_renderCtx;
    piVar10 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar10;
    temp_v3 = piVar10[temp_v1 + 2];
    *piVar10 = temp_v1 - 1;
    if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v3 != piVar10[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v4 + 0x1274))();
      *(unsigned char *)(temp_v4 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
