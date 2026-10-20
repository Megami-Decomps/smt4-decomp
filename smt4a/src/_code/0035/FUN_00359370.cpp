/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359370` (_code @ 0x359370, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001767a4(unsigned int, unsigned int);
int FUN_0018e9d8(unsigned int);
int FUN_003594f8(unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_005b3c14; /* 0x5b3c14 */
extern unsigned int DAT_005b3c20; /* 0x5b3c20 */
extern unsigned int DAT_005b3c24; /* 0x5b3c24 */
extern unsigned int DAT_005b3c28; /* 0x5b3c28 */
extern unsigned int g_effAsdLightHandle; /* 0x5b3c80 */
extern unsigned int DAT_005b3c84; /* 0x5b3c84 */
extern unsigned int DAT_005b3c88; /* 0x5b3c88 */
extern unsigned int DAT_005b3c8c; /* 0x5b3c8c */
extern unsigned int DAT_005b3ca0; /* 0x5b3ca0 */
extern unsigned int DAT_005b3ca4; /* 0x5b3ca4 */
extern unsigned int DAT_005b3cb8; /* 0x5b3cb8 */
extern unsigned int DAT_005b3cc0; /* 0x5b3cc0 */
extern unsigned int DAT_005b3cc4; /* 0x5b3cc4 */

/* Supplied declaration required: FUN_001767a4. */
/* Supplied declaration required: FUN_0018e9d8. */
/* Supplied declaration required: FUN_003594f8. */
extern int asdModelGetSlotArray0(int);


void FUN_00359370(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int temp_v3;
  int *piVar8;
  int temp_v4;
  
  temp_v0 = asdModelGetSlotArray0(param_2);
  temp_v3 = *(int *)(param_1 + 0xc);
  piVar4 = *(int **)(temp_v0 + 0x18);
  piVar8 = *(int **)(temp_v0 + 0x1c);
  temp_v1 = temp_v0;
  while( 1 ) {
    if (piVar4 != piVar8) {
      temp_v1 = *piVar4;
    }
    if (piVar4 == piVar8 || temp_v1 == temp_v3) break;
    piVar4 = piVar4 + 1;
  }
  if (piVar4 != piVar8) {
    piVar5 = piVar4 + 1;
    temp_v1 = (int)piVar8 - (int)piVar5;
    if (0 < temp_v1 >> 2) {
      piVar8 = piVar4;
      if (temp_v1 * 0x20000000 < 0) {
        temp_v4 = *piVar5;
        piVar5 = piVar4 + 2;
        if (temp_v4 != temp_v3) {
          piVar8 = piVar4 + 1;
          *piVar4 = temp_v4;
        }
      }
      piVar4 = piVar8;
      for (temp_v1 = temp_v1 >> 3; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
        piVar8 = piVar4;
        if (*piVar5 != temp_v3) {
          piVar8 = piVar4 + 1;
          *piVar4 = *piVar5;
        }
        piVar6 = piVar5 + 1;
        piVar5 = piVar5 + 2;
        piVar4 = piVar8;
        if (*piVar6 != temp_v3) {
          piVar4 = piVar8 + 1;
          *piVar8 = *piVar6;
        }
      }
    }
  }
  piVar8 = *(int **)(temp_v0 + 0x1c);
  *(int **)(temp_v0 + 0x1c) = piVar4;
  if (piVar8 != piVar4) {
    *(unsigned int *)(temp_v3 + 0xc) = 0;
  }
  if (param_2 == 0) {
    temp_v2 = 1;
    FUN_003594f8(temp_v2);
  }
  else if (param_2 == 1) {
    temp_v2 = 2;
    FUN_003594f8(temp_v2);
  }
  temp_v1 = *(int *)((&DAT_005b3cb8)[param_2] + 4);
  if (param_2 == 0) {
    DAT_005b3c14 = DAT_005b3c24;
    FUN_0018e9d8(DAT_005b3ca0);
    **(unsigned int **)(temp_v1 + 0xac) = DAT_005b3c14;
    DAT_005b3cc0 = 0;
    FUN_001767a4(g_effAsdLightHandle,DAT_005b3c88);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  DAT_005b3c20 = DAT_005b3c28;
  FUN_0018e9d8(DAT_005b3ca4);
  **(unsigned int **)(temp_v1 + 0xac) = DAT_005b3c20;
  DAT_005b3cc4 = 0;
  FUN_001767a4(DAT_005b3c84,DAT_005b3c8c);
  return;
}

} /* extern "C" */
