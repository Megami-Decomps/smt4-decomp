/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019931c` (_code @ 0x19931c, 0x3d8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_00219510(); /* 0x219510 */
extern int DAT_00435de8; /* 0x435de8 */
extern unsigned int DAT_00435dec; /* 0x435dec */

/* Supplied declaration required: FUN_001b02e8. */
extern int FUN_0023de14(void);
extern int FUN_0028ec44(unsigned int);
extern int FUN_0028ec78(unsigned int);
/* Supplied declaration required: FUN_0028ec90. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_0029eb58. */
/* Supplied declaration required: FUN_0029edfc. */
/* Supplied declaration required: FUN_0029fae8. */
extern int FUN_002a89e4(int);
extern int FUN_002a8a08(void);
extern unsigned int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002b7f0a. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_00394fac(unsigned int);
/* Supplied declaration required: FUN_003bf40c. */


void FUN_0019931c(int param_1)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  short *psVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v1 = param_1;
  FUN_003bf40c();
  *(int *)(param_1 + 0x306c) = temp_v1;
  FUN_0028ec90(param_1);
  FUN_001b02e8(param_1);
  temp_v1 = FUN_00293c98();
  temp_v2 = *(int *)(param_1 + 0x305c);
  temp_v5 = param_1 + 0x3218;
  if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x40) != 0) {
    if ((temp_v2 == 0) && (temp_v1 = FUN_002c0ba8(0x410), temp_v1 != 0)) {
      temp_v3 = FUN_002b66ec();
      temp_v7 = *(short *)(temp_v3 + 2) != 0;
      if (temp_v7) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
      }
      if (temp_v7 && temp_v3 != 0) {
        FUN_0029fae8(temp_v5,0x191,6,1,1,1);
        FUN_0029edfc(temp_v5,DAT_00435de8 + 2);
      }
      else {
        FUN_0029fae8(temp_v5,400,6,1,1,1);
        FUN_0029edfc(temp_v5,DAT_00435de8 + 1);
      }
    }
    else {
      FUN_0029fae8(temp_v5,400,6,1,1,1);
      FUN_0029edfc(temp_v5,DAT_00435de8 + 1);
    }
  }
  else {
    if (temp_v2 != 0) {
      temp_v1 = param_1 + temp_v2 * 0x10;
      temp_v4 = 1;
      temp_v0 = *(short *)(temp_v1 + 0x341e);
      if (*(short *)(temp_v1 + 0x341c) != 0) {
        temp_v4 = 2;
      }
      temp_v2 = 0;
      temp_v6 = 3;
      psVar5 = (short *)(temp_v1 + 0x341c);
      do {
        if (temp_v0 != 0) {
          temp_v4 = temp_v4 + 1;
        }
        temp_v0 = psVar5[3];
        if (psVar5[2] != 0) {
          temp_v2 = temp_v2 + 1;
        }
        temp_v6 = temp_v6 - 1;
        psVar5 = psVar5 + 2;
      } while (temp_v6 != 0);
      temp_v4 = temp_v4 + temp_v2;
      temp_v0 = *(short *)(temp_v1 + 0x342a);
    }
    else {
      temp_v2 = 2;
      temp_v1 = FUN_002c0ba8(0x410);
      if (temp_v1 != 0) {
        temp_v3 = FUN_002b66ec();
        temp_v7 = *(short *)(temp_v3 + 2) != 0;
        if (temp_v7) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
        }
        if (!temp_v7 || temp_v3 == 0) {
          temp_v2 = 1;
        }
      }
      else {
        temp_v2 = 1;
      }
      temp_v1 = 3;
      temp_v0 = *(short *)(param_1 + 0x341e);
      if (*(short *)(param_1 + 0x341c) != 0) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v4 = 0;
      psVar5 = (short *)(param_1 + 0x341c);
      do {
        if (temp_v0 != 0) {
          temp_v2 = temp_v2 + 1;
        }
        temp_v0 = psVar5[3];
        if (psVar5[2] != 0) {
          temp_v4 = temp_v4 + 1;
        }
        temp_v1 = temp_v1 - 1;
        psVar5 = psVar5 + 2;
      } while (temp_v1 != 0);
      temp_v4 = temp_v4 + temp_v2;
      temp_v0 = *(short *)(param_1 + 0x342a);
    }
    if (temp_v0 != 0) {
      temp_v4 = temp_v4 + 1;
    }
    FUN_0029fae8(temp_v5,temp_v4,6,1,0,1);
  }
  temp_v1 = FUN_00293c98();
  temp_v2 = param_1 + 0x327c;
  if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x40) != 0) {
    temp_v1 = FUN_00293c98();
    FUN_0029fae8(temp_v2,(int)*(short *)(temp_v1 + 0xb4),6,1,1,1);
    FUN_0029edfc(temp_v2,DAT_00435dec);
  }
  else {
    FUN_0029fae8(temp_v2,1,6,1,0,1);
  }
  FUN_002c4b30(param_1 + 0x3480,0x78);
  temp_v1 = 0;
  temp_v3 = 1;
  do {
    temp_v2 = FUN_0028ec78(temp_v3);
    if ((temp_v2 != 0) && (temp_v2 = FUN_0028ec44(temp_v3), temp_v2 != 0)) {
      if (*(int *)(param_1 + 0x305c) != 0) {
        temp_v2 = FUN_002a8a08();
        if (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v2 + 0x9107)) {
          temp_v2 = FUN_002a8a08();
          temp_v2 = FUN_002a89e4((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v2 + 0x9107));
          if ((temp_v2 != 0) && (temp_v2 = FUN_00394fac(temp_v3), temp_v2 != 0)) {
            temp_v2 = temp_v1 * 2;
            temp_v1 = temp_v1 + 1;
            *(short *)(param_1 + temp_v2 + 0x3480) = (short)temp_v3;
          }
        }
      }
      else {
        temp_v2 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(param_1 + temp_v2 + 0x3480) = (short)temp_v3;
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x3d) {
      FUN_0029fae8(param_1 + 0x32e0,temp_v1,6,1,0,1);
      FUN_002b7f0a(param_1 + 0x3480,temp_v1,2,FUN_00219510);
      FUN_0029eb58(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088,0);
      temp_v1 = FUN_0023de14();
      if (temp_v1 != 0) {
        FUN_0029eb58(param_1 + 0x3088,1);
      }
      *(int *)(param_1 + 0x340c) = temp_v5;
      return;
    }
  } while( 1 );
}
