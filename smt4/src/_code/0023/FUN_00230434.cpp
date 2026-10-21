/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230434` (_code @ 0x230434, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordTrackDirtyValue(char *, unsigned int);
int FUN_00298d64(char *, unsigned int);
int flaggedEntrySetValueB(char *, unsigned int);
int flaggedEntrySetValueA(char *, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: recordTrackDirtyValue. */
extern unsigned int flaggedEntryGetValueB(char *);
/* Supplied declaration required: FUN_00298d64. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntrySetValueA. */
extern unsigned int flaggedEntryGetValueA(void);
extern unsigned int FUN_0029e93c(char *);
extern unsigned int FUN_0029efc0(void);


void FUN_00230434(char *param_1,char param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  param_1[0xe] = param_2;
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029efc0();
  }
  else {
    temp_v0 = FUN_0029e93c(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v1 = flaggedEntryGetValueA();
  }
  else {
    temp_v1 = flaggedEntryGetValueB(param_1 + 0x10);
  }
  if (*param_1 == '\0') {
    FUN_00298d64(param_1 + 0x10,temp_v0);
    flaggedEntrySetValueA(param_1 + 0x10,temp_v1);
  }
  if (*param_1 == '\x01') {
    recordTrackDirtyValue(param_1 + 0x10,temp_v0);
    flaggedEntrySetValueB(param_1 + 0x10,temp_v1);
    return;
  }
  return;
}

} /* extern "C" */
