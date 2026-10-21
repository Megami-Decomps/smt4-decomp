/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c670c` (_code @ 0x2c670c, 0x8c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00281b94(...);
int FUN_002b7a78(...);
int recordSetValueAndName(...);
int FUN_00313974(int);
int FUN_00332fd8(void);
int sceneRegisterBoxEffect(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_002c6ae0; /* 0x2c6ae0 */
extern unsigned char LAB_002c6ae8; /* 0x2c6ae8 */
extern unsigned char LAB_002c6e4c; /* 0x2c6e4c */
extern unsigned char LAB_002c6e68; /* 0x2c6e68 */
extern unsigned char LAB_002c6e70; /* 0x2c6e70 */
extern unsigned char LAB_002c6fd4; /* 0x2c6fd4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00281b94. */
/* Supplied declaration required: FUN_002b7a78. */
/* Supplied declaration required: recordSetValueAndName. */
/* Supplied declaration required: FUN_00313974. */
/* Supplied declaration required: FUN_00332fd8. */
/* Supplied declaration required: sceneRegisterBoxEffect. */
extern int FUN_003683b8(int);
extern int lmapGetSpawnIndex(void);


void FUN_002c670c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  
  temp_v1 = gameFlagsGetBlock();
  temp_v2 = lmapGetSpawnIndex();
  if (temp_v2 >= 100) {
    FUN_00313974((int)*(float *)(temp_v1 + 0x15c4));
    temp_v2 = FUN_003683b8((int)*(float *)(temp_v1 + 0x15c4));
    if (temp_v2 == 2) {
      FUN_00332fd8();
      return;
    }
  }
  else {
    temp_v3 = (int)*(char *)(temp_v1 + 0xe00);
    temp_v5 = (int)*(char *)(temp_v1 + 0xe01);
    temp_v4 = temp_v3;
    if (0 < temp_v3) {
      temp_v4 = temp_v5;
    }
    if (0 < temp_v4) {
      temp_v0 = *(char *)(temp_v1 + temp_v5 * 0x78 + temp_v3 * 8 + 0x40);
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x02') {
          if (temp_v0 != '\x03') {
            if (temp_v0 == '\x04') {
              VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
          }
          else {
            VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
        }
        else {
          VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      else {
        VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
      if (temp_v2 != 0) {
        temp_v4 = temp_v2 * 0x44;
        if (*(char *)(temp_v4 + 0x5814d8) != '\x01') {
          if (*(char *)(temp_v4 + 0x5814d8) != '\x02') {
            sceneRegisterBoxEffect(0,0,&LAB_002c6ae0,0x1b,8,0xffffffff,*(unsigned char *)(temp_v4 + 0x5814dc),
                         *(unsigned char *)(temp_v4 + 0x5814dd),0,0,0,0,0,0xd,1,0,0,0,0);
          }
          else {
            sceneRegisterBoxEffect(0x2400001,0,&LAB_002c6e4c,0x1b,8,0xffffffff,0,
                         *(unsigned char *)(temp_v4 + 0x5814dc),*(unsigned char *)(temp_v4 + 0x5814dd),0,0,0,0
                         ,0xd,1,0,0,0,0);
            recordSetValueAndName(0x2400001,(int)*(short *)(temp_v4 + 0x5814de),temp_v4 + 0x5814e0);
            FUN_002b7a78(0x2400001,0);
          }
        }
        else {
          sceneRegisterBoxEffect(0,0,&LAB_002c6ae8,0x1b,8,0xffffffff,*(unsigned char *)(temp_v4 + 0x5814dc),
                       *(unsigned char *)(temp_v4 + 0x5814dd),0,0,0,0,0,0xd,1,
                       (int)*(char *)(temp_v4 + 0x5814d9),(int)*(char *)(temp_v4 + 0x5814da),
                       (int)*(char *)(temp_v4 + 0x5814db),0);
        }
      }
      else {
        sceneRegisterBoxEffect(0,0,&LAB_002c6ae0,0x1b,8,0xffffffff,0,0,0,0,0,0,0,0xd,1,0,0,0,0);
      }
      if (param_1 == 0) {
        FUN_00281b94(0);
      }
    }
    temp_v3 = (int)*(char *)(temp_v1 + 0xe03);
    temp_v4 = (int)*(char *)(temp_v1 + 0xe02);
    temp_v0 = *(char *)(temp_v1 + temp_v3 * 0x78 + temp_v4 * 8 + 0x40);
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x03') {
          if (temp_v0 == '\x04') {
            VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
        }
        else {
          VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      else {
        VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
    }
    else {
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 * 0x44;
      temp_v0 = *(char *)(temp_v2 + 0x5814f0);
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x02') {
          if (temp_v0 != '\x03') {
            sceneRegisterBoxEffect(0,0,&LAB_002c6e68,0x1c,4,0xffffffff,*(unsigned char *)(temp_v2 + 0x5814f4),
                         *(unsigned char *)(temp_v2 + 0x5814f5),0,0,0,0,0,0xd,1,0,0,0,0);
          }
          else {
            sceneRegisterBoxEffect(0x2400002,0,&LAB_002c6fd4,0x4a,4,0xffffffff,
                         *(unsigned char *)(temp_v2 + 0x5814f4),*(unsigned char *)(temp_v2 + 0x5814f5),0,0,0,0
                         ,0,0xd,1,0,0,0,0);
            recordSetValueAndName(0x2400002,(int)*(short *)(temp_v2 + 0x5814f6),temp_v2 + 0x5814f8);
            FUN_002b7a78(0x2400002,0);
          }
        }
        else {
          sceneRegisterBoxEffect(0x2400002,0,&LAB_002c6fd4,0xc,4,0xffffffff,*(unsigned char *)(temp_v2 + 0x5814f4),
                       *(unsigned char *)(temp_v2 + 0x5814f5),0,0,0,0,0,0xd,1,0,0,0,0);
          recordSetValueAndName(0x2400002,(int)*(short *)(temp_v2 + 0x5814f6),temp_v2 + 0x5814f8);
          FUN_002b7a78(0x2400002,0);
        }
      }
      else {
        sceneRegisterBoxEffect(0,0,&LAB_002c6e70,3,4,0xffffffff,*(unsigned char *)(temp_v2 + 0x5814f4),
                     *(unsigned char *)(temp_v2 + 0x5814f5),0,0,0,0,0,0xd,1,
                     (int)*(char *)(temp_v2 + 0x5814f1),(int)*(char *)(temp_v2 + 0x5814f2),
                     (int)*(char *)(temp_v2 + 0x5814f3),0);
      }
    }
    else {
      sceneRegisterBoxEffect(0,0,&LAB_002c6e68,0x1c,4,0xffffffff,0,0,0,0,0,0,0,0xd,1,0,0,0,0);
    }
    if (param_1 == 0) {
      FUN_00281b94(0);
      return;
    }
  }
  return;
}

} /* extern "C" */
