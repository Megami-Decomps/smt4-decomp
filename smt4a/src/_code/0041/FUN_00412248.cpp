/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00412248` (_code @ 0x412248, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_001a6f60(unsigned int, int);
int FUN_00203d04(int);
int FUN_00410628(unsigned int *);
int FUN_00410d44(unsigned int *);
int FUN_004112c4(unsigned int *);
int FUN_004119fc(unsigned int *);
int FUN_004f8f08(int);
int FUN_004f950c(int, int);
int FUN_004f9b94(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: btlGetMainState. */
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: FUN_001a6f60. */
/* Supplied declaration required: FUN_00203d04. */
extern int FUN_002619e0(void);
extern int FUN_003ecd94(void);
extern int chainCountIdUnflagged(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00410628. */
/* Supplied declaration required: FUN_00410d44. */
/* Supplied declaration required: FUN_004112c4. */
/* Supplied declaration required: FUN_004119fc. */
extern int FUN_004aa768(unsigned int, int);
extern int FUN_004ab6b4(unsigned int);
extern int FUN_004ab784(unsigned int);
extern int FUN_004abb08(unsigned int);
/* Supplied declaration required: FUN_004f8f08. */
/* Supplied declaration required: FUN_004f950c. */
/* Supplied declaration required: FUN_004f9b94. */
extern int FUN_004fa0d8(int);


void FUN_00412248(unsigned int *param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  switch(*param_1) {
  case 1:
    temp_v1 = param_1[4];
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          temp_v1 = FUN_004abb08(DAT_0057a9c8);
          if (temp_v1 == 0) {
            return;
          }
          temp_v0 = 2;
          param_1[2] = temp_v0;
          return;
        }
      }
      else {
        temp_v1 = FUN_004fa0d8(DAT_00573808);
        if (temp_v1 != 0) {
          param_1[4] = param_1[4] + 1;
          return;
        }
      }
    }
    else {
      temp_v1 = DAT_00573808;
      FUN_004f9b94(DAT_00573808,1);
      if (temp_v1 != 0) {
        FUN_004f950c(DAT_00573808,1);
        param_1[4] = param_1[4] + 1;
        return;
      }
    }
    break;
  case 2:
    FUN_004112c4(param_1);
    return;
  case 3:
    if ((param_1[4] == 0) && (param_1[0x61] != 0)) {
      FUN_001a6f60(param_1[0x61],0);
      temp_v0 = dataTableGetEntries();
      param_1[0x62] = temp_v0;
      temp_v0 = 4;
      param_1[2] = temp_v0;
      return;
    }
    break;
  case 4:
    FUN_004119fc(param_1);
    return;
  case 5:
    FUN_00410d44(param_1);
    return;
  case 6:
    FUN_00410628(param_1);
    return;
  case 7:
    *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xffffbfff;
    FUN_004f8f08(DAT_00573808);
    temp_v0 = 0;
    param_1[2] = temp_v0;
    return;
  case 8:
    temp_v1 = FUN_004ab6b4(DAT_0057a9c8);
    if ((temp_v1 != 0) && ((temp_v1 = FUN_002619e0(), temp_v1 == 0 || ((unsigned int)param_1[3] >= 0x37)))) {
      FUN_00203d04(1);
      temp_v0 = 9;
      param_1[2] = temp_v0;
      return;
    }
    break;
  case 9:
    temp_v1 = chainCountIdUnflagged(DAT_005712f0,0);
    if (temp_v1 < 1) {
      btlGetMainState();
      temp_v1 = FUN_003ecd94();
      if (temp_v1 != 0) {
        temp_v1 = 0;
        do {
          temp_v2 = FUN_004aa768(DAT_0057a9c8,temp_v1);
          if (temp_v2 == 0) {
            return;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        temp_v1 = FUN_004ab784(DAT_0057a9c8);
        if (temp_v1 == 0) {
          return;
        }
      }
      param_1[2] = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
