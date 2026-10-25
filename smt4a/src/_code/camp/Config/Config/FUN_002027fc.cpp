/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002027fc` (_code @ 0x2027fc, 0x52c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00157558(int);
int FUN_00162790(...);
int FUN_00164b5c(int, int, int, unsigned int, unsigned int, int);
int vec2GetXInt(int);
int vec2GetYInt(int);
int efctSetSpeed(void);
int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int fontMeasureLineAdvance(...);
int configDrawRowFrame(...);
int resourceRunOperationIfUnblocked(int);
int FUN_002a4894(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern unsigned char LAB_00202d28; /* 0x202d28 */
extern int g_config; /* 0x57f230 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: fontMeasureLineAdvance. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: configDrawRowFrame. */
extern int recordGetModeForId(int);
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
/* Supplied declaration required: FUN_002a4894. */
extern int uiSearchPrimary(int);


void FUN_002027fc(void)

{
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char *puVar11;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int *piVar15;
  int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  unsigned int temp_v17;
  unsigned char temp_v18 [108];
  
  temp_v0 = g_config;
  if (g_config == 0) {
    return;
  }
  FUN_00157558(g_renderCtx);
  temp_v5 = g_renderCtx;
  temp_v1 = FUN_001692ac(1,0);
  piVar15 = (int *)(temp_v5 + 0x1258);
  temp_v2 = *piVar15;
  temp_v10 = piVar15[temp_v2 + 2];
  *piVar15 = temp_v2 + 1;
  piVar15[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v10 != temp_v1) {
    (**(romwright_code **)(temp_v5 + 0x1274))(temp_v1);
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  resourceRunOperationIfUnblocked(temp_v0);
  FUN_002a4894(temp_v0);
  temp_v3 = vec2GetXInt(temp_v0 + 0xe8);
  temp_v4 = vec2GetYInt(temp_v0 + 0xe8);
  efctSetSpeed();
  FUN_00164b5c(2,0x24,0,temp_v3,temp_v4,0xb);
  FUN_00164b5c(2,0x24,0xd,temp_v3,temp_v4,0xb);
  efctSetSpeed();
  temp_v3 = dataTableGet(0x36,0);
  temp_v5 = dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v3);
  if ((temp_v1 != 0) && (temp_v5 != 0)) {
    temp_v5 = *(int *)(temp_v0 + 0x8c);
    temp_v1 = uiSearchPrimary(temp_v0);
    temp_v3 = dataTableGet(0x36,0);
    temp_v2 = dataTableGetEntries();
    temp_v10 = dataTableGetCount(temp_v3);
    if (temp_v10 == 0) {
      temp_v2 = 0;
    }
    temp_v10 = 0;
    if (temp_v10 < temp_v1) {
      do {
        temp_v11 = temp_v5 + temp_v10;
        temp_v6 = FUN_001834a4(0x24,temp_v11);
        temp_v13 = temp_v0 + temp_v10 * 0x8c;
        temp_v7 = vec2GetXInt(temp_v13 + 0x174);
        temp_v13 = vec2GetYInt(temp_v13 + 0x174);
        temp_v3 = 0;
        if (*(int *)(temp_v0 + 0x88) == temp_v10) {
          temp_v17 = 0x2bceffff;
          temp_v8 = recordGetModeForId((int)*(short *)(temp_v0 + temp_v10 * 2 + 0x6e));
          temp_v14 = temp_v8 == 1;
          temp_v15 = temp_v8 == 2;
          temp_v16 = temp_v8 == 6;
          if ((temp_v14 || temp_v15) || temp_v16) {
            temp_v17 = 0xf5ff9fff;
          }
          configDrawRowFrame(*(short *)(temp_v6 + 8) + temp_v7,*(short *)(temp_v6 + 10) + temp_v13,1,
                       (temp_v14 || temp_v15) || temp_v16,0);
          temp_v8 = FUN_001834a4(0x24,temp_v11);
          temp_v11 = g_renderCtx;
          temp_v9 = packNibblesAndByte(6,1,0);
          piVar15 = (int *)(temp_v11 + 0x12b8);
          temp_v12 = piVar15[*piVar15 + 2];
          piVar15[*piVar15 + 2] = temp_v9;
          if (*(char *)(temp_v11 + 0x12d0) != '\0' || temp_v12 != temp_v9) {
            (**(romwright_code **)(temp_v11 + 0x12d4))();
            *(unsigned char *)(temp_v11 + 0x12d0) = 0;
          }
          efctSetSpeed();
          temp_v11 = 0;
          if ((temp_v14 || temp_v15) || temp_v16) {
            do {
              FUN_001835b4(2,0x24,temp_v11 + 0x91,*(short *)(temp_v8 + 8) + temp_v7,
                           *(short *)(temp_v8 + 10) + temp_v13,0x15);
              temp_v11 = temp_v11 + 1;
            } while (temp_v11 < 4);
          }
          else {
            do {
              FUN_001835b4(2,0x24,temp_v11 + 0x70,*(short *)(temp_v8 + 8) + temp_v7,
                           *(short *)(temp_v8 + 10) + temp_v13,0x15);
              temp_v11 = temp_v11 + 1;
            } while (temp_v11 < 4);
          }
          efctSetSpeed();
          temp_v11 = g_renderCtx;
          temp_v8 = packNibblesAndByte(6,7,0);
          piVar15 = (int *)(temp_v11 + 0x12b8);
          temp_v9 = piVar15[*piVar15 + 2];
          piVar15[*piVar15 + 2] = temp_v8;
          if (*(char *)(temp_v11 + 0x12d0) != '\0' || temp_v9 != temp_v8) {
            (**(romwright_code **)(temp_v11 + 0x12d4))();
            *(unsigned char *)(temp_v11 + 0x12d0) = 0;
          }
        }
        else {
          temp_v17 = 0xffffffff;
          if ((*(int *)(temp_v0 + temp_v10 * 8 + 0x94) == *(int *)(temp_v0 + 0x4c4)) &&
             (*(char *)(temp_v0 + 0xc0) != '\0')) {
            temp_v17 = 0xff;
            temp_v3 = 1;
          }
          configDrawRowFrame(*(short *)(temp_v6 + 8) + temp_v7,*(short *)(temp_v6 + 10) + temp_v13,0,0,temp_v3);
        }
        textFormatBuffer(temp_v18,&LAB_00202d28,
                     temp_v2 + *(int *)(temp_v0 + temp_v10 * 8 + 0x98) * 0xc + 0x1e);
        temp_v11 = FUN_001834a4(0x24,0x74);
        puVar11 = temp_v18;
        fontMeasureLineAdvance(puVar11,2);
        VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v13,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v6 + 8) +
                            (int)*(short *)(temp_v11 + 8) +
                            ((int)**(short **)(temp_v11 + 0xc) - (int)puVar11) / 2 + temp_v7,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,temp_v17,temp_v18,(int)*(short *)(temp_v6 + 8));
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < temp_v1);
    }
  }
  efctSetSpeed();
  temp_v0 = g_renderCtx;
  piVar15 = (int *)(g_renderCtx + 0x1258);
  temp_v5 = *piVar15;
  temp_v1 = piVar15[temp_v5 + 2];
  *piVar15 = temp_v5 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar15[temp_v5 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return;
}

} /* extern "C" */
