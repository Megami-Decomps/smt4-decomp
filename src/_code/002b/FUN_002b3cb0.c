/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3cb0` (_code @ 0x2b3cb0, 0x6dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int iRam00000000; /* 0x0 */
extern unsigned int *puRam00000008; /* 0x8 */
extern int iRam0000000c; /* 0xc */
extern unsigned char DAT_00421434; /* 0x421434 */
extern unsigned int DAT_00476634; /* 0x476634 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0013af78. */
extern unsigned int FUN_0013af88(void);
/* Supplied declaration required: FUN_0013dba8. */
/* Supplied declaration required: FUN_002af604. */
extern unsigned int *FUN_002b5498(int, int *, int);
/* Supplied declaration required: FUN_002ba5f8. */


/* WARNING: Instruction at (ram,0x002b4226) overlaps instruction at (ram,0x002b4224)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b4014) */
/* WARNING: Removing unreachable block (ram,0x002b400c) */
/* WARNING: Removing unreachable block (ram,0x002b3b94) */
/* WARNING: Removing unreachable block (ram,0x002b4004) */
/* WARNING: Removing unreachable block (ram,0x002b4040) */
/* WARNING: Removing unreachable block (ram,0x002b402c) */

unsigned int FUN_002b3cb0(char *param_1,romwright_code *UNRECOVERED_JUMPTABLE,int param_3,int *param_4)

{
/* irregular: 2 goto(s); 17 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar5;
  int temp_v3;
  unsigned int *puVar7;
  unsigned int temp_v4;
  unsigned int *puVar9;
  int *piVar10;
  unsigned int temp_v5;
  unsigned int *puVar12;
  romwright_code *pcVar13;
  unsigned int *puVar14;
  char *pcVar15;
  int temp_v6;
  int temp_v7;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  unsigned char bStack_44;
  int *piStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  piStack_48 = (int *)0x0;
  bStack_44 = 1;
  piVar10 = *(int **)(param_1 + 0x1c);
  if (piVar10 == (int *)0x0) {
    if (*(int *)(param_3 + 0xe0) != 0) {
      piStack_4c = (int *)(*(int *)(param_3 + 0xe0) + param_3 + 0xe0);
    }
    else {
      piStack_4c = (int *)0x0;
    }
    temp_v4 = piStack_4c[6];
    if (temp_v4 == 0) {
      uStack_30 = 0;
    }
    else {
      uStack_30 = (**(romwright_code **)(*param_4 + 8))(param_4,temp_v4 << 6,0x20);
    }
    uStack_34 = temp_v4 & 0x3fffffff;
    if (piStack_4c[6] * -0x10 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uStack_3c = uStack_30;
    uStack_38 = uStack_30;
    pcVar13 = (romwright_code *)(int)*param_1;
    piVar10 = piStack_4c;
    piStack_50 = param_4;
    piStack_40 = param_4;
    FUN_0013dba8(piStack_4c,*(unsigned int *)(param_1 + 4),pcVar13,&piStack_40);
    temp_v0 = bStack_44;
    piStack_4c = (int *)romwright_piece_3_1(piStack_4c._1_3_,1);
    piStack_50 = piVar10;
    if (&piStack_48 != &piStack_50) {
      piStack_50 = piStack_48;
      pcVar13 = (romwright_code *)(unsigned int)bStack_44;
      bStack_44 = 1;
      piStack_4c = (int *)romwright_piece_3_1(piStack_4c._1_3_,temp_v0);
      piStack_48 = piVar10;
    }
    piVar10 = piStack_50;
    if ((piStack_50 != (int *)0x0) && ((char)piStack_4c != '\0')) {
      (**(romwright_code **)*piStack_50)(piStack_50);
      piVar5 = (int *)piVar10[1];
      pcVar13 = *(romwright_code **)(*piVar5 + 0xc);
      (*pcVar13)(piVar5,piVar10);
    }
    if (uStack_3c < uStack_38) {
      pcVar13 = (romwright_code *)(uStack_38 - uStack_3c);
    }
    if (uStack_3c < uStack_38) {
      temp_v4 = ((unsigned int)pcVar13 & 0x7f) >> 6;
    }
    else {
      temp_v4 = 0;
    }
    for (temp_v3 = temp_v4 + 1; temp_v3 < ((int)(uStack_38 - uStack_3c) >> 6) + 1; temp_v3 = temp_v3 + 2) {
    }
    uStack_38 = uStack_3c;
    if (piStack_40 != (int *)0x0 && uStack_3c != 0) {
      (**(romwright_code **)(*piStack_40 + 0xc))();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v4 = (unsigned int)piStack_4c >> 8;
  piStack_4c = (int *)((unsigned int)piStack_4c & 0xffffff00);
  piStack_50 = piVar10;
  if (&piStack_48 != &piStack_50) {
    piStack_50 = (int *)0x0;
    piStack_4c = (int *)romwright_piece_3_1((int)temp_v4,1);
    piStack_48 = piVar10;
  }
  piVar10 = piStack_50;
  bStack_44 = &piStack_48 == &piStack_50;
  if ((piStack_50 != (int *)0x0) && ((char)piStack_4c != '\0')) {
    (**(romwright_code **)*piStack_50)(piStack_50);
    piVar5 = (int *)piVar10[1];
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,piVar10);
  }
  temp_v3 = (**(romwright_code **)(*param_4 + 8))(param_4,0x234,4);
  if (temp_v3 != 0) {
    pcVar15 = param_1;
    puVar7 = (unsigned int *)FUN_002b5498(temp_v3,param_4,param_3);
    *puVar7 = (unsigned int)&DAT_00421434;
    puVar7[0x52] = 0;
    puVar7[0x53] = 0;
    puVar7[0x54] = 0;
    puVar7[0x55] = 0;
    puVar7[0x56] = 0;
    puVar7[0x57] = 0;
    puVar7[0x58] = 0;
    puVar7[0x59] = 0;
    puVar7[0x5a] = 0;
    puVar7[0x5b] = 0;
    puVar7[0x5c] = 0;
    puVar7[0x5d] = 0;
    puVar7[0x5e] = 0;
    puVar7[0x5f] = 0;
    puVar7[0x60] = 0;
    puVar7[0x61] = 0;
    puVar7[0x62] = *(unsigned int *)(param_1 + 0x10);
    if ((DAT_00476634 & 1) == 0) {
      puVar2 = puRam00000008;
      if ((puRam00000008 != (unsigned int *)0x0) && (((unsigned int)pcVar15 & ~*puRam00000008) != 0)) {
        puVar2 = (unsigned int *)0x0;
      }
      if (*(unsigned int *)(DAT_00476634 + 0x4c) < puVar2[0x13]) {
        return 1;
      }
      return 0;
    }
    temp_v6 = puVar7[0x8b];
    temp_v7 = *(int *)(temp_v6 + 0x18) + *(int *)(temp_v6 + 0x28) * 0x1c;
    FUN_0013af78();
    temp_v1 = *(int *)(temp_v6 + 0x28) + 1;
    *(int *)(temp_v6 + 0x28) = temp_v1;
    temp_v3 = 1;
    if ((*(romwright_code **)(temp_v6 + 0x38) != (romwright_code *)0x0) &&
       ((*(char *)(temp_v7 + 1) != '\0' ||
        ((temp_v3 = 1, temp_v1 == *(int *)(temp_v6 + 0x20) && (*(char *)(temp_v6 + 0x3c) != '\0')))))) {
      UNRECOVERED_JUMPTABLE = *(romwright_code **)(temp_v6 + 0x38);
      temp_v3 = temp_v1;
    }
    if (*(char *)(temp_v7 + 2) != '\0') {
      *(unsigned char *)((int)puVar7 + 0x19e) = 0;
      *(unsigned char *)(puVar7 + 0x69) = 0;
      *(unsigned char *)((int)puVar7 + 0x19d) = 0;
    }
    else if (temp_v1 >= *(int *)(temp_v6 + 0x20)) {
      *(unsigned char *)((int)puVar7 + 0x19d) = 0;
    }
    else {
      FUN_002ba5f8();
    }
    temp_v2 = FUN_0013af88();
    if (UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002b3c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      temp_v2 = (*UNRECOVERED_JUMPTABLE)(temp_v3);
      return temp_v2;
    }
    return temp_v2;
  }
  (**(romwright_code **)(iRam00000000 + 0x24))(0,param_4);
  if ((UNRECOVERED_JUMPTABLE == (romwright_code *)0x0) ||
     (((temp_v3 = *(int *)(UNRECOVERED_JUMPTABLE + 0xc), temp_v3 != 0 &&
       ((temp_v3 == 0 || (FUN_002af604(), temp_v3 != 0)))) || (iRam0000000c != 0)))) {
    piVar10 = piStack_48;
    if ((piStack_48 != (int *)0x0) && (bStack_44 != 0)) {
      (**(romwright_code **)*piStack_48)(piStack_48);
      piVar5 = (int *)piVar10[1];
      (**(romwright_code **)(*piVar5 + 0xc))(piVar5,piVar10);
    }
    return 0;
  }
  temp_v5 = *(unsigned int *)(UNRECOVERED_JUMPTABLE + 0x20);
  temp_v4 = temp_v5 & 0x3fffffff;
  if ((*(int *)(UNRECOVERED_JUMPTABLE + 0x1c) - *(int *)(UNRECOVERED_JUMPTABLE + 0x18)) >> 2 >=
      (int)temp_v4) {
    if (temp_v4 != 0) {
      temp_v4 = temp_v4 << 1;
    }
    else {
      temp_v4 = 1;
    }
    if (temp_v4 <= (temp_v5 & 0x3fffffff)) goto LAB_002b433c;
    if ((*(int *)(UNRECOVERED_JUMPTABLE + 0x14) != 0) && ((temp_v5 & 0xc0000000) == 0x40000000)) {
      puVar9 = (unsigned int *)
               (**(romwright_code **)(**(int **)(UNRECOVERED_JUMPTABLE + 0x14) + 8))
                         (*(int **)(UNRECOVERED_JUMPTABLE + 0x14),temp_v4 << 2,0x20);
      temp_v3 = 0;
      puVar7 = *(unsigned int **)(UNRECOVERED_JUMPTABLE + 0x18);
      puVar14 = *(unsigned int **)(UNRECOVERED_JUMPTABLE + 0x1c);
      puVar12 = puVar9;
      if (puVar7 != puVar14) {
        do {
          if (puVar12 != (unsigned int *)0x0) {
            *puVar12 = *puVar7;
          }
          puVar7 = puVar7 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar7 != puVar14);
        temp_v3 = (*(int *)(UNRECOVERED_JUMPTABLE + 0x1c) - *(int *)(UNRECOVERED_JUMPTABLE + 0x18)) >>
                2;
      }
      if (*(int *)(UNRECOVERED_JUMPTABLE + 0x18) != 0) {
        (**(romwright_code **)(**(int **)(UNRECOVERED_JUMPTABLE + 0x14) + 0xc))();
      }
      *(unsigned int **)(UNRECOVERED_JUMPTABLE + 0x1c) = puVar9 + temp_v3;
      *(unsigned int **)(UNRECOVERED_JUMPTABLE + 0x18) = puVar9;
      *(unsigned int *)(UNRECOVERED_JUMPTABLE + 0x20) =
           (*(unsigned int *)(UNRECOVERED_JUMPTABLE + 0x20) & 0xc0000000) | temp_v4;
      goto LAB_002b433c;
    }
    temp_v0 = 0;
  }
  else {
LAB_002b433c:
    temp_v0 = 1;
    if (*(unsigned int **)(UNRECOVERED_JUMPTABLE + 0x1c) != (unsigned int *)0x0) {
      **(unsigned int **)(UNRECOVERED_JUMPTABLE + 0x1c) = 0;
    }
    *(int *)(UNRECOVERED_JUMPTABLE + 0x1c) = *(int *)(UNRECOVERED_JUMPTABLE + 0x1c) + 4;
  }
  if (temp_v0) {
    iRam0000000c = *(int *)(UNRECOVERED_JUMPTABLE + 0x10);
  }
  piVar10 = piStack_48;
  if ((piStack_48 != (int *)0x0) && (bStack_44 != 0)) {
    (**(romwright_code **)*piStack_48)(piStack_48);
    piVar5 = (int *)piVar10[1];
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,piVar10);
  }
  return 0;
}
