/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336a64` (_code @ 0x336a64, 0x1a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp2A8; /* 0x2a8: local_2a8 */
} param_1_stack;

extern unsigned int DAT_00435dc0; /* 0x435dc0 */

/* Supplied declaration required: FUN_0023ed24. */
/* Supplied declaration required: FUN_00254674. */
/* Supplied declaration required: FUN_00256078. */
/* Supplied declaration required: FUN_0027de94. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_00336a64(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4 [448];
  
  temp_v2 = 0;
  temp_v0 = 0;
  do {
    puVar5 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v2 * 0x288 + 0xa20);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + (temp_v2 + 1) * 0x288 + 0xa20);
    temp_v0 = temp_v0 + 2;
    *puVar5 = 0;
    puVar5[1] = 0;
    temp_v2 = temp_v2 + 2;
  } while (temp_v0 < 0x32);
  FUN_002c4b30((unsigned int *)(param_1 + 200),0x74);
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xd0) = 0;
  *(unsigned int *)(param_1 + 0xd4) = 0;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xdc) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xfc) = 0x3f800000;
  FUN_0027de94(param_1,param_1 + 200,1);
  if ((int)DAT_00435dc0 < 1) {
    temp_v3 = 0;
    do {
      if (*(int *)(param_1 + 200 + temp_v3 * 4) != 0) {
        temp_v1 = *(unsigned int *)(param_1 + temp_v3 * 4 + 200);
        FUN_002b087c();
        if (temp_v1 != 0) {
          FUN_0023ed24(param_1,temp_v4);
          FUN_00256078(param_1,temp_v4,1,temp_v3 + 4,0);
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 6);
  }
  else {
    temp_v3 = DAT_00435dc0;
    FUN_002b087c(temp_v3);
    FUN_0023ed24(param_1,temp_v4,temp_v3);
    FUN_00256078(param_1,temp_v4,1,4,0);
  }
  if (*(char *)(param_1 + 0x11e) == '\x01') {
    FUN_00254674(*(unsigned int *)(param_1 + 0x120),param_1 + 0x124);
  }
  *(unsigned int *)(param_1 + 0x4964) = 0;
  FUN_002c4b30(param_1 + 0x48bc,0xa8);
  return;
}
