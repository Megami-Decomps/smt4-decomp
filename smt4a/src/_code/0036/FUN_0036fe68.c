/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036fe68` (_code @ 0x36fe68, 0x30c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_0058069c; /* 0x58069c */
extern signed char DAT_005806b4; /* 0x5806b4 */
extern signed char DAT_005806b5; /* 0x5806b5 */
extern signed char DAT_005806b6; /* 0x5806b6 */
extern int DAT_005806b8; /* 0x5806b8 */
extern int DAT_00581288; /* 0x581288 */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern int DAT_005f1610; /* 0x5f1610 */
extern unsigned char DAT_005f161f; /* 0x5f161f */
extern signed char DAT_005f1620; /* 0x5f1620 */
extern unsigned char DAT_005f185c; /* 0x5f185c */

extern int FUN_00162858(void);
/* Supplied declaration required: FUN_002235f4. */
/* Supplied declaration required: FUN_00234b30. */
/* Supplied declaration required: FUN_0023534c. */
/* Supplied declaration required: FUN_0023a52c. */
/* Supplied declaration required: FUN_00249a08. */
/* Supplied declaration required: FUN_0024b078. */
/* Supplied declaration required: FUN_002737a8. */
/* Supplied declaration required: FUN_00296530. */
/* Supplied declaration required: FUN_00297c3c. */
/* Supplied declaration required: FUN_002b9520. */
/* Supplied declaration required: FUN_002c2160. */
/* Supplied declaration required: FUN_002c2358. */
/* Supplied declaration required: FUN_002c23cc. */
/* Supplied declaration required: FUN_002c2610. */
/* Supplied declaration required: FUN_002c3398. */
extern int FUN_002de890(void);
/* Supplied declaration required: FUN_002efc0c. */
/* Supplied declaration required: FUN_0031416c. */
/* Supplied declaration required: FUN_0033099c. */
/* Supplied declaration required: FUN_0033a988. */
/* Supplied declaration required: FUN_00357a90. */
/* Supplied declaration required: FUN_003794bc. */
/* Supplied declaration required: FUN_00379be8. */
/* Supplied declaration required: FUN_0037a078. */
extern int FUN_003b582c(void);
/* Supplied declaration required: FUN_003e5b9c. */


unsigned int FUN_0036fe68(void)

{
/* irregular: 24 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  if ((DAT_005f1620 != '\0') && (DAT_005806b6 == '\0')) {
    DAT_005806b6 = '\x01';
    FUN_002efc0c(1);
  }
  temp_v0 = DAT_00581288;
  if (DAT_005f1610 == 3) {
    if (DAT_005806b4 == '\0') {
      FUN_0024b078();
      DAT_005806b4 = '\x01';
    }
    temp_v0 = FUN_002de890();
    if (temp_v0 == 0) {
      return 0;
    }
    DAT_005806b4 = 0;
    if (DAT_005806b6 != '\0') {
      FUN_002efc0c(0);
      DAT_005806b6 = '\0';
    }
    return 1;
  }
  if (DAT_005806b4 == '\0') {
    DAT_005806b8 = 0;
    DAT_005806b4 = '\x01';
    DAT_005806b5 = '\0';
  }
  if (DAT_005806b5 != '\0') {
    DAT_005f1620 = '\0';
    FUN_002c2160(0);
    DAT_005806b5 = '\0';
    DAT_005806b4 = 0;
    if (DAT_005806b6 != '\0') {
      FUN_002efc0c(0);
      DAT_005806b6 = '\0';
    }
    return 1;
  }
  if (DAT_005806b8 != 0) {
    if (DAT_005806b8 == 10) {
      DAT_005f185c = 1;
      FUN_002c2610();
      FUN_0033099c();
      FUN_002c2160(1);
      FUN_00379be8();
    }
    if (DAT_005806b8 == 0xb) {
      DAT_005f161f = 1;
      *(unsigned char *)(DAT_0058069c + 10) = 0;
      FUN_002235f4();
      FUN_002c2610();
    }
    if (0x13 >= DAT_005806b8) {
      DAT_005806b8 = DAT_005806b8 + 1;
    }
  }
  else {
    puVar3 = (unsigned int *)(DAT_00581288 + 0x20);
    temp_v1 = *(unsigned int *)(DAT_00581288 + 0x24);
    *(unsigned int *)(DAT_00581288 + 0x28) = *(unsigned int *)(DAT_00581288 + 0x1c);
    *(unsigned int *)(temp_v0 + 0x2c) = *puVar3;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v1;
    DAT_005806b8 = DAT_005806b8 + 1;
  }
  if (DAT_005806b8 < 100) {
    if ((DAT_005806b8 >= 0xd) && (temp_v0 = FUN_003b582c(), temp_v0 != 0)) {
      FUN_002c2358();
      FUN_0033a988();
      FUN_00249a08();
      FUN_002c3398(0);
      FUN_0031416c(200,200,200,0x82,0x82,0x82,0x1e,0x1e,0x1e,0x96,0x96,0x96);
      DAT_005806b8 = 100;
      DAT_005f1620 = '\x01';
      FUN_0037a078();
    }
  }
  else {
    temp_v0 = FUN_00162858();
    if (temp_v0 == 0) {
      DAT_005f185c = 0;
      FUN_002c23cc(1);
      DAT_005f161f = 0;
      FUN_00357a90();
      FUN_002b9520();
      FUN_003794bc(DAT_005f1600);
      FUN_00297c3c();
      FUN_0023534c();
      FUN_002737a8();
      FUN_00234b30();
      *(unsigned char *)(DAT_0058069c + 10) = 1;
      FUN_002235f4();
      FUN_003e5b9c(*(unsigned int *)(DAT_00581288 + 0x1a8));
      FUN_00296530();
      FUN_0023a52c();
      DAT_005806b5 = 1;
      return 0;
    }
  }
  return 0;
}
