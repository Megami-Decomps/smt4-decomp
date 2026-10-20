/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b980c` (_code @ 0x3b980c, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028727c(void);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_00291998(void);
int FUN_00295ba4(int);
int FUN_002a7218(void);
int FUN_002ae7e8(int);
int FUN_002b827c(int);
int FUN_002c415c(void);
int FUN_003bb9b8(int);
int FUN_003bbafc(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0028727c. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_00291998. */
/* Supplied declaration required: FUN_00295ba4. */
extern int FUN_00295bd0(void);
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_003bb9b8. */
/* Supplied declaration required: FUN_003bbafc. */


void FUN_003b980c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0xd90) != 0) {
    FUN_002a7218();
    *(unsigned int *)(param_1 + 0xd90) = 0;
  }
  if (*(int *)(param_1 + 0xd88) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xd88) = 0;
  }
  if (*(int *)(param_1 + 0xd8c) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xd8c) = 0;
  }
  if (*(int *)(param_1 + 0xd84) != 0) {
    FUN_002a7218();
    *(unsigned int *)(param_1 + 0xd84) = 0;
  }
  if (*(int *)(param_1 + 0xd7c) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xd7c) = 0;
  }
  if (*(int *)(param_1 + 0xd80) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xd80) = 0;
  }
  FUN_003bb9b8(param_1 + 0x9c);
  FUN_003bbafc(param_1 + 0xd58);
  FUN_00291998();
  temp_v0 = FUN_00295bd0();
  if (temp_v0 != 0) {
    FUN_00295ba4(0);
  }
  FUN_002b827c(3);
  FUN_002917b8();
  FUN_0028727c();
  FUN_00291944();
  FUN_002ae7e8(0x21);
  return;
}

} /* extern "C" */
