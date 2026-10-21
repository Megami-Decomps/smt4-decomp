/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2b74` (_code @ 0x3c2b74, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordTrackDirtyValue(char *, int);
int FUN_00298d64(char *, int);
int flaggedEntrySetValueB(char *, int);
int flaggedEntrySetValueA(char *, int);
int SBORROW4(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: recordTrackDirtyValue. */
extern int flaggedEntryGetValueB(char *);
/* Supplied declaration required: FUN_00298d64. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntrySetValueA. */
extern int flaggedEntryGetValueA(void);
extern int FUN_0029e93c(char *);
extern int FUN_0029efc0(void);


void FUN_003c2b74(char *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  if (*param_1 != '\x01') {
    temp_v1 = FUN_0029efc0();
  }
  else {
    temp_v1 = FUN_0029e93c(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v2 = flaggedEntryGetValueA();
  }
  else {
    temp_v2 = flaggedEntryGetValueB(param_1 + 0x10);
  }
  temp_v3 = *(int *)(param_1 + 8);
  temp_v4 = *(int *)(param_1 + 4);
  if (temp_v1 < temp_v3 - temp_v4) {
    temp_v1 = temp_v1 + 1;
  }
  else {
    temp_v7 = SBORROW4(temp_v3,temp_v4);
    temp_v0 = temp_v3 - temp_v4;
    temp_v6 = temp_v3 == temp_v4;
    if (temp_v4 < temp_v3) {
      temp_v5 = temp_v4 - 1;
      temp_v7 = SBORROW4(temp_v5,temp_v2);
      temp_v0 = temp_v5 - temp_v2;
      temp_v6 = temp_v5 == temp_v2;
    }
    if (temp_v6 || temp_v0 < 0 != temp_v7) {
      temp_v6 = SBORROW4(temp_v3,temp_v4);
      temp_v0 = temp_v3 - temp_v4;
      if (temp_v3 <= temp_v4) {
        temp_v6 = SBORROW4(temp_v2,temp_v3 - 1);
        temp_v0 = temp_v2 - (temp_v3 - 1);
      }
      if (temp_v0 < 0 == temp_v6) {
        temp_v2 = 0;
        temp_v1 = temp_v2;
        if (*param_1 == '\0') {
          FUN_00298d64(param_1 + 0x10,temp_v1);
          flaggedEntrySetValueA(param_1 + 0x10,temp_v2);
        }
        if (*param_1 != '\x01') {
          return;
        }
        recordTrackDirtyValue(param_1 + 0x10,temp_v1);
        flaggedEntrySetValueB(param_1 + 0x10,temp_v2);
        return;
      }
    }
    temp_v2 = temp_v2 + 1;
  }
  if (*param_1 == '\0') {
    FUN_00298d64(param_1 + 0x10,temp_v1);
    flaggedEntrySetValueA(param_1 + 0x10,temp_v2);
  }
  if (*param_1 != '\x01') {
    return;
  }
  recordTrackDirtyValue(param_1 + 0x10,temp_v1);
  flaggedEntrySetValueB(param_1 + 0x10,temp_v2);
  return;
}

} /* extern "C" */
