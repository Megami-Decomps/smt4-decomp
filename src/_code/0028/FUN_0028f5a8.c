/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f5a8` (_code @ 0x28f5a8, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0028f5a8_arg0 fn_0028f5a8_arg0;
struct fn_0028f5a8_arg0 {
    byte field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x1];
    unsigned char field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x3];
    byte field_0x6; /* +0x6 */
    byte field_0x7; /* +0x7 */
    unsigned char pad_0x8[0x1a2];
    ushort field_0x1aa; /* +0x1aa */
    ushort field_0x1ac; /* +0x1ac */
    ushort field_0x1ae; /* +0x1ae */
};

extern int DAT_0049f91c; /* 0x49f91c */

extern int FUN_00240b9c(void);
extern unsigned char *FUN_00240e04(fn_0028f5a8_arg0 *);
extern int FUN_002990bc(void);
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002c0ba8. */


unsigned char FUN_0028f5a8(fn_0028f5a8_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  fn_0028f5a8_arg0 *pfVar3;
  unsigned char *pbVar4;
  
  temp_v1 = FUN_00240b9c();
  if (temp_v1 == 0) {
    return 0;
  }
  pfVar3 = param_1;
  FUN_002b6700();
  if ((pfVar3->field_0x1aa != 0) && (temp_v1 = FUN_002990bc(), temp_v1 != 0)) {
    return 0;
  }
  if ((pfVar3->field_0x1ac != 0) && (temp_v1 = FUN_002990bc(), temp_v1 != 0)) {
    return 0;
  }
  pbVar4 = (unsigned char *)FUN_00240e04(param_1);
  if (((*pbVar4 & 8) != 0) && ((pfVar3->field_0x7 & 2) == 0)) {
    return pfVar3->field_0x7 & 2;
  }
  if (param_1 >= (fn_0028f5a8_arg0 *)0x15e) {
    FUN_002b6700();
    if (((param_1 != (fn_0028f5a8_arg0 *)0x0) && (param_1->field_0x6 == 9)) &&
       (DAT_0049f91c == 0x18)) {
      return 0;
    }
  }
  else {
    temp_v0 = pfVar3->field_0x1ae;
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          if ((((*(short *)(pfVar3 + 1) == 0) || (temp_v1 = FUN_002c0ba8(), temp_v1 == 0)) ||
              ((*(short *)&pfVar3[1].field_0x2 != 0 && (temp_v1 = FUN_002c0ba8(), temp_v1 != 0)))) &&
             (temp_v1 = FUN_002c0ba8(0x560), temp_v1 == 0)) {
            return 1;
          }
          return 0;
        }
        temp_v1 = FUN_002c0ba8(0x224);
      }
      else {
        temp_v1 = FUN_002c0ba8(0x223);
      }
      if (temp_v1 == 0) {
        return 0;
      }
    }
    else {
      temp_v1 = FUN_002c0ba8(0x223);
      if (temp_v1 != 0) {
        return 0;
      }
      temp_v1 = FUN_002c0ba8(0x224);
      if (temp_v1 != 0) {
        return 0;
      }
      temp_v1 = FUN_002c0ba8(0x295);
      if (temp_v1 != 0) {
        return 0;
      }
    }
  }
  if ((((*(short *)(pfVar3 + 1) == 0) || (temp_v1 = FUN_002c0ba8(), temp_v1 == 0)) ||
      ((*(short *)&pfVar3[1].field_0x2 != 0 && (temp_v1 = FUN_002c0ba8(), temp_v1 != 0)))) &&
     (temp_v1 = FUN_002c0ba8(0x560), temp_v1 == 0)) {
    return 1;
  }
  return 0;
}
