/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00308d5c` (_code @ 0x308d5c, 0x6c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

int FUN_00245a7c(...);
int FUN_00245d0c(int, int);
int FUN_00246d38(int, int, int, unsigned int);
int btlUiRefreshSlotRanks(...);
int pickerAdvance(...);
int FUN_002550d8(...);
int FUN_00255180(...);
int FUN_0027de98(void);
int FUN_00337c20(...);
int FUN_0033b100(...);
int FUN_003ae3cc(...);
int FUN_003af0c4(...);
int FUN_003ddc44(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int g_btlScriptUnit; /* 0x43427c */
extern int g_btlMainState; /* 0x435d90 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_00245a7c. */
extern int FUN_00245c78(void);
extern unsigned int FUN_00245cc0(unsigned int);
/* Supplied declaration required: FUN_00245d0c. */
/* Supplied declaration required: FUN_00246d38. */
/* Supplied declaration required: btlUiRefreshSlotRanks. */
/* Supplied declaration required: pickerAdvance. */
/* Supplied declaration required: FUN_002550d8. */
/* Supplied declaration required: FUN_00255180. */
/* Supplied declaration required: FUN_0027de98. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: FUN_00337c20. */
/* Supplied declaration required: FUN_0033b100. */
/* Supplied declaration required: FUN_003ae3cc. */
/* Supplied declaration required: FUN_003af0c4. */
extern int questCurrentGetValue(void);
/* Supplied declaration required: FUN_003ddc44. */


void FUN_00308d5c(int param_1)

{
/* irregular: 6 unstructured edge(s); 4 goto(s); 13 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  int temp_v4;
  char *pcVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int temp_v5;
  
  temp_v4 = param_1;
  FUN_0027de98();
  if (temp_v4 != 0) {
    if (g_btlMainState != 0) {
      *(unsigned int *)(g_btlMainState + 0x68) = 0xc;
      return;
    }
    return;
  }
  *(unsigned int *)(param_1 + 0x2314) = 0;
  if (0 < *(int *)(param_1 + 0x16c)) {
    temp_v3 = 8;
    if (g_btlMainState == 0) {
      return;
    }
  }
  else {
    temp_v1 = *(short *)(param_1 + 0x496c);
    puVar8 = (unsigned int *)(param_1 + 0x44a0);
    if (temp_v1 < 1) {
      temp_v1 = *(short *)(param_1 + 0x496e);
    }
    if (temp_v1 < 1) {
      temp_v4 = 0;
      do {
        puVar9 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v4 * 0x288);
        temp_v2 = *puVar9;
        if (((temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) {
          if ((*puVar8 & 4) != 0) {
            if ((temp_v2 & 0x10) != 0) {
LAB_00308ea4:
              temp_v2 = 0;
              if ((*(unsigned short *)((int)puVar9 + 0x1c6) & 0x80) != 0) {
                temp_v5 = temp_v4;
                FUN_00245d0c(temp_v4,7);
                if (temp_v5 != 0) {
                  temp_v2 = 0x80;
                }
              }
              if ((*(unsigned short *)((int)puVar9 + 0x1c6) & 0x40) != 0) {
                temp_v5 = temp_v4;
                FUN_00245d0c(temp_v4,6);
                if (temp_v5 != 0) {
                  temp_v2 = temp_v2 | 0x40;
                }
              }
              if ((*(unsigned short *)((int)puVar9 + 0x1c6) & 0x100) != 0) {
                temp_v5 = temp_v4;
                FUN_00245d0c(temp_v4,8);
                if (temp_v5 != 0) {
                  temp_v2 = temp_v2 | 0x100;
                }
              }
              if ((*(unsigned short *)((int)puVar9 + 0x1c6) & 8) != 0) {
                temp_v5 = temp_v4;
                FUN_00245d0c(temp_v4,3);
                if (temp_v5 != 0) {
                  temp_v2 = temp_v2 | 8;
                }
              }
              if ((temp_v2 != 0) && (-1 < (short)puVar9[2])) {
                FUN_00246d38(0,0,*(int *)(param_1 + 0x1e98) + (short)puVar9[2] * 0x114,temp_v2);
              }
            }
          }
          else if ((temp_v2 & 0x10) == 0) goto LAB_00308ea4;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x6d);
      temp_v4 = 0;
      do {
        puVar9 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v4 * 0x288);
        temp_v2 = *puVar9;
        if (((temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) {
          if ((*puVar8 & 4) != 0) {
            if ((temp_v2 & 0x10) != 0) {
LAB_00308fb8:
              temp_v5 = (int)(short)puVar9[2];
              if ((*(unsigned short *)((int)puVar9 + 0x1c6) & 0x80) != 0) {
                FUN_002550d8(temp_v5,0x16,1,0);
              }
              else {
                temp_v3 = FUN_00245cc0(0x16);
                FUN_00255180(temp_v5,0x16,temp_v3);
              }
              if ((*(unsigned short *)((int)puVar9 + 0x1c6) & 0x40) != 0) {
                FUN_002550d8(temp_v5,0x17,1,0);
              }
              else {
                temp_v3 = FUN_00245cc0(0x17);
                FUN_00255180(temp_v5,0x17,temp_v3);
              }
              if ((*(unsigned short *)((int)puVar9 + 0x1c6) & 0x100) != 0) {
                FUN_002550d8(temp_v5,0x18,1,0);
              }
              else {
                temp_v3 = FUN_00245cc0(0x18);
                FUN_00255180(temp_v5,0x18,temp_v3);
              }
              if ((*(unsigned short *)((int)puVar9 + 0x1c6) & 8) != 0) {
                FUN_002550d8(temp_v5,0x19,1,0);
              }
              else {
                temp_v3 = FUN_00245cc0(0x19);
                FUN_00255180(temp_v5,0x19,temp_v3);
              }
            }
          }
          else if ((temp_v2 & 0x10) == 0) goto LAB_00308fb8;
        }
        temp_v4 = temp_v4 + 1;
        if (temp_v4 >= 0x6d) {
          if ((*(char *)(param_1 + 0x49c4) != '\0') &&
             ((*(unsigned int *)(param_1 + 0x44a8) & 0x8000000) == 0)) {
            temp_v4 = 0;
            do {
              temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v4 * 0x288);
              if ((temp_v2 & 0x20) != 0 && (temp_v2 & 1) != 0) {
                if (*(int *)(param_1 + 0x1fc0) + temp_v4 * 0x288 == 0) break;
                if (((*puVar8 & 0x3004) != 0) || (*(int *)(param_1 + 0x2260) == 4))
                goto LAB_003092e8;
                temp_v4 = FUN_00245c78();
                temp_v2 = 1;
                if ((temp_v4 != 0) ||
                   ((temp_v4 = FUN_00245c78(), temp_v4 == 0 && (temp_v4 = questCurrentGetValue(), temp_v4 != 0)))) {
                  puVar9 = reinterpret_cast<unsigned int *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
                  if ((puVar9 == (unsigned int *)0x0) ||
                     (((*puVar9 & 0x80) == 0 && ((*puVar9 & 0x1000) == 0)))) {
                    temp_v2 = 0;
                  }
                  FUN_003af0c4(g_btlUiBlock,temp_v2 ^ 1);
                }
                temp_v4 = FUN_00245c78();
                if ((((temp_v4 != 0) &&
                     (((puVar9 = reinterpret_cast<unsigned int *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit))), puVar9 == (unsigned int *)0x0 ||
                       (((*puVar9 & 0x80) == 0 && ((*puVar9 & 0x1000) == 0)))) &&
                      (temp_v4 = jyoucyuGetTableEntry(1), temp_v4 == 0)))) &&
                    (temp_v4 = FUN_00245c78(), temp_v4 != 0)) &&
                   ((puVar9 = reinterpret_cast<unsigned int *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit))), puVar9 == (unsigned int *)0x0 ||
                    (((*puVar9 & 0x80) == 0 && ((*puVar9 & 0x1000) == 0)))))) {
                  temp_v4 = 0;
                  do {
                    temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v4 * 0x288);
                    if ((temp_v2 & 0x20) != 0 && (temp_v2 & 1) != 0) {
                      if (*(int *)(param_1 + 0x1fc0) + temp_v4 * 0x288 == 0) break;
                      temp_v3 = 1;
                      FUN_00245a7c(1,*(unsigned int *)(param_1 + 0x49e0));
                      *(unsigned int *)(param_1 + 0x49e0) = temp_v3;
                      break;
                    }
                    temp_v4 = temp_v4 + 1;
                  } while (temp_v4 < 0x6d);
                }
                *puVar8 = *puVar8 | 0x1000;
                temp_v3 = 0xe;
                goto joined_r0x003092c8;
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 0x6d);
            *(unsigned char *)(param_1 + 0x49c4) = 0;
          }
LAB_003092e8:
          *puVar8 = *puVar8 & 0xfeffdf7f;
          FUN_003ae3cc(g_btlUiBlock);
          pcVar7 = (char *)(param_1 + 0x44b5);
          if ((*puVar8 & 4) != 0) {
            pcVar5 = (char *)(param_1 + 0x44b4);
            *puVar8 = *puVar8 & 0xffffeffb;
            temp_v0 = *pcVar5 + '\x01';
            *pcVar5 = temp_v0;
            if (temp_v0 == -1) {
              temp_v0 = -1;
            }
            *pcVar5 = temp_v0;
            temp_v0 = *pcVar7 + '\x01';
            *pcVar7 = temp_v0;
            if (temp_v0 == -1) {
              temp_v0 = -1;
            }
            *pcVar7 = temp_v0;
            if (g_btlMainState != 0) {
              *(unsigned int *)(g_btlMainState + 0x68) = 0x11;
            }
            FUN_00337c20(param_1,0);
            FUN_0033b100(param_1,1);
          }
          else {
            FUN_003ddc44(0);
            *puVar8 = (*puVar8 & 0xffffefff) | 4;
            temp_v0 = *pcVar7 + '\x01';
            *pcVar7 = temp_v0;
            if (temp_v0 == -1) {
              temp_v0 = -1;
            }
            *pcVar7 = temp_v0;
            if (g_btlMainState != 0) {
              *(unsigned int *)(g_btlMainState + 0x68) = 0x11;
            }
            FUN_00337c20(param_1,1);
            FUN_0033b100(param_1,0);
          }
          return;
        }
      } while( 1 );
    }
    if (((*(unsigned int *)(param_1 + 0x44a8) & 0x10) == 0) &&
       ((*puVar8 & 0x80) == 0 && (*puVar8 & 0x1000000) == 0)) {
      pickerAdvance(param_1);
    }
    btlUiRefreshSlotRanks(g_btlUiBlock);
    *puVar8 = *puVar8 & 0xfeffff7f;
    temp_v3 = 0xc;
joined_r0x003092c8:
    if (g_btlMainState == 0) {
      return;
    }
  }
  *(unsigned int *)(g_btlMainState + 0x68) = temp_v3;
  return;
}

} /* extern "C" */
