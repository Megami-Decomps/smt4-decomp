/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002305c8` (_code @ 0x2305c8, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0022a60c. */
extern unsigned int FUN_00240ea4(char *);
/* Supplied declaration required: FUN_00299000. */
/* Supplied declaration required: FUN_00299558. */
/* Supplied declaration required: FUN_0029d8c0. */
extern unsigned int FUN_0029e3bc(void);
extern unsigned int FUN_0029ebdc(char *);
extern unsigned int FUN_0029f260(void);


void FUN_002305c8(char *param_1,char param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  param_1[0xe] = param_2;
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029f260();
  }
  else {
    temp_v0 = FUN_0029ebdc(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v1 = FUN_0029e3bc();
  }
  else {
    temp_v1 = FUN_00240ea4(param_1 + 0x10);
  }
  if (*param_1 == '\0') {
    FUN_00299000(param_1 + 0x10,temp_v0);
    FUN_0029d8c0(param_1 + 0x10,temp_v1);
  }
  if (*param_1 == '\x01') {
    FUN_0022a60c(param_1 + 0x10,temp_v0);
    FUN_00299558(param_1 + 0x10,temp_v1);
    return;
  }
  return;
}
