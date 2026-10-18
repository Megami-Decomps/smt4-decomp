/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126774` (_code @ 0x126774, 0x194 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e20ec; /* 0x4e20ec */
extern int DAT_004e3180; /* 0x4e3180 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00138800. */
/* Supplied declaration required: FUN_00141940. */
/* Supplied declaration required: FUN_002bcd94. */
extern char FUN_002bcdf8(unsigned char *, int, int, unsigned int);
extern int FUN_002bf85c(unsigned char *);


int FUN_00126774(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int in_fpscr;
  
  temp_v3 = DAT_004e3180;
  puVar5 = &DAT_004e1f68;
  if (DAT_004e3180 == 0) {
    return -1;
  }
  if (*(int *)(DAT_004e3180 + 0x20) == 0) {
    temp_v2 = 0;
  }
  else if (*(int *)(DAT_004e3180 + 0x24) == 0) {
    temp_v2 = 1;
  }
  else if (*(int *)(DAT_004e3180 + 0x28) == 0) {
    temp_v2 = 2;
  }
  else {
    if (*(int *)(DAT_004e3180 + 0x2c) != 0) {
      return -1;
    }
    temp_v2 = 3;
  }
  puVar6 = &DAT_004e1f68;
  temp_v1 = FUN_002bf85c(&DAT_004e1f68);
  if (temp_v1 == 0) {
    return temp_v2;
  }
  FUN_00141940(&DAT_004e1f68,param_1);
  if (puVar6 == (unsigned char *)0x0) {
    return temp_v2;
  }
  FUN_00141940(&DAT_004e1f68,param_1);
  if (*(char *)(temp_v3 + 0x3b) != '\0') {
    if (puVar5 == (unsigned char *)0x3) {
      temp_v1 = param_1;
      FUN_00138800();
      if (temp_v1 == 0) {
        return temp_v2;
      }
    }
    else if (puVar5 != (unsigned char *)0x2) {
      return temp_v2;
    }
  }
  else {
    if (puVar5 == (unsigned char *)0x3) {
      return temp_v2;
    }
    if (puVar5 != (unsigned char *)0x2) {
      return temp_v2;
    }
  }
  temp_v3 = temp_v3 + temp_v2 * 4;
  temp_v0 = FUN_002bcdf8(&DAT_004e20ec,temp_v3 + 0x20,param_1,0);
  if (param_2 >= 0x80) {
    param_2 = 0x7f;
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else if (param_2 != 0) {
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if (*(int *)(temp_v3 + 0x20) != 0) {
    FUN_002bcd94(*(int *)(temp_v3 + 0x20),0);
  }
  if (*(int *)(temp_v3 + 0x20) != 0) {
    FUN_002bcd94(*(int *)(temp_v3 + 0x20),param_3);
  }
  if (temp_v0 != '\0') {
    temp_v2 = -1;
  }
  return temp_v2;
}
