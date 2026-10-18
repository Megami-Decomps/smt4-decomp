/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc728` (_code @ 0x2fc728, 0x13c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002fc728_arg0 fn_002fc728_arg0;
struct fn_002fc728_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    int field_0x8; /* +0x8 */
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0xf];
    undefined4 field_0x20; /* +0x20 */
    undefined1 field_0x24; /* +0x24 */
    unsigned char pad_0x25[0xf];
    undefined4 field_0x34; /* +0x34 */
    undefined1 field_0x38; /* +0x38 */
    unsigned char pad_0x39[0xf];
    undefined4 field_0x48; /* +0x48 */
    undefined1 field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0xf];
    undefined4 field_0x5c; /* +0x5c */
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0xf];
    undefined4 field_0x70; /* +0x70 */
    undefined1 field_0x74; /* +0x74 */
    unsigned char pad_0x75[0x37];
    unsigned char field_0xac; /* +0xac */
    unsigned char pad_0xad[0x53];
    undefined4 field_0x100; /* +0x100 */
    undefined4 field_0x104; /* +0x104 */
    unsigned char pad_0x108[0x8];
    undefined4 field_0x110; /* +0x110 */
    undefined4 field_0x114; /* +0x114 */
    unsigned char pad_0x118[0x4];
    int field_0x11c; /* +0x11c */
    undefined2 field_0x120; /* +0x120 */
    unsigned char pad_0x122[0x1];
    byte field_0x123; /* +0x123 */
    unsigned char pad_0x124[0x2];
    byte field_0x126; /* +0x126 */
    unsigned char pad_0x127[0x1];
    undefined1 field_0x128; /* +0x128 */
    unsigned char pad_0x129[0xb];
    int field_0x134; /* +0x134 */
    unsigned char pad_0x138[0x4];
    int field_0x13c; /* +0x13c */
    unsigned char pad_0x140[0x8];
    int field_0x148; /* +0x148 */
};

extern int FUN_0020194c(unsigned char, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00259818. */
/* Supplied declaration required: FUN_002599bc. */
/* Supplied declaration required: FUN_002599f8. */
/* Supplied declaration required: FUN_0026f174. */
/* Supplied declaration required: FUN_0026f474. */
/* Supplied declaration required: FUN_0026fa70. */
extern int FUN_0028a580(void);
/* Supplied declaration required: FUN_002bd4a4. */
/* Supplied declaration required: FUN_002c3b44. */
/* Supplied declaration required: FUN_002c4b30. */


unsigned int FUN_002fc728(fn_002fc728_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v2 = 0;
  temp_v0 = 0;
  if (param_1->field_0x126 != 0) {
    param_1->field_0x126 = 0;
    FUN_002c4b30(param_1->field_0x8,0x4c);
    FUN_002bd4a4(param_1->field_0x8,(int)(short)param_1->field_0x120,param_1->field_0x123,
                 param_1->field_0x13c + param_1->field_0x134 + param_1->field_0x148);
    FUN_002599f8();
    FUN_002599bc(param_1->field_0x8);
    if (param_1->field_0x120 == 0) {
      FUN_002c3b44(param_1->field_0x8 + 0x38,0x14);
    }
    FUN_0026f474(*(unsigned int *)&param_1->field_0x10,param_1->field_0x8,
                 *(unsigned int *)&param_1->field_0xac);
    FUN_0026f174(*(unsigned int *)&param_1->field_0xc,param_1->field_0x8);
    FUN_00259818(param_1->field_0x8);
    FUN_0026fa70(*(unsigned int *)&param_1->field_0x4,1);
    param_1->field_0x100 = 0xffffffff;
    if (param_1->field_0x11c == 0) {
      temp_v2 = 6;
    }
    else {
      temp_v2 = 3;
    }
    param_1->field_0x104 = temp_v2;
    param_3 = (unsigned int)(unsigned short)param_1->field_0x120;
    temp_v0 = 2;
    param_2 = 5;
    param_1->field_0x114 = 2;
    param_1->field_0x110 = 5;
    param_1->field_0x48 = 0;
    param_1->field_0x4c = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    param_1->field_0x70 = 0;
    param_1->field_0x74 = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    temp_v2 = 2;
    param_1->field_0x128 = 1;
  }
  temp_v3 = FUN_0020194c(temp_v0,param_2,param_3);
  temp_v1 = temp_v2;
  if (temp_v3 != 0) {
    temp_v3 = FUN_0028a580();
    temp_v1 = 0;
    if (temp_v3 != 0) {
      param_1->field_0x126 = 1;
      temp_v1 = temp_v2;
    }
  }
  return temp_v1;
}
