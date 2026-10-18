/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb1fc` (_code @ 0x2fb1fc, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0027054c. */
/* Supplied declaration required: FUN_00277f9c. */
/* Supplied declaration required: FUN_0027af3c. */
/* Supplied declaration required: FUN_0027b100. */
/* Supplied declaration required: FUN_0027b424. */
/* Supplied declaration required: FUN_0027b4ec. */
/* Supplied declaration required: FUN_0027b524. */
extern int FUN_002c0ba8(unsigned int);


void FUN_002fb1fc(int *param_1)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v5 = *param_1;
  if (temp_v5 == 0) {
    return;
  }
  FUN_0027054c();
  if (*(int *)(temp_v5 + 0x2c) == 0x11) {
    if (*(int *)(temp_v5 + 0x30) != 1) goto LAB_002fb290;
    temp_v0 = FUN_002c0ba8(0xc6);
    if ((temp_v0 != 0) && (temp_v0 = FUN_002c0ba8(0x108), temp_v0 == 0)) {
      FUN_0027b524(*(unsigned int *)(temp_v5 + 0x2c),*(unsigned int *)(temp_v5 + 0x30),
                   *(unsigned int *)(temp_v5 + 0x2c),99);
      FUN_0027b4ec();
      FUN_0027b424();
      FUN_0027b100();
      FUN_0027af3c();
      FUN_00277f9c(*(unsigned int *)(temp_v5 + 0x2c),*(unsigned int *)(temp_v5 + 0x30));
      return;
    }
  }
  temp_v0 = *(int *)(temp_v5 + 0x2c);
  temp_v6 = temp_v0 != 5;
  if (!temp_v6) {
    temp_v0 = *(int *)(temp_v5 + 0x30);
  }
  if ((temp_v6 || temp_v0 != 1) || (temp_v0 = FUN_002c0ba8(0x719), temp_v0 != 0)) {
LAB_002fb290:
    temp_v4 = 0;
    temp_v1 = *(unsigned int *)(temp_v5 + 0x2c);
    temp_v2 = *(unsigned int *)(temp_v5 + 0x30);
    temp_v3 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(temp_v5 + 0x2c);
    temp_v2 = *(unsigned int *)(temp_v5 + 0x30);
    temp_v4 = 99;
    temp_v3 = temp_v1;
  }
  FUN_0027b524(temp_v1,temp_v2,temp_v3,temp_v4);
  FUN_0027b4ec();
  FUN_0027b424();
  FUN_0027b100();
  FUN_0027af3c();
  FUN_00277f9c(*(unsigned int *)(temp_v5 + 0x2c),*(unsigned int *)(temp_v5 + 0x30));
  return;
}
