/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117604` (_code @ 0x117604, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00131c98(int, unsigned int, unsigned int);
int FUN_0013231c(int, unsigned int, int);
int FUN_001325c4(int, unsigned int, unsigned int, unsigned int);
int FUN_001326b4(int, unsigned int, unsigned int, int);
int sceneTraverserVisit(unsigned int, int);
int _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(int *, int *, int *, int *);
int FUN_002c3a14(unsigned int);
int nw_gfx_RenderContext_ResetState_2B7478(unsigned int);
int nw_gfx_SceneNode_AttachChild(int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int g_titleScene; /* 0x44ea00 */
extern signed char g_gfxSettings; /* 0x464af0 */
extern unsigned int DAT_00464b00; /* 0x464b00 */
extern unsigned int DAT_00464b10; /* 0x464b10 */
extern unsigned int DAT_00464b14; /* 0x464b14 */
extern unsigned int DAT_00464b18; /* 0x464b18 */
extern unsigned int g_asdModelSlotFlags; /* 0x464b74 */
extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern int g_asdModelTransformBuilder; /* 0x464b84 */
extern int sceneGroup1Root; /* 0x464b8c */
extern int g_asdModelSlotArray3; /* 0x464bb4 */
extern unsigned int DAT_00464bbc; /* 0x464bbc */
extern int g_asdLightCount; /* 0x4dad80 */
extern signed char DAT_004dad84; /* 0x4dad84 */
extern signed char DAT_004dad85; /* 0x4dad85 */
extern signed char DAT_004dad94; /* 0x4dad94 */

/* Supplied declaration required: FUN_00131c98. */
/* Supplied declaration required: FUN_0013231c. */
/* Supplied declaration required: FUN_001325c4. */
/* Supplied declaration required: FUN_001326b4. */
/* Supplied declaration required: sceneTraverserVisit. */
/* Supplied declaration required: _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_. */
/* Supplied declaration required: FUN_002c3a14. */
extern int FUN_002c5210(void);
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_2B7478. */
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */


/* WARNING: Removing unreachable block (ram,0x00117780) */
/* WARNING: Removing unreachable block (ram,0x00117784) */

void FUN_00117604(void)

{
/* irregular: 11 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int *piVar4;
  int temp_v1;
  unsigned int temp_v2;
  
  if ((g_gfxSettings != '\0') && ((0 < g_asdLightCount || ((g_asdModelSlotFlags & 1) != 0)))) {
    temp_v2 = *(unsigned int *)(g_asdModelSlotArray3 + 4);
    FUN_001325c4(g_asdModelSlotArray3,DAT_00464b7c,DAT_00464b10,DAT_00464bbc);
    temp_v0 = g_asdModelTransformBuilder;
    if ((DAT_004dad84 != '\0') && (DAT_004dad85 == '\0')) {
      temp_v1 = sceneGroup1Root;
      piVar4 = *(int **)(g_asdModelTransformBuilder + 0x1c);
      for (piVar1 = *(int **)(g_asdModelTransformBuilder + 0x18); (piVar1 != piVar4 && (*piVar1 != sceneGroup1Root));
          piVar1 = piVar1 + 1) {
      }
      piVar2 = piVar1;
      if (piVar1 != piVar4) {
        piVar2 = piVar1 + 1;
        _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(piVar2,piVar4,piVar1,&temp_v1);
      }
      piVar1 = *(int **)(temp_v0 + 0x1c);
      *(int **)(temp_v0 + 0x1c) = piVar2;
      if (piVar1 != piVar2) {
        *(unsigned int *)(temp_v1 + 0xc) = 0;
      }
      sceneTraverserVisit(DAT_00464b7c,g_asdModelTransformBuilder);
    }
    if (DAT_004dad94 == '\0') {
      FUN_00131c98(g_asdModelSlotArray3,DAT_00464b7c,DAT_00464bbc);
    }
    if ((DAT_004dad84 != '\0') && (DAT_004dad85 == '\0')) {
      nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder,sceneGroup1Root);
      sceneTraverserVisit(DAT_00464b7c,g_asdModelTransformBuilder);
    }
    temp_v0 = FUN_002c5210();
    if (temp_v0 != 1) {
      FUN_0013231c(g_asdModelSlotArray3,DAT_00464b10,1);
    }
    else {
      FUN_001326b4(g_asdModelSlotArray3,DAT_00464b14,DAT_00464b18,0);
      nw_gfx_RenderContext_ResetState_2B7478(temp_v2);
    }
    FUN_002c3a14(g_titleScene);
    DAT_00464b00 = 0;
  }
  return;
}

} /* extern "C" */
