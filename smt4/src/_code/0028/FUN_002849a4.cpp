/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002849a4` (_code @ 0x2849a4, 0x880 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002541b8(...);
int namedEntryTableSetById(...);
int FUN_00263cb8(...);
int FUN_002671f4(...);
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

extern unsigned char LAB_00285224; /* 0x285224 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002541b8. */
/* Supplied declaration required: namedEntryTableSetById. */
/* Supplied declaration required: FUN_00263cb8. */
/* Supplied declaration required: FUN_002671f4. */
extern int FUN_00285574(void);
extern int gameGetMapBlock(void);


void FUN_002849a4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  
  temp_v1 = gameGetMapBlock();
  temp_v2 = FUN_00285574();
  temp_v3 = (int)*(char *)(temp_v1 + 0xdcc);
  temp_v5 = (int)*(char *)(temp_v1 + 0xdcd);
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
      if (*(char *)(temp_v4 + 0x447f54) != '\x01') {
        if (*(char *)(temp_v4 + 0x447f54) != '\x02') {
          FUN_00263cb8(0,0,"START",0x1b,8,0xffffffff,*(unsigned char *)(temp_v4 + 0x447f58),
                       *(unsigned char *)(temp_v4 + 0x447f59),0,0,0,0,0,0xd,1,0,0,0,0);
        }
        else {
          FUN_00263cb8(0x2400001,0,"PEVE",0x1b,8,0xffffffff,0,
                       *(unsigned char *)(temp_v4 + 0x447f58),*(unsigned char *)(temp_v4 + 0x447f59),0,0,0,0,
                       0xd,1,0,0,0,0);
          namedEntryTableSetById(0x2400001,(int)*(short *)(temp_v4 + 0x447f5a),temp_v4 + 0x447f5c);
          FUN_002541b8(0x2400001,0);
        }
      }
      else {
        FUN_00263cb8(0,0,"PREV",0x1b,8,0xffffffff,*(unsigned char *)(temp_v4 + 0x447f58),
                     *(unsigned char *)(temp_v4 + 0x447f59),0,0,0,0,0,0xd,1,
                     (int)*(char *)(temp_v4 + 0x447f55),(int)*(char *)(temp_v4 + 0x447f56),
                     (int)*(char *)(temp_v4 + 0x447f57),0);
      }
    }
    else {
      FUN_00263cb8(0,0,"START",0x1b,8,0xffffffff,0,0,0,0,0,0,0,0xd,1,0,0,0,0);
    }
    if (param_1 == 0) {
      FUN_002671f4(0);
    }
  }
  temp_v3 = (int)*(char *)(temp_v1 + 0xdcf);
  temp_v4 = (int)*(char *)(temp_v1 + 0xdce);
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
    temp_v0 = *(char *)(temp_v2 + 0x447f6c);
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x03') {
          FUN_00263cb8(0,0,"GOAL",0x1c,4,0xffffffff,*(unsigned char *)(temp_v2 + 0x447f70),
                       *(unsigned char *)(temp_v2 + 0x447f71),0,0,0,0,0,0xd,1,0,0,0,0);
        }
        else {
          FUN_00263cb8(0x2400002,0,&LAB_00285224,0x3b,4,0xffffffff,*(unsigned char *)(temp_v2 + 0x447f70)
                       ,*(unsigned char *)(temp_v2 + 0x447f71),0,0,0,0,0,0xd,1,0,0,0,0);
          namedEntryTableSetById(0x2400002,(int)*(short *)(temp_v2 + 0x447f72),temp_v2 + 0x447f74);
          FUN_002541b8(0x2400002,0);
        }
      }
      else {
        FUN_00263cb8(0x2400002,0,&LAB_00285224,0xc,4,0xffffffff,*(unsigned char *)(temp_v2 + 0x447f70),
                     *(unsigned char *)(temp_v2 + 0x447f71),0,0,0,0,0,0xd,1,0,0,0,0);
        namedEntryTableSetById(0x2400002,(int)*(short *)(temp_v2 + 0x447f72),temp_v2 + 0x447f74);
        FUN_002541b8(0x2400002,0);
      }
    }
    else {
      FUN_00263cb8(0,0,"NEXT",3,4,0xffffffff,*(unsigned char *)(temp_v2 + 0x447f70),
                   *(unsigned char *)(temp_v2 + 0x447f71),0,0,0,0,0,0xd,1,
                   (int)*(char *)(temp_v2 + 0x447f6d),(int)*(char *)(temp_v2 + 0x447f6e),
                   (int)*(char *)(temp_v2 + 0x447f6f),0);
    }
  }
  else {
    FUN_00263cb8(0,0,"GOAL",0x1c,4,0xffffffff,0,0,0,0,0,0,0,0xd,1,0,0,0,0);
  }
  if (param_1 != 0) {
    return;
  }
  FUN_002671f4(0);
  return;
}

} /* extern "C" */
