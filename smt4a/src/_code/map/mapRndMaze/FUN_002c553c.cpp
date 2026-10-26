/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c553c` (_code @ 0x2c553c, 0x86c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00178b04(...);
void FUN_0035d1e0(float x, float z, float heading);
int controllerSetPosition(...);
int FUN_003fe86c(...);
int FUN_0040a908(...);
int FUN_0040a918(...);
int FUN_0040aa6c(void);
int moriModelContentCopyBody(...);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int modelListInit(void);
int handleRegistryRegisterObject(...);
int VectorSignedToFloat(int, int);

/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern unsigned char g_mapRndMaze; /* 0x60fc08 */
extern unsigned char DAT_0060fc18; /* 0x60fc18 */
extern int DAT_0060ffa4; /* 0x60ffa4 */
extern int DAT_0060ffa8; /* 0x60ffa8 */
extern int DAT_0060ffac; /* 0x60ffac */
extern int DAT_0060ffb0; /* 0x60ffb0 */
extern int DAT_0060ffb4; /* 0x60ffb4 */
extern int DAT_0060ffb8; /* 0x60ffb8 */
extern unsigned int uRam0060ffcc; /* 0x60ffcc */
extern int DAT_006105d4; /* 0x6105d4 */
extern int DAT_006105d8; /* 0x6105d8 */
extern int DAT_006105e0; /* 0x6105e0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00178b04. */
extern int lmapGetSpawnIndex(void);
extern unsigned int FUN_003857c8(int);
/* Supplied declaration required: controllerSetPosition. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: moriModelContentCopyBody. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
/* Supplied declaration required: modelListInit. */
/* Supplied declaration required: handleRegistryRegisterObject. */


void FUN_002c553c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *puVar7;
  unsigned int temp_v6;
  unsigned char *pbVar9;
  char *pcVar10;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  unsigned char temp_v12 [64];
  int temp_v13 [12];
  unsigned char *temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  
  temp_v3 = gameFlagsGetBlock();
  temp_v16 = temp_v3 + 0xe00;
  temp_v4 = 0;
  do {
    temp_v7 = 0;
    temp_v11 = 1;
    temp_v9 = *(char *)(temp_v3 + 0xe05) - 1;
    if (temp_v9 >= 2) {
      temp_v10 = *(char *)(temp_v3 + 0xe04) - 2;
      do {
        if (0 < temp_v10) {
          pbVar9 = (unsigned char *)(temp_v3 + temp_v11 * 0x78 + 0x49);
          temp_v8 = temp_v10;
          do {
            temp_v0 = *pbVar9;
            pbVar9 = pbVar9 + 8;
            if (temp_v4 == temp_v0 >> 4) {
              temp_v7 = temp_v7 + 1;
            }
            temp_v8 = temp_v8 - 1;
          } while (temp_v8 != 0);
        }
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < temp_v9);
    }
    temp_v5 = temp_v4 + 1;
    (&DAT_0060ffa4)[temp_v4] = temp_v7;
    temp_v4 = temp_v5;
  } while ((int)temp_v5 < 5);
  temp_v7 = 0;
  temp_v9 = 0;
  temp_v18 = 1;
  temp_v13[0xb] = 0;
  temp_v14 = (unsigned char *)0x0;
  temp_v13[6] = 0;
  if (*(char *)(temp_v3 + 0xe05) - 1 >= 2) {
    do {
      temp_v17 = 1;
      if (temp_v17 < *(char *)(temp_v16 + 4) - 1) {
        do {
          temp_v11 = 0;
          do {
            FUN_0035d1e0((float)(int)temp_v17 * 700.0f + 350.0f,(float)(int)temp_v18 * 700.0f + 350.0f,(float)temp_v11 * 45.0f);
            temp_v13[0] = 0;
            temp_v10 = 0;
            temp_v13[1] = 0;
            temp_v13[2] = 0;
            temp_v13[3] = 0;
            temp_v13[4] = 0;
            temp_v13[5] = 0;
            temp_v1 = *(char *)(temp_v16 + 5);
            if (0 < temp_v1) {
              temp_v2 = *(char *)(temp_v16 + 4);
              do {
                if (0 < temp_v2) {
                  temp_v8 = temp_v3 + temp_v10 * 0x78;
                  pcVar10 = (char *)(temp_v8 + 0x42);
                  pbVar9 = (unsigned char *)(temp_v8 + 0x41);
                  temp_v8 = (int)temp_v2;
                  do {
                    if (*pcVar10 == '\x01') {
                      temp_v13[*pbVar9 >> 4] = temp_v13[*pbVar9 >> 4] + 1;
                    }
                    temp_v8 = temp_v8 - 1;
                    pcVar10 = pcVar10 + 8;
                    pbVar9 = pbVar9 + 8;
                  } while (temp_v8 != 0);
                }
                temp_v10 = temp_v10 + 1;
              } while (temp_v10 < temp_v1);
            }
            temp_v11 = temp_v11 + 1;
            if (temp_v7 <= temp_v13[0]) {
              temp_v7 = temp_v13[0];
            }
            if (temp_v9 <= temp_v13[1]) {
              temp_v9 = temp_v13[1];
            }
            puVar7 = (unsigned char *)temp_v13[2];
            if (temp_v13[2] < (int)temp_v14) {
              puVar7 = temp_v14;
            }
            if (temp_v13[0xb] <= temp_v13[3]) {
              temp_v13[0xb] = temp_v13[3];
            }
            if (temp_v13[6] <= temp_v13[4]) {
              temp_v13[6] = temp_v13[4];
            }
            temp_v14 = puVar7;
          } while (temp_v11 < 8);
          temp_v17 = temp_v17 + 1;
        } while (temp_v17 < *(char *)(temp_v16 + 4) - 1);
      }
      temp_v18 = temp_v18 + 1;
    } while (temp_v18 < *(char *)(temp_v16 + 5) - 1);
  }
  DAT_0060ffac = (int)temp_v14;
  DAT_0060ffb0 = temp_v13[0xb];
  DAT_0060ffb4 = temp_v13[6];
  DAT_0060ffa4 = temp_v7;
  DAT_0060ffa8 = temp_v9;
  temp_v7 = lmapGetSpawnIndex();
  if (temp_v7 >= 100) {
    temp_v6 = FUN_003857c8((int)*(float *)(temp_v3 + 0x15c4));
    textFormatBuffer(temp_v12,"map/tokyo/a%02d_07.bam",temp_v6);
    temp_v9 = 0x20;
    FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp",0x862);
    temp_v7 = 0;
    if (temp_v9 != 0) {
      temp_v7 = modelListInit();
    }
    DAT_006105d4 = temp_v7;
    FUN_0040aa6c();
    FUN_0040ab7c(DAT_006105d4,2);
    FUN_0040aad4(DAT_006105d4,0);
    temp_v6 = *(unsigned int *)(DAT_006105d4 + 4);
    FUN_003fe86c(temp_v6,0,2);
    handleRegistryRegisterObject(g_handleRegistry,temp_v6);
    temp_v9 = 0x20;
    FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp",0x86f);
    temp_v7 = 0;
    if (temp_v9 != 0) {
      temp_v7 = modelListInit();
    }
    DAT_006105d8 = temp_v7;
    moriModelContentCopyBody();
    temp_v6 = *(unsigned int *)(DAT_006105d8 + 4);
    FUN_003fe86c(temp_v6,0,2);
    handleRegistryRegisterObject(g_handleRegistry,temp_v6);
    textFormatBuffer(temp_v12,"map/obj/obj_25.bam");
    temp_v9 = 0x20;
    FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp",0x878);
    temp_v7 = 0;
    if (temp_v9 != 0) {
      temp_v7 = modelListInit();
    }
    DAT_006105e0 = temp_v7;
    FUN_0040aa6c();
    FUN_0040aad4(DAT_006105e0,0);
    temp_v6 = *(unsigned int *)(DAT_006105e0 + 4);
    FUN_003fe86c(temp_v6,0,2);
    handleRegistryRegisterObject(g_handleRegistry,temp_v6);
  }
  DAT_0060ffb8 = 2;
  temp_v7 = 0;
  if (0 < *(char *)(temp_v16 + 8)) {
    DAT_0060ffb8 = *(char *)(temp_v16 + 8) + 2;
  }
  temp_v15 = temp_v3 + 0x1400;
  temp_v14 = &DAT_0060fc18;
  do {
    temp_v3 = temp_v7 * 4;
    if (0 < (&DAT_0060ffa4)[temp_v7]) {
      temp_v9 = lmapGetSpawnIndex();
      if (temp_v9 != 0) {
        textFormatBuffer(temp_v12,"map/mr01/mr01_%02d.bam",temp_v7 + 1);
        if (temp_v9 >= 100) {
          temp_v6 = FUN_003857c8((int)*(float *)(temp_v15 + 0x1c4));
          textFormatBuffer(temp_v12,"map/tokyo/a%02d_%02d.bam",temp_v6,temp_v7 + 1);
        }
      }
      else {
        textFormatBuffer(temp_v12,"map/mr01/mr01_%02d.bam",temp_v7 + 1);
      }
      if (!((temp_v7 == 1 || temp_v7 == 2) || temp_v7 == 3)) {
        if (temp_v7 != 4) {
          temp_v9 = 0x20;
          FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp",0x8dd);
          temp_v6 = 0;
          if (temp_v9 != 0) {
            temp_v6 = modelListInit();
          }
          *(unsigned int *)(temp_v3 + 0x60ffbc) = temp_v6;
          FUN_0040aa6c();
          FUN_0040ab7c(*(unsigned int *)(temp_v3 + 0x60ffbc),2);
          FUN_0040aad4(*(unsigned int *)(temp_v3 + 0x60ffbc),0);
          temp_v6 = *(unsigned int *)(*(int *)(temp_v3 + 0x60ffbc) + 4);
          FUN_003fe86c(temp_v6,0,2);
          handleRegistryRegisterObject(g_handleRegistry,temp_v6);
          if (temp_v7 != 5) {
            controllerSetPosition(*(unsigned int *)(*(int *)(temp_v3 + 0x60ffbc) + 4));
          }
        }
        else {
          temp_v9 = 0x20;
          FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp",0x8d2);
          temp_v6 = 0;
          if (temp_v9 != 0) {
            temp_v6 = modelListInit();
          }
          uRam0060ffcc = temp_v6;
          FUN_0040aa6c();
          FUN_0040ab7c(*(unsigned int *)(temp_v14 + 0x3b4),2);
          FUN_0040a908(*(unsigned int *)(temp_v14 + 0x3b4),0x10000);
          FUN_0040a918(*(unsigned int *)(temp_v14 + 0x3b4),0x20000);
          FUN_0040aad4(*(unsigned int *)(temp_v14 + 0x3b4),0);
          temp_v6 = *(unsigned int *)(*(int *)(temp_v14 + 0x3b4) + 4);
          FUN_003fe86c(temp_v6,0,2);
          handleRegistryRegisterObject(g_handleRegistry,temp_v6);
          controllerSetPosition(*(unsigned int *)(*(int *)(temp_v3 + 0x60ffbc) + 4));
        }
      }
      else {
        temp_v9 = 0x20;
        FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp",0x8c4);
        temp_v6 = 0;
        if (temp_v9 != 0) {
          temp_v6 = modelListInit();
        }
        *(unsigned int *)(temp_v3 + 0x60ffbc) = temp_v6;
        FUN_0040aa6c();
        FUN_0040ab7c(*(unsigned int *)(temp_v3 + 0x60ffbc),2);
        FUN_0040a908(*(unsigned int *)(temp_v3 + 0x60ffbc),0x10000);
        FUN_0040a918(*(unsigned int *)(temp_v3 + 0x60ffbc),0x20000);
        FUN_0040aad4(*(unsigned int *)(temp_v3 + 0x60ffbc),0);
        temp_v6 = *(unsigned int *)(*(int *)(temp_v3 + 0x60ffbc) + 4);
        FUN_003fe86c(temp_v6,0,2);
        handleRegistryRegisterObject(g_handleRegistry,temp_v6);
        if (temp_v7 != 5) {
          controllerSetPosition(*(unsigned int *)(*(int *)(temp_v3 + 0x60ffbc) + 4));
        }
      }
      temp_v9 = 0;
      if (0 < (&DAT_0060ffa4)[temp_v7]) {
        do {
          *(unsigned int *)(temp_v7 * 0x100 + 0x60ffd4) = *(unsigned int *)(temp_v3 + 0x60ffbc);
          while( 1 ) {
            temp_v9 = temp_v9 + 1;
            if ((&DAT_0060ffa4)[temp_v7] <= temp_v9) goto LAB_002c5d90;
            if (temp_v9 == 0) break;
            temp_v11 = 0x20;
            FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapRndMaze.cpp",0x90b);
            temp_v6 = 0;
            if (temp_v11 != 0) {
              temp_v6 = modelListInit();
            }
            temp_v11 = temp_v9 * 4 + temp_v7 * 0x100;
            *(unsigned int *)(&g_mapRndMaze + temp_v11 + 0x3cc) = temp_v6;
            FUN_0040ab7c();
            moriModelContentCopyBody(*(unsigned int *)(&g_mapRndMaze + temp_v11 + 0x3cc),
                         *(unsigned int *)(temp_v3 + 0x60ffbc),0);
            temp_v6 = *(unsigned int *)(*(int *)(&g_mapRndMaze + temp_v11 + 0x3cc) + 4);
            FUN_003fe86c(temp_v6,0,2);
            handleRegistryRegisterObject(g_handleRegistry,temp_v6);
            if (temp_v7 != 5) {
              controllerSetPosition(temp_v6);
            }
          }
        } while( 1 );
      }
    }
LAB_002c5d90:
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 6) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
