/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381fd4` (_code @ 0x381fd4, 0x1e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002a60b4(unsigned int, unsigned int);
extern int FUN_002bf4f8(unsigned int, unsigned char);
extern int FUN_002c2a04(unsigned int);


void FUN_00381fd4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  
  temp_v5 = *(int *)(param_1 + 0x5a0) != 0;
  temp_v1 = 0;
  if (temp_v5) {
    temp_v1 = *(int *)(param_1 + 0x5a4);
  }
  if (temp_v5 && temp_v1 != 0) {
    temp_v5 = *(int *)(param_1 + 0x5ac) != 0;
    temp_v1 = 0;
    if (temp_v5) {
      temp_v1 = *(int *)(param_1 + 0x5b0);
    }
    if ((temp_v5 && temp_v1 != 0) && (temp_v1 = FUN_002a60b4(0x31,0), temp_v1 != 0)) {
      temp_v4 = 0;
      do {
        temp_v1 = FUN_002bf4f8(0x31,*(unsigned char *)(temp_v4 + 0x405878));
        temp_v2 = param_1 + temp_v4 * 8;
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x29c) = temp_v6;
        *(unsigned int *)(temp_v2 + 0x49c) = temp_v6;
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x2a0) = temp_v6;
        *(unsigned int *)(temp_v2 + 0x4a0) = temp_v6;
        if (*(short **)(temp_v1 + 0xc) != (short *)0x0) {
          temp_v6 = VectorSignedToFloat((int)**(short **)(temp_v1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x39c) = temp_v6;
          temp_v6 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v1 + 0xc) + 2),
                                      (unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x3a0) = temp_v6;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x17);
      temp_v1 = 0;
      temp_v2 = 7;
      do {
        temp_v3 = param_1 + temp_v1 * 8;
        temp_v2 = temp_v2 - 1;
        temp_v1 = temp_v1 + 1;
        *(float *)(temp_v3 + 0x4bc) = *(float *)(temp_v3 + 0x4bc) + *(float *)(param_1 + 0x344);
        *(float *)(temp_v3 + 0x4c0) = *(float *)(temp_v3 + 0x4c0) + *(float *)(param_1 + 0x348);
      } while (temp_v2 != 0);
      temp_v1 = 0;
      temp_v2 = 10;
      do {
        temp_v3 = param_1 + temp_v1 * 8;
        temp_v2 = temp_v2 - 1;
        temp_v1 = temp_v1 + 1;
        *(float *)(temp_v3 + 0x4f4) = *(float *)(temp_v3 + 0x4f4) + *(float *)(param_1 + 0x34c);
        *(float *)(temp_v3 + 0x4f8) = *(float *)(temp_v3 + 0x4f8) + *(float *)(param_1 + 0x350);
      } while (temp_v2 != 0);
      temp_v1 = *(int *)(param_1 + 0x5a0);
      FUN_00297060(temp_v1,*(unsigned int *)(param_1 + 0x5a4));
      *(int *)(param_1 + 0x5a8) = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 2;
      temp_v1 = *(int *)(param_1 + 0x5ac);
      FUN_00297060(temp_v1,*(unsigned int *)(param_1 + 0x5b0));
      *(int *)(param_1 + 0x5b4) = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 2;
      temp_v0 = *(char *)(param_1 + 0x21);
      if (temp_v0 != '\x01' && temp_v0 != '\x02') {
        temp_v6 = 3;
      }
      else {
        temp_v6 = 0xe;
      }
      *(unsigned int *)(param_1 + 4) = temp_v6;
      *(unsigned int *)(param_1 + 8) = 0;
      if (temp_v0 != '\x01' && temp_v0 != '\x02') {
        temp_v1 = FUN_002c2a04(0);
        if (temp_v1 == 3) {
          FUN_002a03d8(0,10);
        }
        temp_v1 = FUN_002c2a04(1);
        if (temp_v1 == 3) {
          FUN_002a03d8(1,10);
          return;
        }
      }
    }
  }
  return;
}
