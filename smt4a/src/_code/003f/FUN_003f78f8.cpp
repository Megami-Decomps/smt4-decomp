/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f78f8` (_code @ 0x3f78f8, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_0018408c(unsigned char *, int);
int renderCtxCalculateStereoParallax(...);
int uiDrawStereoKindIcon(...);
int FUN_003f707c(int, int, int, int, int, int, int, int);
int FUN_003f757c(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
} param_3_stack;

extern unsigned char LAB_003f7b34; /* 0x3f7b34 */
extern unsigned char LAB_003f7b60; /* 0x3f7b60 */
extern unsigned char LAB_003f7b64; /* 0x3f7b64 */
extern unsigned char LAB_003f7ba0; /* 0x3f7ba0 */
extern unsigned char LAB_003f7bac; /* 0x3f7bac */
extern unsigned char LAB_003f7be0; /* 0x3f7be0 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: uiDrawStereoKindIcon. */
/* Supplied declaration required: FUN_003f707c. */
/* Supplied declaration required: FUN_003f757c. */


void FUN_003f78f8(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  unsigned char *puVar5;
  unsigned char temp_v4 [64];
  unsigned char temp_v5 [64];
  unsigned char temp_v6 [96];
  int temp_v7;
  int iStack_2c;
  int iStack_28;
  
  temp_v7 = param_1;
  iStack_2c = param_2;
  iStack_28 = param_3;
  FUN_003f707c(param_1,param_2,param_3,0xd3,0xe9,0xf2,0xf7,0xf5);
  if (*(char *)(temp_v7 + 0xc) != '\0') {
    textFormatBuffer(temp_v6,&LAB_003f7b60,&LAB_003f7b34);
    textFormatBuffer(temp_v4,&LAB_003f7b60,&LAB_003f7b64);
    textFormatBuffer(temp_v5,&LAB_003f7b60,&LAB_003f7ba0);
  }
  else {
    textFormatBuffer(temp_v6,&LAB_003f7b60,&LAB_003f7bac);
    textFormatBuffer(temp_v4,&LAB_003f7b60,&LAB_003f7be0);
    textFormatBuffer(temp_v5,&LAB_003f7b60,&LAB_003f7ba0);
  }
  temp_v3 = 0.26f;
  puVar5 = temp_v6;
  temp_v2 = temp_v3;
  renderCtxCalculateStereoParallax(g_renderCtx);
  efctSetSpeed();
  temp_v0 = FUN_001834a4(0x31,0xf1);
  FUN_0018408c(puVar5,3);
  temp_v1 = (int)*(short *)(temp_v0 + 8) + param_2 + (int)temp_v3;
  VectorSignedToFloat(*(short *)(temp_v0 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0xff,puVar5,temp_v1);
  FUN_003f757c(temp_v7,param_2,param_3,0xd8,temp_v4,0xf6,0xf5,0,1);
  uiDrawStereoKindIcon(temp_v7,param_2,param_3,0xd8,0xb,0x106);
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v0 = FUN_001834a4(0x31,0xfb);
  temp_v1 = (int)*(short *)(temp_v0 + 8) + param_2 + (int)temp_v2;
  VectorSignedToFloat(*(short *)(temp_v0 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0xffffffff,temp_v5,temp_v1);
  efctSetSpeed();
  return;
}

} /* extern "C" */
