/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e8668` (_code @ 0x4e8668, 0x4d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int dataTable04FindById(void);
int source4CCopyHalves(unsigned int, unsigned short [10]);
int btlAiMarkLowestHpTarget(...);
int FUN_004e9bd0(...);
int FUN_004ea200(...);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
    unsigned int sp1F4; /* 0x1f4: local_1f4 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
} param_2_stack;

extern unsigned char FUN_00241988; /* 0x241988 */
extern int btlSkillCompareBySortKey(...); /* 0x290af8 */
extern int FUN_002fe144(...); /* 0x2fe144 */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int g_btlTargetableMask; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: dataTable04FindById. */
extern int FUN_0026264c(unsigned short);
extern int gameProgressIsAdvanced(void);
extern int FUN_003df57c(unsigned short, unsigned int);
extern int valueAtF0IsReady(int);
extern int FUN_004bcbb4(unsigned int, unsigned short);
/* Supplied declaration required: source4CCopyHalves. */
/* Supplied declaration required: btlAiMarkLowestHpTarget. */
/* Supplied declaration required: FUN_004e9bd0. */
/* Supplied declaration required: FUN_004ea200. */


void FUN_004e8668(int *param_1,int param_2)

{
/* irregular: 3 goto(s); 8 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar7;
  int temp_v4;
  int aiStack_1ec [109];
  unsigned short temp_v5 [10];
  
  temp_v3 = 0;
  temp_v2 = 0;
  temp_v4 = 0x6d;
  puVar2 = *(unsigned int **)(*param_1 + 0x1ffc);
  do {
    if ((*puVar2 & g_btlTargetableMask) != 0 || (puVar2[1] & DAT_00571194) != 0) {
      aiStack_1ec[temp_v3] = *(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408;
      temp_v3 = temp_v3 + 1;
    }
    temp_v4 = temp_v4 - 1;
    puVar2 = puVar2 + 0x102;
    temp_v2 = temp_v2 + 1;
  } while (temp_v4 != 0);
  qsort(aiStack_1ec,temp_v3,4,&FUN_00241988);
  piVar3 = param_1;
  FUN_004ea200(param_1,param_2,aiStack_1ec,temp_v3,1);
  if (piVar3 == (int *)0x0) {
    temp_v5[0] = 0;
    temp_v5[1] = 0;
    temp_v5[2] = 0;
    temp_v5[3] = 0;
    temp_v5[4] = 0;
    temp_v5[5] = 0;
    temp_v5[6] = 0;
    temp_v5[7] = 0;
    temp_v5[8] = 0;
    temp_v5[9] = 0;
    source4CCopyHalves(*(unsigned int *)(param_2 + 0x20),temp_v5);
    if (!((**(unsigned int **)(param_2 + 0x20) & DAT_00571150) == 0 &&
         ((*(unsigned int **)(param_2 + 0x20))[1] & DAT_00571154) == 0)) {
      qsort(temp_v5,9,2,FUN_002fe144);
    }
    else {
      qsort(temp_v5,9,2,btlSkillCompareBySortKey);
    }
    temp_v2 = 0;
    do {
      puVar7 = temp_v5 + temp_v2;
      temp_v1 = (unsigned int)*puVar7;
      if ((temp_v1 != 0) && (dataTable04FindById(), temp_v1 != 0)) {
        puVar2 = *(unsigned int **)(param_2 + 0x20);
        if (!((puVar2[1] & DAT_00571154) == 0 && (*puVar2 & DAT_00571150) == 0)) {
          temp_v4 = FUN_003df57c(*puVar7,1);
          if (temp_v4 <= *(int *)(*(int *)(param_2 + 0x28) + 0xfc)) {
LAB_004e8820:
            piVar3 = param_1;
            FUN_004e9bd0(param_1,param_2,temp_v1,aiStack_1ec,temp_v3,1,0);
            if (piVar3 != (int *)0x0) {
              return;
            }
          }
        }
        else {
          temp_v4 = FUN_004bcbb4(puVar2[0xff],*puVar7);
          if (temp_v4 <= *(int *)(*(int *)(param_2 + 0x28) + 0xfc)) goto LAB_004e8820;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 9);
    piVar3 = param_1;
    FUN_004ea200(param_1,param_2,aiStack_1ec,temp_v3,0);
    if (piVar3 == (int *)0x0) {
      temp_v2 = 0;
      do {
        puVar7 = temp_v5 + temp_v2;
        temp_v1 = (unsigned int)*puVar7;
        if ((temp_v1 != 0) && (dataTable04FindById(), temp_v1 != 0)) {
          puVar2 = *(unsigned int **)(param_2 + 0x20);
          if (!((*puVar2 & DAT_00571150) == 0 && (puVar2[1] & DAT_00571154) == 0)) {
            temp_v4 = FUN_003df57c(*puVar7,1);
            if (temp_v4 <= *(int *)(*(int *)(param_2 + 0x28) + 0xfc)) {
LAB_004e8904:
              piVar3 = param_1;
              FUN_004e9bd0(param_1,param_2,temp_v1,aiStack_1ec,temp_v3,0,1);
              if (piVar3 != (int *)0x0) {
                return;
              }
            }
          }
          else {
            temp_v4 = FUN_004bcbb4(puVar2[0xff],*puVar7);
            if (temp_v4 <= *(int *)(*(int *)(param_2 + 0x28) + 0xfc)) goto LAB_004e8904;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 9);
      temp_v2 = 0;
      do {
        puVar7 = temp_v5 + temp_v2;
        temp_v1 = (unsigned int)*puVar7;
        if ((temp_v1 != 0) && (dataTable04FindById(), temp_v1 != 0)) {
          puVar2 = *(unsigned int **)(param_2 + 0x20);
          if (!((*puVar2 & DAT_00571150) == 0 && (DAT_00571154 & puVar2[1]) == 0)) {
            temp_v4 = FUN_003df57c(*puVar7,1);
            if (temp_v4 <= *(int *)(*(int *)(param_2 + 0x28) + 0xfc)) {
LAB_004e89c4:
              piVar3 = param_1;
              FUN_004e9bd0(param_1,param_2,temp_v1,aiStack_1ec,temp_v3,0,2);
              if (piVar3 != (int *)0x0) {
                return;
              }
            }
          }
          else {
            temp_v4 = FUN_004bcbb4(puVar2[0xff],*puVar7);
            if (temp_v4 <= *(int *)(*(int *)(param_2 + 0x28) + 0xfc)) goto LAB_004e89c4;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 9);
      temp_v1 = 0;
      if (temp_v1 < temp_v3) {
        do {
          puVar2 = (unsigned int *)aiStack_1ec[temp_v1];
          if ((*puVar2 & g_btlTargetableMask) != 0 || (puVar2[1] & DAT_00571194) != 0) {
            temp_v2 = FUN_0026264c(*(unsigned short *)((int)puVar2 + 0x166));
            if (temp_v2 != 0) {
              *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 6;
              *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = 0;
              return;
            }
            temp_v0 = *(short *)(aiStack_1ec[temp_v1] + 0x166);
            if ((((-1 < *(int *)(*param_1 + 0xec)) && ((*(unsigned int *)(*param_1 + 0x110) & 0x80) != 0))
                || (temp_v0 == 0x493 || temp_v0 == 0x494)) ||
               ((temp_v0 == 0x495 || temp_v0 == 0x496 ||
                ((temp_v2 = gameProgressIsAdvanced(), temp_v2 != 0 && (temp_v2 = valueAtF0IsReady(*param_1), temp_v2 == 0)
                 ))))) {
              *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 6;
              *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = 0;
              return;
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < temp_v3);
      }
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 1;
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) =
           (unsigned short)(((*(unsigned int **)(param_2 + 0x20))[1] & DAT_00571154) != 0 ||
                   (**(unsigned int **)(param_2 + 0x20) & DAT_00571150) != 0);
      btlAiMarkLowestHpTarget(param_1);
    }
  }
  return;
}

} /* extern "C" */
