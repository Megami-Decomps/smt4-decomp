#include "util/Vec2Fixed.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a5d8` (_code @ 0x22a5d8, 0xcd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

extern "C" {

int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);
unsigned char* textGetNameToken(unsigned int);
int FUN_00344cd0(...);

int textFormatBuffer(...);
int libc_bsearch(...);
int textDrawString(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int asdTMTexTableEntryAt(...);
int fontMeasureLineAdvance(...);
int FUN_00261468(...);
int gameDataGetPlayerName(void);
int tmnlGetEntryText(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
} void_stack;

extern unsigned char LAB_0022a9d8; /* 0x22a9d8 */
extern unsigned char LAB_0022a9e0; /* 0x22a9e0 */
extern unsigned char LAB_0022b2cc; /* 0x22b2cc */
extern unsigned char LAB_002b2b24; /* 0x2b2b24 */
extern int DAT_0057f280; /* 0x57f280 */
extern int g_renderCtx; /* 0x59dbb4 */
extern signed char g_lmapMain; /* 0x5f1afc */
extern unsigned int DAT_005f1b00; /* 0x5f1b00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_bsearch. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: fontMeasureLineAdvance. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: FUN_00261468. */
/* Supplied declaration required: gameDataGetPlayerName. */
extern int recordGetModeForId(int);
extern int resourceRunOperationIfUnblocked(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: textGetNameToken. */
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_00344cd0. */
extern int uiSearchPrimary(int);
extern int FUN_00358e28(unsigned int);
/* Supplied declaration required: tmnlGetEntryText. */


unsigned int FUN_0022a5d8(void)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  char *pcVar7;
  unsigned int temp_v5;
  unsigned int *puVar9;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar14;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int uStack_194;
  unsigned int uStack_190;
  int temp_v15;
  int temp_v16;
  int iStack_184;
  unsigned int uStack_180;
  unsigned int uStack_17c;
  unsigned char temp_v17 [128];
  unsigned char temp_v18 [128];
  int temp_v19;
  
  temp_v1 = DAT_0057f280;
  temp_v10 = 0;
  if (*(int *)(DAT_0057f280 + 0x744) != 0) {
    FUN_00157558(reinterpret_cast<RenderCtxA *>(g_renderCtx));
    temp_v8 = g_renderCtx;
    temp_v2 = FUN_001692ac(1,0);
    piVar14 = (int *)(temp_v8 + 0x1258);
    temp_v6 = *piVar14;
    temp_v7 = piVar14[temp_v6 + 2];
    *piVar14 = temp_v6 + 1;
    piVar14[temp_v6 + 3] = temp_v2;
    if (*(char *)(temp_v8 + 0x1270) != '\0' || temp_v7 != temp_v2) {
      (**(romwright_code **)(temp_v8 + 0x1274))();
      *(unsigned char *)(temp_v8 + 0x1270) = 0;
    }
    temp_v8 = *(int *)(temp_v1 + 0x744);
    if (*(char *)(temp_v1 + 0x74e) != '\x02') {
      if (*(char *)(temp_v1 + 0x74e) != '\x03') {
        FUN_00164b5c(2,0x15,0,0,0,0xc9);
        FUN_00164b5c(2,0x15,3,0,0,0xd3);
        if (*(char *)(temp_v1 + 0x74e) == '\0') {
          temp_v10 = 0x23;
        }
        else if (*(char *)(temp_v1 + 0x74e) == '\x01') {
          temp_v10 = 0x24;
        }
        FUN_001835b4(2,0x15,temp_v10,0,0,0xd8);
      }
    }
    else {
      temp_v2 = 0;
      if ((temp_v8 == 1) && (temp_v2 = *(int *)(temp_v1 + 0x748) * 2 - 0xc, 0 < temp_v2)) {
        temp_v2 = 0;
      }
      FUN_001835b4(2,0x15,0x28,0,temp_v2,0xc9);
      FUN_001835b4(2,0x15,0x29,0,temp_v2,0xc9);
      temp_v6 = asdTMTexTableEntryAt(0x15,0x2a);
      temp_v7 = FUN_00358e28(*(unsigned int *)(temp_v1 + 0x7ec));
      if (temp_v7 != 0) {
        textFormatBuffer(temp_v17,&LAB_0022a9d8,temp_v7);
      }
      else {
        textFormatBuffer(temp_v17,&LAB_0022a9e0);
      }
      puVar4 = temp_v17;
      fontMeasureLineAdvance(puVar4,2);
      temp_v7 = (int)*(short *)(temp_v6 + 8) + ((int)**(short **)(temp_v6 + 0xc) - (int)puVar4) / 2;
      VectorSignedToFloat(*(short *)(temp_v6 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      textDrawString(2,0xffffffff,temp_v17,temp_v7);
    }
    temp_v19 = temp_v1 + 0x788;
    temp_v2 = 0;
    do {
      if ((temp_v8 == 1) || (temp_v6 = FUN_002a4894(temp_v19), temp_v6 != temp_v2)) {
        efctSetSpeed();
        if (*(char *)(temp_v1 + 0x74e) != '\x02') {
          temp_v6 = asdTMTexTableEntryAt(0x15,temp_v2 + 7);
        }
        else {
          temp_v6 = asdTMTexTableEntryAt(0x15,temp_v2 + 0x2b);
        }
        FUN_00164b5c(2,0x15,1,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xd3);
        temp_v7 = -1;
        if (*(char *)(temp_v1 + 0x74e) != '\x02') {
          temp_v3 = resourceRunOperationIfUnblocked(temp_v19);
          temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 + temp_v2 + temp_v1 + 0x758);
          FUN_00261468(temp_v4);
          textFormatBuffer(temp_v17,&LAB_0022a9d8,temp_v4);
          temp_v3 = resourceRunOperationIfUnblocked(temp_v19);
          temp_v0 = *(unsigned char *)(temp_v3 + temp_v2 + temp_v1 + 0x758);
          if (temp_v0 >= 0x6a) {
            pcVar7 = (char *)0x0;
          }
          else if (temp_v0 != 0x3e) {
            if (temp_v0 == 0x55 || temp_v0 == 0x56) {
              pcVar7 = "1/4         ";
            }
            else if (temp_v0 == 0x57) {
              pcVar7 = "1/6         ";
            }
            else if (temp_v0 == 0x58) {
              pcVar7 = "1/5         ";
            }
            else if (temp_v0 == 0x5a) {
              pcVar7 = "5/5         ";
            }
            else if (temp_v0 != 0x5b) {
              if (temp_v0 != 0x5c) {
                if (temp_v0 != 0x5d) {
                  if (temp_v0 != 0x5e) {
                    if (temp_v0 != 0x5f) {
                      if (temp_v0 == 0x60) {
                        pcVar7 = "5/6         ";
                      }
                      else if (temp_v0 == 0x61) {
                        pcVar7 = "2/6         ";
                      }
                      else if (temp_v0 == 0x62) {
                        pcVar7 = "6/6         ";
                      }
                      else if (temp_v0 == 99) {
                        pcVar7 = "3/6         ";
                      }
                      else if (temp_v0 == 100) {
                        pcVar7 = "2/5         ";
                      }
                      else if (temp_v0 == 0x65) {
                        pcVar7 = "3/5         ";
                      }
                      else if (temp_v0 == 0x66) {
                        pcVar7 = "4/5         ";
                      }
                      else if (temp_v0 != 0x67) {
                        if (temp_v0 == 0x68) {
                          pcVar7 = "4/6         ";
                        }
                        else {
                          temp_v10 = dataTableGet(0x38,0);
                          temp_v5 = dataTableGetEntries();
                          temp_v10 = dataTableGetCount(temp_v10);
                          puVar9 = (unsigned int *)&temp_v12;
                          temp_v12 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v12 + 2)),(unsigned short)temp_v0);
                          libc_bsearch(puVar9,temp_v5,temp_v10,0x68,&LAB_002b2b24);
                          pcVar7 = (char *)((int)puVar9 + 2);
                        }
                      }
                      else {
                        pcVar7 = "4/4         ";
                      }
                    }
                    else {
                      pcVar7 = "4/4         ";
                    }
                  }
                  else {
                    pcVar7 = "2/4         ";
                  }
                }
                else {
                  pcVar7 = "3/4         ";
                }
              }
              else {
                pcVar7 = "2/4         ";
              }
            }
            else {
              pcVar7 = "3/4         ";
            }
          }
          else {
            pcVar7 = (char *)gameDataGetPlayerName();
          }
          textFormatBuffer(temp_v18,&LAB_0022a9d8,pcVar7);
          if ((g_lmapMain != '\0') &&
             (temp_v3 = resourceRunOperationIfUnblocked(temp_v19),
             *(unsigned char *)(temp_v3 + temp_v2 + temp_v1 + 0x758) == DAT_005f1b00)) {
            temp_v7 = 0x787878ff;
          }
        }
        else {
          temp_v3 = resourceRunOperationIfUnblocked(temp_v19);
          temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 + temp_v2 + temp_v1 + 0x758);
          tmnlGetEntryText(temp_v4);
          textFormatBuffer(temp_v17,&LAB_0022a9d8,temp_v4);
        }
        temp_v3 = asdTMTexTableEntryAt(0x15,6);
        puVar4 = temp_v17;
        fontMeasureLineAdvance(puVar4,2);
        temp_v9 = (int)**(short **)(temp_v3 + 0xc);
        temp_v11 = (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) +
                 (temp_v9 - (int)puVar4) / 2;
        if (g_lmapMain != '\0') {
          VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v3 + 10),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          if (temp_v7 != 0x787878ff) {
            VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
            textDrawString(2,0x6ef0ffff,temp_v18,temp_v9);
          }
          else {
            VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
            textDrawString(2,0x787878ff,temp_v18,temp_v9);
          }
        }
        VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v3 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,temp_v7,temp_v17);
        efctSetSpeed();
      }
      temp_v2 = temp_v2 + 1;
      if (*(char *)(DAT_0057f280 + 0x74e) == '\x02') {
        temp_v6 = 10;
      }
      else {
        temp_v6 = 9;
      }
    } while (temp_v2 < temp_v6);
    if (temp_v8 != 1) {
      temp_v2 = FUN_002a4894(temp_v19);
      temp_v8 = -0x60180001;
      if (*(char *)(temp_v1 + 0x74e) != '\x02') {
        temp_v6 = asdTMTexTableEntryAt(0x15,temp_v2 + 0x18);
      }
      else {
        temp_v6 = asdTMTexTableEntryAt(0x15,temp_v2 + 0x35);
      }
      efctSetSpeed();
      FUN_00164b5c(2,0x15,2,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xdd);
      efctSetSpeed();
      FUN_001835b4(2,0x15,0x13,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe2);
      temp_v7 = FUN_002a4894(temp_v19);
      temp_v7 = recordGetModeForId((int)*(short *)(temp_v1 + temp_v7 * 2 + 0x772));
      temp_v3 = -0xa006001;
      if (((temp_v7 == 1 || temp_v7 == 2) || temp_v7 == 6) && (*(int *)(temp_v1 + 0x744) != 3)) {
        FUN_001835b4(2,0x15,0x50,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe4);
        FUN_001835b4(2,0x15,0x51,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe4);
        FUN_001835b4(2,0x15,0x52,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe4);
        FUN_001835b4(2,0x15,0x53,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe4);
        efctSetSpeed();
        FUN_001835b4(2,0x15,0x54,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe6);
        FUN_001835b4(2,0x15,0x55,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe6);
        efctSetSpeed();
        temp_v8 = temp_v3;
      }
      else {
        FUN_001835b4(2,0x15,0x14,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe4);
        FUN_001835b4(2,0x15,0x15,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe4);
        FUN_001835b4(2,0x15,0x16,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe4);
        FUN_001835b4(2,0x15,0x27,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe4);
        efctSetSpeed();
        FUN_001835b4(2,0x15,0x49,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe6);
        FUN_001835b4(2,0x15,0x4a,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0xe6);
        efctSetSpeed();
      }
      temp_v7 = resourceRunOperationIfUnblocked(temp_v19);
      if (*(char *)(temp_v7 + temp_v2 + temp_v1 + 0x758) != '>') {
        if (*(int *)(temp_v1 + 0x744) == 3) {
          temp_v8 = temp_v3;
        }
        if (*(char *)(temp_v1 + 0x74e) != '\x02') {
          temp_v7 = resourceRunOperationIfUnblocked(temp_v19);
          temp_v4 = (unsigned int)*(unsigned char *)(temp_v7 + temp_v2 + temp_v1 + 0x758);
          FUN_00261468(temp_v4);
          textFormatBuffer(temp_v17,&LAB_0022b2cc,temp_v4);
          temp_v7 = resourceRunOperationIfUnblocked(temp_v19);
          temp_v4 = (unsigned int)*(unsigned char *)(temp_v7 + temp_v2 + temp_v1 + 0x758);
          const unsigned char* tokenName = textGetNameToken(temp_v4);
          textFormatBuffer(temp_v18,&LAB_0022b2cc,tokenName);
          if (g_lmapMain != '\0') {
            temp_v8 = resourceRunOperationIfUnblocked(temp_v19);
            if (*(unsigned char *)(temp_v8 + temp_v2 + temp_v1 + 0x758) == DAT_005f1b00) {
              temp_v8 = 0x787878ff;
            }
            else {
              temp_v8 = -1;
            }
          }
        }
        else {
          temp_v7 = resourceRunOperationIfUnblocked(temp_v19);
          temp_v4 = (unsigned int)*(unsigned char *)(temp_v7 + temp_v2 + temp_v1 + 0x758);
          tmnlGetEntryText(temp_v4);
          textFormatBuffer(temp_v17,&LAB_0022b2cc,temp_v4);
        }
      }
      else {
        temp_v10 = gameDataGetPlayerName();
        textFormatBuffer(temp_v17,&LAB_0022b2cc,temp_v10);
        if (*(int *)(temp_v1 + 0x744) == 3) {
          temp_v8 = temp_v3;
        }
      }
      temp_v2 = asdTMTexTableEntryAt(0x15,0x17);
      puVar4 = temp_v17;
      fontMeasureLineAdvance(puVar4,3);
      temp_v7 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8) +
               ((int)**(short **)(temp_v2 + 0xc) - (int)puVar4) / 2;
      if (g_lmapMain != '\0') {
        puVar4 = temp_v17;
        fontMeasureLineAdvance(puVar4,2);
        temp_v7 = (int)*(short *)(temp_v2 + 8);
        temp_v3 = *(short *)(temp_v6 + 8) + temp_v7 + ((int)**(short **)(temp_v2 + 0xc) - (int)puVar4) / 2
        ;
        VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        if (temp_v8 != 0x787878ff) {
          VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,0x6ef0ffff,temp_v18,temp_v7);
        }
        else {
          VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,0x787878ff,temp_v18,temp_v7);
        }
        VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,temp_v8,temp_v17);
      }
      else {
        VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(3,temp_v8,temp_v17,temp_v7);
      }
    }
    temp_v8 = objectApplyIfUnblocked(temp_v19);
    temp_v2 = uiSearchPrimary(temp_v19);
    if (temp_v2 < temp_v8) {
      efctSetSpeed();
      temp_v10 = vec2GetYInt(temp_v1 + 0x6b8);
      temp_v5 = vec2GetXInt(reinterpret_cast<const void *>(temp_v1 + 0x6b8));
      temp_v16 = (int)*(short *)(temp_v1 + 0x76c);
      iStack_184 = (int)*(short *)(temp_v1 + 0x76e);
      uStack_180 = 0xfb;
      uStack_17c = 0;
      temp_v15 = (int)*(short *)(temp_v1 + 0x770);
      temp_v14 = 0x41;
      uStack_194 = 0x40;
      uStack_190 = 0x42;
      temp_v12 = 0x45;
      temp_v13 = 0x3f;
      FUN_00344cd0(temp_v19,temp_v5,temp_v10,0x15,0x43,0x44);
      efctSetSpeed();
    }
    temp_v1 = g_renderCtx;
    piVar14 = (int *)(g_renderCtx + 0x1258);
    temp_v8 = *piVar14;
    temp_v2 = piVar14[temp_v8 + 2];
    *piVar14 = temp_v8 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar14[temp_v8 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
  }
  return 0;
}

} /* extern "C" */
