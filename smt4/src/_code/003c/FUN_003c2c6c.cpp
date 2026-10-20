/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2c6c` (_code @ 0x3c2c6c, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a478(char *, int);
int FUN_00298d64(char *, int);
int FUN_002992bc(char *, int);
int FUN_0029d620(char *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0022a478. */
extern int FUN_00240d74(char *);
/* Supplied declaration required: FUN_00298d64. */
/* Supplied declaration required: FUN_002992bc. */
/* Supplied declaration required: FUN_0029d620. */
extern int FUN_0029e11c(void);
extern int FUN_0029e93c(char *);
extern int FUN_0029efc0(void);


void FUN_003c2c6c(char *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029efc0();
  }
  else {
    temp_v0 = FUN_0029e93c(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v1 = FUN_0029e11c();
  }
  else {
    temp_v1 = FUN_00240d74(param_1 + 0x10);
  }
  if (temp_v0 >= 1) {
    temp_v0 = temp_v0 - 1;
  }
  else if (temp_v1 >= 1) {
    temp_v1 = temp_v1 - 1;
  }
  else {
    temp_v2 = *(int *)(param_1 + 8);
    temp_v0 = *(int *)(param_1 + 4);
    if (temp_v0 < temp_v2) {
      temp_v1 = temp_v0 - 1;
      temp_v0 = temp_v2 - temp_v0;
    }
    else {
      temp_v0 = 0;
      temp_v1 = temp_v2 - 1;
    }
  }
  if (*param_1 == '\0') {
    FUN_00298d64(param_1 + 0x10,temp_v0);
    FUN_0029d620(param_1 + 0x10,temp_v1);
  }
  if (*param_1 != '\x01') {
    return;
  }
  FUN_0022a478(param_1 + 0x10,temp_v0);
  FUN_002992bc(param_1 + 0x10,temp_v1);
  return;
}

} /* extern "C" */
