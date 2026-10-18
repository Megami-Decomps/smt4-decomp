/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012edb8` (_code @ 0x12edb8, 0x410 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
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

extern unsigned int *FUN_0013e8b4(void);
extern unsigned int *FUN_0013ebe8(int *, int);
extern unsigned int *FUN_0013ec34(void);
extern unsigned int *FUN_0013ec9c(int *);
extern unsigned int *FUN_0013f354(int *);
extern unsigned int *FUN_0013f3bc(int *, int);
extern int *FUN_00140048(int, int *, unsigned int *, unsigned int, unsigned int **, unsigned int **, unsigned int);
/* Supplied declaration required: FUN_002af370. */


int * FUN_0012edb8(int param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int *temp_v5;
  char temp_v6;
  unsigned int *temp_v7;
  char temp_v8;
  int iStack_34;
  unsigned int *puStack_30;
  unsigned int uStack_2c;
  int *temp_v9;
  
  if ((param_2 == (unsigned int *)0x0) || (puVar14 = param_2, (~*param_2 & 0x4000000a) != 0)) {
    puVar14 = (unsigned int *)0x0;
  }
  iStack_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  temp_v9 = param_4;
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x29c,4);
  temp_v3 = puVar14[0x2d] & 0xff;
  if (puVar14[0x2f] != 0) {
    temp_v2 = (int)puVar14 + puVar14[0x2f] + 0xbc;
  }
  else {
    temp_v2 = 0;
  }
  puVar3 = (unsigned int *)0x0;
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        puVar3 = (unsigned int *)FUN_0013e8b4();
      }
    }
    else {
      puVar3 = (unsigned int *)FUN_0013ec9c(temp_v9);
    }
  }
  else {
    puVar3 = (unsigned int *)FUN_0013ebe8(temp_v9,temp_v2);
  }
  temp_v3 = puVar14[0x2e] & 0xff;
  if (puVar14[0x30] != 0) {
    temp_v2 = (int)puVar14 + puVar14[0x30] + 0xc0;
  }
  else {
    temp_v2 = 0;
  }
  puVar4 = (unsigned int *)0x0;
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        puVar4 = (unsigned int *)FUN_0013ec34();
      }
    }
    else {
      puVar4 = (unsigned int *)FUN_0013f354(temp_v9);
    }
  }
  else {
    puVar4 = (unsigned int *)FUN_0013f3bc(temp_v9,temp_v2);
  }
  temp_v0 = 0;
  if (temp_v1 == 0) {
    puVar7 = (unsigned int *)0x0;
    piVar5 = (int *)0x0;
    puVar12 = puVar4;
    puVar13 = puVar3;
  }
  else {
    temp_v6 = '\x01';
    temp_v8 = '\x01';
    puVar12 = (unsigned int *)0x0;
    temp_v0 = 1;
    puVar13 = (unsigned int *)0x0;
    temp_v5 = puVar3;
    temp_v7 = puVar4;
    piVar5 = (int *)FUN_00140048(temp_v1,temp_v9,puVar14,param_3,&temp_v5,&temp_v7,0);
    puVar3 = temp_v5;
    puVar7 = (unsigned int *)0x0;
    if ((temp_v5 != (unsigned int *)0x0) && (puVar7 = (unsigned int *)0x0, temp_v6 != '\0')) {
      (**(romwright_code **)*temp_v5)(temp_v5);
      piVar6 = (int *)puVar3[1];
      puVar7 = (unsigned int *)(**(romwright_code **)(*piVar6 + 0xc))(piVar6,puVar3);
    }
  }
  puVar3 = temp_v7;
  if (temp_v0) {
    puVar7 = temp_v7;
  }
  if ((temp_v0 && puVar7 != (unsigned int *)0x0) && (temp_v8 != '\0')) {
    (**(romwright_code **)*temp_v7)(temp_v7);
    piVar6 = (int *)puVar3[1];
    (**(romwright_code **)(*piVar6 + 0xc))(piVar6,puVar3);
  }
  piVar6 = (int *)(**(romwright_code **)(*piVar5 + 0x24))(piVar5,temp_v9);
  if ((param_1 != 0) &&
     (((piVar6 = *(int **)(param_1 + 0xc), piVar6 == (int *)0x0 ||
       ((piVar6 != piVar5 && (FUN_002af370(), piVar6 == (int *)0x0)))) &&
      (piVar6 = (int *)piVar5[3], piVar6 == (int *)0x0)))) {
    temp_v4 = *(unsigned int *)(param_1 + 0x20);
    temp_v3 = temp_v4 & 0x3fffffff;
    if ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2 >= (int)temp_v3) {
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 << 1;
      }
      else {
        temp_v3 = 1;
      }
      if (temp_v3 <= (temp_v4 & 0x3fffffff)) goto LAB_0012f128;
      if ((*(int *)(param_1 + 0x14) != 0) && ((temp_v4 & 0xc0000000) == 0x40000000)) {
        puVar7 = (unsigned int *)
                 (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                           (*(int **)(param_1 + 0x14),temp_v3 << 2,0x20);
        puVar3 = *(unsigned int **)(param_1 + 0x18);
        puVar11 = *(unsigned int **)(param_1 + 0x1c);
        temp_v1 = 0;
        puVar4 = puVar7;
        if (puVar3 != puVar11) {
          do {
            if (puVar4 != (unsigned int *)0x0) {
              *puVar4 = *puVar3;
            }
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (puVar3 != puVar11);
          temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
        }
        *(unsigned int **)(param_1 + 0x1c) = puVar7 + temp_v1;
        *(unsigned int **)(param_1 + 0x18) = puVar7;
        *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v3;
        goto LAB_0012f128;
      }
      temp_v0 = 0;
    }
    else {
LAB_0012f128:
      temp_v0 = 1;
      if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
        **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar5;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
    }
    piVar6 = (int *)0x0;
    if (temp_v0) {
      piVar6 = *(int **)(param_1 + 0x10);
      piVar5[3] = (int)piVar6;
    }
  }
  if (puVar12 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar12)(puVar12);
    piVar6 = (int *)(**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
  }
  if (puVar13 != (unsigned int *)0x0) {
    piVar6 = (int *)0x1;
  }
  if (puVar13 != (unsigned int *)0x0 && piVar6 != (int *)0x0) {
    (**(romwright_code **)*puVar13)(puVar13);
    (**(romwright_code **)(*(int *)puVar13[1] + 0xc))((int *)puVar13[1],puVar13);
  }
  return piVar5;
}
