/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039eb4c` (_code @ 0x39eb4c, 0x264 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231bb8(int, float *);
int FUN_002c2950(void);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int DAT_0049fcfc; /* 0x49fcfc */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00231bb8. */
extern float *FUN_00232658(int);
extern int FUN_0024c2ec(unsigned char, unsigned char);
extern int FUN_002c09d0(void);
/* Supplied declaration required: FUN_002c2950. */
extern unsigned long long *NaviMain_GetCursorPos(int);
extern int NaviMain_GetPosX(void);


void FUN_0039eb4c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  float *pfVar3;
  unsigned long long *puVar4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float fStack_4c;
  
  FUN_002c2950();
  temp_v1 = NaviMain_GetPosX();
  pfVar3 = (float *)FUN_00232658(param_1 + 0x162);
  temp_v8 = *pfVar3;
  temp_v9 = pfVar3[2];
  puVar4 = (unsigned long long *)NaviMain_GetCursorPos(param_1 + 0x162);
  temp_v11 = 0.0f;
  temp_v10 = *puVar4;
  temp_v12 = temp_v11;
  temp_v6 = temp_v11;
  FUN_00231bb8(param_1 + 0x164,&temp_v13);
  temp_v4 = *(int *)(param_1 + 0x5a88);
  if (temp_v1 != 0x65) {
    if (temp_v1 != 0x66) {
      if (temp_v1 == 0x67) {
        temp_v6 = (temp_v8 - -17000.0f) * 0.010566667f;
        temp_v11 = (temp_v9 - -19000.0f) * 0.010810811f;
      }
    }
    else {
      temp_v6 = (temp_v8 - -17000.0f) * 0.010225806f;
      temp_v11 = (temp_v9 - -18000.0f) * 0.010810811f;
    }
  }
  else {
    temp_v6 = (temp_v8 - -25500.0f) * 0.010745763f;
    temp_v11 = (temp_v9 - -18500.0f) * 0.010526316f;
  }
  temp_v1 = 0;
  temp_v10 = romwright_piece_4_4((int)((float)((unsigned long long)temp_v10 >> 0x20) - (temp_v11 - 120.0f)),
                    (int)((float)temp_v10 - (temp_v6 - 160.0f)));
  if (0 < temp_v4) {
    do {
      temp_v2 = param_1 + temp_v1 * 0x4c;
      if ((DAT_0049fcfc == 0) &&
         (((temp_v3 = FUN_0024c2ec(*(unsigned char *)(temp_v2 + 0xe8c),*(unsigned char *)(temp_v2 + 0xe8d)),
           temp_v3 == 0 || ((*(short *)(temp_v2 + 0xeb8) != 0 && (temp_v3 = FUN_002c09d0(), temp_v3 == 0))))
          || ((*(short *)(temp_v2 + 0xeba) != 0 && (temp_v3 = FUN_002c09d0(), temp_v3 != 0)))))) {
        *(unsigned short *)(temp_v2 + 0xebc) = 0;
      }
      else {
        *(unsigned short *)(temp_v2 + 0xebc) = 1;
      }
      if (*(short *)(temp_v2 + 0xebc) != 0) {
        temp_v6 = (float)VectorSignedToFloat((int)temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v10 >> 0x20),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned short *)(temp_v2 + 0xebe) = *(unsigned short *)(temp_v2 + 0xe90);
        temp_v7 = VectorFloatToUnsigned(*(float *)(temp_v2 + 0xe9c),3);
        temp_v5 = VectorFloatToUnsigned(*(float *)(temp_v2 + 0xea0),3);
        *(unsigned int *)(temp_v2 + 0xed0) = 0xffffffff;
        temp_v6 = temp_v13 + *(float *)(temp_v2 + 0xe94) + temp_v6;
        temp_v8 = fStack_4c + *(float *)(temp_v2 + 0xe98) + temp_v8;
        *(unsigned int *)(temp_v2 + 0xec8) = temp_v7;
        *(unsigned int *)(temp_v2 + 0xecc) = temp_v5;
        temp_v0 = in_fpscr & 0xfffffff;
        in_fpscr = temp_v0 | ((unsigned int)(temp_v12 <= temp_v6 + *(float *)(temp_v2 + 0xe9c)) << 0x1d);
        *(int *)(temp_v2 + 0xec0) = (int)temp_v6;
        *(int *)(temp_v2 + 0xec4) = (int)temp_v8;
        if ((((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) || ((int)temp_v6 >= 0x43a00001)) ||
            (in_fpscr = temp_v0 | ((unsigned int)(temp_v12 <= temp_v8 + *(float *)(temp_v2 + 0xea0)) << 0x1d),
            !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) || ((int)temp_v8 >= 0x43700001)) {
          *(unsigned short *)(temp_v2 + 0xebc) = 0;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v4);
  }
  *(unsigned char *)(param_1 + 0x5a8d) = 0;
  return;
}

} /* extern "C" */
