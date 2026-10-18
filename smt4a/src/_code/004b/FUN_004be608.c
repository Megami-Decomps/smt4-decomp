/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004be608` (_code @ 0x4be608, 0x370 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057f25c; /* 0x57f25c */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00203d04. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_00275f44. */
extern unsigned int FUN_002a4894(int);
extern int FUN_002a4b60(void);
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0034913c. */
extern int FUN_00357bc8(unsigned int, char *);
/* Supplied declaration required: FUN_0035d03c. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_003e4e4c. */
/* Supplied declaration required: FUN_004be1c8. */
/* Supplied declaration required: FUN_004bea0c. */
/* Supplied declaration required: FUN_004bf174. */


unsigned int FUN_004be608(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  switch(*(unsigned int *)(param_1 + 8)) {
  case 1:
    FUN_004be1c8(param_1);
    break;
  case 2:
    FUN_003343f0(1);
    FUN_00163aa4(param_1 + 0x30);
    if (*(char *)(param_1 + 0xba) != '\0') {
      FUN_003343f0(0);
      temp_v0 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 8) = temp_v0;
      if (temp_v0 == 3) {
        temp_v1 = 1;
      }
      else {
        if (temp_v0 != 4) {
          return 0;
        }
        temp_v1 = 2;
      }
      *(unsigned int *)(param_1 + 0x344) = temp_v1;
    }
    break;
  case 3:
    FUN_004bea0c(param_1);
    break;
  case 4:
    FUN_004bf174(param_1);
    break;
  case 5:
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 800));
    if (temp_v0 != 2) {
      return 0;
    }
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_0034913c();
    }
    temp_v0 = FUN_002a4b60();
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 4) != '\x01') {
        *(unsigned int *)(param_1 + 8) = 3;
        FUN_003343f0(0);
        FUN_001681cc(0xf0);
        return 0;
      }
      *(unsigned int *)(param_1 + 8) = 9;
      temp_v1 = 0x11f;
      FUN_001681cc(temp_v1);
      return 0;
    }
    temp_v1 = 6;
    *(unsigned int *)(param_1 + 8) = temp_v1;
    break;
  case 6:
    temp_v0 = FUN_003e4d68(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
    if (temp_v0 == 0) {
      return 0;
    }
    FUN_003e4e4c(*(unsigned short *)(temp_v0 + 300));
    *(unsigned int *)(param_1 + 0x328) = *(unsigned int *)(param_1 + 0x32c);
    FUN_0035d03c(0);
    if (*(char *)(param_1 + 4) == '\x01') {
      temp_v1 = 0xb;
    }
    else {
      FUN_003343f0(0);
      FUN_001681cc(0x11b);
      temp_v1 = 3;
    }
    *(unsigned int *)(param_1 + 8) = temp_v1;
    break;
  case 7:
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 800));
    if (temp_v0 != 2) {
      return 0;
    }
    temp_v0 = FUN_002a4b60();
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 8) = 3;
      temp_v1 = 0xf0;
      FUN_001681cc(temp_v1);
      return 0;
    }
    temp_v1 = 8;
    *(unsigned int *)(param_1 + 8) = temp_v1;
    break;
  case 8:
    FUN_003e4e4c(0);
    *(unsigned int *)(param_1 + 0x328) = 0xffffffff;
    FUN_0035d03c(0);
    FUN_001681cc(0xf0);
    temp_v1 = 3;
    *(unsigned int *)(param_1 + 8) = temp_v1;
    break;
  case 9:
    FUN_00228b04(param_1 + 0x260,1);
    temp_v1 = FUN_002a4894(param_1 + 0x260);
    *(unsigned int *)(param_1 + 0x2f4) = temp_v1;
    *(unsigned int *)(param_1 + 0x32c) = temp_v1;
    temp_v0 = 0;
    FUN_001517b4(0,1);
    if (temp_v0 != 0) {
      FUN_00203d04(1);
      FUN_001641b4(0x100020e);
      *(unsigned int *)(param_1 + 8) = 10;
      *(unsigned int *)(param_1 + 0xc) = 6;
      temp_v0 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x31c),"SetMainPartner2");
      if (-1 < temp_v0) {
        FUN_00275f44(*(unsigned int *)(param_1 + 800));
      }
    }
    break;
  case 10:
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 800));
    if (temp_v0 != 2) {
      return 0;
    }
    FUN_0034913c();
    temp_v1 = *(unsigned int *)(param_1 + 0xc);
    *(unsigned int *)(param_1 + 8) = temp_v1;
    break;
  case 0xb:
    if (*(char *)(param_1 + 4) != '\x01') {
      FUN_002c8538(0);
      FUN_0022e774();
    }
    temp_v0 = *(int *)(param_1 + 800);
    if (temp_v0 != 0) {
      FUN_0019c364();
      *(unsigned int *)(param_1 + 800) = 0;
    }
    FUN_003343f0((int)DAT_0057f25c);
    *(unsigned int *)(param_1 + 8) = 0;
    break;
  case 0xd:
    if (*(char *)(param_1 + 4) != '\x01') {
      FUN_002c8538(0);
      FUN_0022e774();
    }
    temp_v0 = *(int *)(param_1 + 800);
    if (temp_v0 != 0) {
      FUN_0019c364();
      *(unsigned int *)(param_1 + 800) = 0;
    }
    FUN_003343f0((int)DAT_0057f25c);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return 0;
}
