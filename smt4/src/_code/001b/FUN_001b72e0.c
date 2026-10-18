/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b72e0` (_code @ 0x1b72e0, 0x6e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned char LAB_001b77ac; /* 0x1b77ac */
extern unsigned char LAB_001b77d8; /* 0x1b77d8 */
extern unsigned char LAB_001b7808; /* 0x1b7808 */
extern unsigned char LAB_001b79c8; /* 0x1b79c8 */
extern unsigned char LAB_001b79dc; /* 0x1b79dc */
extern unsigned char LAB_001b79f4; /* 0x1b79f4 */
extern unsigned char LAB_001b7a08; /* 0x1b7a08 */
extern signed char DAT_00439c88; /* 0x439c88 */
extern int DAT_00439c8c; /* 0x439c8c */
extern int DAT_00439c90; /* 0x439c90 */
extern float DAT_00439c94; /* 0x439c94 */
extern float DAT_00439c98; /* 0x439c98 */
extern int DAT_00439ca8; /* 0x439ca8 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB84 (SUBPIECE). */
/* Supplied declaration required: FUN_00218c50. */
/* Supplied declaration required: FUN_00224f68. */
extern int FUN_002a60b4(unsigned int, int);
/* Supplied declaration required: FUN_002b2650. */
/* Supplied declaration required: FUN_002b7638. */
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c6a64. */
/* Supplied declaration required: FUN_0033cc84. */


unsigned int FUN_001b72e0(void)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  unsigned long long temp_v8;
  unsigned char temp_v9 [64];
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v1 = DAT_00439ca8;
  if (DAT_00439ca8 != 0) {
    temp_v4 = 0;
    temp_v5 = temp_v4;
    do {
      temp_v0 = FUN_002a60b4(0x14,temp_v4);
      if (temp_v0 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 5);
    temp_v4 = 0;
    do {
      temp_v0 = FUN_002a60b4(0x15,temp_v4);
      if (temp_v0 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    if (temp_v5 >= 9) {
      FUN_002c39a4(DAT_0044ea00);
      temp_v5 = DAT_0044ea00;
      temp_v4 = FUN_002c5d80(1,0);
      piVar5 = (int *)(temp_v5 + 0x124c);
      temp_v0 = *piVar5;
      temp_v2 = piVar5[temp_v0 + 2];
      *piVar5 = temp_v0 + 1;
      piVar5[temp_v0 + 3] = temp_v4;
      if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v2 != temp_v4) {
        (**(romwright_code **)(temp_v5 + 0x1268))();
        *(unsigned char *)(temp_v5 + 0x1264) = 0;
      }
      FUN_00224f68(temp_v1,1);
      temp_v6 = 0.8f;
      FUN_002ba12c(DAT_0044ea00);
      temp_v8 = (unsigned long long)(unsigned int)(int)temp_v6;
      temp_v5 = 0;
      do {
        temp_v4 = temp_v1 + temp_v5 * 0x14c;
        if (*(short *)(temp_v4 + 0xe1c4) != 0) {
          FUN_002b2650(temp_v4 + 0xe0ac,(int)(short)(int)*(float *)(temp_v4 + 0xe1d0),
                       (int)(short)(int)*(float *)(temp_v4 + 0xe1d4));
          VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002b93c8(temp_v4 + 0xe0ac);
          temp_v0 = DAT_0044ea00;
          if (*(char *)(temp_v4 + 0xe1bd) != '\0') {
            temp_v2 = FUN_002c5da8(6,1,0);
            piVar5 = (int *)(temp_v0 + 0x12ac);
            temp_v3 = piVar5[*piVar5 + 2];
            piVar5[*piVar5 + 2] = temp_v2;
            if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
              (**(romwright_code **)(temp_v0 + 0x12c8))();
              *(unsigned char *)(temp_v0 + 0x12c4) = 0;
            }
            temp_v0 = temp_v4 + 0xe138;
            FUN_002b2650(temp_v0,(int)(short)(int)(float)*(unsigned long long *)(temp_v4 + 0xe1d0),
                         (int)(short)(int)(float)((unsigned long long)*(unsigned long long *)(temp_v4 + 0xe1d0) >> 0x20
                                                 ));
            *(unsigned int *)(temp_v4 + 0xe168) = *(unsigned int *)(temp_v4 + 0xe1c8);
            VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002b93c8(temp_v0);
            VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002b93c8(temp_v0);
            temp_v4 = DAT_0044ea00;
            temp_v0 = FUN_002c5da8(6,7,0);
            piVar5 = (int *)(temp_v4 + 0x12ac);
            temp_v2 = piVar5[*piVar5 + 2];
            piVar5[*piVar5 + 2] = temp_v0;
            if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
              (**(romwright_code **)(temp_v4 + 0x12c8))();
              *(unsigned char *)(temp_v4 + 0x12c4) = 0;
            }
          }
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0xc);
      FUN_002c6a64(temp_v1 + 0x2200);
      FUN_00218c50(temp_v1 + 8);
      FUN_0033cc84(*(unsigned int *)(temp_v1 + 0x7e20));
      if (*(char *)(temp_v1 + 0x7e4b) != '\0') {
        FUN_002bf538();
        FUN_002bf288(2,0xe,0x106,0,0,0x65);
        FUN_002bf538();
      }
      temp_v7 = 0;
      if (DAT_00439c88 != '\0') {
        FUN_002be5a4(3,0xffffffff,&LAB_001b77ac);
        FUN_002be5a4(3,0xffffffff,&LAB_001b77d8);
      }
      if (*(int *)(temp_v1 + 0x7e38) == 0xe) {
        temp_v13 = 0x3eaaaaab;
        temp_v10 = temp_v7;
        temp_v11 = temp_v7;
        temp_v12 = temp_v7;
        FUN_002c1b64(DAT_0044ea00,0);
        FUN_002b7638(&temp_v10);
        temp_v6 = DAT_00439c94;
        FUN_002ba12c(DAT_0044ea00);
        FUN_002bf288(2,0xf,(unsigned int)*(unsigned short *)(DAT_00439c90 * 2 + 0x439cc0) * 1000,(int)temp_v6,0,0x97);
        temp_v6 = DAT_00439c98;
        FUN_002ba12c(DAT_0044ea00);
        temp_v5 = (int)temp_v6;
        temp_v1 = FUN_002bf4f8(0xe,0x43);
        FUN_002bf288(2,0xe,0,(int)*(short *)(temp_v1 + 8) + temp_v5 + (int)**(short **)(temp_v1 + 0xc) / 2
                     ,(int)*(short *)(temp_v1 + 10) + (int)(*(short **)(temp_v1 + 0xc))[1] / 2,0xc9);
        temp_v1 = FUN_002bf4f8(0xe,0x45);
        FUN_002bf288(2,0xe,2,(int)*(short *)(temp_v1 + 8) + temp_v5 + (int)**(short **)(temp_v1 + 0xc) / 2
                     ,(int)*(short *)(temp_v1 + 10) + (int)(*(short **)(temp_v1 + 0xc))[1],0xd3);
        temp_v1 = FUN_002bf4f8(0xe,0x3d);
        VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v1 + 8) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(3,0xff,&LAB_001b7808);
        FUN_002be624(temp_v9,&LAB_001b79c8,DAT_00439c90);
        FUN_002be5a4(2,0xffffffff,temp_v9);
        FUN_002be624(temp_v9,&LAB_001b79dc,SUB84((double)DAT_00439c94,0),
                     (int)((unsigned long long)(double)DAT_00439c94 >> 0x20));
        FUN_002be5a4(2,0xffffffff,temp_v9);
        FUN_002be624(temp_v9,&LAB_001b79f4,SUB84((double)DAT_00439c98,0),
                     (int)((unsigned long long)(double)DAT_00439c98 >> 0x20));
        FUN_002be5a4(2,0xffffffff,temp_v9);
        VectorSignedToFloat(DAT_00439c8c * 0xc + 8,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,0xffffffff,&LAB_001b7a08);
      }
      temp_v1 = DAT_0044ea00;
      piVar5 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v5 = *piVar5;
      temp_v4 = piVar5[temp_v5 + 2];
      *piVar5 = temp_v5 - 1;
      if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v4 != piVar5[temp_v5 + 1]) {
        (**(romwright_code **)(temp_v1 + 0x1268))();
        *(unsigned char *)(temp_v1 + 0x1264) = 0;
      }
      temp_v1 = DAT_0044ea00;
      temp_v5 = FUN_002c5da8(6,7,0);
      piVar5 = (int *)(temp_v1 + 0x12ac);
      temp_v4 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v5;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v4 != temp_v5) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
      FUN_002c198c(DAT_0044ea00);
      FUN_002c18e4(DAT_0044ea00);
      return 0;
    }
  }
  return 0;
}
