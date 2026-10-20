/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c86c` (_code @ 0x37c86c, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_002b4f64(int, int);
int FUN_002bad74(int, int);
int FUN_0037ca00(int, int, int, unsigned int, unsigned int);
int FUN_0037d1bc(int, int, int, unsigned int, unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_002b4f64. */
/* Supplied declaration required: FUN_002bad74. */
extern int FUN_002bae7c(void);
/* Supplied declaration required: FUN_0037ca00. */
/* Supplied declaration required: FUN_0037d1bc. */


void FUN_0037c86c(int param_1)

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
  temp_v1 = FUN_002bae7c();
  temp_v2 = temp_v1;
  FUN_002b4f64(temp_v1,0x14);
  *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v2 + 4) = 0x2c;
  if (*(char *)(temp_v4 + 0x1c) != '\0') {
    if (*(char *)(temp_v4 + 0x1c) != '\x01') {
      temp_v0 = 0;
    }
    else {
      temp_v3 = temp_v4;
      FUN_0037d1bc(temp_v4,temp_v2,param_1 + 0x1c,temp_v5,temp_v6);
      temp_v0 = (unsigned char)temp_v3;
    }
  }
  else {
    temp_v3 = temp_v4;
    FUN_0037ca00(temp_v4,temp_v2,param_1 + 0x1c,temp_v5,temp_v6);
    temp_v0 = (unsigned char)temp_v3;
  }
  *(unsigned char *)(temp_v2 + 0x14) = temp_v0;
  *(unsigned int *)(temp_v2 + 0x10) = *(unsigned int *)(temp_v4 + 0x10);
  listAppendNode(temp_v1,temp_v2);
  FUN_002bad74(temp_v1,1);
  return;
}

} /* extern "C" */
