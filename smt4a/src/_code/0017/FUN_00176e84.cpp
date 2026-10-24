/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00176e84` (_code @ 0x176e84, 0x28c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdGxCommandListEnd(unsigned int, int);
int asdGxCommandListBegin(unsigned int);
int FUN_00167eb0(...);
int asdGxCommandListStartRecord(unsigned int *);
int FUN_00186a64(void);
int FUN_0018c8c8(...);
int FUN_0018cf00(...);
int FUN_0018d01c(unsigned int);
int FUN_0018e9d8(unsigned int, unsigned int);
int FUN_00197eb0(unsigned int, unsigned int);
int _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(...);
int FUN_001a2634(...);
int FUN_001a9380(...);
int nw_gfx_RenderContext_ResetState_2B7478(...);
int nw_gfx_SceneTraverser_Begin(unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp140; /* 0x140: local_140 */
} param_4_stack;

extern unsigned int g_effAsdLightHandle; /* 0x5b3c80 */
extern unsigned int g_asdModelTransformBuilder; /* 0x5b3c88 */
extern unsigned int DAT_005b3c90; /* 0x5b3c90 */
extern unsigned int DAT_005b3c98; /* 0x5b3c98 */
extern unsigned int *g_commandBufferCursor; /* 0x5b40e0 */
extern unsigned int g_commandBufferEnd; /* 0x5b40e4 */
extern int DAT_0061a50c; /* 0x61a50c */
extern unsigned char DAT_00636e04; /* 0x636e04 */
extern unsigned char DAT_00636e05; /* 0x636e05 */
extern unsigned int DAT_00636e08; /* 0x636e08 */
extern unsigned int *DAT_00636e10; /* 0x636e10 */
extern unsigned char DAT_00636e14; /* 0x636e14 */

/* Supplied declaration required: asdGxCommandListEnd. */
/* Supplied declaration required: asdGxCommandListBegin. */
/* Supplied declaration required: FUN_00167eb0. */
/* Supplied declaration required: asdGxCommandListStartRecord. */
/* Supplied declaration required: FUN_00186a64. */
/* Supplied declaration required: FUN_0018c8c8. */
/* Supplied declaration required: FUN_0018cf00. */
/* Supplied declaration required: FUN_0018d01c. */
/* Supplied declaration required: FUN_0018e9d8. */
/* Supplied declaration required: FUN_00197eb0. */
/* Supplied declaration required: _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_. */
/* Supplied declaration required: FUN_001a2634. */
/* Supplied declaration required: FUN_001a9380. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_2B7478. */
/* Supplied declaration required: nw_gfx_SceneTraverser_Begin. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00176e84(int param_1,unsigned int param_2,int param_3,int param_4)

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
  if (((&DAT_00636e04)[temp_v0] != '\0') && ((&DAT_00636e05)[temp_v0] == '\0')) {
    FUN_00197eb0((&g_asdModelTransformBuilder)[temp_v2] + 0x10,(&DAT_005b3c90)[temp_v2]);
    piVar9 = (int *)(&g_asdModelTransformBuilder)[temp_v2];
    temp_v3 = (&g_effAsdLightHandle)[temp_v2];
    nw_gfx_SceneTraverser_Begin(*(unsigned int *)(temp_v3 + 8),*(unsigned int *)(temp_v3 + 4));
    (**(romwright_code **)(*piVar9 + 0x10))(piVar9,*(unsigned int *)(temp_v3 + 8));
    FUN_0018d01c(*(unsigned int *)(temp_v3 + 8));
    asdGxCommandListBegin((&DAT_00636e08)[temp_v2 * 6]);
    _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                 *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                 *(unsigned int *)(param_1 + 0x18));
    asdGxCommandListEnd((&DAT_00636e08)[temp_v2 * 6],0);
    FUN_0018e9d8((&g_asdModelTransformBuilder)[temp_v2],(&DAT_005b3c90)[temp_v2]);
    FUN_00197eb0((&g_asdModelTransformBuilder)[temp_v2] + 0x10,(&DAT_005b3c98)[temp_v2]);
    piVar9 = (int *)(&g_asdModelTransformBuilder)[temp_v2];
    temp_v3 = (&g_effAsdLightHandle)[temp_v2];
    nw_gfx_SceneTraverser_Begin(*(unsigned int *)(temp_v3 + 8),*(unsigned int *)(temp_v3 + 4));
    (**(romwright_code **)(*piVar9 + 0x10))(piVar9,*(unsigned int *)(temp_v3 + 8));
    FUN_0018d01c(*(unsigned int *)(temp_v3 + 8));
    (&DAT_00636e05)[temp_v0] = 1;
  }
  if ((&DAT_00636e14)[temp_v0] == '\0') {
    if (temp_v2 != 0) {
      FUN_0018cf00(temp_v4,temp_v7,0);
    }
    else {
      asdGxCommandListStartRecord(DAT_00636e10);
    }
    puVar5 = g_commandBufferCursor;
    if (temp_v8 != 0) {
      _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                   *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                   *(unsigned int *)(param_1 + 0x18));
      puVar3 = (unsigned int *)0x0;
      if (puVar5 != (unsigned int *)0x0) {
        puVar3 = g_commandBufferCursor;
      }
      if ((puVar5 != (unsigned int *)0x0 && puVar3 != (unsigned int *)0x0) && puVar3 != puVar5) {
        puVar7 = (unsigned char *)0x0;
        puVar10 = (unsigned char *)0x0;
        if (puVar5 < puVar3) {
          do {
            puVar4 = temp_v6 + (int)puVar7;
            FUN_0018c8c8(puVar4,0x100 - (int)puVar7,0xff - (int)puVar7,"0x%08x, ",*puVar5);
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
      _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                   *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                   *(unsigned int *)(param_1 + 0x18));
    }
    if (temp_v2 == 0) {
      FUN_00186a64();
    }
  }
  temp_v1 = '\0';
  if ((&DAT_00636e04)[temp_v0] != '\0') {
    temp_v1 = (&DAT_00636e05)[temp_v0];
  }
  if ((&DAT_00636e04)[temp_v0] != '\0' && temp_v1 != '\0') {
    FUN_0018cf00(temp_v4,temp_v7,0);
    FUN_00167eb0((&DAT_00636e08)[temp_v2 * 6]);
    nw_gfx_RenderContext_ResetState_2B7478(temp_v4);
  }
  if (temp_v2 != 0) {
    return;
  }
  FUN_0018cf00(temp_v4,temp_v7,0);
  temp_v0 = DAT_0061a50c;
  temp_v8 = DAT_00636e10[1];
  if (temp_v8 < 1) {
    return;
  }
  temp_v4 = *DAT_00636e10;
  temp_v2 = (int)g_commandBufferCursor - *(int *)(DAT_0061a50c + 4);
  temp_v5 = (temp_v2 & 8) != 0;
  puVar5 = g_commandBufferCursor;
  if (temp_v5) {
    puVar5 = (unsigned int *)(temp_v2 + 0x18);
  }
  *(unsigned int *)(DAT_0061a50c + 0xc) = temp_v2;
  if (temp_v5) {
    *(unsigned int **)(temp_v0 + 0xc) = puVar5;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2 + 0x20;
    if ((unsigned int)puVar5 < g_commandBufferEnd) {
      g_commandBufferCursor = puVar5 + 2;
      puVar5[1] = 0x8025e;
      *puVar5 = 0;
    }
  }
  temp_v8 = temp_v8 >> 3;
  FUN_001a2634(temp_v4);
  FUN_001a2634(*(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0xc));
  if (*(int *)(temp_v0 + 0x30) == 0) {
    *(int *)(temp_v0 + 0x30) = *(int *)(temp_v0 + 0xc) - *(int *)(temp_v0 + 0x14);
  }
  temp_v3 = *(int *)(temp_v0 + 0x34);
  if (temp_v3 != 0) {
    *(unsigned int *)(temp_v3 + 8) = (unsigned int)((int)g_commandBufferCursor - temp_v3) >> 3;
  }
  *(unsigned int **)(temp_v0 + 0x34) = g_commandBufferCursor;
  FUN_001a9380(0x238,5,&temp_v8);
  return;
}

} /* extern "C" */
