/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017721c` (_code @ 0x17721c, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152f68(...);
int FUN_00153f74(...);
int FUN_00167eb0(...);
int FUN_001869ec(...);
int FUN_00186a64(...);
int FUN_0018c8c8(...);
int FUN_0018cf00(...);
int FUN_0018d01c(...);
int FUN_0018e9d8(...);
int FUN_00197eb0(...);
int FUN_00199d58(...);
int FUN_001a2634(...);
int FUN_001a9380(...);
int nw_gfx_RenderContext_ResetState_2B7478(...);
int nw_gfx_SceneTraverser_Begin(...);

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp140; /* 0x140: local_140 */
} param_4_stack;

extern int DAT_005b3c80; /* 0x5b3c80 */
extern int *DAT_005b3c88; /* 0x5b3c88 */
extern unsigned int DAT_005b3c90; /* 0x5b3c90 */
extern unsigned int DAT_005b3c98; /* 0x5b3c98 */
extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern int DAT_0061a50c; /* 0x61a50c */
extern signed char DAT_00636e04; /* 0x636e04 */
extern signed char DAT_00636e05; /* 0x636e05 */
extern unsigned int DAT_00636e08; /* 0x636e08 */
extern unsigned int *DAT_00636e10; /* 0x636e10 */

/* Supplied declaration required: FUN_00152f68. */
/* Supplied declaration required: FUN_00153f74. */
/* Supplied declaration required: FUN_00167eb0. */
extern int FUN_00183478(void);
/* Supplied declaration required: FUN_001869ec. */
/* Supplied declaration required: FUN_00186a64. */
/* Supplied declaration required: FUN_0018c8c8. */
/* Supplied declaration required: FUN_0018cf00. */
/* Supplied declaration required: FUN_0018d01c. */
/* Supplied declaration required: FUN_0018e9d8. */
/* Supplied declaration required: FUN_00197eb0. */
/* Supplied declaration required: FUN_00199d58. */
/* Supplied declaration required: FUN_001a2634. */
/* Supplied declaration required: FUN_001a9380. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_2B7478. */
/* Supplied declaration required: nw_gfx_SceneTraverser_Begin. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0017721c(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 16 native warning(s); review required */
  unsigned int *puVar1;
  char temp_v0;
  int *piVar3;
  int temp_v1;
  unsigned char *puVar5;
  int temp_v2;
  unsigned int *puVar7;
  unsigned int temp_v3;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [260];
  int iStack_34;
  unsigned int temp_v7;
  unsigned int uStack_2c;
  int temp_v8;
  
  temp_v4 = *(unsigned int *)(param_1 + 4);
  iStack_34 = param_1;
  temp_v7 = param_2;
  uStack_2c = param_3;
  temp_v8 = param_4;
  if ((DAT_00636e04 != '\0') && (DAT_00636e05 == '\0')) {
    FUN_00197eb0(DAT_005b3c88 + 4,DAT_005b3c90);
    piVar3 = DAT_005b3c88;
    temp_v1 = DAT_005b3c80;
    nw_gfx_SceneTraverser_Begin(*(unsigned int *)(DAT_005b3c80 + 8),*(unsigned int *)(DAT_005b3c80 + 4))
    ;
    (**(romwright_code **)(*piVar3 + 0x10))(piVar3,*(unsigned int *)(temp_v1 + 8));
    FUN_0018d01c(*(unsigned int *)(temp_v1 + 8));
    FUN_00153f74(DAT_00636e08);
    FUN_00199d58(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                 *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                 *(unsigned int *)(param_1 + 0x18));
    FUN_00152f68(DAT_00636e08,0);
    FUN_0018e9d8(DAT_005b3c88,DAT_005b3c90);
    FUN_00197eb0(DAT_005b3c88 + 4,DAT_005b3c98);
    piVar3 = DAT_005b3c88;
    temp_v1 = DAT_005b3c80;
    nw_gfx_SceneTraverser_Begin(*(unsigned int *)(DAT_005b3c80 + 8),*(unsigned int *)(DAT_005b3c80 + 4))
    ;
    (**(romwright_code **)(*piVar3 + 0x10))(piVar3,*(unsigned int *)(temp_v1 + 8));
    FUN_0018d01c(*(unsigned int *)(temp_v1 + 8));
    DAT_00636e05 = '\x01';
  }
  temp_v1 = FUN_00183478();
  if (temp_v1 == 0) {
    FUN_001869ec(DAT_00636e10);
  }
  puVar7 = DAT_005b40e0;
  if (temp_v8 != 0) {
    FUN_00199d58(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                 *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                 *(unsigned int *)(param_1 + 0x18));
    puVar1 = (unsigned int *)0x0;
    if (puVar7 != (unsigned int *)0x0) {
      puVar1 = DAT_005b40e0;
    }
    if ((puVar7 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) && puVar1 != puVar7) {
      puVar9 = (unsigned char *)0x0;
      puVar10 = (unsigned char *)0x0;
      if (puVar7 < puVar1) {
        do {
          puVar5 = temp_v6 + (int)puVar9;
          FUN_0018c8c8(puVar5,0x100 - (int)puVar9,0xff - (int)puVar9,"0x%08x, ",*puVar7);
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + (int)puVar5;
          if (puVar10 == (unsigned char *)0x4) {
            puVar10 = (unsigned char *)0x0;
            puVar9 = puVar10;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 < puVar1);
      }
    }
  }
  else {
    FUN_00199d58(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                 *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                 *(unsigned int *)(param_1 + 0x18));
  }
  FUN_00186a64(DAT_00636e10);
  temp_v0 = '\0';
  if (DAT_00636e04 != '\0') {
    temp_v0 = DAT_00636e05;
  }
  if (DAT_00636e04 != '\0' && temp_v0 != '\0') {
    FUN_0018cf00(temp_v4,temp_v7,1);
    FUN_00167eb0(DAT_00636e08);
    nw_gfx_RenderContext_ResetState_2B7478(temp_v4);
  }
  FUN_0018cf00(temp_v4,temp_v7,1);
  temp_v1 = DAT_0061a50c;
  temp_v8 = DAT_00636e10[1];
  if (temp_v8 < 1) {
    return;
  }
  temp_v4 = *DAT_00636e10;
  temp_v3 = (int)DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  temp_v5 = (temp_v3 & 8) != 0;
  puVar7 = DAT_005b40e0;
  if (temp_v5) {
    puVar7 = (unsigned int *)(temp_v3 + 0x18);
  }
  *(unsigned int *)(DAT_0061a50c + 0xc) = temp_v3;
  if (temp_v5) {
    *(unsigned int **)(temp_v1 + 0xc) = puVar7;
  }
  else {
    *(unsigned int *)(temp_v1 + 0xc) = temp_v3 + 0x20;
    if ((unsigned int)puVar7 < DAT_005b40e4) {
      DAT_005b40e0 = puVar7 + 2;
      puVar7[1] = 0x8025e;
      *puVar7 = 0;
    }
  }
  temp_v8 = temp_v8 >> 3;
  FUN_001a2634(temp_v4);
  FUN_001a2634(*(int *)(temp_v1 + 4) + *(int *)(temp_v1 + 0xc));
  if (*(int *)(temp_v1 + 0x30) == 0) {
    *(int *)(temp_v1 + 0x30) = *(int *)(temp_v1 + 0xc) - *(int *)(temp_v1 + 0x14);
  }
  temp_v2 = *(int *)(temp_v1 + 0x34);
  if (temp_v2 != 0) {
    *(unsigned int *)(temp_v2 + 8) = (unsigned int)((int)DAT_005b40e0 - temp_v2) >> 3;
  }
  *(unsigned int **)(temp_v1 + 0x34) = DAT_005b40e0;
  FUN_001a9380(0x238,5,&temp_v8);
  return;
}

} /* extern "C" */
