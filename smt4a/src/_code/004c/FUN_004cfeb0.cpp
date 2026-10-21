/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cfeb0` (_code @ 0x4cfeb0, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203b40(...);
int recordTrackDirtyValue(char *, int);
int FUN_002a48e0(char *, int);
int flaggedEntrySetValueB(char *, int);
int flaggedEntrySetValueA(char *, int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: recordTrackDirtyValue. */
/* Supplied declaration required: FUN_002a48e0. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntrySetValueA. */


void FUN_004cfeb0(char *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_00203b40(param_1 + 0x10,param_3,1,param_2,1,param_6);
    }
  }
  else {
    FUN_00203b40(param_1 + 0x10,param_3,param_2,1,1,param_6);
  }
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 8) = param_3;
  *param_1 = (char)param_4;
  if ((param_4 & 0xff) == 0) {
    FUN_002a48e0(param_1 + 0x10,0);
    flaggedEntrySetValueA(param_1 + 0x10,0);
  }
  if (*param_1 == '\x01') {
    recordTrackDirtyValue(param_1 + 0x10,0);
    flaggedEntrySetValueB(param_1 + 0x10,0);
  }
  param_1[0xc] = '\0';
  return;
}

} /* extern "C" */
