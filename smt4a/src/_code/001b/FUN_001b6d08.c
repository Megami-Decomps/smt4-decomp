/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b6d08` (_code @ 0x1b6d08, 0x714 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 12 slot(s), 42 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned char sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned char sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

extern unsigned char DAT_0055b654; /* 0x55b654 */
extern unsigned char DAT_0055bc08; /* 0x55bc08 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int *FUN_001b7420(int, int *, int, char *);
/* Supplied declaration required: FUN_001b77a8. */
/* Supplied declaration required: FUN_001b7e24. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


/* WARNING: Removing unreachable block (ram,0x001b709c) */
/* WARNING: Removing unreachable block (ram,0x001b706c) */
/* WARNING: Removing unreachable block (ram,0x001b7064) */
/* WARNING: Removing unreachable block (ram,0x001b705c) */
/* WARNING: Removing unreachable block (ram,0x001b7098) */
/* WARNING: Removing unreachable block (ram,0x001b70a4) */
/* WARNING: Removing unreachable block (ram,0x001b7084) */

int * FUN_001b6d08(char *param_1,int param_2,int param_3,int *param_4)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar12;
  int *piVar13;
  romwright_code *pcVar14;
  unsigned int *puVar15;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int *temp_v10;
  int *temp_v11;
  int *temp_v12;
  unsigned char temp_v13;
  int *temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int *temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  
  temp_v1 = 0;
  temp_v12 = (int *)0x0;
  temp_v13 = 1;
  piVar13 = *(int **)(param_1 + 0x1c);
  temp_v0 = 1;
  if (piVar13 != (int *)0x0) {
    temp_v3 = temp_v15 >> 8;
    temp_v15 = temp_v15 & 0xffffff00;
    temp_v14 = piVar13;
    if (&temp_v12 != &temp_v14) {
      temp_v14 = (int *)0x0;
      temp_v15 = romwright_piece_3_1((int)temp_v3,1);
      temp_v12 = piVar13;
    }
    piVar13 = temp_v14;
    temp_v13 = &temp_v12 == &temp_v14;
    if ((temp_v14 != (int *)0x0) && ((char)temp_v15 != '\0')) {
      (**(romwright_code **)*temp_v14)(temp_v14);
      piVar3 = (int *)piVar13[1];
      temp_v0 = 1;
      (**(romwright_code **)(*piVar3 + 0xc))(piVar3,piVar13);
    }
  }
  else {
    if (*(int *)(param_3 + 0xe0) != 0) {
      temp_v11 = (int *)(param_3 + 0xe0 + *(int *)(param_3 + 0xe0));
    }
    else {
      temp_v11 = (int *)0x0;
    }
    temp_v3 = temp_v11[6];
    if (temp_v3 == 0) {
      temp_v16 = 0;
    }
    else {
      temp_v16 = (**(romwright_code **)(*param_4 + 8))(param_4,temp_v3 << 6,0x20);
    }
    temp_v20 = temp_v3 & 0x3fffffff;
    temp_v2 = temp_v11[7];
    if (temp_v2 != 0) {
      temp_v2 = (int)(temp_v11 + 7) + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 + 0x1c;
    }
    else {
      temp_v2 = 0;
    }
    temp_v7 = temp_v2 + temp_v11[6] * 0x10;
    piVar13 = temp_v11;
    temp_v19 = temp_v16;
    for (; temp_v11 = piVar13, temp_v21 = temp_v20, temp_v2 != temp_v7; temp_v2 = temp_v2 + 0x10) {
      if (*(int *)(temp_v2 + 0xc) != 0) {
        temp_v5 = *(int *)(temp_v2 + 0xc) + temp_v2 + 0xc;
      }
      else {
        temp_v5 = 0;
      }
      if (temp_v19 != 0) {
        *(unsigned int *)(temp_v19 + 0x3c) = 0x801;
        FUN_001b7e24(temp_v19,temp_v5);
      }
      temp_v20 = temp_v21;
      piVar13 = temp_v11;
      temp_v19 = temp_v19 + 0x40;
    }
    pcVar14 = (romwright_code *)(int)*param_1;
    temp_v10 = param_4;
    temp_v17 = param_4;
    temp_v18 = temp_v16;
    FUN_001b77a8(piVar13,*(unsigned int *)(param_1 + 4),pcVar14,&temp_v17);
    temp_v0 = temp_v13;
    temp_v11 = (int *)romwright_piece_3_1((((unsigned int)(temp_v11) >> 8) & 0xffffffU),1);
    temp_v10 = piVar13;
    if (&temp_v12 != &temp_v10) {
      temp_v10 = temp_v12;
      pcVar14 = (romwright_code *)(unsigned int)temp_v13;
      temp_v13 = 1;
      temp_v11 = (int *)romwright_piece_3_1((((unsigned int)(temp_v11) >> 8) & 0xffffffU),temp_v0);
      temp_v12 = piVar13;
    }
    piVar13 = temp_v10;
    if ((temp_v10 != (int *)0x0) && ((char)temp_v11 != '\0')) {
      (**(romwright_code **)*temp_v10)(temp_v10);
      piVar3 = (int *)piVar13[1];
      pcVar14 = *(romwright_code **)(*piVar3 + 0xc);
      (*pcVar14)(piVar3,piVar13);
    }
    if (temp_v18 < temp_v19) {
      pcVar14 = (romwright_code *)(temp_v19 - temp_v18);
    }
    if (temp_v18 < temp_v19) {
      temp_v3 = ((unsigned int)pcVar14 & 0x7f) >> 6;
    }
    else {
      temp_v3 = 0;
    }
    for (temp_v2 = temp_v3 + 1; temp_v2 < ((int)(temp_v19 - temp_v18) >> 6) + 1; temp_v2 = temp_v2 + 2) {
    }
    temp_v19 = temp_v18;
    if (temp_v17 != (int *)0x0 && temp_v18 != 0) {
      (**(romwright_code **)(*temp_v17 + 0xc))();
    }
    temp_v0 = 0;
  }
  temp_v2 = (**(romwright_code **)(*param_4 + 8))(param_4,0x234,4);
  if (temp_v2 == 0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = (int *)FUN_001b7420(temp_v2,param_4,param_3,param_1);
    temp_v9 = 0x3f800000;
    *piVar13 = (int)&DAT_0055bc08;
    piVar13[0x52] = 0;
    piVar13[0x53] = 0;
    piVar13[0x54] = 0;
    piVar13[0x55] = 0;
    piVar13[0x56] = 0;
    piVar13[0x57] = 0;
    piVar13[0x58] = 0;
    piVar13[0x59] = 0;
    piVar13[0x5a] = 0;
    temp_v8 = 0;
    piVar13[0x5b] = 0;
    piVar13[0x5c] = 0;
    piVar13[0x5d] = 0;
    piVar13[0x5e] = 0;
    piVar13[0x5f] = 0;
    piVar13[0x60] = 0;
    piVar13[0x61] = 0;
    piVar13[0x62] = *(int *)(param_1 + 0x10);
    if (((DAT_005c4c2c & 1) == 0) && (temp_v2 = FUN_002eba64(&DAT_005c4c2c), temp_v2 != 0)) {
      DAT_0064c054 = temp_v9;
      DAT_0064c058 = temp_v8;
      DAT_0064c05c = temp_v8;
      DAT_0064c060 = temp_v8;
      DAT_0064c064 = temp_v8;
      DAT_0064c068 = temp_v9;
      DAT_0064c06c = temp_v8;
      DAT_0064c070 = temp_v8;
      DAT_0064c074 = temp_v8;
      DAT_0064c078 = temp_v8;
      DAT_0064c07c = temp_v9;
      DAT_0064c080 = temp_v8;
    }
    nn_math_ARMv6_MTX34CopyAsm(piVar13 + 99,&DAT_0064c054);
    if (((DAT_005c4c2c & 1) == 0) && (temp_v2 = FUN_002eba64(&DAT_005c4c2c), temp_v2 != 0)) {
      DAT_0064c054 = temp_v9;
      DAT_0064c058 = temp_v8;
      DAT_0064c05c = temp_v8;
      DAT_0064c060 = temp_v8;
      DAT_0064c064 = temp_v8;
      DAT_0064c068 = temp_v9;
      DAT_0064c06c = temp_v8;
      DAT_0064c070 = temp_v8;
      DAT_0064c074 = temp_v8;
      DAT_0064c078 = temp_v8;
      DAT_0064c07c = temp_v9;
      DAT_0064c080 = temp_v8;
    }
    nn_math_ARMv6_MTX34CopyAsm(piVar13 + 0x6f,&DAT_0064c054);
    piVar13[0x7b] = 0;
    *(unsigned char *)(piVar13 + 0x7c) = 1;
    *(unsigned char *)(piVar13 + 0x7d) = 0;
    *(unsigned char *)((int)piVar13 + 0x1f5) = 1;
    *(unsigned char *)((int)piVar13 + 0x1f6) = 1;
    temp_v4 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      temp_v4 = 2;
    }
    *(unsigned char *)((int)piVar13 + 0x1f7) = (*(int *)(param_1 + 0x14) != 0) | temp_v4;
    piVar13[0x7e] = 0;
    piVar13[0x7f] = 0;
    piVar13[0x80] = 0;
    piVar13[0x81] = 0;
    piVar13[0x82] = 0;
    piVar13[0x83] = 0;
    piVar13[0x84] = 0;
    piVar13[0x85] = 0;
    piVar13[0x86] = (int)param_1;
    piVar13[0x87] = 0;
    *(unsigned char *)((int)piVar13 + 0x1f6) = *(char *)(param_3 + 0xd4) != '\0';
    *piVar13 = (int)&DAT_0055b654;
    piVar13[0x88] = (int)temp_v12;
    *(unsigned char *)(piVar13 + 0x89) = temp_v13;
    temp_v12 = (int *)0x0;
    piVar13[0x8b] = -1;
    piVar13[0x8a] = 0;
    *(unsigned char *)(piVar13 + 0x8c) = temp_v0;
    *(unsigned char *)((int)piVar13 + 0x231) = 0;
    if (!temp_v0) {
      *(int **)(piVar13[0x88] + 0xc) = piVar13;
    }
  }
  (**(romwright_code **)(*piVar13 + 0x24))(piVar13,param_4);
  if ((param_2 == 0) ||
     (((piVar3 = *(int **)(param_2 + 0xc), piVar3 != (int *)0x0 &&
       ((piVar3 == piVar13 || (nw_gfx_SceneNode_IsCircularReference(), piVar3 != (int *)0x0)))) ||
      (piVar13[3] != 0)))) {
    piVar3 = temp_v12;
    if ((temp_v12 != (int *)0x0) && (temp_v13 != 0)) {
      (**(romwright_code **)*temp_v12)(temp_v12);
      piVar8 = (int *)piVar3[1];
      (**(romwright_code **)(*piVar8 + 0xc))(piVar8,piVar3);
    }
    return piVar13;
  }
  temp_v6 = *(unsigned int *)(param_2 + 0x20);
  temp_v3 = temp_v6 & 0x3fffffff;
  if ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) >> 2 >= (int)temp_v3) {
    if (temp_v3 != 0) {
      temp_v3 = temp_v3 << 1;
    }
    else {
      temp_v3 = 1;
    }
    if (temp_v3 > (temp_v6 & 0x3fffffff)) {
      if (((*(int *)(param_2 + 0x14) != 0) && ((temp_v6 & 0xc0000000) == 0x40000000)) &&
         (puVar6 = (unsigned int *)
                   (**(romwright_code **)(**(int **)(param_2 + 0x14) + 8))
                             (*(int **)(param_2 + 0x14),temp_v3 << 2,0x20),
         puVar6 != (unsigned int *)0x0)) {
        temp_v2 = 0;
        puVar7 = *(unsigned int **)(param_2 + 0x18);
        puVar15 = *(unsigned int **)(param_2 + 0x1c);
        puVar12 = puVar6;
        if (puVar7 != puVar15) {
          do {
            if (puVar12 != (unsigned int *)0x0) {
              *puVar12 = *puVar7;
            }
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          } while (puVar7 != puVar15);
          temp_v2 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) >> 2;
        }
        if (*(int *)(param_2 + 0x18) != 0) {
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x18);
          (**(romwright_code **)(**(int **)(param_2 + 0x14) + 0xc))();
        }
        *(unsigned int **)(param_2 + 0x1c) = puVar6 + temp_v2;
        *(unsigned int **)(param_2 + 0x18) = puVar6;
        *(unsigned int *)(param_2 + 0x20) = (*(unsigned int *)(param_2 + 0x20) & 0xc0000000) | temp_v3;
        temp_v1 = 1;
        if (*(unsigned int **)(param_2 + 0x1c) != (unsigned int *)0x0) {
          **(unsigned int **)(param_2 + 0x1c) = (unsigned int)piVar13;
        }
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
      }
    }
    else {
      temp_v1 = 1;
      if (*(unsigned int **)(param_2 + 0x1c) != (unsigned int *)0x0) {
        **(unsigned int **)(param_2 + 0x1c) = (unsigned int)piVar13;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
    }
  }
  else {
    temp_v1 = 1;
    if (*(unsigned int **)(param_2 + 0x1c) != (unsigned int *)0x0) {
      **(unsigned int **)(param_2 + 0x1c) = (unsigned int)piVar13;
    }
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
  }
  if (temp_v1) {
    piVar13[3] = *(int *)(param_2 + 0x10);
  }
  piVar3 = temp_v12;
  if ((temp_v12 != (int *)0x0) && (temp_v13 != 0)) {
    (**(romwright_code **)*temp_v12)(temp_v12);
    piVar8 = (int *)piVar3[1];
    (**(romwright_code **)(*piVar8 + 0xc))(piVar8,piVar3);
  }
  return piVar13;
}
