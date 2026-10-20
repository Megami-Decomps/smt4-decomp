/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013290c` (_code @ 0x13290c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnosConvertVirtToPhys(...);
int FUN_002aa6ac(int, int, int [3]);
int FUN_002ab92c(unsigned int, unsigned int, int);
int FUN_002c4e98(unsigned int);
int nw_gfx_RenderContext_ResetState_2B7478(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int *g_commandBufferCursor; /* 0x4652a0 */
extern unsigned int g_commandBufferEnd; /* 0x4652a4 */
extern int DAT_004c632c; /* 0x4c632c */
extern signed char DAT_004dad84; /* 0x4dad84 */
extern unsigned char DAT_004dad85; /* 0x4dad85 */
extern unsigned int DAT_004dad88; /* 0x4dad88 */
extern unsigned int *DAT_004dad90; /* 0x4dad90 */

/* Supplied declaration required: nnosConvertVirtToPhys. */
/* Supplied declaration required: FUN_002aa6ac. */
/* Supplied declaration required: FUN_002ab92c. */
/* Supplied declaration required: FUN_002c4e98. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_2B7478. */


void FUN_0013290c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  int aiStack_28 [3];
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v3 = *(unsigned int *)(param_1 + 4);
  if (DAT_004dad84 != '\0') {
    param_1 = (unsigned int)DAT_004dad85;
  }
  if (DAT_004dad84 != '\0' && param_1 != 0) {
    FUN_002ab92c(temp_v3,param_2,1);
    FUN_002c4e98(DAT_004dad88);
    nw_gfx_RenderContext_ResetState_2B7478(temp_v3);
  }
  FUN_002ab92c(temp_v3,param_2,1);
  temp_v0 = DAT_004c632c;
  aiStack_28[0] = DAT_004dad90[1];
  if (aiStack_28[0] < 1) {
    return;
  }
  temp_v3 = *DAT_004dad90;
  temp_v2 = (int)g_commandBufferCursor - *(int *)(DAT_004c632c + 4);
  temp_v4 = (temp_v2 & 8) != 0;
  puVar3 = g_commandBufferCursor;
  if (temp_v4) {
    puVar3 = (unsigned int *)(temp_v2 + 0x18);
  }
  *(unsigned int *)(DAT_004c632c + 0xc) = temp_v2;
  if (temp_v4) {
    *(unsigned int **)(temp_v0 + 0xc) = puVar3;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2 + 0x20;
    if ((unsigned int)puVar3 < g_commandBufferEnd) {
      g_commandBufferCursor = puVar3 + 2;
      puVar3[1] = 0x8025e;
      *puVar3 = 0;
    }
  }
  aiStack_28[0] = aiStack_28[0] >> 3;
  aiStack_28[1] = 0;
  aiStack_28[2] = nnosConvertVirtToPhys(temp_v3);
  aiStack_28[2] = (unsigned int)aiStack_28[2] >> 3;
  uStack_1c = nnosConvertVirtToPhys(*(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0xc));
  uStack_1c = uStack_1c >> 3;
  uStack_18 = 1;
  if (*(int *)(temp_v0 + 0x30) == 0) {
    *(int *)(temp_v0 + 0x30) = *(int *)(temp_v0 + 0xc) - *(int *)(temp_v0 + 0x14);
  }
  temp_v1 = *(int *)(temp_v0 + 0x34);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v1 + 8) = (unsigned int)((int)g_commandBufferCursor - temp_v1) >> 3;
  }
  *(unsigned int **)(temp_v0 + 0x34) = g_commandBufferCursor;
  FUN_002aa6ac(0x238,5,aiStack_28);
  return;
}

} /* extern "C" */
