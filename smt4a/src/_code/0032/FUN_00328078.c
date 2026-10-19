/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328078` (_code @ 0x328078, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern char *FUN_0033f868(int);
/* Supplied declaration required: FUN_00398438. */
extern unsigned int FUN_003ae498(int);


unsigned int FUN_00328078(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v6;
  unsigned int in_s1;
  float temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  
  temp_v5 = 0;
  temp_v8 = romwright_piece_4_4(in_s1,in_s0);
  temp_v3 = param_1;
  FUN_00398438();
  if (0 < temp_v3) {
    do {
      pcVar5 = (char *)FUN_0033f868(temp_v5);
      if (*pcVar5 == -1) {
        return 0;
      }
      if ((pcVar5[2] == '\x06') && (*pcVar5 == param_1)) {
        temp_v6 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v7 = (float)temp_v8;
        temp_v0 = in_fpscr & 0xfffffff;
        in_fpscr = temp_v0 | ((unsigned int)(temp_v6 == temp_v7) << 0x1e) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d);
        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
          temp_v6 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = (float)((unsigned long long)temp_v8 >> 0x20);
          in_fpscr = temp_v0 | ((unsigned int)(temp_v6 == temp_v9) << 0x1e) | ((unsigned int)(temp_v9 <= temp_v6) << 0x1d);
          temp_v2 = (unsigned char)(in_fpscr >> 0x18);
          if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
            temp_v6 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 10),
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v1 = temp_v0 | ((unsigned int)(temp_v6 < temp_v7) << 0x1f);
            in_fpscr = temp_v1 | ((unsigned int)((temp_v6 != temp_v6) || (temp_v7 != temp_v7)) << 0x1c);
            if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v6 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 0xc),
                                                 (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v0 = temp_v0 | ((unsigned int)(temp_v6 < temp_v9) << 0x1f);
              in_fpscr = temp_v0 | ((unsigned int)((temp_v6 != temp_v6) || (temp_v9 != temp_v9)) << 0x1c);
              if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v4 = FUN_003ae498((int)*(short *)(pcVar5 + 0x12));
                return temp_v4;
              }
            }
          }
        }
      }
      temp_v5 = temp_v5 + 1;
      FUN_00398438();
    } while (temp_v5 < (int)pcVar5);
  }
  return 0;
}
