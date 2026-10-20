/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c1048` (_code @ 0x1c1048, 0x418 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_SceneNode_IsCircularReference(int *, int *);

typedef int romwright_code(...);
/* stack frame of param_4: 8 slot(s), 26 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

extern int *FUN_001a46c0(int, int *, unsigned int *, unsigned int, unsigned int **, unsigned int **, unsigned int);
extern unsigned int *FUN_001ca5d0(void);
extern unsigned int *FUN_001ca61c(int *, int);
extern unsigned int *FUN_001ca668(void);
extern unsigned int *FUN_001ca6d0(int *);
extern unsigned int *FUN_001cadd8(int *);
extern unsigned int *FUN_001cae40(int *, int);
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int * FUN_001c1048(int param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int *puVar6;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  int *piVar14;
  unsigned int *temp_v5;
  char temp_v6;
  unsigned int *temp_v7;
  char temp_v8;
  int iStack_34;
  unsigned int *puStack_30;
  unsigned int uStack_2c;
  int *temp_v9;
  
  if ((param_2 == (unsigned int *)0x0) || (puVar13 = param_2, (~*param_2 & 0x4000000a) != 0)) {
    puVar13 = (unsigned int *)0x0;
  }
  iStack_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  temp_v9 = param_4;
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x29c,4);
  temp_v3 = puVar13[0x2d] & 0xff;
  if (puVar13[0x2f] != 0) {
    temp_v2 = (int)puVar13 + puVar13[0x2f] + 0xbc;
  }
  else {
    temp_v2 = 0;
  }
  puVar3 = (unsigned int *)0x0;
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        puVar3 = (unsigned int *)FUN_001ca5d0();
      }
    }
    else {
      puVar3 = (unsigned int *)FUN_001ca6d0(temp_v9);
    }
  }
  else {
    puVar3 = (unsigned int *)FUN_001ca61c(temp_v9,temp_v2);
  }
  temp_v3 = puVar13[0x2e] & 0xff;
  if (puVar13[0x30] != 0) {
    temp_v2 = (int)puVar13 + puVar13[0x30] + 0xc0;
  }
  else {
    temp_v2 = 0;
  }
  puVar4 = (unsigned int *)0x0;
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        puVar4 = (unsigned int *)FUN_001ca668();
      }
    }
    else {
      puVar4 = (unsigned int *)FUN_001cadd8(temp_v9);
    }
  }
  else {
    puVar4 = (unsigned int *)FUN_001cae40(temp_v9,temp_v2);
  }
  temp_v0 = 0;
  if (temp_v1 == 0) {
    piVar14 = (int *)0x0;
    puVar6 = (unsigned int *)0x0;
    puVar11 = puVar4;
    puVar12 = puVar3;
  }
  else {
    temp_v6 = '\x01';
    puVar12 = (unsigned int *)0x0;
    temp_v8 = '\x01';
    puVar11 = (unsigned int *)0x0;
    temp_v0 = 1;
    temp_v5 = puVar3;
    temp_v7 = puVar4;
    piVar14 = (int *)FUN_001a46c0(temp_v1,temp_v9,puVar13,param_3,&temp_v5,&temp_v7,0);
    puVar3 = temp_v5;
    puVar6 = (unsigned int *)0x0;
    if ((temp_v5 != (unsigned int *)0x0) && (puVar6 = (unsigned int *)0x0, temp_v6 != '\0')) {
      (**(romwright_code **)*temp_v5)(temp_v5);
      piVar5 = (int *)puVar3[1];
      puVar6 = (unsigned int *)(**(romwright_code **)(*piVar5 + 0xc))(piVar5,puVar3);
    }
  }
  puVar3 = temp_v7;
  if (temp_v0) {
    puVar6 = temp_v7;
  }
  if ((temp_v0 && puVar6 != (unsigned int *)0x0) && (temp_v8 != '\0')) {
    (**(romwright_code **)*temp_v7)(temp_v7);
    piVar5 = (int *)puVar3[1];
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,puVar3);
  }
  piVar5 = (int *)(**(romwright_code **)(*piVar14 + 0x24))(piVar14,temp_v9);
  if ((param_1 != 0) &&
     (((piVar5 = *(int **)(param_1 + 0xc), piVar5 == (int *)0x0 ||
       ((piVar5 != piVar14 &&
        (nw_gfx_SceneNode_IsCircularReference(piVar5,piVar14), piVar5 == (int *)0x0)))) &&
      (piVar5 = (int *)piVar14[3], piVar5 == (int *)0x0)))) {
    temp_v4 = *(unsigned int *)(param_1 + 0x20);
    temp_v3 = temp_v4 & 0x3fffffff;
    if ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2 >= (int)temp_v3) {
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 << 1;
      }
      else {
        temp_v3 = 1;
      }
      if (temp_v3 <= (temp_v4 & 0x3fffffff)) goto LAB_001c13b8;
      temp_v0 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        if (((temp_v4 & 0xc0000000) == 0x40000000) &&
           (puVar3 = (unsigned int *)
                     (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                               (*(int **)(param_1 + 0x14),temp_v3 << 2,0x20),
           puVar3 != (unsigned int *)0x0)) {
          puVar4 = *(unsigned int **)(param_1 + 0x18);
          puVar10 = *(unsigned int **)(param_1 + 0x1c);
          temp_v1 = 0;
          puVar6 = puVar3;
          if (puVar4 != puVar10) {
            do {
              if (puVar6 != (unsigned int *)0x0) {
                *puVar6 = *puVar4;
              }
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            } while (puVar4 != puVar10);
            temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
          }
          if (*(int *)(param_1 + 0x18) != 0) {
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
            (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
          }
          *(unsigned int **)(param_1 + 0x1c) = puVar3 + temp_v1;
          *(unsigned int **)(param_1 + 0x18) = puVar3;
          *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v3;
          goto LAB_001c13b8;
        }
        temp_v0 = 0;
      }
    }
    else {
LAB_001c13b8:
      temp_v0 = 1;
      if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
        **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar14;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
    }
    piVar5 = (int *)0x0;
    if (temp_v0) {
      piVar5 = *(int **)(param_1 + 0x10);
      piVar14[3] = (int)piVar5;
    }
  }
  if (puVar11 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar11)(puVar11);
    piVar5 = (int *)(**(romwright_code **)(*(int *)puVar11[1] + 0xc))((int *)puVar11[1],puVar11);
  }
  if (puVar12 != (unsigned int *)0x0) {
    piVar5 = (int *)0x1;
  }
  if (puVar12 != (unsigned int *)0x0 && piVar5 != (int *)0x0) {
    (**(romwright_code **)*puVar12)(puVar12);
    (**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
  }
  return piVar14;
}

} /* extern "C" */
