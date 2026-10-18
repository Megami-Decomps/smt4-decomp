/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037cb64` (_code @ 0x37cb64, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b5124. */
/* Supplied declaration required: FUN_002b5148. */
/* Supplied declaration required: FUN_002bb0b4. */
extern int FUN_002bb1bc(void);
/* Supplied declaration required: FUN_0037c4e8. */
/* Supplied declaration required: FUN_0037c808. */


void FUN_0037cb64(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 + 0x1c);
  temp_v1 = FUN_002bb1bc();
  temp_v2 = temp_v1;
  FUN_002b5148(temp_v1,0x21);
  *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v2 + 4) = 0x2b;
  if (*(char *)(temp_v3 + 0x1c) != '\0') {
    if (*(char *)(temp_v3 + 0x1c) != '\x01') {
      temp_v0 = 0;
    }
    else {
      FUN_0037c808(temp_v3,temp_v2);
      temp_v0 = (unsigned char)temp_v3;
    }
  }
  else {
    FUN_0037c4e8(temp_v3,temp_v2);
    temp_v0 = (unsigned char)temp_v3;
  }
  *(unsigned char *)(temp_v2 + 0x14) = temp_v0;
  FUN_002b5124(temp_v1,temp_v2);
  FUN_002bb0b4(temp_v1,1);
  return;
}
