/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d978c` (_code @ 0x2d978c, 0x3b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00581288; /* 0x581288 */
extern unsigned char DAT_005f162e; /* 0x5f162e */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0013c1ec. */
extern unsigned int FUN_00145868(void);
/* Supplied declaration required: FUN_0014af98. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002dae68. */
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_0033abd4. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d4ed8. */


void FUN_002d978c(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  
  FUN_002dae68();
  temp_v0 = FUN_00145868();
  temp_v3 = DAT_00581288;
  temp_v2 = *(int *)(DAT_00581288 + 4);
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      if (temp_v2 != 2) {
        if (temp_v2 == 3) {
          *(unsigned int *)(DAT_00581288 + 0x58) = 0x40a00000;
        }
      }
      else {
        temp_v2 = *(int *)(DAT_00581288 + 8) + 1;
        *(int *)(DAT_00581288 + 8) = temp_v2;
        if (temp_v2 < 0x13) {
          temp_v4 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v3 + 0x30) = *(float *)(temp_v3 + 0x140) + *(float *)(temp_v3 + 0x158) * temp_v4;
          *(float *)(temp_v3 + 0x28) = *(float *)(temp_v3 + 0x138) + *(float *)(temp_v3 + 0x150) * temp_v4;
          *(float *)(temp_v3 + 0x2c) = *(float *)(temp_v3 + 0x13c) + *(float *)(temp_v3 + 0x154) * temp_v4;
        }
        else {
          FUN_0033abd4();
          switch(DAT_005f162e) {
          case 0:
            temp_v1 = 0x10002c5;
            FUN_003d4ed8(temp_v1);
            break;
          case 1:
            temp_v1 = 0x10002c7;
            FUN_003d4ed8(temp_v1);
            break;
          case 2:
            temp_v1 = 0x10002c9;
            FUN_003d4ed8(temp_v1);
            break;
          case 3:
            temp_v1 = 0x10002cb;
            FUN_003d4ed8(temp_v1);
            break;
          case 4:
            temp_v1 = 0x10002cd;
            FUN_003d4ed8(temp_v1);
            break;
          case 5:
            temp_v1 = 0x10002da;
            FUN_003d4ed8(temp_v1);
            break;
          default:
          }
LAB_002d99dc:
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          FUN_0013c1ec();
          FUN_003d2150(0x10002e6);
          FUN_0013c1ec(temp_v0);
          temp_v3 = DAT_00581288;
          *(int *)(DAT_00581288 + 4) = *(int *)(DAT_00581288 + 4) + 1;
          *(unsigned int *)(temp_v3 + 8) = 0;
        }
      }
    }
    else {
      temp_v3 = *(int *)(DAT_00581288 + 8) + 1;
      *(int *)(DAT_00581288 + 8) = temp_v3;
      if (temp_v3 >= 10) {
        FUN_0033abd4();
        switch(DAT_005f162e) {
        case 0:
          temp_v1 = 0x10002c4;
          FUN_003d4ed8(temp_v1);
          break;
        case 1:
          temp_v1 = 0x10002c6;
          FUN_003d4ed8(temp_v1);
          break;
        case 2:
          temp_v1 = 0x10002c8;
          FUN_003d4ed8(temp_v1);
          break;
        case 3:
          temp_v1 = 0x10002ca;
          FUN_003d4ed8(temp_v1);
          break;
        case 4:
          temp_v1 = 0x10002cc;
          FUN_003d4ed8(temp_v1);
          break;
        case 5:
          temp_v1 = 0x10002d9;
          FUN_003d4ed8(temp_v1);
          break;
        default:
        }
LAB_002d9870:
        FUN_00324e38(0xffffffff);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_0014af98();
        FUN_0013c1ec();
        FUN_003d2150(0x10002e5);
        FUN_0013c1ec(temp_v0);
        temp_v3 = DAT_00581288;
        *(int *)(DAT_00581288 + 4) = *(int *)(DAT_00581288 + 4) + 1;
        *(unsigned int *)(temp_v3 + 8) = 0;
      }
    }
  }
  else {
    *(unsigned int *)(DAT_00581288 + 0x54) = 0xd;
    *(unsigned int *)(temp_v3 + 0x58) = 0x40400000;
    *(unsigned int *)(temp_v3 + 4) = 1;
    *(unsigned int *)(temp_v3 + 8) = 0;
  }
  temp_v3 = DAT_00581288;
  *(float *)(DAT_00581288 + 0x1c) =
       *(float *)(DAT_00581288 + 0x1c) +
       (*(float *)(DAT_00581288 + 0x28) - *(float *)(DAT_00581288 + 0x1c)) * 0.33333334f;
  *(float *)(temp_v3 + 0x20) =
       *(float *)(temp_v3 + 0x20) + (*(float *)(temp_v3 + 0x2c) - *(float *)(temp_v3 + 0x20)) * 0.16666667f
  ;
  *(float *)(temp_v3 + 0x24) =
       *(float *)(temp_v3 + 0x24) + (*(float *)(temp_v3 + 0x30) - *(float *)(temp_v3 + 0x24)) * 0.33333334f
  ;
  FUN_002e364c(temp_v3 + 0x28);
  FUN_00327ee8();
  return;
}
