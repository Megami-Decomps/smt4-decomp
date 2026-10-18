/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001061ec` (_code @ 0x1061ec, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_00446db2; /* 0x446db2 */
extern int DAT_00446dc4; /* 0x446dc4 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_0010ec60(void);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1ac8. */
/* Supplied declaration required: FUN_002c1b64. */
extern unsigned int FUN_002c1c0c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5030. */


unsigned int FUN_001061ec(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  
  if (DAT_00446dc4 < 1) {
    DAT_00446dc4 = 0;
    DAT_00446db2 = 0;
  }
  else {
    temp_v2 = 0x3f800000;
    temp_v3 = 0x3f800000;
    temp_v4 = 0x3f800000;
    temp_v5 = 1.0f;
    if (DAT_00446dc4 >= 0x54) {
      temp_v5 = (float)VectorUnsignedToFloat(0x58 - DAT_00446dc4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = temp_v5 * 0.2f;
    }
    else if (DAT_00446dc4 < 0x16) {
      temp_v5 = (float)VectorSignedToFloat(DAT_00446dc4 - 2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = temp_v5 * 0.05f;
    }
    if (0.0f < temp_v5) {
      temp_v0 = FUN_002c1c0c(0x2c,0);
      FUN_002c1b64(DAT_0044ea00,temp_v0);
      FUN_002c1ac8(&temp_v2);
      FUN_002c198c(DAT_0044ea00);
      FUN_002c18e4(DAT_0044ea00);
    }
    temp_v1 = FUN_0010ec60();
    DAT_00446dc4 = (DAT_00446dc4 - temp_v1) - 1;
  }
  FUN_002c5030(0x401);
  return 0;
}
