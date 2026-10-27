/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003168b8` (_code @ 0x3168b8, 0xadc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
struct SceneChildSet;
struct SceneNodePrefix;

extern "C" {

int asdMemoryGetDefaultAllocator(void);
int nw_gfx_res_ResGraphicsFile_Setup(int *, unsigned int, int);
int FUN_001aa528(...);
void sceneNodeAttachDeclaredChild(SceneChildSet *, SceneNodePrefix *);
int nw_gfx_SceneBuilder_CreateObject(...);
int nw_gfx_SceneNode_IsCircularReference(...);
int rt_memcpy(short *, int, int);

typedef struct fn_003168b8_arg1 fn_003168b8_arg1;
struct fn_003168b8_arg1 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    undefined4 *field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 20 slot(s), 74 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned char sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned char sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp90; /* 0x90: local_90 */
} param_2_stack;

extern unsigned char DAT_00636d20; /* 0x636d20 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: asdMemoryGetDefaultAllocator. */
/* Supplied declaration required: nw_gfx_res_ResGraphicsFile_Setup. */
/* Supplied declaration required: FUN_001aa528. */
extern unsigned int asdMemoryGetAllocatorA(void);
/* Supplied declaration required: sceneNodeAttachDeclaredChild. */
/* Supplied declaration required: nw_gfx_SceneBuilder_CreateObject. */
extern short libc_strlen(int);
extern int asdModelGetSlotArray2(fn_003168b8_arg1 *);
extern int asdModelGetSlotArray1(fn_003168b8_arg1 *);
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */
/* Supplied declaration required: rt_memcpy. */


void FUN_003168b8(int *param_1,fn_003168b8_arg1 *param_2)

{
/* irregular: 8 unstructured edge(s); 9 goto(s); 7 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  short temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar9;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar12;
  unsigned int *puVar13;
  int temp_v7;
  short *psVar15;
  unsigned int temp_v8;
  unsigned int *puVar17;
  unsigned int *puVar18;
  int temp_v9;
  int *piVar20;
  int *piVar21;
  short *psVar22;
  int temp_v10;
  int temp_v11;
  int *temp_v12;
  int *temp_v13;
  int *temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  unsigned char temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int uStack_40;
  short *temp_v26;
  short *temp_v27;
  short *temp_v28;
  int *temp_v29;
  fn_003168b8_arg1 *pfStack_28;
  
  piVar21 = (int *)0x0;
  temp_v29 = param_1;
  pfStack_28 = param_2;
  temp_v3 = asdMemoryGetDefaultAllocator();
  nw_gfx_res_ResGraphicsFile_Setup(temp_v29,temp_v3,*temp_v29);
  temp_v12 = (int *)asdMemoryGetDefaultAllocator();
  temp_v13 = (int *)0x0;
  temp_v14 = (int *)0x0;
  temp_v15 = 0x40000000;
  temp_v7 = *(int *)(*temp_v29 + 0x50);
  if (temp_v7 != 0) {
    temp_v7 = *temp_v29 + 0x50 + temp_v7;
  }
  else {
    temp_v7 = 0;
  }
  if (temp_v7 != 0) {
    temp_v7 = temp_v7 + 0x1c;
  }
  else {
    temp_v7 = 0;
  }
  temp_v10 = temp_v7 + *(int *)(*temp_v29 + 0x4c) * 0x10;
  if (temp_v7 != temp_v10) {
    temp_v26 = (short *)((int)param_2 * 0x284 + 0x636818);
    temp_v27 = (short *)((int)param_2 * 0x284 + 0x636310);
    temp_v28 = (short *)((int)param_2 * 0x284 + 0x635e08);
    psVar22 = (short *)((int)param_2 * 0x284 + 0x635900);
    do {
      if (*(int *)(temp_v7 + 0xc) != 0) {
        temp_v9 = *(int *)(temp_v7 + 0xc) + temp_v7 + 0xc;
      }
      else {
        temp_v9 = 0;
      }
      temp_v3 = asdMemoryGetDefaultAllocator();
      temp_v4 = asdMemoryGetAllocatorA();
      temp_v17 = 1;
      temp_v20 = 0;
      temp_v21 = 0;
      temp_v22 = 0;
      temp_v23 = 1;
      temp_v24 = 0;
      temp_v18 = 8;
      temp_v19 = 4;
      temp_v25 = romwright_piece_3_1((((unsigned int)(temp_v25) >> 8) & 0xffffffU),1);
      piVar20 = &temp_v16;
      temp_v16 = temp_v9;
      nw_gfx_SceneBuilder_CreateObject(piVar20,temp_v3,temp_v4);
      if (piVar20 != (int *)0x0) {
        piVar9 = (int *)(**(romwright_code **)(*piVar20 + 8))(piVar20);
        do {
          if (piVar9 == (int *)0x5c0f30) goto LAB_00316a18;
          piVar9 = (int *)*piVar9;
        } while (piVar9 != (int *)0x0);
      }
      piVar20 = (int *)0x0;
LAB_00316a18:
      if (piVar21 == (int *)0x0) {
        piVar21 = piVar20;
      }
      temp_v5 = temp_v15 & 0x3fffffff;
      if (((int)temp_v14 - (int)temp_v13) >> 2 >= (int)temp_v5) {
        if (temp_v5 != 0) {
          temp_v9 = temp_v5 << 1;
        }
        else {
          temp_v9 = 1;
        }
        temp_v9 = FUN_001aa528(&temp_v12,temp_v9);
        if (temp_v9 != 0) {
          if (temp_v14 != (int *)0x0) {
            *temp_v14 = (int)piVar20;
          }
          temp_v14 = temp_v14 + 1;
        }
      }
      else {
        if (temp_v14 != (int *)0x0) {
          *temp_v14 = (int)piVar20;
        }
        temp_v14 = temp_v14 + 1;
      }
      if ((piVar20 != (int *)0x0) && (temp_v9 = (**(romwright_code **)(*piVar20 + 8))(), temp_v9 == 0x5c0dfc)) {
        piVar9 = (int *)(**(romwright_code **)(*piVar20 + 8))(piVar20);
LAB_00316ab4:
        if (piVar9 != (int *)0x5c0dfc) {
          piVar9 = (int *)*piVar9;
          if (piVar9 != (int *)0x0) goto LAB_00316ab4;
          piVar20 = (int *)0x0;
        }
        *(int **)(psVar22 + *psVar22 * 2 + 0x132) = piVar20;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v9 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v9 = 0;
        }
        temp_v6 = *(int *)(temp_v9 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + temp_v9 + 0xc;
        }
        temp_v1 = libc_strlen(temp_v6);
        temp_v2 = *psVar22;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v9 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v9 = 0;
        }
        temp_v6 = *(int *)(temp_v9 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v9 + 0xc + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        rt_memcpy(psVar22 + temp_v2 * 0x26 + 2,temp_v6,(int)temp_v1);
        *psVar22 = temp_v2 + 1;
      }
      else if ((piVar20 != (int *)0x0) &&
              (temp_v9 = (**(romwright_code **)(*piVar20 + 8))(), temp_v9 == 0x5c0e9c)) {
        piVar9 = (int *)(**(romwright_code **)(*piVar20 + 8))(piVar20);
LAB_00316b80:
        if (piVar9 != (int *)0x5c0e9c) {
          piVar9 = (int *)*piVar9;
          if (piVar9 != (int *)0x0) goto LAB_00316b80;
          piVar20 = (int *)0x0;
        }
        *(int **)(temp_v28 + *temp_v28 * 2 + 0x132) = piVar20;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v9 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v9 = 0;
        }
        temp_v6 = *(int *)(temp_v9 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + temp_v9 + 0xc;
        }
        temp_v2 = libc_strlen(temp_v6);
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v9 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v9 = 0;
        }
        temp_v1 = *temp_v28;
        temp_v6 = *(int *)(temp_v9 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v9 + 0xc + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        rt_memcpy(temp_v28 + temp_v1 * 0x26 + 2,temp_v6,(int)temp_v2);
        *temp_v28 = temp_v1 + 1;
      }
      else if ((piVar20 != (int *)0x0) &&
              (temp_v9 = (**(romwright_code **)(*piVar20 + 8))(), temp_v9 == 0x5c0f44)) {
        piVar9 = (int *)(**(romwright_code **)(*piVar20 + 8))(piVar20);
LAB_00316c58:
        if (piVar9 != (int *)0x5c0f44) {
          piVar9 = (int *)*piVar9;
          if (piVar9 != (int *)0x0) goto LAB_00316c58;
          piVar20 = (int *)0x0;
        }
        *(int **)(temp_v27 + *temp_v27 * 2 + 0x132) = piVar20;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v9 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v9 = 0;
        }
        temp_v6 = *(int *)(temp_v9 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + temp_v9 + 0xc;
        }
        temp_v2 = libc_strlen(temp_v6);
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v9 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v9 = 0;
        }
        temp_v1 = *temp_v27;
        temp_v6 = *(int *)(temp_v9 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v9 + 0xc + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        rt_memcpy(temp_v27 + temp_v1 * 0x26 + 2,temp_v6,(int)temp_v2);
        psVar15 = temp_v27;
        *psVar15 = temp_v1 + 1;
      }
      else if ((piVar20 != (int *)0x0) &&
              (temp_v9 = (**(romwright_code **)(*piVar20 + 8))(), temp_v9 == 0x5c0f0c)) {
        piVar9 = (int *)(**(romwright_code **)(*piVar20 + 8))(piVar20);
LAB_00316d2c:
        if (piVar9 != (int *)0x5c0f0c) {
          piVar9 = (int *)*piVar9;
          if (piVar9 != (int *)0x0) goto LAB_00316d2c;
          piVar20 = (int *)0x0;
        }
        *(int **)(temp_v26 + *temp_v26 * 2 + 0x132) = piVar20;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v9 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v9 = 0;
        }
        temp_v6 = *(int *)(temp_v9 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + temp_v9 + 0xc;
        }
        temp_v2 = libc_strlen(temp_v6);
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v9 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v9 = 0;
        }
        temp_v1 = *temp_v26;
        temp_v6 = *(int *)(temp_v9 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v9 + 0xc + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        rt_memcpy(temp_v26 + temp_v1 * 0x26 + 2,temp_v6,(int)temp_v2);
        psVar15 = temp_v26;
        *psVar15 = temp_v1 + 1;
      }
      temp_v7 = temp_v7 + 0x10;
    } while (temp_v7 != temp_v10);
  }
  temp_v7 = *(int *)(*temp_v29 + 0x58);
  if (temp_v7 != 0) {
    temp_v7 = *temp_v29 + 0x58 + temp_v7;
  }
  else {
    temp_v7 = 0;
  }
  if (temp_v7 != 0) {
    temp_v7 = temp_v7 + 0x1c;
  }
  else {
    temp_v7 = 0;
  }
  temp_v10 = temp_v7 + *(int *)(*temp_v29 + 0x54) * 0x10;
  piVar21 = temp_v13;
  piVar20 = temp_v13;
  piVar9 = temp_v14;
  if (temp_v7 != temp_v10) {
    psVar22 = (short *)(&DAT_00636d20 + (int)param_2 * 0x14);
    do {
      if (*(int *)(temp_v7 + 0xc) != 0) {
        temp_v9 = *(int *)(temp_v7 + 0xc) + temp_v7 + 0xc;
      }
      else {
        temp_v9 = 0;
      }
      temp_v3 = asdMemoryGetDefaultAllocator();
      temp_v4 = asdMemoryGetAllocatorA();
      temp_v17 = 1;
      temp_v18 = 8;
      temp_v19 = 4;
      temp_v20 = 0;
      temp_v21 = 0;
      temp_v22 = 0;
      temp_v23 = 1;
      piVar21 = &temp_v16;
      temp_v24 = 0;
      temp_v25 = romwright_piece_3_1((((unsigned int)(temp_v25) >> 8) & 0xffffffU),1);
      temp_v16 = temp_v9;
      nw_gfx_SceneBuilder_CreateObject(piVar21,temp_v3,temp_v4);
      if (piVar21 != (int *)0x0) {
        piVar20 = (int *)(**(romwright_code **)(*piVar21 + 8))(piVar21);
        do {
          if (piVar20 == (int *)0x5c0f30) goto LAB_00316eb8;
          piVar20 = (int *)*piVar20;
        } while (piVar20 != (int *)0x0);
      }
      piVar21 = (int *)0x0;
LAB_00316eb8:
      temp_v5 = temp_v15 & 0x3fffffff;
      if (((int)temp_v14 - (int)temp_v13) >> 2 >= (int)temp_v5) {
        if (temp_v5 == 0) {
          temp_v9 = 1;
        }
        else {
          temp_v9 = temp_v5 << 1;
        }
        temp_v9 = FUN_001aa528(&temp_v12,temp_v9);
        if (temp_v9 != 0) {
          if (temp_v14 != (int *)0x0) {
            *temp_v14 = (int)piVar21;
          }
          temp_v14 = temp_v14 + 1;
        }
      }
      else {
        if (temp_v14 != (int *)0x0) {
          *temp_v14 = (int)piVar21;
        }
        temp_v14 = temp_v14 + 1;
      }
      if (piVar21 != (int *)0x0) {
        piVar20 = (int *)(**(romwright_code **)(*piVar21 + 8))(piVar21);
        do {
          if (piVar20 == (int *)0x5c0e98) goto LAB_00316f40;
          piVar20 = (int *)*piVar20;
        } while (piVar20 != (int *)0x0);
      }
      piVar21 = (int *)0x0;
LAB_00316f40:
      temp_v7 = temp_v7 + 0x10;
      *(int **)(psVar22 + *psVar22 * 2 + 2) = piVar21;
      *psVar22 = *psVar22 + 1;
      piVar21 = temp_v13;
      piVar20 = temp_v13;
      piVar9 = temp_v14;
    } while (temp_v7 != temp_v10);
  }
  while( 1 ) {
    piVar4 = temp_v14;
    piVar3 = temp_v13;
    temp_v0 = piVar21 != temp_v14;
    piVar2 = temp_v13;
    temp_v13 = piVar20;
    temp_v14 = piVar9;
    if (!temp_v0) break;
    for (; piVar2 != piVar4; piVar2 = piVar2 + 1) {
      sceneNodeAttachDeclaredChild((SceneChildSet *)*piVar21,(SceneNodePrefix *)*piVar2);
    }
    piVar20 = temp_v13;
    piVar9 = temp_v14;
    temp_v14 = piVar4;
    temp_v13 = piVar3;
    piVar21 = piVar21 + 1;
  }
  temp_v7 = asdModelGetSlotArray1(param_2);
  temp_v10 = asdModelGetSlotArray2(param_2);
  piVar9 = temp_v14;
  piVar20 = temp_v14;
  piVar21 = temp_v13;
  while( 1 ) {
    temp_v14 = piVar20;
    piVar2 = temp_v13;
    if (piVar21 == piVar9) break;
    temp_v9 = *piVar21;
    if ((*(int *)(temp_v9 + 0xc) == 0) &&
       (((temp_v6 = *(int *)(temp_v7 + 0xc), temp_v6 == 0 ||
         ((temp_v6 != temp_v9 && (nw_gfx_SceneNode_IsCircularReference(temp_v6,temp_v9), temp_v6 == 0))))
        && (*(int *)(temp_v9 + 0xc) == 0)))) {
      temp_v6 = 1;
      temp_v5 = *(unsigned int *)(temp_v7 + 0x20) & 0x3fffffff;
      if ((int)temp_v5 <= (*(int *)(temp_v7 + 0x1c) - *(int *)(temp_v7 + 0x18)) >> 2) {
        if (temp_v5 == 0) {
          temp_v6 = 1;
        }
        else {
          temp_v6 = temp_v5 << 1;
        }
        temp_v6 = FUN_001aa528(temp_v7 + 0x14,temp_v6);
        if (temp_v6 == 0) {
          piVar20 = temp_v14;
          piVar21 = piVar21 + 1;
          continue;
        }
      }
      if (*(int **)(temp_v7 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v7 + 0x1c) = temp_v9;
      }
      *(int *)(temp_v7 + 0x1c) = *(int *)(temp_v7 + 0x1c) + 4;
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v9 + 0xc) = *(unsigned int *)(temp_v7 + 0x10);
      }
    }
    piVar20 = temp_v14;
    piVar21 = piVar21 + 1;
  }
  for (; piVar2 != piVar20; piVar2 = piVar2 + 1) {
    temp_v7 = *piVar2;
    if (((*(int *)(temp_v7 + 0xc) == 0) &&
        ((temp_v9 = *(int *)(temp_v10 + 0xc), temp_v9 == 0 ||
         ((temp_v9 != temp_v7 && (nw_gfx_SceneNode_IsCircularReference(), temp_v9 == 0)))))) &&
       (*(int *)(temp_v7 + 0xc) == 0)) {
      temp_v5 = *(unsigned int *)(temp_v10 + 0x20) & 0x3fffffff;
      temp_v9 = 1;
      if ((int)temp_v5 <= (*(int *)(temp_v10 + 0x1c) - *(int *)(temp_v10 + 0x18)) >> 2) {
        if (temp_v5 == 0) {
          temp_v9 = 1;
        }
        else {
          temp_v9 = temp_v5 << 1;
        }
        temp_v9 = FUN_001aa528(temp_v10 + 0x14,temp_v9);
        if (temp_v9 == 0) goto LAB_00317150;
      }
      if (*(int **)(temp_v10 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v10 + 0x1c) = temp_v7;
      }
      *(int *)(temp_v10 + 0x1c) = *(int *)(temp_v10 + 0x1c) + 4;
      if (temp_v9 != 0) {
        *(unsigned int *)(temp_v7 + 0xc) = *(unsigned int *)(temp_v10 + 0x10);
      }
    }
LAB_00317150:;
  }
  temp_v7 = *(int *)(*temp_v29 + 0x60);
  if (temp_v7 != 0) {
    temp_v7 = *temp_v29 + 0x60 + temp_v7;
  }
  else {
    temp_v7 = 0;
  }
  if (temp_v7 != 0) {
    temp_v7 = temp_v7 + 0x1c;
  }
  else {
    temp_v7 = 0;
  }
  temp_v10 = temp_v7 + *(int *)(*temp_v29 + 0x5c) * 0x10;
  if (temp_v7 != temp_v10) {
    temp_v9 = (int)param_2 * 0x40;
    piVar21 = (int *)(temp_v9 + 0x636d60);
    do {
      if (*(int *)(temp_v7 + 0xc) != 0) {
        temp_v6 = *(int *)(temp_v7 + 0xc) + temp_v7 + 0xc;
      }
      else {
        temp_v6 = 0;
      }
      temp_v3 = asdMemoryGetAllocatorA();
      temp_v4 = asdMemoryGetDefaultAllocator();
      temp_v19 = romwright_piece_3_1((((unsigned int)(temp_v19) >> 8) & 0xffffffU),1);
      temp_v22 = 0;
      temp_v23 = 0;
      temp_v24 = 0;
      temp_v25 = 1;
      uStack_40 = 0;
      temp_v20 = 8;
      temp_v21 = 4;
      piVar20 = &temp_v18;
      temp_v26 = (short *)romwright_piece_3_1((((unsigned int)(temp_v26) >> 8) & 0xffffffU),1);
      temp_v18 = temp_v6;
      nw_gfx_SceneBuilder_CreateObject(piVar20,temp_v4,temp_v3);
      if (piVar20 != (int *)0x0) {
        piVar9 = (int *)(**(romwright_code **)(*piVar20 + 8))(piVar20);
        do {
          if (piVar9 == (int *)0x5c0f2c) goto LAB_00317244;
          piVar9 = (int *)*piVar9;
        } while (piVar9 != (int *)0x0);
      }
      piVar20 = (int *)0x0;
LAB_00317244:
      temp_v8 = *(unsigned int *)(temp_v9 + 0x636d6c);
      temp_v5 = temp_v8 & 0x3fffffff;
      if ((*(int *)(temp_v9 + 0x636d68) - *(int *)(temp_v9 + 0x636d64)) >> 2 >= (int)temp_v5) {
        if (temp_v5 != 0) {
          temp_v5 = temp_v5 << 1;
        }
        else {
          temp_v5 = 1;
        }
        if (temp_v5 > (temp_v8 & 0x3fffffff)) {
          if (((*piVar21 != 0) && ((temp_v8 & 0xc0000000) == 0x40000000)) &&
             (puVar12 = (unsigned int *)
                        (**(romwright_code **)(*(int *)*piVar21 + 8))((int *)*piVar21,temp_v5 << 2,0x20),
             puVar12 != (unsigned int *)0x0)) {
            puVar13 = *(unsigned int **)(temp_v9 + 0x636d64);
            puVar17 = *(unsigned int **)(temp_v9 + 0x636d68);
            temp_v11 = 0;
            puVar18 = puVar12;
            if (puVar13 != puVar17) {
              do {
                if (puVar18 != (unsigned int *)0x0) {
                  *puVar18 = *puVar13;
                }
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              } while (puVar13 != puVar17);
              temp_v11 = (*(int *)(temp_v9 + 0x636d68) - *(int *)(temp_v9 + 0x636d64)) >> 2;
            }
            if (*(int *)(temp_v9 + 0x636d64) != 0) {
              *(int *)(temp_v9 + 0x636d68) = *(int *)(temp_v9 + 0x636d64);
              (**(romwright_code **)(*(int *)*piVar21 + 0xc))();
            }
            *(unsigned int **)(temp_v9 + 0x636d68) = puVar12 + temp_v11;
            *(unsigned int **)(temp_v9 + 0x636d64) = puVar12;
            *(unsigned int *)(temp_v9 + 0x636d6c) = (*(unsigned int *)(temp_v9 + 0x636d6c) & 0xc0000000) | temp_v5;
            if (*(int **)(temp_v9 + 0x636d68) != (int *)0x0) {
              **(int **)(temp_v9 + 0x636d68) = (int)piVar20;
            }
            *(int *)(temp_v9 + 0x636d68) = *(int *)(temp_v9 + 0x636d68) + 4;
          }
        }
        else {
          if (*(int **)(temp_v9 + 0x636d68) != (int *)0x0) {
            **(int **)(temp_v9 + 0x636d68) = (int)piVar20;
          }
          *(int *)(temp_v9 + 0x636d68) = *(int *)(temp_v9 + 0x636d68) + 4;
        }
      }
      else {
        if (*(int **)(temp_v9 + 0x636d68) != (int *)0x0) {
          **(int **)(temp_v9 + 0x636d68) = (int)piVar20;
        }
        *(int *)(temp_v9 + 0x636d68) = *(int *)(temp_v9 + 0x636d68) + 4;
      }
      temp_v7 = temp_v7 + 0x10;
      *(int **)((int)param_2 * 4 + 0x5b3be8) = piVar20;
    } while (temp_v7 != temp_v10);
  }
  temp_v14 = temp_v13;
  piVar21 = (int *)0x0;
  if (temp_v12 != (int *)0x0) {
    piVar21 = temp_v13;
  }
  if (temp_v12 != (int *)0x0 && piVar21 != (int *)0x0) {
    (**(romwright_code **)(*temp_v12 + 0xc))(temp_v12,temp_v13);
  }
  return;
}

} /* extern "C" */
