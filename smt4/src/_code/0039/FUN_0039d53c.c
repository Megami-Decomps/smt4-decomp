/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d53c` (_code @ 0x39d53c, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern signed char DAT_0049f934; /* 0x49f934 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231420. */
/* Supplied declaration required: FUN_00231434. */
/* Supplied declaration required: FUN_002319c0. */
/* Supplied declaration required: FUN_003c2e0c. */
extern unsigned int *NaviMain_GetCursorPos(int);


unsigned int FUN_0039d53c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int uStack_24;
  int uStack_20;
  int uStack_1c;
  int temp_v5;
  unsigned int temp_v6 [2];
  
  if ((*(unsigned int *)(param_1 + 0x10) & 0x2000000) == 0) {
    FUN_00231434(0x1c,0xfa4,&temp_v4,&uStack_24,&uStack_20,&uStack_1c);
    FUN_00231420(temp_v4,uStack_24,uStack_20,uStack_1c);
    if ((temp_v4 == 0) || (DAT_0049f934 != '\0')) {
      temp_v0 = *(unsigned int *)(param_1 + 0x10);
      if ((temp_v0 & 0x10000) != 0) {
        FUN_002319c0();
        if ((temp_v0 == 0) || (DAT_0049f934 != '\0')) {
          temp_v0 = *(unsigned int *)(param_1 + 0x10) & 0xfffdffff;
        }
        else {
          if (*(char *)(param_1 + 0x55) < 0xffff) {
            *(char *)(param_1 + 0x55) = *(char *)(param_1 + 0x55) + '\x01';
          }
          if (*(char *)(param_1 + 0x55) < '\x01') {
            return 0;
          }
          temp_v0 = *(unsigned int *)(param_1 + 0x10) | 0x20000;
        }
        *(unsigned int *)(param_1 + 0x10) = temp_v0;
      }
    }
    else {
      FUN_003c2e0c(&temp_v5,temp_v6);
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x10000;
      temp_v2 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x44) = temp_v2;
      temp_v3 = VectorSignedToFloat(temp_v6[0],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorSignedToFloat(temp_v6[0],(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x48) = temp_v3;
      *(unsigned int *)(param_1 + 0x4c) = temp_v1;
      *(unsigned int *)(param_1 + 0x50) = temp_v2;
      puVar2 = (unsigned int *)NaviMain_GetCursorPos(param_1 + 0x162);
      temp_v1 = *puVar2;
      temp_v2 = puVar2[1];
      temp_v3 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x2c) = temp_v3;
      temp_v3 = VectorSignedToFloat(temp_v6[0],(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(param_1 + 0x30) = temp_v3;
      *(unsigned int *)(param_1 + 0x34) = temp_v1;
      *(unsigned int *)(param_1 + 0x38) = temp_v2;
      *(unsigned int *)(param_1 + 0x3c) = 0;
      *(unsigned int *)(param_1 + 0x40) = 0;
      *(unsigned char *)(param_1 + 0x54) = 0;
      *(unsigned char *)(param_1 + 0x55) = 0;
    }
  }
  return 0;
}
