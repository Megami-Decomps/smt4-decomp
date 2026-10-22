/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049cd18` (_code @ 0x49cd18, 0x218 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable8FindRecord(void);
int FUN_00192608(void);
int FUN_00408184(int, int);
int aocRecordLookup84(void);
int flagValueAdd(void);
int flagValueSub(int, int);
int FUN_004a0ef4(int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: dataTable8FindRecord. */
/* Supplied declaration required: FUN_00192608. */
extern unsigned int aocEntryGetKind(unsigned int);
extern int gameDataBlocksGetTableFlag(void);
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: aocRecordLookup84. */
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: flagValueSub. */
/* Supplied declaration required: FUN_004a0ef4. */


void FUN_0049cd18(unsigned short *param_1,int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  if (*param_1 == 0) {
    return;
  }
  if (-1 >= param_2) {
    flagValueSub(*param_1,-param_2);
    if (param_3 == 0) {
      return;
    }
    temp_v4 = (unsigned int)*param_1;
    temp_v3 = 0;
    temp_v0 = aocEntryGetKind(temp_v4);
    switch(temp_v0) {
    case 1:
    case 0xc:
      dataTable8FindRecord();
      if (temp_v4 != 0) {
        temp_v3 = *(int *)(temp_v4 + 0x50);
      }
      else {
        temp_v3 = 99999999;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      FUN_00192608();
      if (temp_v4 == 0) {
        temp_v3 = 99999999;
        break;
      }
      temp_v3 = *(int *)(temp_v4 + 0x78);
      break;
    case 10:
      aocRecordLookup84();
      if (temp_v4 == 0) {
        temp_v3 = 99999999;
        break;
      }
      temp_v3 = *(int *)(temp_v4 + 0x2c);
    }
    if ((param_1[1] & 2) != 0) {
      temp_v3 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v3) / 100;
    }
    temp_v3 = temp_v3 * -param_2;
  }
  else {
    flagValueAdd();
    if (param_3 == 0) {
      return;
    }
    temp_v4 = (unsigned int)*param_1;
    temp_v3 = 0;
    temp_v0 = aocEntryGetKind(temp_v4);
    switch(temp_v0) {
    case 1:
    case 0xc:
      temp_v1 = temp_v4;
      dataTable8FindRecord();
      if (temp_v1 != 0) {
        temp_v3 = *(int *)(temp_v1 + 0x4c);
      }
      else {
        temp_v3 = 99999999;
      }
      if (temp_v4 == 0x7b2) {
        temp_v3 = 1000000;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      FUN_00192608();
      if (temp_v4 == 0) {
        temp_v3 = 99999999;
      }
      else {
        temp_v3 = *(int *)(temp_v4 + 0x74);
      }
    }
    if ((param_1[1] & 2) != 0) {
      temp_v3 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v3) / 100;
    }
    temp_v2 = gameDataBlocksGetTableFlag();
    if (temp_v2 == 4) {
      temp_v3 = temp_v3 * 3;
    }
    temp_v3 = -temp_v3 * param_2;
  }
  FUN_004a0ef4(temp_v3);
  if (temp_v3 < 0) {
    FUN_00408184(0x1e,-temp_v3);
    return;
  }
  FUN_00408184(0x1f,temp_v3);
  return;
}

} /* extern "C" */
