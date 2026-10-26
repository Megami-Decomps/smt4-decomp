/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00165b08` (_code @ 0x165b08, 0x808 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "addon/LookupRecord.h"

extern "C" {

int renderCtxPopState(...);

int textFormatBuffer(...);
int textDrawString(...);
int vec2GetXInt(...);
int vec2GetYInt(...);
int efctSetSpeed(void);
int renderStackPushIndexed(unsigned int, int, unsigned int);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_00183bb0(void);
int fontMeasureLineAdvance(...);
int drawSetColorFromRGBA8(...);
int renderCtxCalculateStereoParallax(...);
int jobGetScalarValue(void);
int rt_aeabi_memclr(...);
int VectorSignedToFloat(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE8; /* 0xe8: local_e8 */
} void_stack;

extern unsigned char DAT_00530b54; /* 0x530b54 */
extern unsigned char DAT_00530b58; /* 0x530b58 */
extern unsigned char g_messageMain; /* 0x57f588 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxPopState. */
/* Supplied declaration required: renderStackPushIndexed. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
extern int asdTMTexTableEntryAt(unsigned int, int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern int FUN_00184ed0(void);
extern int saveSlotFindById(unsigned int);
extern int FUN_00187068(int);
extern int FUN_00187168(void);
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: jobGetScalarValue. */
/* Supplied declaration required: rt_aeabi_memclr. */


void FUN_00165b08(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 17 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char *puVar8;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  unsigned int temp_v14;
  long long temp_v15;
  int temp_v16;
  unsigned char temp_v17 [64];
  unsigned char temp_v18 [100];
  
  temp_v7 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
  vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
  vec2GetYInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
  temp_v2 = FUN_001692ac(1,0);
  renderStackPushIndexed(g_renderCtx,3,temp_v2);
  FUN_00183bb0();
  temp_v14 = 0x3e800000;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v10 = 0;
  temp_v15 = (unsigned long long)temp_v14 << 0x20;
  temp_v9 = 0;
  do {
    temp_v3 = FUN_00187068(temp_v9);
    temp_v12 = 0;
    temp_v4 = FUN_00187168();
    if (temp_v4 != 0) {
      temp_v4 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
      temp_v5 = vec2GetYInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb00);
      temp_v8 = 0;
      do {
        if (*(int *)(temp_v7 + 0x9c) < temp_v8) break;
        temp_v6 = saveSlotFindById(*(unsigned int *)(temp_v7 + temp_v8 * 4 + 0xac) & 0xffff);
        if ((*(char *)(temp_v7 + temp_v8 + 0xdc) == '\0') &&
           (*(short *)(temp_v3 + 300) == *(short *)(temp_v6 + 300))) {
          temp_v4 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + temp_v8 * 0x8c + 0xdbc);
          temp_v5 = vec2GetYInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + temp_v8 * 0x8c + 0xdbc);
          temp_v12 = 1;
          break;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0xc);
      if (*(char *)(temp_v7 + 0xe9) != '\0') {
        if (temp_v12) goto LAB_00165eec;
        temp_v5 = temp_v5 + *(int *)(temp_v7 + temp_v9 * 4 + 0xec);
      }
      temp_v13 = (float)((unsigned long long)temp_v15 >> 0x20);
      renderCtxCalculateStereoParallax(g_renderCtx);
      temp_v4 = (int)temp_v13 + temp_v4;
      efctSetSpeed();
      temp_v8 = asdTMTexTableEntryAt(0x14,temp_v10 + 0xc34);
      temp_v6 = (int)*(short *)(temp_v8 + 10);
      temp_v11 = temp_v6 + temp_v5;
      temp_v8 = *(short *)(temp_v8 + 8) + temp_v4;
      if (temp_v10 == 0) {
        temp_v6 = 0xbb9;
      }
      temp_v16 = 0xbba;
      if (temp_v10 == 0) {
        temp_v16 = temp_v6;
      }
      if ((*(char *)(temp_v7 + 0xe8) != '\0') && (temp_v6 = FUN_00184ed0(), temp_v6 == temp_v10)) {
        drawSetColorFromRGBA8(0x57d8ffff);
      }
      FUN_001835b4(2,0x14,0xc12,temp_v8,temp_v11,0xbf);
      if ((*(char *)(temp_v7 + 0xe8) != '\0') && (temp_v6 = FUN_00184ed0(), temp_v6 == temp_v10)) {
        FUN_00183bb0();
      }
      FUN_001835b4(2,0x14,temp_v16,temp_v8,temp_v11,0xbf);
      temp_v8 = asdTMTexTableEntryAt(0x14,temp_v10 + 0xc42);
      FUN_0018152c((int)*(short *)(temp_v3 + 0x62),*(short *)(temp_v8 + 8) + temp_v4,
                   *(short *)(temp_v8 + 10) + temp_v5,0xc4,0);
      temp_v8 = asdTMTexTableEntryAt(0x14,temp_v10 + 0xc3b);
      FUN_001835b4(2,0x14,0xbc2,*(short *)(temp_v8 + 8) + temp_v4,*(short *)(temp_v8 + 10) + temp_v5,0xbf)
      ;
      textFormatBuffer(temp_v18,&DAT_00530b58,*(unsigned short *)(temp_v3 + 100));
      temp_v8 = asdTMTexTableEntryAt(0x14,temp_v10 * 3 + 0xc52);
      temp_v0 = *(short *)(temp_v8 + 8);
      temp_v1 = *(short *)(temp_v8 + 10);
      drawSetColorFromRGBA8(0xffffffff);
      FUN_00180310(0,temp_v0 + temp_v4,temp_v1 + temp_v5,1,3,0xce,temp_v18);
      FUN_00183bb0();
      rt_aeabi_memclr(temp_v17,0x40);
      temp_v2 = (unsigned int)FUN_00180114(*(unsigned short *)(temp_v3 + 0x62));
      textFormatBuffer(temp_v17,&DAT_00530b54,temp_v2);
      temp_v3 = asdTMTexTableEntryAt(0x14,temp_v10 + 0xc49);
      puVar8 = temp_v17;
      fontMeasureLineAdvance(puVar8,2);
      temp_v4 = temp_v4 + (int)*(short *)(temp_v3 + 8) +
                      ((int)**(short **)(temp_v3 + 0xc) - (int)puVar8) / 2;
      VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,0xff,temp_v17,temp_v4);
      temp_v10 = temp_v10 + 1;
    }
LAB_00165eec:
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0xc);
  temp_v9 = 0;
  do {
    temp_v13 = (float)((unsigned long long)temp_v15 >> 0x20);
    if (*(int *)(temp_v7 + 0x9c) < temp_v9) break;
    temp_v14 = temp_v7 + temp_v9;
    temp_v12 = *(char *)(temp_v14 + 0xa0) != '\0';
    if (temp_v12) {
      temp_v14 = (unsigned int)*(unsigned char *)(temp_v14 + 0xdc);
    }
    if ((temp_v12 && temp_v14 != 0) && (temp_v14 = *(unsigned int *)(temp_v7 + temp_v9 * 4 + 0xac), temp_v14 != 0)) {
      temp_v3 = saveSlotFindById(temp_v14 & 0xffff);
      temp_v4 = vec2GetXInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + temp_v9 * 0x8c + 0xdbc);
      temp_v5 = vec2GetYInt((*(int *)((unsigned char *)&g_messageMain + 0x8)) + temp_v9 * 0x8c + 0xdbc);
      efctSetSpeed();
      temp_v8 = asdTMTexTableEntryAt(0x14,temp_v10 + 0xc34);
      temp_v6 = (int)*(short *)(temp_v8 + 10);
      temp_v11 = temp_v6 + temp_v5;
      temp_v8 = *(short *)(temp_v8 + 8) + temp_v4;
      if (temp_v10 == 0) {
        temp_v6 = 0xbb9;
      }
      temp_v16 = 0xbba;
      if (temp_v10 == 0) {
        temp_v16 = temp_v6;
      }
      if ((*(char *)(temp_v7 + 0xe8) != '\0') && (temp_v6 = FUN_00184ed0(), temp_v6 == temp_v10)) {
        drawSetColorFromRGBA8(0x57d8ffff);
      }
      FUN_001835b4(2,0x14,0xc12,temp_v8,temp_v11,0xbf);
      if ((*(char *)(temp_v7 + 0xe8) != '\0') && (temp_v6 = FUN_00184ed0(), temp_v6 == temp_v10)) {
        FUN_00183bb0();
      }
      FUN_001835b4(2,0x14,temp_v16,temp_v8,temp_v11,0xbf);
      temp_v8 = asdTMTexTableEntryAt(0x14,temp_v10 + 0xc42);
      FUN_0018152c((int)*(short *)(temp_v3 + 0x62),*(short *)(temp_v8 + 8) + temp_v4,
                   *(short *)(temp_v8 + 10) + temp_v5,0xc4,0);
      temp_v8 = asdTMTexTableEntryAt(0x14,temp_v10 + 0xc3b);
      FUN_001835b4(2,0x14,0xbc2,*(short *)(temp_v8 + 8) + temp_v4,*(short *)(temp_v8 + 10) + temp_v5,0xbf)
      ;
      textFormatBuffer(temp_v18,&DAT_00530b58,*(unsigned short *)(temp_v3 + 100));
      temp_v8 = asdTMTexTableEntryAt(0x14,temp_v10 * 3 + 0xc52);
      temp_v0 = *(short *)(temp_v8 + 8);
      temp_v1 = *(short *)(temp_v8 + 10);
      drawSetColorFromRGBA8(0xffffffff);
      FUN_00180310(0,temp_v0 + temp_v4,temp_v1 + temp_v5,1,3,0xce,temp_v18);
      FUN_00183bb0();
      rt_aeabi_memclr(temp_v17,0x40);
      temp_v2 = (unsigned int)FUN_00180114(*(unsigned short *)(temp_v3 + 0x62));
      textFormatBuffer(temp_v17,&DAT_00530b54,temp_v2);
      temp_v3 = asdTMTexTableEntryAt(0x14,temp_v10 + 0xc49);
      puVar8 = temp_v17;
      fontMeasureLineAdvance(puVar8,2);
      temp_v4 = temp_v4 + (int)*(short *)(temp_v3 + 8) +
                      ((int)**(short **)(temp_v3 + 0xc) - (int)puVar8) / 2;
      VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,0xff,temp_v17,temp_v4);
      temp_v10 = temp_v10 + 1;
    }
    temp_v13 = (float)((unsigned long long)temp_v15 >> 0x20);
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0xc);
  if (*(char *)(temp_v7 + 0xe8) != '\0') {
    renderCtxCalculateStereoParallax(g_renderCtx);
    jobGetScalarValue();
    efctSetSpeed();
    temp_v7 = FUN_00184ed0();
    if (-1 < temp_v7) {
      temp_v7 = asdTMTexTableEntryAt(0x14,temp_v7 + 0xc34);
      temp_v9 = (int)*(short *)(temp_v7 + 8) + ((int)temp_v13 - 2);
      temp_v7 = *(short *)(temp_v7 + 10) - 2;
      efctSetSpeed();
      FUN_001835b4(2,0x14,0xbe2,temp_v9,temp_v7,0xc9);
      FUN_001835b4(2,0x14,0xbe3,temp_v9,temp_v7,0xc9);
      FUN_001835b4(2,0x14,0xbe4,temp_v9,temp_v7,0xc9);
      FUN_00183bb0();
    }
    efctSetSpeed();
  }
  efctSetSpeed();
  FUN_00183bb0();
  renderCtxPopState(g_renderCtx,3);
  return;
}

} /* extern "C" */
