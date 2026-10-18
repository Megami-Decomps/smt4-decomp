/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001664e4` (_code @ 0x1664e4, 0xa98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned int DAT_005b3bfc; /* 0x5b3bfc */
extern unsigned int DAT_005b3c00; /* 0x5b3c00 */
extern int DAT_005b3c10; /* 0x5b3c10 */
extern int DAT_005b3c14; /* 0x5b3c14 */
extern unsigned int DAT_005b3c18; /* 0x5b3c18 */
extern unsigned int DAT_005b3c1c; /* 0x5b3c1c */
extern int DAT_005b3c20; /* 0x5b3c20 */
extern unsigned int DAT_005b3c38; /* 0x5b3c38 */
extern unsigned int DAT_005b3c78; /* 0x5b3c78 */
extern unsigned int DAT_005b3c80; /* 0x5b3c80 */
extern unsigned int DAT_005b3c88; /* 0x5b3c88 */
extern unsigned int DAT_005b3c90; /* 0x5b3c90 */
extern unsigned int DAT_005b3c98; /* 0x5b3c98 */
extern unsigned int DAT_005b3ca8; /* 0x5b3ca8 */
extern unsigned int DAT_005b3cb0; /* 0x5b3cb0 */
extern unsigned int DAT_005b3cb8; /* 0x5b3cb8 */
extern int DAT_00636e00; /* 0x636e00 */
extern unsigned char DAT_00636e04; /* 0x636e04 */
extern unsigned char DAT_00636e05; /* 0x636e05 */
extern unsigned char DAT_00636e14; /* 0x636e14 */
extern int DAT_00636e18; /* 0x636e18 */

/* Supplied declaration required: FUN_00152f54. */
extern int FUN_001696f4(void);
/* Supplied declaration required: FUN_00176538. */
/* Supplied declaration required: FUN_001767a4. */
/* Supplied declaration required: FUN_00191bec. */
/* Supplied declaration required: FUN_00192484. */
/* Supplied declaration required: FUN_00198bc8. */
extern int FUN_0019e31c(void);
extern int FUN_001aa528(int, int);
/* Supplied declaration required: nw_gfx_Camera_UpdateCameraMatrix. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void FUN_001664e4(unsigned int param_1,unsigned int param_2,int *param_3)

{
/* irregular: 7 goto(s); 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  int *piVar5;
  unsigned int temp_v2;
  int *piVar7;
  int *piVar8;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  
  temp_v3 = DAT_005b3c14;
  temp_v5 = 0.017453292f;
  if (0 < DAT_00636e00) {
    if ((DAT_005b3bfc & 1) != 0) {
      temp_v0 = FUN_00152f54();
      puVar2 = (unsigned int *)(**(romwright_code **)(**(int **)(temp_v3 + 0x260) + 0x10))();
      if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x20000000) == 0)) {
        puVar2 = (unsigned int *)0x0;
      }
      puVar2[3] = *(unsigned int *)(temp_v0 + 0x34);
      puVar2[1] = *(unsigned int *)(temp_v0 + 0x2c);
      puVar2[2] = *(unsigned int *)(temp_v0 + 0x30);
      puVar2[4] = (unsigned int)(*(float *)(temp_v0 + 0x28) * temp_v5);
    }
    else {
      FUN_00191bec(DAT_005b3c14,0);
    }
  }
  temp_v3 = DAT_005b3c20;
  if (0 < DAT_00636e18) {
    if ((DAT_005b3bfc & 2) != 0) {
      temp_v0 = FUN_0019e31c();
      puVar2 = (unsigned int *)(**(romwright_code **)(**(int **)(temp_v3 + 0x260) + 0x10))();
      if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x20000000) == 0)) {
        puVar2 = (unsigned int *)0x0;
      }
      puVar2[3] = *(unsigned int *)(temp_v0 + 0x34);
      puVar2[1] = *(unsigned int *)(temp_v0 + 0x2c);
      puVar2[2] = *(unsigned int *)(temp_v0 + 0x30);
      puVar2[4] = (unsigned int)(*(float *)(temp_v0 + 0x28) * temp_v5);
    }
    else {
      FUN_00191bec(DAT_005b3c20,1);
    }
  }
  temp_v3 = 0;
  do {
    temp_v0 = temp_v3 * 0x18;
    if ((0 < (&DAT_00636e00)[temp_v3 * 6]) || (((&DAT_005b3c78)[temp_v3] & 1) != 0)) {
      if ((&DAT_00636e04)[temp_v0] != '\0') {
        if ((&DAT_00636e05)[temp_v0] == '\0') {
          temp_v1 = (&DAT_005b3c88)[temp_v3];
          piVar8 = (int *)(&DAT_005b3c90)[temp_v3];
          piVar4 = *(int **)(temp_v1 + 0x18);
          piVar7 = *(int **)(temp_v1 + 0x1c);
          while( 1 ) {
            if (piVar4 != piVar7) {
              param_3 = (int *)*piVar4;
            }
            if (piVar4 == piVar7 || param_3 == piVar8) break;
            piVar4 = piVar4 + 1;
          }
          piVar5 = piVar4;
          if (piVar4 != piVar7) {
            piVar5 = piVar4 + 1;
            FUN_00198bc8();
            param_3 = piVar4;
          }
          piVar4 = *(int **)(temp_v1 + 0x1c);
          *(int **)(temp_v1 + 0x1c) = piVar5;
          if (piVar4 != piVar5) {
            piVar8[3] = 0;
          }
          piVar8 = (int *)(&DAT_005b3ca8)[temp_v3];
          temp_v1 = (&DAT_005b3c88)[temp_v3];
          piVar4 = *(int **)(temp_v1 + 0x18);
          piVar7 = *(int **)(temp_v1 + 0x1c);
          while( 1 ) {
            if (piVar4 != piVar7) {
              param_3 = (int *)*piVar4;
            }
            if (piVar4 == piVar7 || param_3 == piVar8) break;
            piVar4 = piVar4 + 1;
          }
          piVar5 = piVar4;
          if (piVar4 != piVar7) {
            piVar5 = piVar4 + 1;
            FUN_00198bc8();
            param_3 = piVar4;
          }
          piVar4 = *(int **)(temp_v1 + 0x1c);
          *(int **)(temp_v1 + 0x1c) = piVar5;
          if (piVar4 != piVar5) {
            piVar8[3] = 0;
          }
          piVar8 = (int *)(&DAT_005b3cb0)[temp_v3];
          temp_v1 = (&DAT_005b3c88)[temp_v3];
          piVar4 = *(int **)(temp_v1 + 0x18);
          piVar7 = *(int **)(temp_v1 + 0x1c);
          while( 1 ) {
            if (piVar4 != piVar7) {
              param_3 = (int *)*piVar4;
            }
            if (piVar4 == piVar7 || param_3 == piVar8) break;
            piVar4 = piVar4 + 1;
          }
          piVar5 = piVar4;
          if (piVar4 != piVar7) {
            piVar5 = piVar4 + 1;
            FUN_00198bc8();
            param_3 = piVar4;
          }
          piVar4 = *(int **)(temp_v1 + 0x1c);
          *(int **)(temp_v1 + 0x1c) = piVar5;
          if (piVar4 != piVar5) {
            piVar8[3] = 0;
          }
          FUN_001767a4((&DAT_005b3c80)[temp_v3],(&DAT_005b3c88)[temp_v3]);
        }
      }
      else if ((&DAT_00636e14)[temp_v0] != '\0') {
        temp_v1 = (&DAT_005b3c88)[temp_v3];
        temp_v4 = (&DAT_005b3c98)[temp_v3];
        piVar4 = *(int **)(temp_v1 + 0x18);
        piVar7 = *(int **)(temp_v1 + 0x1c);
        while( 1 ) {
          if (piVar4 != piVar7) {
            param_3 = (int *)*piVar4;
          }
          if (piVar4 == piVar7 || param_3 == (int *)temp_v4) break;
          piVar4 = piVar4 + 1;
        }
        piVar8 = piVar4;
        if (piVar4 != piVar7) {
          piVar8 = piVar4 + 1;
          FUN_00198bc8();
          param_3 = piVar4;
        }
        piVar4 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar8;
        if (piVar4 != piVar8) {
          *(unsigned int *)(temp_v4 + 0xc) = 0;
        }
        temp_v1 = (&DAT_005b3c88)[temp_v3];
        piVar8 = (int *)(&DAT_005b3c90)[temp_v3];
        piVar4 = *(int **)(temp_v1 + 0x18);
        piVar7 = *(int **)(temp_v1 + 0x1c);
        while( 1 ) {
          if (piVar4 != piVar7) {
            param_3 = (int *)*piVar4;
          }
          if (piVar4 == piVar7 || param_3 == piVar8) break;
          piVar4 = piVar4 + 1;
        }
        piVar5 = piVar4;
        if (piVar4 != piVar7) {
          piVar5 = piVar4 + 1;
          FUN_00198bc8();
          param_3 = piVar4;
        }
        piVar4 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar5;
        if (piVar4 != piVar5) {
          piVar8[3] = 0;
        }
        piVar8 = (int *)(&DAT_005b3ca8)[temp_v3];
        temp_v1 = (&DAT_005b3c88)[temp_v3];
        piVar4 = *(int **)(temp_v1 + 0x18);
        piVar7 = *(int **)(temp_v1 + 0x1c);
        while( 1 ) {
          if (piVar4 != piVar7) {
            param_3 = (int *)*piVar4;
          }
          if (piVar4 == piVar7 || param_3 == piVar8) break;
          piVar4 = piVar4 + 1;
        }
        piVar5 = piVar4;
        if (piVar4 != piVar7) {
          piVar5 = piVar4 + 1;
          FUN_00198bc8();
          param_3 = piVar4;
        }
        piVar4 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar5;
        if (piVar4 != piVar5) {
          piVar8[3] = 0;
        }
        piVar8 = (int *)(&DAT_005b3cb0)[temp_v3];
        temp_v1 = (&DAT_005b3c88)[temp_v3];
        piVar4 = *(int **)(temp_v1 + 0x18);
        piVar7 = *(int **)(temp_v1 + 0x1c);
        while( 1 ) {
          if (piVar4 != piVar7) {
            param_3 = (int *)*piVar4;
          }
          if (piVar4 == piVar7 || param_3 == piVar8) break;
          piVar4 = piVar4 + 1;
        }
        piVar5 = piVar4;
        if (piVar4 != piVar7) {
          piVar5 = piVar4 + 1;
          FUN_00198bc8();
          param_3 = piVar4;
        }
        piVar4 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar5;
        if (piVar4 != piVar5) {
          piVar8[3] = 0;
        }
        FUN_001767a4((&DAT_005b3c80)[temp_v3],(&DAT_005b3c88)[temp_v3]);
      }
      FUN_00176538((&DAT_005b3c80)[temp_v3]);
      if ((&DAT_00636e04)[temp_v0] != '\0') {
        if ((&DAT_00636e05)[temp_v0] == '\0') {
          temp_v4 = (&DAT_005b3c88)[temp_v3];
          temp_v1 = (&DAT_005b3c90)[temp_v3];
          temp_v0 = *(int *)(temp_v4 + 0xc);
          if (((temp_v0 == 0) ||
              ((temp_v0 != temp_v1 && (nw_gfx_SceneNode_IsCircularReference(), temp_v0 == 0)))) &&
             (*(int *)(temp_v1 + 0xc) == 0)) {
            param_3 = *(int **)(temp_v4 + 0x18);
            temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
            temp_v0 = 1;
            if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
              if (temp_v2 != 0) {
                temp_v0 = temp_v2 << 1;
              }
              else {
                temp_v0 = 1;
              }
              temp_v0 = FUN_001aa528(temp_v4 + 0x14,temp_v0);
              if (temp_v0 == 0) goto LAB_00166a5c;
            }
            if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
              **(int **)(temp_v4 + 0x1c) = temp_v1;
            }
            *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
            if (temp_v0 != 0) {
              *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
            }
          }
LAB_00166a5c:
          temp_v4 = (&DAT_005b3c88)[temp_v3];
          temp_v1 = (&DAT_005b3ca8)[temp_v3];
          temp_v0 = *(int *)(temp_v4 + 0xc);
          if (((temp_v0 == 0) ||
              ((temp_v0 != temp_v1 && (nw_gfx_SceneNode_IsCircularReference(), temp_v0 == 0)))) &&
             (*(int *)(temp_v1 + 0xc) == 0)) {
            param_3 = *(int **)(temp_v4 + 0x18);
            temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
            temp_v0 = 1;
            if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
              if (temp_v2 != 0) {
                temp_v0 = temp_v2 << 1;
              }
              else {
                temp_v0 = 1;
              }
              temp_v0 = FUN_001aa528(temp_v4 + 0x14,temp_v0);
              if (temp_v0 == 0) goto LAB_00166b18;
            }
            if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
              **(int **)(temp_v4 + 0x1c) = temp_v1;
            }
            *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
            if (temp_v0 != 0) {
              *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
            }
          }
LAB_00166b18:
          temp_v4 = (&DAT_005b3c88)[temp_v3];
          temp_v1 = (&DAT_005b3cb0)[temp_v3];
          temp_v0 = *(int *)(temp_v4 + 0xc);
          if (((temp_v0 == 0) ||
              ((temp_v0 != temp_v1 && (nw_gfx_SceneNode_IsCircularReference(), temp_v0 == 0)))) &&
             (*(int *)(temp_v1 + 0xc) == 0)) {
            param_3 = *(int **)(temp_v4 + 0x18);
            temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
            temp_v0 = 1;
            if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
              if (temp_v2 != 0) {
                temp_v0 = temp_v2 << 1;
              }
              else {
                temp_v0 = 1;
              }
              temp_v0 = FUN_001aa528(temp_v4 + 0x14,temp_v0);
              if (temp_v0 == 0) goto LAB_00166ed0;
            }
            if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
              **(int **)(temp_v4 + 0x1c) = temp_v1;
            }
            *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
            if (temp_v0 != 0) {
              *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
            }
          }
LAB_00166ed0:
          FUN_001767a4((&DAT_005b3c80)[temp_v3],(&DAT_005b3c88)[temp_v3]);
        }
      }
      else if ((&DAT_00636e14)[temp_v0] != '\0') {
        temp_v4 = (&DAT_005b3c88)[temp_v3];
        temp_v1 = (&DAT_005b3c98)[temp_v3];
        temp_v0 = *(int *)(temp_v4 + 0xc);
        if (((temp_v0 == 0) ||
            ((temp_v0 != temp_v1 && (nw_gfx_SceneNode_IsCircularReference(), temp_v0 == 0)))) &&
           (*(int *)(temp_v1 + 0xc) == 0)) {
          param_3 = *(int **)(temp_v4 + 0x18);
          temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
          temp_v0 = 1;
          if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
            if (temp_v2 != 0) {
              temp_v0 = temp_v2 << 1;
            }
            else {
              temp_v0 = 1;
            }
            temp_v0 = FUN_001aa528(temp_v4 + 0x14,temp_v0);
            if (temp_v0 == 0) goto LAB_00166ca0;
          }
          if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v4 + 0x1c) = temp_v1;
          }
          *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
          if (temp_v0 != 0) {
            *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
          }
        }
LAB_00166ca0:
        temp_v4 = (&DAT_005b3c88)[temp_v3];
        temp_v1 = (&DAT_005b3c90)[temp_v3];
        temp_v0 = *(int *)(temp_v4 + 0xc);
        if (((temp_v0 == 0) ||
            ((temp_v0 != temp_v1 && (nw_gfx_SceneNode_IsCircularReference(), temp_v0 == 0)))) &&
           (*(int *)(temp_v1 + 0xc) == 0)) {
          param_3 = *(int **)(temp_v4 + 0x18);
          temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
          temp_v0 = 1;
          if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
            if (temp_v2 != 0) {
              temp_v0 = temp_v2 << 1;
            }
            else {
              temp_v0 = 1;
            }
            temp_v0 = FUN_001aa528(temp_v4 + 0x14,temp_v0);
            if (temp_v0 == 0) goto LAB_00166d58;
          }
          if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v4 + 0x1c) = temp_v1;
          }
          *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
          if (temp_v0 != 0) {
            *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
          }
        }
LAB_00166d58:
        temp_v4 = (&DAT_005b3c88)[temp_v3];
        temp_v1 = (&DAT_005b3ca8)[temp_v3];
        temp_v0 = *(int *)(temp_v4 + 0xc);
        if (((temp_v0 == 0) ||
            ((temp_v0 != temp_v1 && (nw_gfx_SceneNode_IsCircularReference(), temp_v0 == 0)))) &&
           (*(int *)(temp_v1 + 0xc) == 0)) {
          param_3 = *(int **)(temp_v4 + 0x18);
          temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
          temp_v0 = 1;
          if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
            if (temp_v2 != 0) {
              temp_v0 = temp_v2 << 1;
            }
            else {
              temp_v0 = 1;
            }
            temp_v0 = FUN_001aa528(temp_v4 + 0x14,temp_v0);
            if (temp_v0 == 0) goto LAB_00166e14;
          }
          if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v4 + 0x1c) = temp_v1;
          }
          *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
          if (temp_v0 != 0) {
            *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
          }
        }
LAB_00166e14:
        temp_v4 = (&DAT_005b3c88)[temp_v3];
        temp_v1 = (&DAT_005b3cb0)[temp_v3];
        temp_v0 = *(int *)(temp_v4 + 0xc);
        if (((temp_v0 == 0) ||
            ((temp_v0 != temp_v1 && (nw_gfx_SceneNode_IsCircularReference(), temp_v0 == 0)))) &&
           (*(int *)(temp_v1 + 0xc) == 0)) {
          param_3 = *(int **)(temp_v4 + 0x18);
          temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
          temp_v0 = 1;
          if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
            if (temp_v2 != 0) {
              temp_v0 = temp_v2 << 1;
            }
            else {
              temp_v0 = 1;
            }
            temp_v0 = FUN_001aa528(temp_v4 + 0x14,temp_v0);
            if (temp_v0 == 0) goto LAB_00166ed0;
          }
          if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v4 + 0x1c) = temp_v1;
          }
          *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
          if (temp_v0 != 0) {
            *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
          }
        }
        FUN_001767a4((&DAT_005b3c80)[temp_v3],(&DAT_005b3c88)[temp_v3]);
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 2) {
      if (0 < DAT_00636e00) {
        nw_gfx_Camera_UpdateCameraMatrix(DAT_005b3c38);
        nw_gfx_Camera_UpdateCameraMatrix(DAT_005b3c14);
      }
      if (0 < DAT_00636e18) {
        nw_gfx_Camera_UpdateCameraMatrix(DAT_005b3c20);
      }
      if ((0 < DAT_00636e00) && (temp_v3 = FUN_001696f4(), temp_v3 == 1)) {
        FUN_00152f54();
        FUN_00192484(DAT_005b3cb8,DAT_005b3c18,DAT_005b3c1c,DAT_005b3c14);
      }
      DAT_005b3c00 = 0;
      DAT_005b3c10 = DAT_005b3c10 + 1;
      return;
    }
  } while( 1 );
}
