/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025b754` (_code @ 0x25b754, 0x32c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001dd140(...);
int FUN_001dd1e0(unsigned int, unsigned int, int, int);
int FUN_0024ac68(...);
int FUN_0024ac7c(int);
int VectorSignedToFloat(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00448c90; /* 0x448c90 */
extern int DAT_0049f91c; /* 0x49f91c */
extern short DAT_0049fb40; /* 0x49fb40 */
extern signed char DAT_0049fb44; /* 0x49fb44 */
extern signed char DAT_0049fb48; /* 0x49fb48 */
extern int DAT_0049fcc4; /* 0x49fcc4 */
extern unsigned int DAT_0049fcc8; /* 0x49fcc8 */
extern unsigned int DAT_0049fccc; /* 0x49fccc */
extern unsigned int DAT_0049fcd0; /* 0x49fcd0 */
extern unsigned int DAT_0049fcd4; /* 0x49fcd4 */
extern int DAT_0049fcd8; /* 0x49fcd8 */
extern int DAT_0049fcdc; /* 0x49fcdc */
extern int DAT_0049fce0; /* 0x49fce0 */
extern int DAT_0049fce4; /* 0x49fce4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001dd140. */
/* Supplied declaration required: FUN_001dd1e0. */
/* Supplied declaration required: FUN_0024ac68. */
/* Supplied declaration required: FUN_0024ac7c. */
extern int FUN_0024efe4(void);


void FUN_0025b754(void)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  
  if (DAT_0049fb48 != '\0') {
    return;
  }
  temp_v0 = FUN_0024efe4();
  temp_v1 = DAT_0049fcd4;
  if ((temp_v0 != 0) || (DAT_0049fcc4 == 0)) {
    FUN_0024ac7c(0);
    FUN_0024ac68(0);
    return;
  }
  if (DAT_0049fcc4 == 1) {
    FUN_0024ac68(1);
    VectorSignedToFloat(DAT_0049fcc8,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(DAT_0049fccc,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001dd1e0(DAT_0049fcd0,
                 DAT_0049fcd4 | (DAT_0049fcdc << 0x18) |
                 (DAT_0049fce0 << 0x10) | (DAT_0049fce4 << 8),DAT_0049fcd8 != 0,1);
    FUN_0024ac7c(0);
    return;
  }
  if (DAT_0049fcc4 == 2) {
    FUN_0024ac7c(1);
    VectorSignedToFloat(DAT_0049fcc8,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(DAT_0049fccc,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001dd140(DAT_0049fcd0,
                 DAT_0049fcd4 | (DAT_0049fcdc << 0x18) |
                 (DAT_0049fce0 << 0x10) | (DAT_0049fce4 << 8),DAT_0049fcd8 != 0,1);
    FUN_0024ac68(0);
    return;
  }
  temp_v0 = (int)DAT_0049fb40;
  temp_v2 = 2;
  if (DAT_0049fb44 != '\0') {
    temp_v0 = -2;
  }
  FUN_0024ac7c(1);
  if (DAT_0049f91c >= 100) {
    VectorSignedToFloat(DAT_0049fccc,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(DAT_0049fcc8,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001dd140(DAT_0049fcd0,
                 (DAT_0049fcdc << 0x18) | (DAT_0049fce0 << 0x10) | (DAT_0049fce4 << 8) | temp_v1,1,
                 temp_v2);
    FUN_0024ac68(0);
    return;
  }
  switch(temp_v0) {
  case 0:
    temp_v0 = 0;
    if (DAT_00448c90 < 0) {
      DAT_00448c90 = DAT_00448c90 + 2;
      if (0 < DAT_00448c90) {
        DAT_00448c90 = temp_v0;
      }
    }
    else if ((0 < DAT_00448c90) && (DAT_00448c90 = DAT_00448c90 - 2, DAT_00448c90 < 0)) {
      DAT_00448c90 = temp_v0;
    }
    temp_v2 = 3;
    temp_v1 = temp_v1 + DAT_00448c90;
    break;
  case 1:
    temp_v0 = 0x10;
    if (DAT_00448c90 < 0x10) {
      DAT_00448c90 = DAT_00448c90 + 2;
      if (DAT_00448c90 >= 0x11) {
        DAT_00448c90 = temp_v0;
      }
    }
    else if ((DAT_00448c90 >= 0x11) && (DAT_00448c90 = DAT_00448c90 - 2, DAT_00448c90 < 0x10)) {
      DAT_00448c90 = temp_v0;
    }
    temp_v2 = 3;
    temp_v1 = temp_v1 + DAT_00448c90;
    break;
  case 2:
    if (DAT_00448c90 < 0x20) {
      DAT_00448c90 = DAT_00448c90 + 2;
      if (DAT_00448c90 >= 0x21) {
        DAT_00448c90 = 0x20;
      }
    }
    else if ((DAT_00448c90 >= 0x21) && (DAT_00448c90 = DAT_00448c90 - 2, DAT_00448c90 < 0x20)) {
      DAT_00448c90 = 0x20;
    }
    temp_v2 = 3;
    temp_v1 = temp_v1 + DAT_00448c90;
    break;
  case -2:
    if (DAT_00448c90 < 0x20) {
      DAT_00448c90 = DAT_00448c90 + 2;
      if (DAT_00448c90 >= 0x21) {
        DAT_00448c90 = 0x20;
      }
    }
    else if ((DAT_00448c90 >= 0x21) && (DAT_00448c90 = DAT_00448c90 - 2, DAT_00448c90 < 0x20)) {
      DAT_00448c90 = 0x20;
    }
    temp_v1 = temp_v1 + DAT_00448c90;
    break;
  case -1:
    if (DAT_00448c90 < -0x10) {
      temp_v0 = DAT_00448c90 + 2;
      temp_v3 = DAT_00448c90 != -0x12;
      DAT_00448c90 = temp_v0;
      if (temp_v3 && -0x11 < temp_v0) {
        DAT_00448c90 = -0x10;
      }
    }
    else if ((-0x10 < DAT_00448c90) && (DAT_00448c90 = DAT_00448c90 - 2, DAT_00448c90 < -0x10)) {
      DAT_00448c90 = -0x10;
    }
    temp_v1 = temp_v1 + DAT_00448c90;
  default:
  }
  if ((int)temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if ((int)temp_v1 >= 0x100) {
    temp_v1 = 0xff;
  }
  VectorSignedToFloat(DAT_0049fccc,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(DAT_0049fcc8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001dd140(DAT_0049fcd0,
               (DAT_0049fcdc << 0x18) | (DAT_0049fce0 << 0x10) | (DAT_0049fce4 << 8) | temp_v1,1,temp_v2
              );
  FUN_0024ac68(0);
  return;
}

} /* extern "C" */
