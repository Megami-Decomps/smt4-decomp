/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8158` (_code @ 0x3b8158, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00235250(void);
int FUN_00240cec(int);
int FUN_002637c8(void);
int FUN_00282bfc(int, int);
int FUN_00289880(void);
int FUN_002898e4(void);
int FUN_0028d6d0(void);
int FUN_0028d9b0(void);
int FUN_00297468(...);
int FUN_002c222c(void);
int FUN_002c5914(int, int);
int FUN_003bb0ac(void);
int FUN_003bb1f0(int);
int FUN_003bb760(int);
int FUN_003bbaf4(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00235250. */
/* Supplied declaration required: FUN_00240cec. */
/* Supplied declaration required: FUN_002637c8. */
/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_0028d6d0. */
/* Supplied declaration required: FUN_0028d9b0. */
/* Supplied declaration required: FUN_00297468. */
extern int FUN_002c2218(int);
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c5914. */
/* Supplied declaration required: FUN_003bb0ac. */
/* Supplied declaration required: FUN_003bb1f0. */
/* Supplied declaration required: FUN_003bb760. */
/* Supplied declaration required: FUN_003bbaf4. */


void FUN_003b8158(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  FUN_003bb0ac();
  FUN_003bb1f0(param_1 + 0x9c);
  *(unsigned int *)(param_1 + 0x34) = 0xffffffff;
  FUN_002c5914(0x21,0);
  FUN_002898e4();
  FUN_00289880();
  FUN_0028d9b0();
  FUN_0028d6d0();
  FUN_00240cec(0);
  FUN_003bbaf4(param_1 + 0xd58);
  FUN_003bb760(param_1 + 0x9c);
  FUN_00297468("mikado/talk.bf",(unsigned int *)(param_1 + 0xd7c),0);
  FUN_00297468("mikado/talk.mbm",param_1 + 0xd80,0);
  FUN_00297468("mikado/check.bf",param_1 + 0xd88,0);
  FUN_00297468("mikado/check.mbm",param_1 + 0xd8c,0);
  *(unsigned int *)(param_1 + 0x28) = 1;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0xd74) = 0;
  *(unsigned int *)(param_1 + 0xd6c) = 0;
  *(unsigned int *)(param_1 + 0xd70) = 0;
  *(unsigned int *)(param_1 + 0xd7c) = 0;
  *(unsigned int *)(param_1 + 0xd80) = 0;
  *(unsigned int *)(param_1 + 0xd84) = 0;
  *(unsigned int *)(param_1 + 0xd5c) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned short *)(param_1 + 0x4c) = 0xffff;
  *(unsigned short *)(param_1 + 0x4e) = 0;
  *(unsigned int *)(param_1 + 0xdb0) = 0;
  *(unsigned char *)(param_1 + 0x48) = 0;
  *(unsigned char *)(param_1 + 0x49) = 0;
  *(unsigned char *)(param_1 + 0x4a) = 0;
  *(unsigned char *)(param_1 + 0x4b) = 0;
  FUN_00282bfc(0,0xff);
  FUN_00282bfc(1,0xff);
  temp_v0 = 0x17f0;
  FUN_002c222c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c2218(temp_v0 + 0x4cc);
    temp_v1 = temp_v1 - 0x4cc;
  }
  *(int *)(param_1 + 0xe5c) = temp_v1;
  FUN_00235250();
  FUN_002637c8();
  return;
}

} /* extern "C" */
