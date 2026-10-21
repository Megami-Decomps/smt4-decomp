/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7bb8` (_code @ 0x2a7bb8, 0x1abc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0014bf3c(...);
int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_00180114(...);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_0018408c(...);
int FUN_00184310(void);
int drawSetColorFromRGBA8(...);
int slotRecordFindById(...);
int FUN_0020caec(...);
int gameDataCopySaveEntry(...);
int FUN_002a4860(...);
int FUN_002f3a90(void);
int FUN_00344cd0(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 15 slot(s), 58 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned short sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
} param_3_stack;

extern unsigned char LAB_002a80f4; /* 0x2a80f4 */
extern unsigned char LAB_002a80fc; /* 0x2a80fc */
extern unsigned char LAB_002a896c; /* 0x2a896c */
extern unsigned char LAB_002a8974; /* 0x2a8974 */
extern unsigned char LAB_002a8fec; /* 0x2a8fec */
extern unsigned char LAB_002a8ffc; /* 0x2a8ffc */
extern unsigned char LAB_002a967c; /* 0x2a967c */
extern unsigned char LAB_002a9680; /* 0x2a9680 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0014bf3c. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00180114. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: slotRecordFindById. */
extern int *gameGetSlotTable(void);
/* Supplied declaration required: FUN_0020caec. */
extern int FUN_0022e9b8(void);
/* Supplied declaration required: gameDataCopySaveEntry. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002a4860. */
extern int FUN_002a4894(int);
extern unsigned int computeCountLimit(void);
/* Supplied declaration required: FUN_002f3a90. */
extern int FUN_003347e8(void);
/* Supplied declaration required: FUN_00344cd0. */
extern int uiSearchPrimary(int);


void FUN_002a7bb8(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 21 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  short *psVar13;
  int temp_v11;
  int temp_v12;
  unsigned char *puVar16;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int *piVar21;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int in_fpscr;
  unsigned short temp_v19 [40];
  unsigned char temp_v20 [64];
  int temp_v21;
  unsigned char temp_v22 [88];
  int temp_v23;
  int temp_v24;
  int temp_v25;
  
  temp_v23 = param_1;
  temp_v24 = param_2;
  temp_v25 = param_3;
  temp_v2 = FUN_0022e9b8();
  temp_v8 = temp_v24;
  temp_v9 = temp_v23;
  if (temp_v2 == 0) {
    return;
  }
  efctSetSpeed();
  FUN_00164b5c(2,0x1a,3,temp_v9,temp_v8,0x65);
  FUN_001835b4(2,0x1a,0x10e,temp_v9,temp_v8,0x6a);
  FUN_001835b4(2,0x1a,0x10f,temp_v9,temp_v8,0x6a);
  FUN_001835b4(2,0x1a,0x110,temp_v9,temp_v8,0x6a);
  FUN_001835b4(2,0x1a,0x111,temp_v9,temp_v8,0x6a);
  FUN_001835b4(2,0x1a,0x4f,temp_v9,temp_v8,0x6a);
  temp_v3 = temp_v2 + 0x6800;
  puVar5 = (unsigned short *)
           ((*(unsigned int *)(temp_v2 + (unsigned int)*(unsigned short *)(temp_v2 + 0x6832) * 8 + 0x13bc) & 0x1ffff) >> 2);
  FUN_00184310();
  temp_v4 = FUN_001834a4(0x1a,0x4d);
  temp_v17 = 0xffffffff;
  temp_v5 = computeCountLimit();
  temp_v18 = 0x9b9b9bff;
  if (temp_v5 < (unsigned short)puVar5[3]) {
    temp_v17 = 0xdc0f14ff;
  }
  else {
    temp_v6 = slotRecordFindById(*puVar5);
    if ((temp_v6 == 0) && (temp_v18 = 0xffffffff, *(char *)(temp_v3 + 0x30) == '\0')) {
      temp_v18 = 0x57d8ffff;
    }
  }
  temp_v7 = FUN_00180114(*puVar5);
  textFormatBuffer(temp_v20,&LAB_002a80f4,temp_v7);
  VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v18,temp_v20);
  temp_v4 = FUN_001834a4(0x1a,0x4e);
  temp_v18 = FUN_0014bf3c(*puVar5,0);
  textFormatBuffer(temp_v20,&LAB_002a80f4,temp_v18);
  VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0x57d8ffff,temp_v20);
  drawSetColorFromRGBA8(temp_v17);
  if ((unsigned short)puVar5[3] >= 100) {
    temp_v4 = FUN_001834a4(0x1a,0x51);
    FUN_00180310(0,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,1,3,0x6f,
                 &LAB_002a80fc,puVar5[3]);
  }
  else {
    temp_v4 = FUN_001834a4(0x1a,0x51);
    FUN_00180310(0,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,1,2,0x6f,
                 &LAB_002a80fc,puVar5[3]);
  }
  FUN_00183bb0();
  if (*(char *)(temp_v3 + 0x30) == '\0') {
    FUN_001835b4(2,0x1a,0x1e9,
                 ((int)(*(int *)(temp_v2 + 0x3fc) + ((unsigned int)(*(int *)(temp_v2 + 0x3fc) >> 0x1f) >> 0x1e))
                 >> 2) % 3 + temp_v9,temp_v8,0x79);
    efctSetSpeed();
    temp_v4 = g_renderCtx;
    temp_v6 = packNibblesAndByte(6,1,0);
    piVar21 = (int *)(temp_v4 + 0x12b8);
    temp_v14 = piVar21[*piVar21 + 2];
    piVar21[*piVar21 + 2] = temp_v6;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v14 != temp_v6) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    FUN_001835b4(2,0x1a,0x1ea,temp_v9,temp_v8,0x79);
    temp_v9 = g_renderCtx;
    temp_v8 = packNibblesAndByte(6,7,0);
    piVar21 = (int *)(temp_v9 + 0x12b8);
    temp_v4 = piVar21[*piVar21 + 2];
    piVar21[*piVar21 + 2] = temp_v8;
    if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v4 != temp_v8) {
      (**(romwright_code **)(temp_v9 + 0x12d4))(temp_v8);
      *(unsigned char *)(temp_v9 + 0x12d0) = 0;
    }
    efctSetSpeed();
  }
  temp_v21 = temp_v2 + 0x67cc;
  temp_v9 = FUN_002a4860();
  temp_v4 = 0;
  temp_v8 = uiSearchPrimary(temp_v2 + 0x67cc);
  if (0 < temp_v8) {
    do {
      temp_v6 = temp_v24;
      temp_v8 = temp_v23;
      temp_v0 = *(unsigned short *)(temp_v2 + (temp_v9 + temp_v4) * 2 + 0x6832);
      temp_v14 = FUN_001834a4(0x1a,temp_v4 + 0x125);
      temp_v8 = temp_v8 + *(short *)(temp_v14 + 8);
      temp_v6 = temp_v6 + *(short *)(temp_v14 + 10);
      temp_v10 = temp_v2 + (unsigned int)temp_v0 * 8;
      psVar13 = (short *)(*(unsigned int *)(temp_v10 + 0x13b8) & 0x7fff);
      temp_v14 = temp_v10;
      FUN_00184310();
      temp_v11 = FUN_001834a4(0x1a,0x11a);
      FUN_001835b4(2,0x1a,0x113,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,0x6a
                  );
      temp_v12 = FUN_001834a4(0x1a,0x118);
      temp_v17 = FUN_00180114(*psVar13);
      textFormatBuffer(temp_v20,&LAB_002a80f4,temp_v17);
      puVar16 = temp_v20;
      FUN_0018408c(puVar16,1);
      VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                          (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(1,0xffffffff,temp_v20,(int)*(short *)(temp_v12 + 10));
      temp_v12 = FUN_001834a4(0x1a,0x119);
      temp_v17 = FUN_0014bf3c(*psVar13,0);
      textFormatBuffer(temp_v20,&LAB_002a80f4,temp_v17);
      puVar16 = temp_v20;
      FUN_0018408c(puVar16,2);
      VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                          (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0x8262dff,temp_v20,(int)*(short *)(temp_v11 + 8));
      if (*(unsigned int *)(temp_v10 + 0x13b8) >> 0x1e == 3) {
        gameDataCopySaveEntry(*psVar13,temp_v19);
        temp_v0 = temp_v19[0];
      }
      else {
        temp_v12 = slotRecordFindById(*psVar13);
        temp_v0 = *(unsigned short *)(temp_v12 + 100);
      }
      temp_v12 = *(short *)(temp_v11 + 10) + temp_v6;
      temp_v16 = *(short *)(temp_v11 + 8) + temp_v8;
      if (temp_v0 >= 100) {
        FUN_001835b4(2,0x1a,0x266,temp_v16,temp_v12,0x6f);
        drawSetColorFromRGBA8(0xffffffff);
        temp_v12 = FUN_001834a4(0x1a,0x269);
        FUN_00180310(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,1,3,0x79,
                     &LAB_002a80fc,temp_v0);
      }
      else {
        FUN_001835b4(2,0x1a,0x114,temp_v16,temp_v12,0x6f);
        temp_v12 = FUN_001834a4(0x1a,0x117);
        drawSetColorFromRGBA8(0xffffffff);
        FUN_00180310(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,1,2,0x79,
                     &LAB_002a80fc,temp_v0);
      }
      FUN_00183bb0();
      temp_v12 = FUN_001834a4(0x1a,0x115);
      FUN_0018152c((int)*psVar13,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,0x79,1);
      FUN_0020caec(*psVar13,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,0x7e);
      psVar13 = (short *)((*(unsigned int *)(temp_v10 + 0x13b8) & 0x3fffffff) >> 0xf);
      FUN_00184310();
      temp_v11 = FUN_001834a4(0x1a,0x11b);
      FUN_001835b4(2,0x1a,0x113,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,0x6a
                  );
      temp_v12 = FUN_001834a4(0x1a,0x118);
      temp_v17 = FUN_00180114(*psVar13);
      textFormatBuffer(temp_v20,&LAB_002a80f4,temp_v17);
      puVar16 = temp_v20;
      FUN_0018408c(puVar16,1);
      VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                          (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(1,0xffffffff,temp_v20,(int)*(short *)(temp_v11 + 8));
      temp_v12 = FUN_001834a4(0x1a,0x119);
      temp_v17 = FUN_0014bf3c(*psVar13,0);
      textFormatBuffer(temp_v20,&LAB_002a80f4,temp_v17);
      puVar16 = temp_v20;
      FUN_0018408c(puVar16,2);
      VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                          (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0x8262dff,temp_v20,(int)*(short *)(temp_v11 + 8));
      FUN_001834a4(0x1a,0x117);
      if ((*(unsigned int *)(temp_v10 + 0x13bc) & 3) == 3) {
        gameDataCopySaveEntry(*psVar13,temp_v19);
        temp_v0 = temp_v19[0];
      }
      else {
        temp_v10 = slotRecordFindById(*psVar13);
        temp_v0 = *(unsigned short *)(temp_v10 + 100);
      }
      temp_v10 = *(short *)(temp_v11 + 10) + temp_v6;
      temp_v12 = *(short *)(temp_v11 + 8) + temp_v8;
      if (temp_v0 >= 100) {
        FUN_001835b4(2,0x1a,0x266,temp_v12,temp_v10,0x6f);
        temp_v10 = FUN_001834a4(0x1a,0x269);
        drawSetColorFromRGBA8(0xffffffff);
        FUN_00180310(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v6,1,3,0x79,
                     &LAB_002a896c,temp_v0);
      }
      else {
        FUN_001835b4(2,0x1a,0x114,temp_v12,temp_v10,0x6f);
        temp_v10 = FUN_001834a4(0x1a,0x117);
        drawSetColorFromRGBA8(0xffffffff);
        FUN_00180310(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v6,1,2,0x79,
                     &LAB_002a896c,temp_v0);
      }
      FUN_00183bb0();
      temp_v10 = FUN_001834a4(0x1a,0x115);
      FUN_0018152c((int)*psVar13,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v8,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v6,0x6f,1);
      FUN_0020caec(*psVar13,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v8,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v6,0x74);
      temp_v10 = FUN_001834a4(0x1a,0x123);
      temp_v14 = temp_v14 + 0x13b8;
      FUN_002f3a90();
      temp_v11 = FUN_003347e8();
      if (temp_v11 != 0) {
        textFormatBuffer(temp_v22,&LAB_002a8974);
        temp_v14 = 0;
      }
      else {
        textFormatBuffer(temp_v22,&LAB_002a896c,temp_v14);
      }
      piVar21 = (int *)gameGetSlotTable();
      if (*piVar21 < temp_v14) {
        temp_v17 = 0xa50000ff;
      }
      else {
        temp_v17 = 0xff;
      }
      drawSetColorFromRGBA8(temp_v17);
      FUN_00180310(0,*(short *)(temp_v10 + 8) + temp_v8,*(short *)(temp_v10 + 10) + temp_v6,1,8,0x79,
                   temp_v22);
      FUN_00183bb0();
      temp_v4 = temp_v4 + 1;
      temp_v8 = uiSearchPrimary(temp_v21);
    } while (temp_v4 < temp_v8);
  }
  temp_v4 = FUN_002a4860(temp_v21);
  temp_v6 = FUN_002a4894(temp_v21);
  temp_v8 = temp_v24;
  temp_v9 = temp_v23;
  if (temp_v25 == 0) {
    FUN_001835b4(2,0x1a,0x272,temp_v23,temp_v23,0x97);
    FUN_00344cd0(temp_v21,temp_v23,temp_v23,0x1a,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
                 (int)*(short *)(temp_v2 + 0x476),(int)*(short *)(temp_v2 + 0x472),
                 (int)*(short *)(temp_v2 + 0x474),0x97,0);
    return;
  }
  temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + (temp_v6 + temp_v4) * 2 + 0x6832);
  temp_v4 = FUN_002a4894(temp_v21);
  temp_v4 = FUN_001834a4(0x1a,temp_v4 + 0x146);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x12a,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79);
  FUN_001835b4(2,0x1a,299,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79);
  FUN_001835b4(2,0x1a,300,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x12d,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e);
  temp_v6 = FUN_002a4894(temp_v21);
  temp_v6 = FUN_00284140((int)*(short *)(temp_v2 + temp_v6 * 2 + 0x438));
  temp_v14 = FUN_002a4894(temp_v21);
  temp_v14 = FUN_00284140((int)*(short *)(temp_v2 + temp_v14 * 4 + 0x45e));
  temp_v10 = FUN_002a4894(temp_v21);
  temp_v10 = FUN_00284140((int)*(short *)(temp_v2 + temp_v10 * 4 + 0x460));
  if ((((!(temp_v6 == 1 || temp_v6 == 2)) && (!(temp_v6 == 6 || temp_v14 == 1))) &&
      (!(temp_v14 == 2 || temp_v14 == 6))) && (!((temp_v10 == 1 || temp_v10 == 2) || temp_v10 == 6))) {
    FUN_001835b4(2,0x1a,0x248,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e);
    FUN_001835b4(2,0x1a,0x12f,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e);
    FUN_001835b4(2,0x1a,0x130,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e);
  }
  else {
    FUN_001835b4(2,0x1a,0x28b,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e);
    if (((temp_v6 != 1 && temp_v6 != 2) && (temp_v6 != 6 && temp_v14 != 1)) &&
       ((temp_v14 != 2 && temp_v14 != 6 && ((temp_v10 != 1 && temp_v10 != 2) && temp_v10 != 6)))) {
      FUN_001835b4(2,0x1a,0x12f,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e)
      ;
      FUN_001835b4(2,0x1a,0x130,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e)
      ;
    }
    else {
      FUN_001835b4(2,0x1a,0x288,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e)
      ;
      FUN_001835b4(2,0x1a,0x289,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e)
      ;
    }
  }
  efctSetSpeed();
  if (((!(temp_v6 == 1 || temp_v6 == 2)) && (!(temp_v6 == 6 || temp_v14 == 1))) &&
     ((!(temp_v14 == 2 || temp_v14 == 6) && (!((temp_v10 == 1 || temp_v10 == 2) || temp_v10 == 6))))) {
    temp_v11 = vec2GetYInt(temp_v2 + 0xb0);
    temp_v1 = *(short *)(temp_v4 + 10);
    temp_v12 = vec2GetXInt(temp_v2 + 0xb0);
    FUN_001835b4(2,0x1a,0x131,temp_v12 + temp_v9 + (int)*(short *)(temp_v4 + 8),
                 temp_v11 + temp_v8 + (int)temp_v1,0x83);
  }
  else {
    temp_v11 = vec2GetYInt(temp_v2 + 0xb0);
    temp_v1 = *(short *)(temp_v4 + 10);
    temp_v12 = vec2GetXInt(temp_v2 + 0xb0);
    FUN_001835b4(2,0x1a,0x28a,temp_v12 + temp_v9 + (int)*(short *)(temp_v4 + 8),
                 temp_v11 + temp_v8 + (int)temp_v1,0x83);
  }
  efctSetSpeed();
  temp_v9 = *(short *)(temp_v4 + 8) + temp_v9;
  temp_v8 = *(short *)(temp_v4 + 10) + temp_v8;
  temp_v16 = temp_v2 + temp_v5 * 8;
  temp_v4 = temp_v16 + 0x1000;
  psVar13 = (short *)(*(unsigned int *)(temp_v16 + 0x13b8) & 0x7fff);
  FUN_00184310();
  temp_v11 = FUN_001834a4(0x1a,0x13b);
  FUN_001835b4(2,0x1a,0x133,*(short *)(temp_v11 + 8) + temp_v9,*(short *)(temp_v11 + 10) + temp_v8,0x83);
  temp_v12 = FUN_001834a4(0x1a,0x139);
  temp_v17 = 0xffffffff;
  if (((!(temp_v6 == 1 || temp_v6 == 2)) && (!(temp_v6 == 6 || temp_v14 == 1))) &&
     (!(temp_v14 == 2 || temp_v14 == 6))) {
    if (*(char *)(temp_v3 + 0x30) == '\x01') {
      temp_v17 = 0x57d8ffff;
    }
  }
  else {
    temp_v17 = 0xf5ff9fff;
  }
  temp_v18 = FUN_00180114(*psVar13);
  textFormatBuffer(temp_v20,&LAB_002a8fec,temp_v18);
  VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v8,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v17,temp_v20,(int)*(short *)(temp_v11 + 8));
  temp_v14 = FUN_001834a4(0x1a,0x13a);
  temp_v17 = FUN_0014bf3c(*psVar13,0);
  textFormatBuffer(temp_v20,&LAB_002a8fec,temp_v17);
  puVar16 = temp_v20;
  FUN_0018408c(puVar16,2);
  VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v14 + 10) + temp_v8,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9 + ((int)**(short **)(temp_v14 + 0xc) - (int)puVar16) / 2 +
                      (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v14 + 8),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0x57d8ffff,temp_v20,(int)*(short *)(temp_v11 + 8));
  FUN_001834a4(0x1a,0x138);
  if (*(unsigned int *)(temp_v4 + 0x3b8) >> 0x1e == 3) {
    gameDataCopySaveEntry(*psVar13,temp_v19);
    temp_v0 = temp_v19[0];
  }
  else {
    temp_v14 = slotRecordFindById(*psVar13);
    temp_v0 = *(unsigned short *)(temp_v14 + 100);
  }
  temp_v14 = *(short *)(temp_v11 + 10) + temp_v8;
  temp_v12 = *(short *)(temp_v11 + 8) + temp_v9;
  if (temp_v0 >= 100) {
    FUN_001835b4(2,0x1a,0x26a,temp_v12,temp_v14,0x88);
    temp_v14 = FUN_001834a4(0x1a,0x26d);
    FUN_00180310(0,(int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                 (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v14 + 10) + temp_v8,1,3,0x8d,
                 &LAB_002a8ffc,temp_v0);
  }
  else {
    FUN_001835b4(2,0x1a,0x135,temp_v12,temp_v14,0x88);
    temp_v14 = FUN_001834a4(0x1a,0x138);
    FUN_00180310(0,(int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                 (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v14 + 10) + temp_v8,1,2,0x8d,
                 &LAB_002a8ffc,temp_v0);
  }
  temp_v14 = FUN_001834a4(0x1a,0x136);
  FUN_0018152c((int)*psVar13,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v9,
               (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v14 + 10) + temp_v8,0x8d,1);
  if (*(char *)(temp_v3 + 0x30) == '\x01') {
    temp_v12 = g_renderCtx;
    temp_v13 = packNibblesAndByte(6,1,0);
    piVar21 = (int *)(temp_v12 + 0x12b8);
    temp_v15 = piVar21[*piVar21 + 2];
    piVar21[*piVar21 + 2] = temp_v13;
    if (*(char *)(temp_v12 + 0x12d0) != '\0' || temp_v15 != temp_v13) {
      (**(romwright_code **)(temp_v12 + 0x12d4))();
      *(unsigned char *)(piVar21 + 6) = 0;
    }
    FUN_001835b4(2,0x1a,0x58,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v9,
                 (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v8,0x97);
    efctSetSpeed();
    FUN_001835b4(2,0x1a,0x59,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v9,
                 (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v14 + 10) + temp_v8,0x97);
    efctSetSpeed();
    temp_v12 = g_renderCtx;
    temp_v13 = packNibblesAndByte(6,7,0);
    piVar21 = (int *)(temp_v12 + 0x12b8);
    temp_v15 = piVar21[*piVar21 + 2];
    piVar21[*piVar21 + 2] = temp_v13;
    if (*(char *)(temp_v12 + 0x12d0) != '\0' || temp_v15 != temp_v13) {
      (**(romwright_code **)(temp_v12 + 0x12d4))();
      *(unsigned char *)(piVar21 + 6) = 0;
    }
  }
  FUN_0020caec(*psVar13,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v9,
               (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v14 + 10) + temp_v8,0x9c);
  psVar13 = (short *)((*(unsigned int *)(temp_v4 + 0x3b8) & 0x3fffffff) >> 0xf);
  FUN_00184310();
  temp_v14 = FUN_001834a4(0x1a,0x13c);
  FUN_001835b4(2,0x1a,0x134,*(short *)(temp_v14 + 8) + temp_v9,*(short *)(temp_v14 + 10) + temp_v8,0x6a);
  temp_v11 = FUN_001834a4(0x1a,0x139);
  temp_v17 = 0xffffffff;
  if (((!(temp_v6 == 1 || temp_v6 == 2)) && (!(temp_v6 == 6 || temp_v10 == 1))) &&
     (!(temp_v10 == 2 || temp_v10 == 6))) {
    if (*(char *)(temp_v3 + 0x30) == '\x02') {
      temp_v17 = 0x57d8ffff;
    }
  }
  else {
    temp_v17 = 0xf5ff9fff;
  }
  temp_v18 = FUN_00180114(*psVar13);
  textFormatBuffer(temp_v20,&LAB_002a8fec,temp_v18);
  VectorSignedToFloat((int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v8,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v17,temp_v20,(int)*(short *)(temp_v11 + 8));
  temp_v6 = FUN_001834a4(0x1a,0x13a);
  temp_v17 = FUN_0014bf3c(*psVar13,0);
  textFormatBuffer(temp_v20,&LAB_002a8fec,temp_v17);
  puVar16 = temp_v20;
  FUN_0018408c(puVar16,2);
  VectorSignedToFloat((int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v6 + 10) + temp_v8,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9 + ((int)**(short **)(temp_v6 + 0xc) - (int)puVar16) / 2 +
                      (int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v6 + 8),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0x57d8ffff,temp_v20,(int)*(short *)(temp_v14 + 8));
  if ((*(unsigned int *)(temp_v4 + 0x3bc) & 3) == 3) {
    gameDataCopySaveEntry(*psVar13,temp_v19);
    temp_v0 = temp_v19[0];
  }
  else {
    temp_v4 = slotRecordFindById(*psVar13);
    temp_v0 = *(unsigned short *)(temp_v4 + 100);
  }
  temp_v4 = *(short *)(temp_v14 + 10) + temp_v8;
  temp_v6 = *(short *)(temp_v14 + 8) + temp_v9;
  if (temp_v0 >= 100) {
    FUN_001835b4(2,0x1a,0x26a,temp_v6,temp_v4,0x88);
    temp_v4 = FUN_001834a4(0x1a,0x26d);
    FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v9,
                 (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v8,1,3,0x8d,
                 &LAB_002a8ffc,temp_v0);
  }
  else {
    FUN_001835b4(2,0x1a,0x135,temp_v6,temp_v4,0x88);
    temp_v4 = FUN_001834a4(0x1a,0x138);
    FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v9,
                 (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v8,1,2,0x8d,
                 &LAB_002a8ffc,temp_v0);
  }
  temp_v6 = FUN_001834a4(0x1a,0x136);
  FUN_0018152c((int)*psVar13,(int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v6 + 8) + temp_v9,
               (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v6 + 10) + temp_v8,0x8d,1);
  temp_v4 = g_renderCtx;
  if (*(char *)(temp_v3 + 0x30) == '\x02') {
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar21 = (int *)(temp_v4 + 0x12b8);
    temp_v10 = piVar21[*piVar21 + 2];
    piVar21[*piVar21 + 2] = temp_v3;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v10 != temp_v3) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    FUN_001835b4(2,0x1a,0x58,(int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v6 + 8) + temp_v9,
                 (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v6 + 10) + temp_v8,0x97);
    efctSetSpeed();
    FUN_001835b4(2,0x1a,0x59,(int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v6 + 8) + temp_v9,
                 (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v6 + 10) + temp_v8,0x97);
    efctSetSpeed();
    temp_v3 = g_renderCtx;
    temp_v4 = packNibblesAndByte(6,7,0);
    piVar21 = (int *)(temp_v3 + 0x12b8);
    temp_v10 = piVar21[*piVar21 + 2];
    piVar21[*piVar21 + 2] = temp_v4;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v10 != temp_v4) {
      (**(romwright_code **)(temp_v3 + 0x12d4))(temp_v4);
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
  }
  FUN_0020caec(*psVar13,(int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v6 + 8) + temp_v9,
               (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v14 + 10) + temp_v8,0x9c);
  temp_v16 = temp_v16 + 0x13b8;
  FUN_002f3a90();
  temp_v3 = FUN_003347e8();
  if (temp_v3 != 0) {
    textFormatBuffer(temp_v22,&LAB_002a967c);
    temp_v16 = 0;
  }
  else {
    textFormatBuffer(temp_v22,&LAB_002a9680,temp_v16);
  }
  piVar21 = (int *)gameGetSlotTable();
  if (*piVar21 < temp_v16) {
    temp_v17 = 0xdc0f14ff;
  }
  else {
    temp_v17 = 0xffffffff;
  }
  drawSetColorFromRGBA8(temp_v17);
  temp_v3 = FUN_001834a4(0x1a,0x144);
  FUN_00180310(0,*(short *)(temp_v3 + 8) + temp_v9,*(short *)(temp_v3 + 10) + temp_v8,1,8,0x8d,temp_v22)
  ;
  FUN_00183bb0();
  FUN_001835b4(2,0x1a,0x272,temp_v23,temp_v23,0x97);
  FUN_00344cd0(temp_v21,temp_v23,temp_v23,0x1a,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
               (int)*(short *)(temp_v2 + 0x476),(int)*(short *)(temp_v2 + 0x472),
               (int)*(short *)(temp_v2 + 0x474),0x97,0);
  return;
}

} /* extern "C" */
