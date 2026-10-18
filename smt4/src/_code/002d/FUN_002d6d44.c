/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d6d44` (_code @ 0x2d6d44, 0x5ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019e0c0. */
/* Supplied declaration required: FUN_0024aa74. */
/* Supplied declaration required: FUN_002579bc. */
extern unsigned int FUN_00259800(void);
/* Supplied declaration required: FUN_0026d5a4. */
/* Supplied declaration required: FUN_0026ef04. */
/* Supplied declaration required: FUN_0026f188. */
extern unsigned int FUN_0026f1f0(void);
/* Supplied declaration required: FUN_0026f204. */
/* Supplied declaration required: FUN_0026f800. */
/* Supplied declaration required: FUN_0028a368. */
/* Supplied declaration required: FUN_0028a924. */
extern int FUN_00290e9c(void);
extern int FUN_00290eb0(void);
/* Supplied declaration required: FUN_00295214. */
/* Supplied declaration required: FUN_00295228. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_002973d8. */
/* Supplied declaration required: FUN_0029e774. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002bd2b4. */
/* Supplied declaration required: FUN_002c3940. */
/* Supplied declaration required: FUN_003111e8. */


unsigned int FUN_002d6d44(int param_1)

{
/* irregular: 19 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  switch(*(unsigned int *)(param_1 + 0x100)) {
  case 0:
    temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xa0));
    if (temp_v1 != 2) {
      temp_v1 = FUN_00290e9c();
      if (temp_v1 == *(int *)(param_1 + 0x15c)) {
        return 0;
      }
      temp_v1 = FUN_00290eb0();
      if (temp_v1 == 0) {
        return 0;
      }
      temp_v1 = FUN_00290e9c();
      *(int *)(param_1 + 0x15c) = temp_v1;
      if (temp_v1 != 0) {
        temp_v3 = FUN_0026f1f0();
        temp_v2 = 0x15;
      }
      else {
        temp_v3 = FUN_0026f1f0();
        temp_v2 = 0x14;
      }
      FUN_0026f188(temp_v3,temp_v2);
      return 0;
    }
    temp_v0 = FUN_002973d8();
    if (temp_v0 < 2) {
      *(char *)(param_1 + 0x123) = (char)temp_v0;
    }
    temp_v3 = FUN_00259800();
    FUN_002bd2b4(*(int *)(param_1 + 8),(int)*(short *)(*(int *)(param_1 + 8) + 0x34),
                 *(unsigned char *)(param_1 + 0x123),temp_v3);
    if (*(short *)(*(int *)(param_1 + 8) + 0x34) == 0) {
      FUN_002c3940(*(int *)(param_1 + 8) + 0x38,0x14);
    }
    if (*(int *)(param_1 + 0x11c) != 0) {
      *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x104) = 1;
      return 0;
    }
    *(unsigned short *)(param_1 + 0x120) = 0;
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned int *)(param_1 + 0x104) = 7;
    *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x114) = 2;
    *(unsigned int *)(param_1 + 0x110) = 5;
    *(unsigned char *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned char *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0x70) = 0;
    *(unsigned char *)(param_1 + 0x74) = 0;
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned char *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x34) = 0;
    *(unsigned char *)(param_1 + 0x38) = 0;
    break;
  case 1:
    temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xa0));
    if (temp_v1 != 2) {
      return 0;
    }
    temp_v1 = FUN_002973d8();
    if (temp_v1 == 0) {
      *(unsigned int *)(param_1 + 0x110) = 5;
      *(unsigned int *)(param_1 + 0x114) = 3;
      *(unsigned int *)(param_1 + 0x48) = 0;
      *(unsigned char *)(param_1 + 0x4c) = 0;
      *(unsigned int *)(param_1 + 0x5c) = 0;
      *(unsigned char *)(param_1 + 0x60) = 0;
      *(unsigned int *)(param_1 + 0x70) = 0;
      *(unsigned char *)(param_1 + 0x74) = 0;
      *(unsigned int *)(param_1 + 0x20) = 0;
      *(unsigned char *)(param_1 + 0x24) = 0;
      *(unsigned int *)(param_1 + 0x34) = 0;
      *(unsigned char *)(param_1 + 0x38) = 0;
      FUN_0026f800(*(unsigned int *)(param_1 + 4),0);
      FUN_0028a924(0x10,0,0xffffffff);
      FUN_0029e774();
      FUN_0028a368(1);
      FUN_0024aa74();
      FUN_002579bc(1);
      *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x104) = 0xffffffff;
      return 2;
    }
    if (temp_v1 != 1) {
      return 0;
    }
    *(unsigned short *)(param_1 + 0x120) = 0;
    temp_v3 = FUN_00259800();
    FUN_002bd2b4(*(int *)(param_1 + 8),(int)*(short *)(param_1 + 0x120),
                 *(unsigned char *)(*(int *)(param_1 + 8) + 0x37),temp_v3);
    if (*(short *)(param_1 + 0x120) == 0) {
      FUN_002c3940(*(int *)(param_1 + 8) + 0x38,0x14);
    }
    FUN_0026f204(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0xac));
    *(unsigned int *)(param_1 + 0x114) = 2;
    *(unsigned int *)(param_1 + 0x110) = 5;
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned char *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned char *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0x70) = 0;
    *(unsigned char *)(param_1 + 0x74) = 0;
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned char *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x34) = 0;
    *(unsigned char *)(param_1 + 0x38) = 0;
    FUN_002b8838(200);
    *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x104) = 7;
    return 2;
  case 2:
    temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xa0));
    if (temp_v1 != 2) {
      return 0;
    }
    FUN_002579bc(1);
    *(unsigned int *)(param_1 + 0x110) = 3;
    FUN_0024aa74();
    FUN_003111e8(1);
    temp_v2 = 0xffffffff;
    temp_v3 = 2;
    *(unsigned int *)(param_1 + 0x100) = temp_v2;
    return temp_v3;
  case 3:
    temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xa0));
    if (temp_v1 != 2) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x110) = 8;
    *(unsigned int *)(param_1 + 0x104) = 0xffffffff;
    break;
  case 4:
  case 5:
    temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xa0));
    if (temp_v1 != 2) {
      return 0;
    }
    temp_v1 = FUN_002973d8();
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x104) = 0xffffffff;
      FUN_002579bc(1);
      FUN_0024aa74();
      FUN_003111e8(1);
      *(unsigned int *)(param_1 + 0x110) = 3;
      return 2;
    }
    FUN_0026d5a4();
    temp_v3 = FUN_00259800();
    FUN_002bd2b4(*(int *)(param_1 + 8),(int)*(short *)(param_1 + 0x120),
                 *(unsigned char *)(*(int *)(param_1 + 8) + 0x37),temp_v3);
    FUN_0026f204(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0xac));
    FUN_0026ef04(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 0x104) = 7;
    *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x110) = 5;
    *(unsigned int *)(param_1 + 0x114) = 2;
    FUN_0026f800(*(unsigned int *)(param_1 + 4),1);
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned char *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned char *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0x70) = 0;
    *(unsigned char *)(param_1 + 0x74) = 0;
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned char *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x34) = 0;
    *(unsigned char *)(param_1 + 0x38) = 0;
    FUN_002b8838(200);
    FUN_00295228((int)*(short *)(param_1 + 0x120),0);
    break;
  case 6:
  case 9:
    temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xa0));
    if (temp_v1 != 2) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x110) = 8;
    *(unsigned int *)(param_1 + 0x104) = 0xffffffff;
    break;
  case 7:
    FUN_0019e0c0(*(unsigned int *)(param_1 + 0xa0));
    if (*(short *)(param_1 + 0x120) != 0) {
      temp_v4 = *(char *)(param_1 + 0x123) == '\x01';
      if (temp_v4) {
        temp_v3 = 100;
      }
      else {
        temp_v3 = 0;
      }
      *(unsigned int *)(param_1 + 0x148) = temp_v3;
      if (temp_v4) {
        temp_v3 = 0x11;
      }
      else {
        temp_v3 = 0x10;
      }
      *(unsigned int *)(param_1 + 0x138) = 0x10;
    }
    else {
      *(unsigned int *)(param_1 + 0x138) = 4;
      temp_v3 = 0x12;
      *(unsigned int *)(param_1 + 0x148) = 200;
    }
    temp_v2 = FUN_0026f1f0();
    FUN_0026f188(temp_v2,temp_v3);
    *(unsigned char *)(param_1 + 0x12a) = 1;
    *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x104) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x110) = 6;
    *(unsigned int *)(param_1 + 0x114) = 2;
    break;
  case 8:
    temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xa0));
    if (temp_v1 != 2) {
      return 0;
    }
    temp_v1 = FUN_002973d8();
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0x100) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x104) = 7;
      return 2;
    }
    *(unsigned char *)(param_1 + 0x141) = 0;
    *(unsigned int *)(param_1 + 0x98) = 0;
    *(unsigned int *)(param_1 + 0x110) = 7;
    *(unsigned int *)(param_1 + 0x114) = 8;
    *(unsigned char *)(param_1 + 0x9c) = 0;
    FUN_002b8838(0xbd);
    FUN_00295214(0);
    break;
  case 0xffffffff:
    if (*(int *)(param_1 + 0x104) == -1) {
      return 0;
    }
    FUN_00296f4c(*(unsigned int *)(param_1 + 0xa0),
                 *(unsigned int *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0xd8));
    temp_v2 = *(unsigned int *)(param_1 + 0x104);
    *(unsigned int *)(param_1 + 0x100) = temp_v2;
    return temp_v3;
  default:
    return temp_v3;
  }
  temp_v3 = 2;
  return temp_v3;
}
