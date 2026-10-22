/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ca878` (_code @ 0x2ca878, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(int, int, int, int, int);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_0018408c(...);
int drawSetColorFromRGBA8(...);
int renderCtxCalculateStereoParallax(unsigned int);
int jobGetScalarValue(void);
int VectorSignedToFloat(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_3_stack;

extern unsigned char LAB_002caaec; /* 0x2caaec */
extern unsigned char LAB_002cab0c; /* 0x2cab0c */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_00180114(unsigned int);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: jobGetScalarValue. */


void FUN_002ca878(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned char temp_v7 [64];
  unsigned char temp_v8 [80];
  unsigned long long temp_v9;
  
  temp_v6 = 0.26f;
  temp_v9 = 0x3e851eb8;
  renderCtxCalculateStereoParallax(g_renderCtx);
  jobGetScalarValue();
  efctSetSpeed();
  temp_v3 = 0;
  do {
    FUN_001835b4(2,0x14,temp_v3 + 0xc18,param_2 + (int)temp_v6,param_3,0xbf);
    temp_v5 = (float)temp_v9;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  temp_v2 = FUN_00180114(799);
  textFormatBuffer(temp_v7,&LAB_002caaec,temp_v2);
  temp_v6 = temp_v5;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v3 = FUN_001834a4(0x14,0xc1c);
  temp_v4 = (int)*(short *)(temp_v3 + 8) + param_2 + (int)temp_v5;
  temp_v3 = *(short *)(temp_v3 + 10) + param_3;
  FUN_001835b4(2,0x14,0xc13,temp_v4,temp_v3,0xbf);
  FUN_001835b4(2,0x14,0xbba,temp_v4,temp_v3,0xbf);
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v3 = FUN_001834a4(0x14,0xc1e);
  temp_v4 = param_2 + (int)temp_v6;
  FUN_0018152c(799,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + param_3,0xc4,0);
  temp_v3 = FUN_001834a4(0x14,0xc1d);
  FUN_001835b4(2,0x14,0xbc2,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + param_3,0xbf);
  textFormatBuffer(temp_v8,&LAB_002cab0c,99);
  temp_v3 = FUN_001834a4(0x14,0xc22);
  temp_v0 = *(short *)(temp_v3 + 8);
  temp_v1 = *(short *)(temp_v3 + 10);
  drawSetColorFromRGBA8(0xffffffff);
  FUN_00180310(0,temp_v4 + temp_v0,temp_v1 + param_3,1,2,0xce,temp_v8);
  FUN_00183bb0();
  temp_v3 = FUN_001834a4(0x14,0xc1f);
  puVar4 = temp_v7;
  FUN_0018408c(puVar4,2);
  temp_v4 = (int)*(short *)(temp_v3 + 8) + ((int)**(short **)(temp_v3 + 0xc) - (int)puVar4) / 2 + param_2
          + (int)temp_v6;
  VectorSignedToFloat(*(short *)(temp_v3 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xff,temp_v7,temp_v4);
  efctSetSpeed();
  return;
}

} /* extern "C" */
