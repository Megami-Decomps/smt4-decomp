/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cca18` (_code @ 0x3cca18, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(int);
int FUN_0019de98(int, unsigned int);
int FUN_0020b908(int, int);
int FUN_00228b04(int, int);
int resourceRunOperationIfUnblocked(...);
int unitRecordBuild(unsigned int, int *);
int FUN_003450d4(int, int, int, unsigned int);
int FUN_00359b6c(...);

/* stack frame of param_3: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
} param_3_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0020b908. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
extern int FUN_002a4894(int);
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: FUN_00359b6c. */


unsigned int FUN_003cca18(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puStack_150;
  unsigned int uStack_14c;
  unsigned int temp_v5;
  int iStack_28;
  int temp_v6;
  unsigned int *puStack_20;
  
  puStack_150 = (unsigned int *)&temp_v6;
  temp_v5 = 1;
  temp_v4 = 0xffffffff;
  uStack_14c = 0;
  temp_v3 = 0xffffffff;
  temp_v0 = param_1 + 0x8db0;
  temp_v1 = temp_v0;
  iStack_28 = param_1;
  temp_v6 = param_2;
  puStack_20 = param_3;
  FUN_003450d4(temp_v0,0,param_1 + 0x478,0xffffffff);
  if ((temp_v1 != 0) || (temp_v1 = temp_v0, FUN_00228b04(temp_v0,1), temp_v1 != 0)) {
    temp_v1 = resourceRunOperationIfUnblocked(temp_v0);
    temp_v0 = FUN_002a4894(temp_v0);
    if (*(short *)(param_1 + (temp_v0 + temp_v1) * 2 + 0x8b60) != 0) {
      FUN_00359b6c();
    }
    else {
      FUN_0019de98(0,0xf4f4f4ff);
    }
  }
  else {
    temp_v1 = 0;
    FUN_001517b4(0,1);
    if (!(temp_v1 == 0 && (char)temp_v6 == '\0')) {
      *(unsigned char *)(param_1 + 0x8e8a) = 1;
      if (*(int *)(param_1 + 0x404) == 0x1e) {
        temp_v2 = 0;
        *param_3 = 0;
      }
      else {
        temp_v1 = resourceRunOperationIfUnblocked();
        temp_v0 = FUN_002a4894(param_1 + 0x67cc);
        temp_v2 = (unsigned int)*(unsigned short *)(param_1 + (temp_v0 + temp_v1) * 2 + 0x6832);
        *param_3 = temp_v2;
      }
      unitRecordBuild((*(unsigned int *)(param_1 + temp_v2 * 8 + 0x13bc) & 0x1ffff) >> 2,&temp_v3);
      FUN_0020b908(0x10,0);
      eventQueueAddUniqueIfValid(0x100020e);
    }
    else {
      temp_v1 = 1;
      FUN_001517b4();
      if (temp_v1 != 0) {
        eventQueueAddUniqueIfValid(0x100020f);
        *(unsigned char *)(param_1 + 0x8e8a) = 1;
        temp_v1 = resourceRunOperationIfUnblocked();
        temp_v0 = FUN_002a4894(param_1 + 0x8e14);
        FUN_00359b6c(*(unsigned short *)(param_1 + (temp_v0 + temp_v1) * 2 + 0x8b70));
      }
    }
  }
  return 0;
}

} /* extern "C" */
