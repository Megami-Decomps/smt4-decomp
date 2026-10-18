/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012c97c` (_code @ 0x12c97c, 0x484 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int FUN_00151404(); /* 0x151404 */
extern unsigned char DAT_00420f90; /* 0x420f90 */
extern unsigned char DAT_00421ca0; /* 0x421ca0 */
extern unsigned char DAT_00421cd4; /* 0x421cd4 */

/* Supplied declaration required: FUN_002acd38. */
/* Supplied declaration required: FUN_002af604. */
extern int *FUN_002b5498(int, int *, unsigned int *, unsigned int);


int * FUN_0012c97c(int param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 5 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  romwright_code *pcVar8;
  unsigned int temp_v3;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar14;
  int *piVar15;
  
  if ((param_2 == (unsigned int *)0x0) || (puVar14 = param_2, (~*param_2 & 0x40000006) != 0)) {
    puVar14 = (unsigned int *)0x0;
  }
  temp_v5 = 0;
  if ((char)puVar14[0x30] != '\0') {
    temp_v5 = (**(romwright_code **)(*param_4 + 8))
                       (param_4,0x20,4,*(romwright_code **)(*param_4 + 8),param_1,param_2,param_3,param_4);
    if (temp_v5 == 0) {
      return (int *)0x0;
    }
    FUN_002acd38(temp_v5,puVar14 + 0x30,0x20);
  }
  piVar11 = (int *)0x0;
  if (puVar14[0x2f] != 0) {
    piVar15 = (int *)((int)puVar14 + puVar14[0x2f] + 0xbc);
  }
  else {
    piVar15 = (int *)0x0;
  }
  piVar3 = piVar11;
  if ((piVar15 != (int *)0x0) && ((char)piVar15[1] != '\0')) {
    temp_v1 = *piVar15;
    if (temp_v1 != 0x10000000) {
      if (temp_v1 < 0x10000000) {
        if (temp_v1 != -0x80000000) {
          if (temp_v1 != 0x4000000) {
            if (temp_v1 != 0x8000000) goto LAB_0012cb5c;
            temp_v4 = 0x18;
            piVar3 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,0x18,4);
          }
          else {
            temp_v4 = 0x28;
            piVar3 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,0x28,4);
          }
        }
        else {
          temp_v4 = 0x1c;
          piVar3 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,0x1c,4);
        }
        goto joined_r0x0012cab8;
      }
      if (temp_v1 == 0x20000000) {
        temp_v4 = 0x24;
        piVar3 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,0x24,4);
        goto joined_r0x0012cab8;
      }
      if (temp_v1 == 0x40000000) {
        temp_v4 = 0x28;
        piVar3 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,0x28,4);
        goto joined_r0x0012cab8;
      }
    }
    else {
      temp_v4 = 8;
      piVar3 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,8,4);
joined_r0x0012cab8:
      if (piVar3 != (int *)0x0) {
        FUN_002acd38(piVar3,piVar15,temp_v4);
        goto LAB_0012cb84;
      }
    }
LAB_0012cb5c:
    piVar3 = piVar11;
    if (temp_v5 != 0) {
      (**(romwright_code **)(*param_4 + 0xc))(param_4,temp_v5);
      return (int *)0x0;
    }
  }
LAB_0012cb84:
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x188,4);
  if (temp_v1 == 0) {
    if (temp_v5 != 0) {
      (**(romwright_code **)(*param_4 + 0xc))(param_4,temp_v5);
    }
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    pcVar8 = *(romwright_code **)(*param_4 + 0xc);
    (*pcVar8)(param_4,piVar3);
    return (int *)0x0;
  }
  piVar11 = (int *)FUN_002b5498(temp_v1,param_4,puVar14,param_3);
  *piVar11 = (int)&DAT_00420f90;
  *(unsigned char *)(piVar11 + 0x52) = 1;
  piVar11[0x53] = 0;
  piVar11[0x54] = 0;
  piVar11[0x55] = 0;
  piVar11[0x56] = 0;
  piVar11[0x57] = (int)&DAT_00421ca0;
  piVar11[0x58] = (int)&DAT_00421cd4;
  piVar11[0x5a] = 0;
  piVar11[0x59] = 0;
  piVar11[0x5b] = 0x3f800000;
  piVar11[0x5c] = 0;
  piVar11[0x5d] = 0x4b7fffff;
  piVar11[0x5e] = (int)FUN_00151404;
  piVar11[0x5f] = 0;
  piVar11[0x61] = (int)piVar3;
  piVar11[0x60] = temp_v5;
  temp_v5 = (**(romwright_code **)(*piVar11 + 0x24))(piVar11,param_4);
  if (temp_v5 < 0) {
    (**(romwright_code **)*piVar11)(piVar11);
    param_4 = (int *)piVar11[1];
    pcVar8 = *(romwright_code **)(*param_4 + 0xc);
    piVar3 = piVar11;
    (*pcVar8)(param_4,piVar3);
    return (int *)0x0;
  }
  if (param_1 == 0) {
    return piVar11;
  }
  piVar15 = *(int **)(param_1 + 0xc);
  if (piVar15 != (int *)0x0) {
    if (piVar15 == piVar11) {
      return piVar11;
    }
    FUN_002af604();
    if (piVar15 != (int *)0x0) {
      return piVar11;
    }
  }
  if (piVar11[3] != 0) {
    return piVar11;
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x20);
  temp_v2 = temp_v3 & 0x3fffffff;
  if ((int)temp_v2 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 << 1;
    }
    else {
      temp_v2 = 1;
    }
    if ((temp_v3 & 0x3fffffff) < temp_v2) {
      if ((*(int *)(param_1 + 0x14) == 0) || ((temp_v3 & 0xc0000000) != 0x40000000)) {
        temp_v0 = 0;
        if (temp_v0) {
          piVar11[3] = *(int *)(param_1 + 0x10);
        }
        return piVar11;
      }
      puVar4 = (unsigned int *)
               (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                         (*(int **)(param_1 + 0x14),temp_v2 << 2,0x20);
      temp_v5 = 0;
      puVar5 = *(unsigned int **)(param_1 + 0x18);
      puVar10 = *(unsigned int **)(param_1 + 0x1c);
      puVar7 = puVar4;
      if (puVar5 != puVar10) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar5;
          }
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar5 != puVar10);
        temp_v5 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar4 + temp_v5;
      *(unsigned int **)(param_1 + 0x18) = puVar4;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v2;
    }
  }
  temp_v0 = 1;
  if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar11;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    piVar11[3] = *(int *)(param_1 + 0x10);
  }
  return piVar11;
}
