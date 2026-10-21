/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e8b8` (_code @ 0x39e8b8, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pairCopy(int, float *);
int effectSetByteSpeed(unsigned int);
int FUN_002b0750(int, unsigned int, int, int, int, unsigned int, unsigned int, int);
int drawSetColorFromRGBA8(unsigned int);
int FUN_002bed3c(void);
int FUN_002bedb0(unsigned int, int);
int FUN_002bee04(unsigned int, int, unsigned int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int g_titleScene; /* 0x44ea00 */
extern unsigned int DAT_0049fcfc; /* 0x49fcfc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: pairCopy. */
/* Supplied declaration required: effectSetByteSpeed. */
/* Supplied declaration required: FUN_002b0750. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bedb0. */
/* Supplied declaration required: FUN_002bee04. */
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);


void FUN_0039e8b8(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  pairCopy(param_1 + 0x164,&temp_v7);
  temp_v1 = FUN_002c5d80(1,0);
  FUN_002bee04(g_titleScene,3,temp_v1);
  temp_v4 = 0;
  if (temp_v4 < *(int *)(param_1 + 0x5a88)) {
    do {
      temp_v2 = param_1 + temp_v4 * 0x4c;
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0xebc);
      temp_v0 = temp_v3;
      if (temp_v3 == 0) {
        temp_v0 = DAT_0049fcfc;
      }
      if (temp_v3 != 0 || temp_v0 != 0) {
        drawSetColorFromRGBA8(*(unsigned int *)(temp_v2 + 0xed0));
        effectSetByteSpeed(*(unsigned int *)(temp_v2 + 0xed0) & 0xff);
        temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0xec4),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0xec0),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b0750(9,*(unsigned int *)(temp_v2 + 0xe88),*(unsigned short *)(temp_v2 + 0xebe),
                     (int)(temp_v6 + temp_v7),(int)(temp_v5 + temp_v8),*(unsigned int *)(temp_v2 + 0xec8),
                     *(unsigned int *)(temp_v2 + 0xecc),0xb);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(param_1 + 0x5a88));
  }
  FUN_002bed3c();
  FUN_002bedb0(g_titleScene,3);
  return;
}

} /* extern "C" */
