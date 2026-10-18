/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c954` (_code @ 0x37c954, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
/* Supplied declaration required: FUN_002bad74. */
extern int FUN_002bae7c(void);
/* Supplied declaration required: FUN_0037c2d8. */
/* Supplied declaration required: FUN_0037c5f8. */


void FUN_0037c954(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 + 0x1c);
  temp_v1 = FUN_002bae7c();
  temp_v2 = temp_v1;
  FUN_002b4f64(temp_v1,0x21);
  *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v2 + 4) = 0x2b;
  if (*(char *)(temp_v3 + 0x1c) != '\0') {
    if (*(char *)(temp_v3 + 0x1c) != '\x01') {
      temp_v0 = 0;
    }
    else {
      FUN_0037c5f8(temp_v3,temp_v2);
      temp_v0 = (unsigned char)temp_v3;
    }
  }
  else {
    FUN_0037c2d8(temp_v3,temp_v2);
    temp_v0 = (unsigned char)temp_v3;
  }
  *(unsigned char *)(temp_v2 + 0x14) = temp_v0;
  FUN_002b4f40(temp_v1,temp_v2);
  FUN_002bad74(temp_v1,1);
  return;
}
