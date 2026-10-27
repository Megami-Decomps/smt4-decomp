/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a38c8` (_code @ 0x1a38c8, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b0928(...);
int FUN_001b0c5c(...);
int asdModelAppendCommandSource(...);
int FUN_001b68e8(...);
int nnnstdMemCpy(...);
int nw_gfx_RenderContext_ActivateParticleContext(...);

typedef struct fn_001a38c8_arg2 fn_001a38c8_arg2;
struct fn_001a38c8_arg2 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x158];
    int field_0x164; /* +0x164 */
    unsigned char pad_0x168[0xc4];
    int field_0x22c; /* +0x22c */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int g_commandBufferCursor; /* 0x5b40e0 */

/* Supplied declaration required: FUN_001b0928. */
/* Supplied declaration required: FUN_001b0c5c. */
/* Supplied declaration required: asdModelAppendCommandSource. */
/* Supplied declaration required: FUN_001b68e8. */
/* Supplied declaration required: nnnstdMemCpy. */
/* Supplied declaration required: nw_gfx_RenderContext_ActivateParticleContext. */


void FUN_001a38c8(int param_1,int param_2,fn_001a38c8_arg2 *param_3)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  piVar1 = (int *)((int)param_3->field_0x8 + 200);
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    temp_v0 = (int)piVar1 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  piVar1 = (int *)(temp_v0 + *(int *)(param_2 + 0x18) * 4);
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    piVar4 = (int *)(temp_v0 + (int)piVar1);
  }
  if (*piVar4 != 0x10000001) {
    if ((*piVar4 == 0x10000002) &&
       (*(int *)(*(int *)(*(int *)(param_3->field_0x22c + *(int *)(param_2 + 0x18) * 4) + 0x4c) +
                0xcc) != 0)) {
      *(unsigned int *)(*(int *)(param_1 + 8) + 0x20) =
           *(unsigned int *)(param_3->field_0x164 + *(int *)(param_2 + 0x1c) * 4);
      nw_gfx_RenderContext_ActivateParticleContext(*(unsigned int *)(param_1 + 8));
      FUN_001b0928(param_1,param_3,piVar4,*(unsigned int *)(param_2 + 0x18));
      return;
    }
  }
  else {
    *(unsigned int *)(*(int *)(param_1 + 8) + 0x20) =
         *(unsigned int *)(param_3->field_0x164 + *(int *)(param_2 + 0x1c) * 4);
    FUN_001b68e8(*(unsigned int *)(param_1 + 8),0);
    asdModelAppendCommandSource(*(unsigned int *)(param_1 + 8),param_2);
    FUN_001b0c5c(param_1,param_3,piVar4,*(unsigned int *)(param_2 + 0x28));
    temp_v1 = *(unsigned int *)(param_2 + 0x6c);
    nnnstdMemCpy(g_commandBufferCursor,*(unsigned int *)(param_2 + 0x68),temp_v1);
    g_commandBufferCursor = g_commandBufferCursor + (temp_v1 & 0xfffffffc);
  }
  return;
}

} /* extern "C" */
