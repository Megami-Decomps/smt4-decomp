/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ca7c` (_code @ 0x37ca7c, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_002b5124. */
/* Supplied declaration required: FUN_002b5148. */
/* Supplied declaration required: FUN_002bb0b4. */
extern int FUN_002bb1bc(void);
/* Supplied declaration required: FUN_0037cc10. */
/* Supplied declaration required: FUN_0037d3cc. */


void FUN_0037ca7c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v4 = *(int *)(param_1 + 0x44);
  temp_v5 = *(unsigned int *)(param_1 + 0x3c);
  temp_v6 = *(unsigned int *)(param_1 + 0x40);
  if (*(char *)(temp_v4 + 0x4d) != '\0') {
    return;
  }
  temp_v1 = FUN_002bb1bc();
  temp_v2 = temp_v1;
  FUN_002b5148(temp_v1,0x14);
  *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v2 + 4) = 0x2c;
  if (*(char *)(temp_v4 + 0x1c) != '\0') {
    if (*(char *)(temp_v4 + 0x1c) != '\x01') {
      temp_v0 = 0;
    }
    else {
      temp_v3 = temp_v4;
      FUN_0037d3cc(temp_v4,temp_v2,param_1 + 0x1c,temp_v5,temp_v6);
      temp_v0 = (unsigned char)temp_v3;
    }
  }
  else {
    temp_v3 = temp_v4;
    FUN_0037cc10(temp_v4,temp_v2,param_1 + 0x1c,temp_v5,temp_v6);
    temp_v0 = (unsigned char)temp_v3;
  }
  *(unsigned char *)(temp_v2 + 0x14) = temp_v0;
  *(unsigned int *)(temp_v2 + 0x10) = *(unsigned int *)(temp_v4 + 0x10);
  FUN_002b5124(temp_v1,temp_v2);
  FUN_002bb0b4(temp_v1,1);
  return;
}
