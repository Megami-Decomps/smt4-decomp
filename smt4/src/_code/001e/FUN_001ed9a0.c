/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed9a0` (_code @ 0x1ed9a0, 0x338 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_0044de2c; /* 0x44de2c */
extern int DAT_0044de30; /* 0x44de30 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001c0b88. */
/* Supplied declaration required: FUN_002996d8. */
/* Supplied declaration required: FUN_0029dfc0. */
/* Supplied declaration required: FUN_002ae038. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c0cec. */
extern int FUN_002c30c4(int);
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned char FUN_001ed9a0(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v6 = DAT_0044de2c;
  if ((*(char *)(DAT_0044de2c + 0x378) == '\0') && (*(char *)(DAT_0044de2c + 0x354) != '\0')) {
    temp_v12 = 0x3f800000;
    if (*(char *)(DAT_0044de2c + DAT_0044de30 + 0x34c) == '\0') {
      FUN_0029dfc0(0);
      FUN_002996d8(0);
      temp_v5 = DAT_0044de2c;
      if ((*(char *)(temp_v6 + 0x70) != '\0') && (*(char *)(temp_v6 + 0x71) == '\0')) {
        FUN_002bed3c();
        temp_v4 = DAT_0044ea00;
        temp_v3 = FUN_002c5d80(1,0);
        piVar10 = (int *)(temp_v4 + 0x124c);
        temp_v7 = *piVar10;
        temp_v8 = piVar10[temp_v7 + 2];
        *piVar10 = temp_v7 + 1;
        piVar10[temp_v7 + 3] = temp_v3;
        if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v8 != temp_v3) {
          (**(romwright_code **)(temp_v4 + 0x1268))();
          *(unsigned char *)(temp_v4 + 0x1264) = 0;
        }
        FUN_002bf538();
        FUN_002bf4f8(0x36,0x56);
        temp_v4 = FUN_002bf4f8(0x36,0x59);
        temp_v10 = 0.305f;
        FUN_002ba12c(DAT_0044ea00);
        FUN_002bf380(2,0x36,7,(int)temp_v10,0,0xf1);
        temp_v0 = *(char *)(temp_v5 + 0x49);
        temp_v1 = **(short **)(temp_v4 + 0xc);
        temp_v2 = (*(short **)(temp_v4 + 0xc))[1];
        FUN_002c0cec(0x3d,0);
        temp_v5 = FUN_002c0cc4();
        temp_v5 = temp_v5 + temp_v0 * 0x54;
        temp_v3 = FUN_002c30c4(temp_v5);
        temp_v11 = (float)VectorSignedToFloat(temp_v3 * temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)temp_v1 - (int)(temp_v11 * 0.5f),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(4,0xffffffff,temp_v5);
        temp_v5 = DAT_0044ea00;
        piVar10 = (int *)(DAT_0044ea00 + 0x124c);
        temp_v4 = *piVar10;
        temp_v3 = piVar10[temp_v4 + 2];
        *piVar10 = temp_v4 - 1;
        if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v3 != piVar10[temp_v4 + 1]) {
          (**(romwright_code **)(temp_v5 + 0x1268))();
          *(unsigned char *)(temp_v5 + 0x1264) = 0;
        }
        FUN_002bf538();
      }
    }
    temp_v5 = DAT_0044ea00;
    if (*(char *)(temp_v6 + 0x55) != '\0') {
      temp_v9 = *(char *)(temp_v6 + 0x49) != '\0';
      temp_v0 = '\0';
      if (temp_v9) {
        temp_v0 = *(char *)(temp_v6 + 0x72);
      }
      if (!temp_v9 || temp_v0 == '\0') {
        temp_v6 = FUN_002c5d80(1,0);
        piVar10 = (int *)(temp_v5 + 0x124c);
        temp_v4 = *piVar10;
        temp_v3 = piVar10[temp_v4 + 2];
        *piVar10 = temp_v4 + 1;
        piVar10[temp_v4 + 3] = temp_v6;
        if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v3 != temp_v6) {
          (**(romwright_code **)(temp_v5 + 0x1268))();
          *(unsigned char *)(temp_v5 + 0x1264) = 0;
        }
        FUN_002bf538();
        temp_v13 = (unsigned int)((unsigned long long)temp_v12 >> 0x20);
        temp_v16 = (unsigned int)temp_v12;
        temp_v14 = temp_v13;
        temp_v15 = temp_v13;
        FUN_002ae038(&temp_v13);
        FUN_001c0b88(0,0,400,0xf0,0xf5);
        temp_v6 = DAT_0044ea00;
        piVar10 = (int *)(DAT_0044ea00 + 0x124c);
        temp_v5 = *piVar10;
        temp_v4 = piVar10[temp_v5 + 2];
        *piVar10 = temp_v5 - 1;
        if (*(char *)(temp_v6 + 0x1264) != '\0' || temp_v4 != piVar10[temp_v5 + 1]) {
          (**(romwright_code **)(temp_v6 + 0x1268))();
          *(unsigned char *)(temp_v6 + 0x1264) = 0;
        }
        FUN_002bf538();
        FUN_002bed3c();
      }
    }
  }
  return 0;
}
