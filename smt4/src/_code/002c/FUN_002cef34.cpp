/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cef34` (_code @ 0x2cef34, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd420(...);

typedef struct fn_002cef34_arg0 fn_002cef34_arg0;
struct fn_002cef34_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    byte field_0x3c; /* +0x3c */
    byte field_0x3d; /* +0x3d */
    byte field_0x3e; /* +0x3e */
    unsigned char pad_0x3f[0xc];
    byte field_0x4b; /* +0x4b */
    byte field_0x4c; /* +0x4c */
    byte field_0x4d; /* +0x4d */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0043e2ac; /* 0x43e2ac */

/* Supplied declaration required: FUN_002bd420. */


void FUN_002cef34(fn_002cef34_arg0 *param_1)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  temp_v2 = DAT_0043e2ac + 0x88;
  while( 1 ) {
    temp_v0 = temp_v2 + temp_v3 * 0x4c;
    temp_v1 = temp_v0 + 0x2478c;
    temp_v4 = *(short *)(temp_v0 + 0x247c0) == 0;
    if (temp_v4) {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0x247d4);
    }
    if (temp_v4 && temp_v1 == 0) break;
    temp_v3 = temp_v3 + 1;
    if ((int)temp_v3 >= 0xc) {
      temp_v3 = 0xb;
LAB_002cef94:
      if (temp_v3 != 0) {
LAB_002cefa0:
        temp_v2 = 0;
        temp_v1 = temp_v3;
        while (temp_v1 = temp_v1 - 1, -1 < (int)temp_v1) {
          temp_v0 = 0;
          if (temp_v1 < 0xc) {
            temp_v0 = DAT_0043e2ac + temp_v1 * 0x4c + 0x24814;
          }
          if (temp_v3 - temp_v2 < 0xc) {
            FUN_002bd420(temp_v0,DAT_0043e2ac + (temp_v3 - temp_v2) * 0x4c + 0x24814,0x4c);
          }
          temp_v2 = temp_v2 + 1;
        }
        temp_v2 = DAT_0043e2ac + 0x88;
      }
      FUN_002bd420(param_1,temp_v2 + 0x2478c,0x4c);
      return;
    }
  }
  if (temp_v3 != 0xffffffff) goto LAB_002cef94;
  temp_v3 = 0xb;
  goto LAB_002cefa0;
}

} /* extern "C" */
