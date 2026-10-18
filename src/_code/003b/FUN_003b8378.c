/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8378` (_code @ 0x3b8378, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002353e8. */
/* Supplied declaration required: FUN_00240e1c. */
/* Supplied declaration required: FUN_002639f4. */
/* Supplied declaration required: FUN_00282e6c. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_0028dc54. */
/* Supplied declaration required: FUN_00297704. */
extern int FUN_002c23e4(int);
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c5b04. */
/* Supplied declaration required: FUN_003bb2cc. */
/* Supplied declaration required: FUN_003bb410. */
/* Supplied declaration required: FUN_003bb980. */
/* Supplied declaration required: FUN_003bbd14. */


void FUN_003b8378(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  FUN_003bb2cc();
  FUN_003bb410(param_1 + 0x9c);
  *(unsigned int *)(param_1 + 0x34) = 0xffffffff;
  FUN_002c5b04(0x21,0);
  FUN_00289b4c();
  FUN_00289ae8();
  FUN_0028dc54();
  FUN_0028d974();
  FUN_00240e1c(0);
  FUN_003bbd14(param_1 + 0xd58);
  FUN_003bb980(param_1 + 0x9c);
  FUN_00297704("mikado/talk.bf",(unsigned int *)(param_1 + 0xd7c),0);
  FUN_00297704("mikado/talk.mbm",param_1 + 0xd80,0);
  FUN_00297704("mikado/check.bf",param_1 + 0xd88,0);
  FUN_00297704("mikado/check.mbm",param_1 + 0xd8c,0);
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
  FUN_00282e6c(0,0xff);
  FUN_00282e6c(1,0xff);
  temp_v0 = 0x17f0;
  FUN_002c23f8();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c23e4(temp_v0 + 0x4cc);
    temp_v1 = temp_v1 - 0x4cc;
  }
  *(int *)(param_1 + 0xe5c) = temp_v1;
  FUN_002353e8();
  FUN_002639f4();
  return;
}
