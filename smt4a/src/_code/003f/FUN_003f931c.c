/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f931c` (_code @ 0x3f931c, 0x288 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00164034. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001692d4. */
/* Supplied declaration required: FUN_0016c4b8. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001f3f34. */
/* Supplied declaration required: FUN_003f8a24. */


void FUN_003f931c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  
  if (*(int *)(param_1 + 0x40c) != 4) {
    temp_v8 = 0;
    temp_v6 = 0.0f;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = *(float *)(param_1 + 0x414) * 0.25f * (1.0f - *(float *)(param_1 + 0x410) * 0.25f) * 0.7f
    ;
    FUN_0016c4b8(DAT_0059dbb4,0);
    FUN_00164034(&temp_v8);
    FUN_001692d4();
    FUN_001677c0();
    temp_v7 = (int)(temp_v6 + (4.0f - *(float *)(param_1 + 0x418)) * 24.5f);
    FUN_001835b4(2,0xc,0x54,0,temp_v7,0x23);
    FUN_001835b4(2,0xc,0x55,0,temp_v7,0x23);
    FUN_001f3f34();
    temp_v4 = 0;
    temp_v7 = temp_v1;
    if (0 < *(int *)(param_1 + 0x360)) {
      do {
        temp_v5 = param_1 + temp_v4 * 0x60;
        if (*(char *)(temp_v5 + 0x4c) != '\0') {
          temp_v0 = *(int *)(param_1 + 0x364);
          if (temp_v0 != 0) {
            temp_v7 = *(int *)(param_1 + 0x368);
          }
          if (!(temp_v0 == 0 || temp_v7 == 0)) {
            if (*(int *)(temp_v5 + 0x50) != 1) {
              VectorSignedToFloat(*(unsigned int *)(temp_v5 + 0x54),(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else {
              VectorSignedToFloat(*(unsigned int *)(temp_v5 + 0x54),(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
          }
          else {
            if (*(int *)(temp_v5 + 0x50) != 1) {
              VectorSignedToFloat(*(unsigned int *)(temp_v5 + 0x54),(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(*(unsigned int *)(param_1 + 0x368),(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else {
              VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(*(unsigned int *)(temp_v5 + 0x54),(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            temp_v7 = FUN_001834a4(0xc,0x9c);
            VectorSignedToFloat((int)*(short *)(temp_v7 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          FUN_003f8a24(param_1,0x24,temp_v5);
          temp_v7 = temp_v2;
        }
        else {
          FUN_003f8a24(param_1,0x24,temp_v5);
          temp_v7 = temp_v3;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(int *)(param_1 + 0x360));
    }
  }
  return;
}
