/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013231c` (_code @ 0x13231c, 0x28c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00138c94(void);
int FUN_0013c6c0(...);
int FUN_00147a7c(...);
int FUN_002aa6ac(...);
int FUN_002ab8dc(unsigned int *);
int FUN_002ab92c(...);
int FUN_002aba10(...);
int FUN_002abb5c(unsigned int);
int FUN_002abbe8(unsigned int, unsigned int);
int FUN_002c4e98(...);
int FUN_002c4ed4(unsigned int);
int FUN_002c50f4(unsigned int, int);
int nw_gfx_RenderContext_ResetState_2B7478(...);
int nw_gfx_SceneNode_AttachChild(unsigned int, unsigned int);
int nw_gfx_SceneTraverser_Begin(unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp140; /* 0x140: local_140 */
} param_4_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern unsigned int DAT_00464b8c; /* 0x464b8c */
extern unsigned int DAT_00464b94; /* 0x464b94 */
extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004c632c; /* 0x4c632c */
extern unsigned char DAT_004dad84; /* 0x4dad84 */
extern unsigned char DAT_004dad85; /* 0x4dad85 */
extern unsigned int DAT_004dad88; /* 0x4dad88 */
extern unsigned int *DAT_004dad90; /* 0x4dad90 */
extern unsigned char DAT_004dad94; /* 0x4dad94 */

/* Supplied declaration required: FUN_00138c94. */
/* Supplied declaration required: FUN_0013c6c0. */
/* Supplied declaration required: FUN_00147a7c. */
/* Supplied declaration required: FUN_002aa6ac. */
/* Supplied declaration required: FUN_002ab8dc. */
/* Supplied declaration required: FUN_002ab92c. */
/* Supplied declaration required: FUN_002aba10. */
/* Supplied declaration required: FUN_002abb5c. */
/* Supplied declaration required: FUN_002abbe8. */
/* Supplied declaration required: FUN_002c4e98. */
/* Supplied declaration required: FUN_002c4ed4. */
/* Supplied declaration required: FUN_002c50f4. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_2B7478. */
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */
/* Supplied declaration required: nw_gfx_SceneTraverser_Begin. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0013231c(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned char *puVar7;
  int temp_v3;
  int *piVar9;
  unsigned char *puVar10;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [260];
  int iStack_34;
  unsigned int temp_v7;
  int iStack_2c;
  int temp_v8;
  
  temp_v2 = (unsigned int)(param_3 != 1);
  temp_v4 = *(unsigned int *)(param_1 + 4);
  temp_v0 = temp_v2 * 0x18;
  iStack_34 = param_1;
  temp_v7 = param_2;
  iStack_2c = param_3;
  temp_v8 = param_4;
  if (((&DAT_004dad84)[temp_v0] != '\0') && ((&DAT_004dad85)[temp_v0] == '\0')) {
    FUN_002abbe8((&DAT_00464b84)[temp_v2] + 0x10,(&DAT_00464b8c)[temp_v2]);
    piVar9 = (int *)(&DAT_00464b84)[temp_v2];
    temp_v3 = (&DAT_00464b7c)[temp_v2];
    nw_gfx_SceneTraverser_Begin(*(unsigned int *)(temp_v3 + 8),*(unsigned int *)(temp_v3 + 4));
    (**(romwright_code **)(*piVar9 + 0x10))(piVar9,*(unsigned int *)(temp_v3 + 8));
    FUN_002abb5c(*(unsigned int *)(temp_v3 + 8));
    FUN_002c4ed4((&DAT_004dad88)[temp_v2 * 6]);
    FUN_002aba10(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                 *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                 *(unsigned int *)(param_1 + 0x18));
    FUN_002c50f4((&DAT_004dad88)[temp_v2 * 6],0);
    nw_gfx_SceneNode_AttachChild((&DAT_00464b84)[temp_v2],(&DAT_00464b8c)[temp_v2]);
    FUN_002abbe8((&DAT_00464b84)[temp_v2] + 0x10,(&DAT_00464b94)[temp_v2]);
    piVar9 = (int *)(&DAT_00464b84)[temp_v2];
    temp_v3 = (&DAT_00464b7c)[temp_v2];
    nw_gfx_SceneTraverser_Begin(*(unsigned int *)(temp_v3 + 8),*(unsigned int *)(temp_v3 + 4));
    (**(romwright_code **)(*piVar9 + 0x10))(piVar9,*(unsigned int *)(temp_v3 + 8));
    FUN_002abb5c(*(unsigned int *)(temp_v3 + 8));
    (&DAT_004dad85)[temp_v0] = 1;
  }
  if ((&DAT_004dad94)[temp_v0] == '\0') {
    if (temp_v2 != 0) {
      FUN_002ab92c(temp_v4,temp_v7,0);
    }
    else {
      FUN_002ab8dc(DAT_004dad90);
    }
    puVar5 = DAT_004652a0;
    if (temp_v8 != 0) {
      FUN_002aba10(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                   *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                   *(unsigned int *)(param_1 + 0x18));
      puVar3 = (unsigned int *)0x0;
      if (puVar5 != (unsigned int *)0x0) {
        puVar3 = DAT_004652a0;
      }
      if ((puVar5 != (unsigned int *)0x0 && puVar3 != (unsigned int *)0x0) && puVar3 != puVar5) {
        puVar7 = (unsigned char *)0x0;
        puVar10 = (unsigned char *)0x0;
        if (puVar5 < puVar3) {
          do {
            puVar4 = temp_v6 + (int)puVar7;
            FUN_0013c6c0(puVar4,0x100 - (int)puVar7,0xff - (int)puVar7,"0x%08x, ",*puVar5);
            puVar10 = puVar10 + 1;
            puVar7 = puVar7 + (int)puVar4;
            if (puVar10 == (unsigned char *)0x4) {
              puVar10 = (unsigned char *)0x0;
              puVar7 = puVar10;
            }
            puVar5 = puVar5 + 1;
          } while (puVar5 < puVar3);
        }
      }
    }
    else {
      FUN_002aba10(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                   *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                   *(unsigned int *)(param_1 + 0x18));
    }
    if (temp_v2 == 0) {
      FUN_00138c94();
    }
  }
  temp_v1 = '\0';
  if ((&DAT_004dad84)[temp_v0] != '\0') {
    temp_v1 = (&DAT_004dad85)[temp_v0];
  }
  if ((&DAT_004dad84)[temp_v0] != '\0' && temp_v1 != '\0') {
    FUN_002ab92c(temp_v4,temp_v7,0);
    FUN_002c4e98((&DAT_004dad88)[temp_v2 * 6]);
    nw_gfx_RenderContext_ResetState_2B7478(temp_v4);
  }
  if (temp_v2 != 0) {
    return;
  }
  FUN_002ab92c(temp_v4,temp_v7,0);
  temp_v0 = DAT_004c632c;
  temp_v8 = DAT_004dad90[1];
  if (temp_v8 < 1) {
    return;
  }
  temp_v4 = *DAT_004dad90;
  temp_v2 = (int)DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  temp_v5 = (temp_v2 & 8) != 0;
  puVar5 = DAT_004652a0;
  if (temp_v5) {
    puVar5 = (unsigned int *)(temp_v2 + 0x18);
  }
  *(unsigned int *)(DAT_004c632c + 0xc) = temp_v2;
  if (temp_v5) {
    *(unsigned int **)(temp_v0 + 0xc) = puVar5;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2 + 0x20;
    if ((unsigned int)puVar5 < DAT_004652a4) {
      DAT_004652a0 = puVar5 + 2;
      puVar5[1] = 0x8025e;
      *puVar5 = 0;
    }
  }
  temp_v8 = temp_v8 >> 3;
  FUN_00147a7c(temp_v4);
  FUN_00147a7c(*(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0xc));
  if (*(int *)(temp_v0 + 0x30) == 0) {
    *(int *)(temp_v0 + 0x30) = *(int *)(temp_v0 + 0xc) - *(int *)(temp_v0 + 0x14);
  }
  temp_v3 = *(int *)(temp_v0 + 0x34);
  if (temp_v3 != 0) {
    *(unsigned int *)(temp_v3 + 8) = (unsigned int)((int)DAT_004652a0 - temp_v3) >> 3;
  }
  *(unsigned int **)(temp_v0 + 0x34) = DAT_004652a0;
  FUN_002aa6ac(0x238,5,&temp_v8);
  return;
}

} /* extern "C" */
