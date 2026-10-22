/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00405dec` (_code @ 0x405dec, 0x36c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdDeallocateArrayStorage(int, int, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_001a79e8(unsigned int, unsigned int);
void FUN_002e32a4(int kind, ...);
int FUN_003fd7c0(unsigned int, unsigned int, int);
int FUN_003fd924(unsigned int, unsigned int, int);
int animationSelectClip(unsigned int, unsigned int, int);
int FUN_003fe544(void);
int ownerSlotSetText(unsigned int, unsigned int);
int FUN_004ffab8(unsigned int, unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char LAB_00406158; /* 0x406158 */
extern unsigned char LAB_0040615c; /* 0x40615c */

extern unsigned int *FUN_001006c2(int, unsigned int);
/* Supplied declaration required: asdDeallocateArrayStorage. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001a79e8. */
/* Supplied declaration required: FUN_002e32a4. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: animationSelectClip. */
extern unsigned int FUN_003fdadc(unsigned int);
/* Supplied declaration required: FUN_003fe544. */
extern unsigned int FUN_003feb80(void);
/* Supplied declaration required: ownerSlotSetText. */
/* Supplied declaration required: FUN_004ffab8. */


/* WARNING: Removing unreachable block (ram,0x00405f80) */
/* WARNING: Removing unreachable block (ram,0x00405f8c) */

void FUN_00405dec(int param_1,int param_2)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int *puVar6;
  int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  int *piVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v6 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x3c) + 4);
  *(unsigned int *)(param_1 + 0x10) = temp_v6;
  if (temp_v6 >= 0x40000000) {
    FUN_002e32a4(8,&LAB_00406158,&LAB_00406158,temp_v6,0x3fffffff);
  }
  if ((unsigned int)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) >> 2) < temp_v6) {
    temp_v5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) >> 2;
    temp_v4 = temp_v5 + (temp_v5 >> 1) + (temp_v5 >> 3);
    if (temp_v4 < temp_v5 + 0x20) {
      temp_v4 = temp_v5 + 0x20;
    }
    if (temp_v4 <= temp_v6) {
      temp_v4 = temp_v6;
    }
    puVar1 = (unsigned int *)FUN_001006c2(temp_v4 << 2,0);
    puVar8 = *(unsigned int **)(param_1 + 8);
    puVar6 = puVar1;
    for (puVar4 = *(unsigned int **)(param_1 + 4); puVar4 != puVar8; puVar4 = puVar4 + 1) {
      if (puVar6 != (unsigned int *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    asdDeallocateArrayStorage(*(int *)(param_1 + 4),(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) >> 2,0);
    temp_v2 = *(int *)(param_1 + 4);
    *(unsigned int **)(param_1 + 4) = puVar1;
    *(unsigned int *)(param_1 + 8) = ((*(int *)(param_1 + 8) - temp_v2) & 0xfffffffcU) + (int)puVar1;
    *(unsigned int **)(param_1 + 0xc) = puVar1 + temp_v4;
  }
  temp_v2 = 0;
  if (temp_v6 != 0) {
    do {
      temp_v0 = 0x26c;
      FUN_00178b04(0x26c,&LAB_0040615c,0x4c);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_003feb80();
      }
      FUN_003fe544();
      piVar10 = (int *)(param_1 + 4);
      puVar4 = *(unsigned int **)(param_1 + 8);
      if (puVar4 != *(unsigned int **)(param_1 + 0xc)) {
        *(unsigned int **)(param_1 + 8) = puVar4 + 1;
        if (puVar4 != (unsigned int *)0x0) {
          *puVar4 = temp_v1;
        }
      }
      else {
        temp_v5 = ((int)puVar4 - *piVar10) >> 2;
        if (temp_v5 < (unsigned int)(((int)*(unsigned int **)(param_1 + 0xc) - *piVar10) >> 2)) {
          *(unsigned int **)(param_1 + 8) = puVar4 + 1;
          if (puVar4 != (unsigned int *)0x0) {
            *puVar4 = puVar4[-1];
          }
          *puVar4 = temp_v1;
        }
        else {
          temp_v4 = temp_v5 + (temp_v5 >> 1) + (temp_v5 >> 3);
          if (temp_v4 < temp_v5 + 0x20) {
            temp_v4 = temp_v5 + 0x20;
          }
          puVar8 = (unsigned int *)FUN_001006c2(temp_v4 << 2,0);
          puVar1 = puVar8;
          for (puVar6 = (unsigned int *)*piVar10; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            if (puVar1 != (unsigned int *)0x0) {
              *puVar1 = *puVar6;
            }
            puVar1 = puVar1 + 1;
          }
          puVar6 = (unsigned int *)((((int)puVar4 - *piVar10) & 0xfffffffcU) + (int)puVar8);
          if (puVar6 != (unsigned int *)0x0) {
            *puVar6 = temp_v1;
          }
          puVar1 = *(unsigned int **)(param_1 + 8);
          puVar6 = (unsigned int *)((((int)puVar4 - *piVar10) & 0xfffffffcU) + (int)puVar8);
          for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            puVar6 = puVar6 + 1;
            if (puVar6 != (unsigned int *)0x0) {
              *puVar6 = *puVar4;
            }
          }
          temp_v0 = *piVar10;
          temp_v3 = *(int *)(param_1 + 8);
          asdDeallocateArrayStorage(temp_v0,(*(int *)(param_1 + 0xc) - temp_v0) >> 2,0);
          *(unsigned int **)(param_1 + 0xc) = puVar8 + temp_v4;
          *(unsigned int **)(param_1 + 8) = puVar8 + ((temp_v3 - temp_v0) >> 2) + 1;
          *piVar10 = (int)puVar8;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)temp_v6);
  }
  *(int *)(param_1 + 0x14) = param_2;
  puVar12 = *(unsigned int **)(param_1 + 8);
  for (puVar11 = *(unsigned int **)(param_1 + 4); puVar11 != puVar12; puVar11 = puVar11 + 1) {
    temp_v5 = *puVar11;
    temp_v1 = FUN_003fdadc(temp_v5);
    temp_v6 = temp_v5;
    ownerSlotSetText(temp_v5,temp_v1);
    if ((temp_v6 & 0xffff) != 0xffff) {
      FUN_003fd924(temp_v5,temp_v6 & 0xffff,1);
    }
    temp_v6 = temp_v5;
    FUN_001a79e8(temp_v5,temp_v1);
    if ((temp_v6 & 0xffff) != 0xffff) {
      FUN_003fd7c0(temp_v5,temp_v6 & 0xffff,1);
    }
    temp_v6 = temp_v5;
    FUN_004ffab8(temp_v5,temp_v1);
    if ((temp_v6 & 0xffff) != 0xffff) {
      animationSelectClip(temp_v5,temp_v6 & 0xffff,1);
    }
  }
  return;
}

} /* extern "C" */
