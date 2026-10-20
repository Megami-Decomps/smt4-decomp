/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f304` (_code @ 0x28f304, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);
int gameFlagIsSet(...);

typedef struct fn_0028f304_arg0 fn_0028f304_arg0;
struct fn_0028f304_arg0 {
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

extern int g_gameState; /* 0x49f91c */

extern int FUN_00240a6c(void);
extern unsigned char *FUN_00240cd4(fn_0028f304_arg0 *);
extern int FUN_00298e20(void);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: gameFlagIsSet. */


unsigned char FUN_0028f304(fn_0028f304_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  fn_0028f304_arg0 *pfVar3;
  unsigned char *pbVar4;
  
  temp_v1 = FUN_00240a6c();
  if (temp_v1 == 0) {
    return 0;
  }
  pfVar3 = param_1;
  dataTable1bOr1cGetRecord();
  if ((pfVar3->field_0x1aa != 0) && (temp_v1 = FUN_00298e20(), temp_v1 != 0)) {
    return 0;
  }
  if ((pfVar3->field_0x1ac != 0) && (temp_v1 = FUN_00298e20(), temp_v1 != 0)) {
    return 0;
  }
  pbVar4 = (unsigned char *)FUN_00240cd4(param_1);
  if (((*pbVar4 & 8) != 0) && ((pfVar3->field_0x7 & 2) == 0)) {
    return pfVar3->field_0x7 & 2;
  }
  if (param_1 >= (fn_0028f304_arg0 *)0x15e) {
    dataTable1bOr1cGetRecord();
    if (((param_1 != (fn_0028f304_arg0 *)0x0) && (param_1->field_0x6 == 9)) &&
       (g_gameState == 0x18)) {
      return 0;
    }
  }
  else {
    temp_v0 = pfVar3->field_0x1ae;
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          if ((((*(short *)(pfVar3 + 1) == 0) || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)) ||
              ((*(short *)&pfVar3[1].field_0x2 != 0 && (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
             (temp_v1 = gameFlagIsSet(0x560), temp_v1 == 0)) {
            return 1;
          }
          return 0;
        }
        temp_v1 = gameFlagIsSet(0x224);
      }
      else {
        temp_v1 = gameFlagIsSet(0x223);
      }
      if (temp_v1 == 0) {
        return 0;
      }
    }
    else {
      temp_v1 = gameFlagIsSet(0x223);
      if (temp_v1 != 0) {
        return 0;
      }
      temp_v1 = gameFlagIsSet(0x224);
      if (temp_v1 != 0) {
        return 0;
      }
      temp_v1 = gameFlagIsSet(0x295);
      if (temp_v1 != 0) {
        return 0;
      }
    }
  }
  if ((((*(short *)(pfVar3 + 1) == 0) || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)) ||
      ((*(short *)&pfVar3[1].field_0x2 != 0 && (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
     (temp_v1 = gameFlagIsSet(0x560), temp_v1 == 0)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
