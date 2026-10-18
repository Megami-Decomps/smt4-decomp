/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b63d0` (_code @ 0x2b63d0, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_005806d4; /* 0x5806d4 */
extern short DAT_005f1884; /* 0x5f1884 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00377acc. */
extern int FUN_003c316c(void);


void FUN_002b63d0(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
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
  if ((DAT_005f1884 != 0) && (temp_v1 = FUN_003c316c(), temp_v1 != 0)) {
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
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v1 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x3c) = temp_v7;
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x40) = temp_v7;
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x44) = temp_v7;
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x60) = temp_v7;
          *(unsigned int *)(temp_v2 + 0x54) = *(unsigned int *)(temp_v2 + 0x3c);
          *(unsigned int *)(temp_v2 + 0x58) = *(unsigned int *)(temp_v2 + 0x40);
          *(unsigned int *)(temp_v2 + 0x5c) = *(unsigned int *)(temp_v2 + 0x44);
          *(unsigned int *)(temp_v2 + 0xb8) = 0x1c;
          *(unsigned int *)(temp_v2 + 0xbc) = 0;
          FUN_00377acc((char *)(temp_v2 + 0x34),(int)DAT_005f1884,4);
          return;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x28);
  }
  return;
}
