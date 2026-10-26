/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002835f4` (_code @ 0x2835f4, 0x454 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_001640cc(...);
int efctSetSpeed(void);
int renderCtxSelectTexture(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int renderCtxCalculateStereoParallax(...);
int screenDrawShadedRect(...);
int __aeabi_vec_ctor_nocookie_nodtor(int *, unsigned char *, int, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned char LAB_00192824; /* 0x192824 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int asdTMTexTableGetHeaderValue(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001640cc. */
extern int jobGetWork(void);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxSelectTexture. */
extern int asdTMTexTableEntryAt(unsigned int, int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: screenDrawShadedRect. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


unsigned int FUN_002835f4(void)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int *piVar12;
  unsigned int in_fpscr;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  
  temp_v0 = jobGetWork();
  if (*(int *)(temp_v0 + 0xc) == 0 || *(int *)(temp_v0 + 0xc) == 2) {
    return 0;
  }
  temp_v1 = *(int *)(*(int *)(temp_v0 + 0x24) * 0x10 + 0x57f440);
  FUN_00157558(g_renderCtx);
  temp_v3 = g_renderCtx;
  temp_v2 = FUN_001692ac(1,0);
  piVar12 = (int *)(temp_v3 + 0x1258);
  temp_v6 = *piVar12;
  temp_v7 = piVar12[temp_v6 + 2];
  *piVar12 = temp_v6 + 1;
  piVar12[temp_v6 + 3] = temp_v2;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v7 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  __aeabi_vec_ctor_nocookie_nodtor(&temp_v11,&LAB_00192824,0x10,4);
  temp_v11 = 0x3f800000;
  temp_v12 = 0x3f800000;
  temp_v13 = 0x3f800000;
  temp_v14 = 0;
  temp_v15 = 0x3f800000;
  temp_v16 = 0x3f800000;
  temp_v17 = 0x3f800000;
  temp_v18 = 0;
  temp_v19 = 0x3f800000;
  temp_v20 = 0x3f800000;
  temp_v21 = 0x3f800000;
  temp_v22 = 0;
  temp_v23 = 0x3f800000;
  temp_v24 = 0x3f800000;
  temp_v25 = 0x3f800000;
  temp_v26 = 0;
  temp_v3 = *(int *)(temp_v0 + 0x24);
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 != 2) {
        if (temp_v3 == 3) {
          temp_v14 = *(unsigned int *)(temp_v0 + 0x18);
          temp_v18 = *(unsigned int *)(temp_v0 + 0x14);
          temp_v22 = temp_v14;
          temp_v26 = temp_v18;
        }
      }
      else {
        temp_v14 = *(unsigned int *)(temp_v0 + 0x14);
        temp_v18 = *(unsigned int *)(temp_v0 + 0x18);
        temp_v22 = temp_v14;
        temp_v26 = temp_v18;
      }
    }
    else {
      temp_v14 = *(unsigned int *)(temp_v0 + 0x14);
      temp_v22 = *(unsigned int *)(temp_v0 + 0x18);
      temp_v18 = temp_v14;
      temp_v26 = temp_v22;
    }
  }
  else {
    temp_v14 = *(unsigned int *)(temp_v0 + 0x14);
    temp_v18 = *(unsigned int *)(temp_v0 + 0x18);
    temp_v22 = temp_v14;
    temp_v26 = temp_v18;
  }
  temp_v3 = asdTMTexTableEntryAt(*(unsigned int *)(*(int *)(temp_v0 + 0x24) * 0x10 + 0x57f43c),temp_v1 * 1000);
  temp_v1 = *(int *)(temp_v0 + 0x24);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 != 3) {
          temp_v8 = (unsigned int)*(short *)(temp_v3 + 8);
          temp_v9 = *(unsigned short *)(temp_v3 + 4) & 0xffff7fff;
          temp_v10 = *(unsigned short *)(temp_v3 + 6) & 0xffff7fff;
          VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        else {
          temp_v10 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
          temp_v9 = (unsigned int)*(short *)(temp_v3 + 8);
          temp_v5 = *(unsigned short *)(temp_v3 + 6) & 0xffff7fff;
          temp_v8 = temp_v10 & 0xffff7fff;
          VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      else {
        temp_v10 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
        temp_v9 = (unsigned int)*(short *)(temp_v3 + 8);
        temp_v5 = *(unsigned short *)(temp_v3 + 6) & 0xffff7fff;
        temp_v8 = temp_v10 & 0xffff7fff;
        VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
    }
    else {
      temp_v10 = (unsigned int)*(unsigned short *)(temp_v3 + 6);
      temp_v9 = (unsigned int)*(short *)(temp_v3 + 10);
      temp_v5 = *(unsigned short *)(temp_v3 + 4) & 0xffff7fff;
      temp_v8 = temp_v10 & 0xffff7fff;
      VectorSignedToFloat((int)*(short *)(temp_v3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
  }
  else {
    temp_v10 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
    temp_v9 = (unsigned int)*(short *)(temp_v3 + 8);
    temp_v5 = *(unsigned short *)(temp_v3 + 6) & 0xffff7fff;
    temp_v8 = temp_v10 & 0xffff7fff;
    VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  renderCtxCalculateStereoParallax(g_renderCtx,temp_v8,temp_v9,temp_v10);
  temp_v3 = *(int *)(temp_v0 + 0x24) * 0x10;
  temp_v4 = asdTMTexTableGetHeaderValue(*(unsigned int *)(temp_v3 + 0x57f43c),*(unsigned int *)(temp_v3 + 0x57f440));
  renderCtxSelectTexture(g_renderCtx,temp_v4);
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x30),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x34),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001640cc(&temp_v11,&temp_v15,&temp_v19,&temp_v23);
  temp_v0 = *(int *)(temp_v0 + 0x28);
  if (temp_v0 != 0) {
    temp_v4 = 0xffffff00;
    if (temp_v0 == 1) {
      temp_v4 = 0xff0000ff;
    }
    else if (temp_v0 == 2) {
      temp_v4 = 0xffff00ff;
    }
    drawSetColorFromRGBA8(temp_v4);
    efctSetSpeed();
    screenDrawShadedRect(0,0,400,0xf0,0x2e);
  }
  FUN_00183bb0();
  efctSetSpeed();
  temp_v0 = g_renderCtx;
  piVar12 = (int *)(g_renderCtx + 0x1258);
  temp_v3 = *piVar12;
  temp_v1 = piVar12[temp_v3 + 2];
  *piVar12 = temp_v3 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar12[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  return 0;
}

} /* extern "C" */
