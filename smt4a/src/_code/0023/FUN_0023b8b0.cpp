/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b8b0` (_code @ 0x23b8b0, 0x794 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

extern "C" {

int textDrawString(...);
int FUN_00164b5c(...);
int vec2GetXInt(...);
int vec2GetYInt(...);
int efctSetSpeed(void);
int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);
int debugDrawText(...);
int FUN_00285b58(...);
int FUN_002a7bb8(...);
int FUN_002a968c(...);
int FUN_002aa038(...);
int FUN_002c8940(unsigned int, unsigned int);
int FUN_002f197c(...);
int uiDrawRotatingGridHighlights(...);
int FUN_00344cd0(...);
int FUN_0034abe0(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_0023c044; /* 0x23c044 */
extern int g_unite; /* 0x57f290 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
extern int asdTMTexTableEntryAt(unsigned int, unsigned int);
/* Supplied declaration required: debugDrawText. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_00285b58. */
/* Supplied declaration required: FUN_002a7bb8. */
/* Supplied declaration required: FUN_002a968c. */
/* Supplied declaration required: FUN_002aa038. */
/* Supplied declaration required: FUN_002c8940. */
/* Supplied declaration required: FUN_002f197c. */
/* Supplied declaration required: uiDrawRotatingGridHighlights. */
/* Supplied declaration required: FUN_00344cd0. */
/* Supplied declaration required: FUN_0034abe0. */


unsigned int FUN_0023b8b0(void)

{
/* irregular: irregular input(s): in_fpscr; 20 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  
  temp_v0 = g_unite;
  FUN_00157558(reinterpret_cast<RenderCtxA *>(g_renderCtx));
  temp_v2 = g_renderCtx;
  temp_v1 = FUN_001692ac(1,0);
  piVar11 = (int *)(temp_v2 + 0x1258);
  temp_v8 = *piVar11;
  temp_v9 = piVar11[temp_v8 + 2];
  *piVar11 = temp_v8 + 1;
  piVar11[temp_v8 + 3] = temp_v1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v9 != temp_v1) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  temp_v2 = *(int *)(temp_v0 + 0x400);
  if (temp_v2 == 0x22 || temp_v2 == 0x23) {
    temp_v2 = *(int *)(temp_v0 + 0x408);
  }
  if ((temp_v2 == 0x28 || temp_v2 == 0xc) || temp_v2 == 0xe) {
    temp_v2 = *(int *)(temp_v0 + 0x404);
  }
  if (temp_v2 == 0x24) {
    temp_v2 = *(int *)(temp_v0 + 0x408);
  }
  switch(temp_v2) {
  case 3:
  case 4:
    temp_v4 = vec2GetXInt(temp_v0 + 0x1c8);
    temp_v5 = vec2GetYInt(temp_v0 + 0x1c8);
    FUN_002c8940(temp_v4,temp_v5);
    break;
  case 5:
  case 8:
  case 9:
  case 10:
    temp_v10 = *(int *)(temp_v0 + 0x400) == 9;
    if ((!temp_v10) && (*(int *)(temp_v0 + 0x400) == 10)) {
      temp_v10 = 2;
    }
    temp_v2 = vec2GetXInt(temp_v0 + 0x1c8);
    temp_v1 = vec2GetYInt(temp_v0 + 0x1c8);
    FUN_00285b58(temp_v2,temp_v1,temp_v10);
    temp_v8 = vec2GetXInt(temp_v0 + 0x254);
    temp_v9 = vec2GetYInt(temp_v0 + 0x254);
    efctSetSpeed();
    FUN_001835b4(2,0x1a,0x271,temp_v2 + temp_v8,temp_v9 + temp_v1,0x79);
    FUN_00344cd0(temp_v0 + 0x4fc,temp_v2 + temp_v8,temp_v9 + temp_v1,0x1a,0x1c,0x1d,0x1e,0x18,0x1a,0x19,0x1b,
                 (int)*(short *)(temp_v0 + 0x476),(int)*(short *)(temp_v0 + 0x472),
                 (int)*(short *)(temp_v0 + 0x474),0x79,0);
    efctSetSpeed();
    break;
  case 6:
    temp_v2 = vec2GetXInt(temp_v0 + 0x1c8);
    temp_v1 = vec2GetYInt(temp_v0 + 0x1c8);
    FUN_00285b58(temp_v2,temp_v1,0);
    FUN_002aa038(temp_v2,temp_v1);
    temp_v8 = vec2GetXInt(temp_v0 + 0x254);
    temp_v9 = vec2GetYInt(temp_v0 + 0x254);
    efctSetSpeed();
    FUN_001835b4(2,0x1a,0x271,temp_v2 + temp_v8,temp_v1 + temp_v9,0x79);
    FUN_00344cd0(temp_v0 + 0x560,temp_v2 + temp_v8,temp_v1 + temp_v9,0x1a,0x1c,0x1d,0x1e,0x18,0x1a,0x19,0x1b,
                 (int)*(short *)(temp_v0 + 0x476),(int)*(short *)(temp_v0 + 0x472),
                 (int)*(short *)(temp_v0 + 0x474),0x79,0);
    efctSetSpeed();
    break;
  case 7:
    debugDrawText(0xff,"\x82r\x82\x85\x82\x81\x82\x92\x82\x83\x82\x88\x82\x89\x82\x8e\x82\x87\x81@");
    break;
  case 0xb:
    temp_v4 = 0;
    if ((*(int *)(temp_v0 + 0x400) == 0xb) && (*(char *)(temp_v0 + 0x252) != '\0')) {
      temp_v4 = 1;
    }
    temp_v5 = vec2GetXInt(temp_v0 + 0x1c8);
    temp_v3 = vec2GetYInt(temp_v0 + 0x1c8);
    FUN_0034abe0(temp_v5,temp_v3,0,temp_v4);
    break;
  case 0xd:
    temp_v4 = 0;
    if ((*(int *)(temp_v0 + 0x400) == 0xd) && (*(char *)(temp_v0 + 0x252) != '\0')) {
      temp_v4 = 1;
    }
    temp_v5 = vec2GetXInt(temp_v0 + 0x1c8);
    temp_v3 = vec2GetYInt(temp_v0 + 0x1c8);
    FUN_002a7bb8(temp_v5,temp_v3,temp_v4);
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    temp_v4 = 0;
    if ((*(int *)(temp_v0 + 0x400) == 0xf) && (*(char *)(temp_v0 + 0x252) != '\0')) {
      temp_v4 = 1;
    }
    temp_v2 = *(int *)(temp_v0 + 0x400);
    temp_v10 = temp_v2 == 0x10;
    if (!temp_v10) {
      if (temp_v2 == 0x11) {
        temp_v10 = 2;
      }
      else if (temp_v2 == 0x12) {
        temp_v10 = 3;
      }
    }
    temp_v5 = vec2GetXInt(temp_v0 + 0x1c8);
    temp_v3 = vec2GetYInt(temp_v0 + 0x1c8);
    temp_v2 = *(int *)(temp_v0 + 0x400);
    temp_v11 = temp_v2 == 0x24;
    if (temp_v11) {
      temp_v2 = *(int *)(temp_v0 + 0x40c);
    }
    FUN_002a968c(temp_v5,temp_v3,temp_v10,(temp_v11 && temp_v2 == 0x1c) || *(int *)(temp_v0 + 0x404) == 0x1c,
                 temp_v4,(int)*(char *)(temp_v0 + 0x9071),*(int *)(temp_v0 + 0x404) == 0x1e);
    break;
  case 0x1a:
    debugDrawText(0xff,"\x82`\x81@\x82\x86\x82\x95\x82\x93\x82\x89\x82\x8f\x82\x8e\x81@\x82\x85\x82\x92\x82\x92\x82\x8f\x82\x92\x81@\x82\x88\x82\x81\x82\x93\x81@\x82\x8f\x82\x83\x82\x83\x82\x95\x82\x92\x82\x92\x82\x85\x82\x84\x81D");
    break;
  case 0x1b:
    temp_v4 = 0;
    if ((*(int *)(temp_v0 + 0x400) == 0x1b) && (*(char *)(temp_v0 + 0x252) != '\0')) {
      temp_v4 = 1;
    }
    if (g_unite != 0) {
      temp_v11 = *(int *)(g_unite + 0x434) != 0x18;
      temp_v2 = g_unite;
      if (temp_v11) {
        temp_v2 = *(int *)(g_unite + 0x488);
      }
      if (!temp_v11 || temp_v2 == 0x18) {
        temp_v4 = 0;
      }
    }
    temp_v5 = vec2GetXInt(temp_v0 + 0x1c8);
    temp_v3 = vec2GetYInt(temp_v0 + 0x1c8);
    FUN_0034abe0(temp_v5,temp_v3,1,temp_v4);
    break;
  case 0x1c:
    temp_v4 = vec2GetXInt(temp_v0 + 0x1c8);
    temp_v5 = vec2GetYInt(temp_v0 + 0x1c8);
    FUN_002f197c(temp_v4,temp_v5);
  }
  temp_v2 = FUN_0026140c();
  temp_v6 = temp_v2 + 0x20;
  if (*(int *)(temp_v0 + 0x400) == 5 || *(int *)(temp_v0 + 0x400) == 6) {
    temp_v11 = *(char *)(temp_v0 + 0x9090) != '\0';
    if (temp_v11) {
      temp_v6 = (unsigned int)*(unsigned char *)(temp_v2 + 0x33);
    }
    if (temp_v11 && temp_v6 != 0) {
      FUN_001835b4(2,0x1a,0x1d9,0,0,0xfb);
      FUN_00164b5c(2,0x1a,0x13,0,0,0xfb);
      temp_v2 = asdTMTexTableEntryAt(0x1a,0x1dc);
      VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(4,0x57d8ffff,&LAB_0023c044);
      temp_v6 = (*(unsigned char *)(temp_v0 + 0x9278) + 1) & 0xff;
      temp_v7 = temp_v6 % 0x28;
      *(char *)(temp_v0 + 0x9278) = (char)temp_v7;
      uiDrawRotatingGridHighlights(0x1e0,temp_v7,temp_v6 * -0x33333333);
    }
  }
  temp_v0 = g_renderCtx;
  piVar11 = (int *)(g_renderCtx + 0x1258);
  temp_v2 = *piVar11;
  temp_v1 = piVar11[temp_v2 + 2];
  *piVar11 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar11[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return 0;
}

} /* extern "C" */
