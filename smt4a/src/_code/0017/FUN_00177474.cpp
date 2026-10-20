/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00177474` (_code @ 0x177474, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167eb0(unsigned int);
int FUN_0018cf00(unsigned int, unsigned int, int);
int FUN_001a2634(...);
int FUN_001a9380(int, int, int [3]);
int nw_gfx_RenderContext_ResetState_2B7478(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern int DAT_0061a50c; /* 0x61a50c */
extern signed char DAT_00636e04; /* 0x636e04 */
extern unsigned char DAT_00636e05; /* 0x636e05 */
extern unsigned int DAT_00636e08; /* 0x636e08 */
extern unsigned int *DAT_00636e10; /* 0x636e10 */

/* Supplied declaration required: FUN_00167eb0. */
/* Supplied declaration required: FUN_0018cf00. */
/* Supplied declaration required: FUN_001a2634. */
/* Supplied declaration required: FUN_001a9380. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_2B7478. */


void FUN_00177474(unsigned int param_1,unsigned int param_2)

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
  if (DAT_00636e04 != '\0') {
    param_1 = (unsigned int)DAT_00636e05;
  }
  if (DAT_00636e04 != '\0' && param_1 != 0) {
    FUN_0018cf00(temp_v3,param_2,1);
    FUN_00167eb0(DAT_00636e08);
    nw_gfx_RenderContext_ResetState_2B7478(temp_v3);
  }
  FUN_0018cf00(temp_v3,param_2,1);
  temp_v0 = DAT_0061a50c;
  aiStack_28[0] = DAT_00636e10[1];
  if (aiStack_28[0] < 1) {
    return;
  }
  temp_v3 = *DAT_00636e10;
  temp_v2 = (int)DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  temp_v4 = (temp_v2 & 8) != 0;
  puVar3 = DAT_005b40e0;
  if (temp_v4) {
    puVar3 = (unsigned int *)(temp_v2 + 0x18);
  }
  *(unsigned int *)(DAT_0061a50c + 0xc) = temp_v2;
  if (temp_v4) {
    *(unsigned int **)(temp_v0 + 0xc) = puVar3;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2 + 0x20;
    if ((unsigned int)puVar3 < DAT_005b40e4) {
      DAT_005b40e0 = puVar3 + 2;
      puVar3[1] = 0x8025e;
      *puVar3 = 0;
    }
  }
  aiStack_28[0] = aiStack_28[0] >> 3;
  aiStack_28[1] = 0;
  aiStack_28[2] = FUN_001a2634(temp_v3);
  aiStack_28[2] = (unsigned int)aiStack_28[2] >> 3;
  uStack_1c = FUN_001a2634(*(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0xc));
  uStack_1c = uStack_1c >> 3;
  uStack_18 = 1;
  if (*(int *)(temp_v0 + 0x30) == 0) {
    *(int *)(temp_v0 + 0x30) = *(int *)(temp_v0 + 0xc) - *(int *)(temp_v0 + 0x14);
  }
  temp_v1 = *(int *)(temp_v0 + 0x34);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v1 + 8) = (unsigned int)((int)DAT_005b40e0 - temp_v1) >> 3;
  }
  *(unsigned int **)(temp_v0 + 0x34) = DAT_005b40e0;
  FUN_001a9380(0x238,5,aiStack_28);
  return;
}

} /* extern "C" */
