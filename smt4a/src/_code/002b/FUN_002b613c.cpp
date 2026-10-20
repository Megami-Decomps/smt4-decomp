/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b613c` (_code @ 0x2b613c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00377acc(char *, int, int);
int FUN_003a30e8(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005806d4; /* 0x5806d4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00377acc. */
/* Supplied declaration required: FUN_003a30e8. */


void FUN_002b613c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  
  temp_v0 = DAT_005806d4;
  temp_v1 = param_1;
  FUN_003a30e8();
  temp_v3 = 0;
  do {
    temp_v2 = temp_v0 + temp_v3 * 0x188;
    temp_v6 = *(char *)(temp_v2 + 0x34) != '\0';
    temp_v4 = 0;
    if (temp_v6) {
      temp_v4 = *(int *)(temp_v2 + 0x1b0);
    }
    if ((temp_v6 && temp_v4 != 0) && (temp_v4 < 0xb)) {
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v2 + 0xb1);
      temp_v6 = temp_v5 == 0;
      if (temp_v6) {
        temp_v5 = *(unsigned int *)(temp_v2 + 0xb8);
      }
      if (temp_v6 && temp_v5 == 2) {
        temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x3c) = temp_v7;
        temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x1a),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x40) = temp_v7;
        temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x44) = temp_v7;
        temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x1e),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x60) = temp_v7;
        *(unsigned int *)(temp_v2 + 0x54) = *(unsigned int *)(temp_v2 + 0x3c);
        *(unsigned int *)(temp_v2 + 0x58) = *(unsigned int *)(temp_v2 + 0x40);
        *(unsigned int *)(temp_v2 + 0x5c) = *(unsigned int *)(temp_v2 + 0x44);
        *(unsigned int *)(temp_v2 + 0xb8) = 0x18;
        *(unsigned int *)(temp_v2 + 0xbc) = 0;
        FUN_00377acc((char *)(temp_v2 + 0x34),param_1,2);
        return;
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x28) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
