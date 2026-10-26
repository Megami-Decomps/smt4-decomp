/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021f6e4` (_code @ 0x21f6e4, 0xae0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"

extern "C" {

int FUN_002af294(...);
int asdMemoryGetDefaultAllocator(void);
int nw_gfx_SceneBuilder_CreateObject(...);
int nw_gfx_SceneHelper_ResolveReferenceImpl(int, int);
int nw_gfx_SceneNode_IsCircularReference(void);
int nw_gfx_res_ResGraphicsFile_Setup(int *, unsigned int, int);
int rt_memcpy(short *, int, int);

typedef struct fn_0021f6e4_arg1 fn_0021f6e4_arg1;
struct fn_0021f6e4_arg1 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    undefined4 *field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 21 slot(s), 78 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned char sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
} param_2_stack;

extern unsigned char g_asdModelBanks; /* 0x4d9880 */
extern unsigned char DAT_004d9d88; /* 0x4d9d88 */
extern unsigned char g_asdModelIdLists; /* 0x4daca0 */
extern unsigned char DAT_004dace0; /* 0x4dace0 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int asdModelGetSlotArray2(fn_0021f6e4_arg1 *);
extern int asdModelGetSlotArray1(fn_0021f6e4_arg1 *);
/* Supplied declaration required: FUN_002af294. */
/* Supplied declaration required: asdMemoryGetDefaultAllocator. */
extern short libc_strlen(int);
/* Supplied declaration required: nw_gfx_SceneBuilder_CreateObject. */
/* Supplied declaration required: nw_gfx_SceneHelper_ResolveReferenceImpl. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */
/* Supplied declaration required: nw_gfx_res_ResGraphicsFile_Setup. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0021f6e4(int *param_1,fn_0021f6e4_arg1 *param_2)

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
  unsigned int *puVar16;
  unsigned int *puVar17;
  int temp_v8;
  int *piVar19;
  int *piVar20;
  unsigned int temp_v9;
  short *psVar22;
  int temp_v10;
  int *temp_v11;
  int *temp_v12;
  int *temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned char temp_v16;
  unsigned int temp_v17;
  unsigned int uStack_64;
  unsigned int temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  short *temp_v27;
  short *temp_v28;
  short *temp_v29;
  int *temp_v30;
  fn_0021f6e4_arg1 *pfStack_28;
  
  piVar20 = (int *)0x0;
  temp_v30 = param_1;
  pfStack_28 = param_2;
  temp_v3 = asdMemoryGetDefaultAllocator();
  nw_gfx_res_ResGraphicsFile_Setup(temp_v30,temp_v3,*temp_v30);
  temp_v11 = (int *)asdMemoryGetDefaultAllocator();
  temp_v12 = (int *)0x0;
  temp_v13 = (int *)0x0;
  temp_v14 = 0x40000000;
  temp_v7 = *(int *)(*temp_v30 + 0x50);
  if (temp_v7 != 0) {
    temp_v7 = *temp_v30 + 0x50 + temp_v7;
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
  temp_v10 = temp_v7 + *(int *)(*temp_v30 + 0x4c) * 0x10;
  if (temp_v7 != temp_v10) {
    temp_v27 = (short *)((int)param_2 * 0x284 + 0x4da798);
    temp_v28 = (short *)((int)param_2 * 0x284 + 0x4da290);
    temp_v29 = (short *)(&DAT_004d9d88 + (int)param_2 * 0x284);
    psVar22 = (short *)(&g_asdModelBanks + (int)param_2 * 0x284);
    do {
      if (*(int *)(temp_v7 + 0xc) != 0) {
        temp_v8 = *(int *)(temp_v7 + 0xc) + temp_v7 + 0xc;
      }
      else {
        temp_v8 = 0;
      }
      temp_v3 = asdMemoryGetDefaultAllocator();
      temp_v4 = (unsigned int)asdMemoryGetAllocatorA();
      temp_v16 = 1;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 1;
      temp_v22 = 0;
      temp_v17 = 8;
      uStack_64 = 4;
      temp_v23 = romwright_piece_3_1((((unsigned int)(temp_v23) >> 8) & 0xffffffU),1);
      piVar19 = &temp_v15;
      temp_v15 = temp_v8;
      nw_gfx_SceneBuilder_CreateObject(piVar19,temp_v3,temp_v4);
      if (piVar19 != (int *)0x0) {
        piVar9 = (int *)(**(romwright_code **)(*piVar19 + 8))(piVar19);
        do {
          if (piVar9 == (int *)0x44e858) goto LAB_0021f844;
          piVar9 = (int *)*piVar9;
        } while (piVar9 != (int *)0x0);
      }
      piVar19 = (int *)0x0;
LAB_0021f844:
      if (piVar20 == (int *)0x0) {
        piVar20 = piVar19;
      }
      temp_v5 = temp_v14 & 0x3fffffff;
      if (((int)temp_v13 - (int)temp_v12) >> 2 >= (int)temp_v5) {
        if (temp_v5 != 0) {
          temp_v8 = temp_v5 << 1;
        }
        else {
          temp_v8 = 1;
        }
        temp_v8 = FUN_002af294(&temp_v11,temp_v8);
        if (temp_v8 != 0) {
          if (temp_v13 != (int *)0x0) {
            *temp_v13 = (int)piVar19;
          }
          temp_v13 = temp_v13 + 1;
        }
      }
      else {
        if (temp_v13 != (int *)0x0) {
          *temp_v13 = (int)piVar19;
        }
        temp_v13 = temp_v13 + 1;
      }
      if ((piVar19 != (int *)0x0) && (temp_v8 = (**(romwright_code **)(*piVar19 + 8))(), temp_v8 == 0x471f18)) {
        piVar9 = (int *)(**(romwright_code **)(*piVar19 + 8))(piVar19);
LAB_0021f8dc:
        if (piVar9 != (int *)0x471f18) {
          piVar9 = (int *)*piVar9;
          if (piVar9 != (int *)0x0) goto LAB_0021f8dc;
          piVar19 = (int *)0x0;
        }
        *(int **)(psVar22 + *psVar22 * 2 + 0x132) = piVar19;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v8 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v8 = 0;
        }
        temp_v6 = *(int *)(temp_v8 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + temp_v8 + 0xc;
        }
        temp_v1 = libc_strlen(temp_v6);
        temp_v2 = *psVar22;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v8 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v8 = 0;
        }
        temp_v6 = *(int *)(temp_v8 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v8 + 0xc + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        rt_memcpy(psVar22 + temp_v2 * 0x26 + 2,temp_v6,(int)temp_v1);
        *psVar22 = temp_v2 + 1;
      }
      else if ((piVar19 != (int *)0x0) &&
              (temp_v8 = (**(romwright_code **)(*piVar19 + 8))(), temp_v8 == 0x472048)) {
        piVar9 = (int *)(**(romwright_code **)(*piVar19 + 8))(piVar19);
LAB_0021f9a8:
        if (piVar9 != (int *)0x472048) {
          piVar9 = (int *)*piVar9;
          if (piVar9 != (int *)0x0) goto LAB_0021f9a8;
          piVar19 = (int *)0x0;
        }
        *(int **)(temp_v29 + *temp_v29 * 2 + 0x132) = piVar19;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v8 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v8 = 0;
        }
        temp_v6 = *(int *)(temp_v8 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + temp_v8 + 0xc;
        }
        temp_v2 = libc_strlen(temp_v6);
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v8 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v8 = 0;
        }
        temp_v1 = *temp_v29;
        temp_v6 = *(int *)(temp_v8 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v8 + 0xc + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        rt_memcpy(temp_v29 + temp_v1 * 0x26 + 2,temp_v6,(int)temp_v2);
        *temp_v29 = temp_v1 + 1;
      }
      else if ((piVar19 != (int *)0x0) &&
              (temp_v8 = (**(romwright_code **)(*piVar19 + 8))(), temp_v8 == 0x4722d0)) {
        piVar9 = (int *)(**(romwright_code **)(*piVar19 + 8))(piVar19);
LAB_0021fa84:
        if (piVar9 != (int *)0x4722d0) {
          piVar9 = (int *)*piVar9;
          if (piVar9 != (int *)0x0) goto LAB_0021fa84;
          piVar19 = (int *)0x0;
        }
        *(int **)(temp_v28 + *temp_v28 * 2 + 0x132) = piVar19;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v8 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v8 = 0;
        }
        temp_v6 = *(int *)(temp_v8 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + temp_v8 + 0xc;
        }
        temp_v2 = libc_strlen(temp_v6);
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v8 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v8 = 0;
        }
        temp_v1 = *temp_v28;
        temp_v6 = *(int *)(temp_v8 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v8 + 0xc + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        rt_memcpy(temp_v28 + temp_v1 * 0x26 + 2,temp_v6,(int)temp_v2);
        psVar15 = temp_v28;
        *psVar15 = temp_v1 + 1;
      }
      else if ((piVar19 != (int *)0x0) &&
              (temp_v8 = (**(romwright_code **)(*piVar19 + 8))(), temp_v8 == 0x472110)) {
        piVar9 = (int *)(**(romwright_code **)(*piVar19 + 8))(piVar19);
LAB_0021fb58:
        if (piVar9 != (int *)0x472110) {
          piVar9 = (int *)*piVar9;
          if (piVar9 != (int *)0x0) goto LAB_0021fb58;
          piVar19 = (int *)0x0;
        }
        *(int **)(temp_v27 + *temp_v27 * 2 + 0x132) = piVar19;
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v8 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v8 = 0;
        }
        temp_v6 = *(int *)(temp_v8 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + temp_v8 + 0xc;
        }
        temp_v2 = libc_strlen(temp_v6);
        if (*(int *)(temp_v7 + 0xc) != 0) {
          temp_v8 = temp_v7 + 0xc + *(int *)(temp_v7 + 0xc);
        }
        else {
          temp_v8 = 0;
        }
        temp_v1 = *temp_v27;
        temp_v6 = *(int *)(temp_v8 + 0xc);
        if (temp_v6 != 0) {
          temp_v6 = temp_v8 + 0xc + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        rt_memcpy(temp_v27 + temp_v1 * 0x26 + 2,temp_v6,(int)temp_v2);
        psVar15 = temp_v27;
        *psVar15 = temp_v1 + 1;
      }
      temp_v7 = temp_v7 + 0x10;
    } while (temp_v7 != temp_v10);
  }
  temp_v7 = *(int *)(*temp_v30 + 0x58);
  if (temp_v7 != 0) {
    temp_v7 = *temp_v30 + 0x58 + temp_v7;
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
  temp_v10 = temp_v7 + *(int *)(*temp_v30 + 0x54) * 0x10;
  piVar20 = temp_v12;
  piVar19 = temp_v12;
  piVar9 = temp_v13;
  if (temp_v7 != temp_v10) {
    psVar22 = (short *)(&g_asdModelIdLists + (int)param_2 * 0x14);
    do {
      if (*(int *)(temp_v7 + 0xc) != 0) {
        temp_v8 = *(int *)(temp_v7 + 0xc) + temp_v7 + 0xc;
      }
      else {
        temp_v8 = 0;
      }
      temp_v3 = asdMemoryGetDefaultAllocator();
      temp_v4 = (unsigned int)asdMemoryGetAllocatorA();
      temp_v16 = 1;
      temp_v17 = 8;
      uStack_64 = 4;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 1;
      piVar20 = &temp_v15;
      temp_v22 = 0;
      temp_v23 = romwright_piece_3_1((((unsigned int)(temp_v23) >> 8) & 0xffffffU),1);
      temp_v15 = temp_v8;
      nw_gfx_SceneBuilder_CreateObject(piVar20,temp_v3,temp_v4);
      if (piVar20 != (int *)0x0) {
        piVar19 = (int *)(**(romwright_code **)(*piVar20 + 8))(piVar20);
        do {
          if (piVar19 == (int *)0x44e858) goto LAB_0021fce4;
          piVar19 = (int *)*piVar19;
        } while (piVar19 != (int *)0x0);
      }
      piVar20 = (int *)0x0;
LAB_0021fce4:
      temp_v5 = temp_v14 & 0x3fffffff;
      if (((int)temp_v13 - (int)temp_v12) >> 2 >= (int)temp_v5) {
        if (temp_v5 == 0) {
          temp_v8 = 1;
        }
        else {
          temp_v8 = temp_v5 << 1;
        }
        temp_v8 = FUN_002af294(&temp_v11,temp_v8);
        if (temp_v8 != 0) {
          if (temp_v13 != (int *)0x0) {
            *temp_v13 = (int)piVar20;
          }
          temp_v13 = temp_v13 + 1;
        }
      }
      else {
        if (temp_v13 != (int *)0x0) {
          *temp_v13 = (int)piVar20;
        }
        temp_v13 = temp_v13 + 1;
      }
      if (piVar20 != (int *)0x0) {
        piVar19 = (int *)(**(romwright_code **)(*piVar20 + 8))(piVar20);
        do {
          if (piVar19 == (int *)0x472030) goto LAB_0021fd6c;
          piVar19 = (int *)*piVar19;
        } while (piVar19 != (int *)0x0);
      }
      piVar20 = (int *)0x0;
LAB_0021fd6c:
      temp_v7 = temp_v7 + 0x10;
      *(int **)(psVar22 + *psVar22 * 2 + 2) = piVar20;
      *psVar22 = *psVar22 + 1;
      piVar20 = temp_v12;
      piVar19 = temp_v12;
      piVar9 = temp_v13;
    } while (temp_v7 != temp_v10);
  }
  while( 1 ) {
    piVar4 = temp_v13;
    piVar3 = temp_v12;
    temp_v0 = piVar20 != temp_v13;
    piVar2 = temp_v12;
    temp_v12 = piVar19;
    temp_v13 = piVar9;
    if (!temp_v0) break;
    for (; piVar2 != piVar4; piVar2 = piVar2 + 1) {
      nw_gfx_SceneHelper_ResolveReferenceImpl(*piVar20,*piVar2);
    }
    piVar19 = temp_v12;
    piVar9 = temp_v13;
    temp_v13 = piVar4;
    temp_v12 = piVar3;
    piVar20 = piVar20 + 1;
  }
  temp_v7 = asdModelGetSlotArray1(param_2);
  temp_v10 = asdModelGetSlotArray2(param_2);
  piVar9 = temp_v13;
  piVar19 = temp_v13;
  piVar20 = temp_v12;
  while( 1 ) {
    temp_v13 = piVar19;
    piVar2 = temp_v12;
    if (piVar20 == piVar9) break;
    temp_v8 = *piVar20;
    if ((*(int *)(temp_v8 + 0xc) == 0) &&
       (((temp_v6 = *(int *)(temp_v7 + 0xc), temp_v6 == 0 ||
         ((temp_v6 != temp_v8 && (nw_gfx_SceneNode_IsCircularReference(), temp_v6 == 0)))) &&
        (*(int *)(temp_v8 + 0xc) == 0)))) {
      temp_v5 = *(unsigned int *)(temp_v7 + 0x20) & 0x3fffffff;
      temp_v6 = 1;
      if ((int)temp_v5 <= (*(int *)(temp_v7 + 0x1c) - *(int *)(temp_v7 + 0x18)) >> 2) {
        if (temp_v5 == 0) {
          temp_v6 = 1;
        }
        else {
          temp_v6 = temp_v5 << 1;
        }
        temp_v6 = FUN_002af294(temp_v7 + 0x14,temp_v6);
        if (temp_v6 == 0) {
          piVar19 = temp_v13;
          piVar20 = piVar20 + 1;
          continue;
        }
      }
      if (*(int **)(temp_v7 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v7 + 0x1c) = temp_v8;
      }
      *(int *)(temp_v7 + 0x1c) = *(int *)(temp_v7 + 0x1c) + 4;
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v8 + 0xc) = *(unsigned int *)(temp_v7 + 0x10);
      }
    }
    piVar19 = temp_v13;
    piVar20 = piVar20 + 1;
  }
  for (; piVar2 != piVar19; piVar2 = piVar2 + 1) {
    temp_v7 = *piVar2;
    if (((*(int *)(temp_v7 + 0xc) == 0) &&
        ((temp_v8 = *(int *)(temp_v10 + 0xc), temp_v8 == 0 ||
         ((temp_v8 != temp_v7 && (nw_gfx_SceneNode_IsCircularReference(), temp_v8 == 0)))))) &&
       (*(int *)(temp_v7 + 0xc) == 0)) {
      temp_v5 = *(unsigned int *)(temp_v10 + 0x20) & 0x3fffffff;
      temp_v8 = 1;
      if ((int)temp_v5 <= (*(int *)(temp_v10 + 0x1c) - *(int *)(temp_v10 + 0x18)) >> 2) {
        if (temp_v5 == 0) {
          temp_v8 = 1;
        }
        else {
          temp_v8 = temp_v5 << 1;
        }
        temp_v8 = FUN_002af294(temp_v10 + 0x14,temp_v8);
        if (temp_v8 == 0) goto LAB_0021ff80;
      }
      if (*(int **)(temp_v10 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v10 + 0x1c) = temp_v7;
      }
      *(int *)(temp_v10 + 0x1c) = *(int *)(temp_v10 + 0x1c) + 4;
      if (temp_v8 != 0) {
        *(unsigned int *)(temp_v7 + 0xc) = *(unsigned int *)(temp_v10 + 0x10);
      }
    }
LAB_0021ff80:;
  }
  temp_v7 = *(int *)(*temp_v30 + 0x60);
  if (temp_v7 != 0) {
    temp_v7 = *temp_v30 + 0x60 + temp_v7;
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
  temp_v10 = temp_v7 + *(int *)(*temp_v30 + 0x5c) * 0x10;
  if (temp_v7 != temp_v10) {
    temp_v8 = (int)param_2 * 0x40;
    piVar20 = (int *)(&DAT_004dace0 + temp_v8);
    do {
      if (*(int *)(temp_v7 + 0xc) != 0) {
        temp_v6 = *(int *)(temp_v7 + 0xc) + temp_v7 + 0xc;
      }
      else {
        temp_v6 = 0;
      }
      temp_v3 = (unsigned int)asdMemoryGetAllocatorA();
      temp_v4 = asdMemoryGetDefaultAllocator();
      temp_v21 = romwright_piece_3_1((((unsigned int)(temp_v21) >> 8) & 0xffffffU),1);
      temp_v24 = 0;
      temp_v25 = 0;
      temp_v26 = 0;
      temp_v27 = (short *)0x1;
      temp_v28 = (short *)0x0;
      temp_v22 = 8;
      temp_v23 = 4;
      piVar19 = &temp_v20;
      temp_v29 = (short *)romwright_piece_3_1((((unsigned int)(temp_v29) >> 8) & 0xffffffU),1);
      temp_v20 = temp_v6;
      nw_gfx_SceneBuilder_CreateObject(piVar19,temp_v4,temp_v3);
      if (piVar19 != (int *)0x0) {
        piVar9 = (int *)(**(romwright_code **)(*piVar19 + 8))(piVar19);
        do {
          if (piVar9 == (int *)0x472238) goto LAB_00220074;
          piVar9 = (int *)*piVar9;
        } while (piVar9 != (int *)0x0);
      }
      piVar19 = (int *)0x0;
LAB_00220074:
      temp_v5 = *(unsigned int *)(temp_v8 + 0x4dacec) & 0x3fffffff;
      if ((*(int *)(temp_v8 + 0x4dace8) - *(int *)(temp_v8 + 0x4dace4)) >> 2 >= (int)temp_v5) {
        temp_v9 = (unsigned int)(temp_v5 == 0);
        if (temp_v5 != 0) {
          temp_v9 = temp_v5 << 1;
        }
        if (temp_v9 > (*(unsigned int *)(temp_v8 + 0x4dacec) & 0x3fffffff)) {
          if ((*piVar20 != 0) && ((*(unsigned int *)(temp_v8 + 0x4dacec) & 0xc0000000) == 0x40000000)) {
            puVar12 = (unsigned int *)
                      (**(romwright_code **)(*(int *)*piVar20 + 8))((int *)*piVar20,temp_v9 << 2,0x20);
            puVar13 = *(unsigned int **)(temp_v8 + 0x4dace4);
            puVar16 = *(unsigned int **)(temp_v8 + 0x4dace8);
            temp_v15 = 0;
            puVar17 = puVar12;
            if (puVar13 != puVar16) {
              do {
                if (puVar17 != (unsigned int *)0x0) {
                  *puVar17 = *puVar13;
                }
                puVar13 = puVar13 + 1;
                puVar17 = puVar17 + 1;
              } while (puVar13 != puVar16);
              temp_v15 = (*(int *)(temp_v8 + 0x4dace8) - *(int *)(temp_v8 + 0x4dace4)) >> 2;
            }
            if (*(int *)(temp_v8 + 0x4dace4) != 0) {
              (**(romwright_code **)(*(int *)*piVar20 + 0xc))();
            }
            *(unsigned int **)(temp_v8 + 0x4dace8) = puVar12 + temp_v15;
            *(unsigned int **)(temp_v8 + 0x4dace4) = puVar12;
            *(unsigned int *)(temp_v8 + 0x4dacec) = (*(unsigned int *)(temp_v8 + 0x4dacec) & 0xc0000000) | temp_v9;
            if (*(int **)(temp_v8 + 0x4dace8) != (int *)0x0) {
              **(int **)(temp_v8 + 0x4dace8) = (int)piVar19;
            }
            *(int *)(temp_v8 + 0x4dace8) = *(int *)(temp_v8 + 0x4dace8) + 4;
          }
        }
        else {
          if (*(int **)(temp_v8 + 0x4dace8) != (int *)0x0) {
            **(int **)(temp_v8 + 0x4dace8) = (int)piVar19;
          }
          *(int *)(temp_v8 + 0x4dace8) = *(int *)(temp_v8 + 0x4dace8) + 4;
        }
      }
      else {
        if (*(int **)(temp_v8 + 0x4dace8) != (int *)0x0) {
          **(int **)(temp_v8 + 0x4dace8) = (int)piVar19;
        }
        *(int *)(temp_v8 + 0x4dace8) = *(int *)(temp_v8 + 0x4dace8) + 4;
      }
      temp_v7 = temp_v7 + 0x10;
      *(int **)((int)param_2 * 4 + 0x464aac) = piVar19;
    } while (temp_v7 != temp_v10);
  }
  temp_v13 = temp_v12;
  piVar20 = (int *)0x0;
  if (temp_v11 != (int *)0x0) {
    piVar20 = temp_v12;
  }
  if (temp_v11 != (int *)0x0 && piVar20 != (int *)0x0) {
    (**(romwright_code **)(*temp_v11 + 0xc))(temp_v11,temp_v12);
  }
  return;
}

} /* extern "C" */
