/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011aa94` (_code @ 0x11aa94, 0x444 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b6758(...);
int FUN_002b6940(...);
int FUN_002ba12c(int);
int FUN_002bcf4c(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002be90c(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int efctSetSpeed(void);
int FUN_002c39a4(int);
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

extern int g_guestWin; /* 0x43e110 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002b6940. */
extern int FUN_002b6a54(int, unsigned short);
extern int FUN_002b6ad0(void);
extern int FUN_002b6b04(void);
extern int gameGetOptions(void);
extern int FUN_002b6b38(void);
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bcf4c. */
extern unsigned int FUN_002bd068(unsigned short);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be90c. */
/* Supplied declaration required: FUN_002bed3c. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


unsigned int FUN_0011aa94(void)

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
  if ((((*(int *)(g_guestWin + 8) != 0) && (temp_v1 = FUN_002b6b38(), temp_v1 != 0)) && (temp_v1 != 1))
     && (temp_v1 = gameGetOptions(), *(short *)(temp_v1 + 0x46) != 0)) {
    FUN_002c39a4(g_titleScene);
    temp_v3 = g_titleScene;
    temp_v2 = FUN_002c5d80(1,0);
    piVar10 = (int *)(temp_v3 + 0x124c);
    temp_v7 = *piVar10;
    temp_v8 = piVar10[temp_v7 + 2];
    *piVar10 = temp_v7 + 1;
    piVar10[temp_v7 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v8 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = vec2GetXInt(temp_v4 + 0x30);
    temp_v9 = 0.27f;
    FUN_002ba12c(g_titleScene);
    temp_v4 = vec2GetYInt(temp_v4 + 0x30);
    efctSetSpeed();
    temp_v2 = FUN_002bf4f8(0xe,0xda);
    temp_v7 = FUN_002b6b04();
    if (temp_v7 != 0) {
      temp_v2 = FUN_002bf4f8(0xe,0xdb);
    }
    temp_v7 = g_titleScene;
    temp_v8 = temp_v3 + (int)temp_v9 + (int)*(short *)(temp_v2 + 8);
    temp_v4 = *(short *)(temp_v2 + 10) + temp_v4;
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar10 = (int *)(temp_v7 + 0x12ac);
    temp_v2 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = temp_v3;
    if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v2 != temp_v3) {
      (**(romwright_code **)(temp_v7 + 0x12c8))();
      *(unsigned char *)(temp_v7 + 0x12c4) = 0;
    }
    FUN_002bf288(2,0xe,0xc9,temp_v8,temp_v4,0x15);
    temp_v3 = g_titleScene;
    temp_v2 = packNibblesAndByte(6,7,0);
    piVar10 = (int *)(temp_v3 + 0x12ac);
    temp_v7 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = temp_v2;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v7 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    FUN_002bf288(2,0xe,0xca,temp_v8,temp_v4,0x1a);
    FUN_002bf288(2,0xe,0xcb,temp_v8,temp_v4,0x1a);
    FUN_002bf288(2,0xe,0xcc,temp_v8,temp_v4,0x1a);
    FUN_002bf288(2,0xe,0xcd,temp_v8,temp_v4,0x1a);
    FUN_002bf288(2,0xe,0xce,temp_v8,temp_v4,0x1f);
    FUN_002bf288(2,0xe,0xcf,temp_v8,temp_v4,0x1f);
    FUN_002be90c((int)*(short *)(temp_v1 + 0x2a),(int)*(short *)(temp_v1 + 0xe),0,0,0xe,0xd0,0xd3,0xd2,
                 0xd1,temp_v8,temp_v4,0x24,0);
    temp_v3 = FUN_002bf4f8(0xe,0xd9);
    temp_v2 = FUN_002b6ad0();
    if (temp_v2 != 0) {
      temp_v1 = gameGetOptions();
      temp_v0 = *(unsigned short *)(temp_v1 + 0x606);
      temp_v1 = gameGetOptions();
      temp_v1 = FUN_002b6a54((int)*(short *)(temp_v1 + 0x604),temp_v0);
      FUN_002b6940(*(unsigned short *)(temp_v1 + 0x5a),*(short *)(temp_v3 + 8) + temp_v8,
                   *(short *)(temp_v3 + 10) + temp_v4,0x24);
      temp_v1 = gameGetOptions();
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x604);
      FUN_002bcf4c(temp_v5);
      textFormatBuffer(temp_v10,temp_v5);
    }
    else {
      FUN_002b6758((int)*(short *)(temp_v1 + 0x46),*(short *)(temp_v3 + 8) + temp_v8,
                   *(short *)(temp_v3 + 10) + temp_v4,0x24,0);
      temp_v6 = FUN_002bd068(*(unsigned short *)(temp_v1 + 0x46));
      textFormatBuffer(temp_v10,temp_v6);
    }
    temp_v1 = FUN_002bf4f8(0xe,0xd8);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xff,temp_v10);
    FUN_002bed3c();
    efctSetSpeed();
    temp_v4 = g_titleScene;
    piVar10 = (int *)(g_titleScene + 0x124c);
    temp_v1 = *piVar10;
    temp_v3 = piVar10[temp_v1 + 2];
    *piVar10 = temp_v1 - 1;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != piVar10[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v4 + 0x1268))();
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
