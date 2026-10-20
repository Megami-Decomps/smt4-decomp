/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003707a8` (_code @ 0x3707a8, 0x3d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(...);
int FUN_00167f24(...);
int jyoucyuGetTableEntry(int);
int FUN_00180118(unsigned int);
int FUN_00184310(...);
int FUN_00237898(...);
int FUN_00275bb0(...);
int FUN_00275fe4(...);
int eventTexSetJobParam(void);
int FUN_002e342c(...);
int sysMemClear(...);
int FUN_003180c4(...);
int FUN_0031bca4(...);
int FUN_0036f298(unsigned int);
int FUN_003afe2c(unsigned int, int, int);
int dispatchIfFound(unsigned int, unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1420; /* 0x1420: local_1420 */
} void_stack;

extern int DAT_00588008; /* 0x588008 */

extern int FUN_0014bef4(unsigned int);
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: jobStop. */
extern int jobIsValid(void);
extern int jobGetWork(unsigned int);
/* Supplied declaration required: FUN_00167f24. */
extern int dataTableValueOrZero(unsigned int);
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00184310. */
extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00237898. */
/* Supplied declaration required: FUN_00275bb0. */
/* Supplied declaration required: FUN_00275fe4. */
/* Supplied declaration required: eventTexSetJobParam. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0031bca4. */
/* Supplied declaration required: FUN_0036f298. */
/* Supplied declaration required: FUN_003afe2c. */
/* Supplied declaration required: dispatchIfFound. */
extern unsigned int FUN_004d0cd4(void);


unsigned int FUN_003707a8(void)

{
/* irregular: 16 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7 [2];
  unsigned char temp_v8 [128];
  unsigned char temp_v9 [4984];
  
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    jyoucyuGetTableEntry(0);
    FUN_00275fe4(0);
    FUN_00275fe4(1,0);
    DAT_00588008 = 0;
  }
  temp_v2 = FUN_00275bb0(0);
  switch(temp_v2) {
  case 0:
    temp_v1 = scrGetArg(0);
    temp_v3 = scrGetArg(1);
    temp_v6 = 0;
    temp_v5 = 1;
    do {
      temp_v4 = temp_v5;
      temp_v7[temp_v5] = 0;
      FUN_00184310();
      if ((((temp_v4 != 0) && ((*(unsigned short *)(temp_v4 + 10) & 1) != 0)) &&
          (temp_v1 <= (int)(unsigned int)*(unsigned short *)(temp_v4 + 6))) &&
         ((int)(unsigned int)*(unsigned short *)(temp_v4 + 6) <= temp_v3)) {
        temp_v7[temp_v6] = temp_v5;
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 0x500);
    if (temp_v6 < 1) {
      return 1;
    }
    temp_v1 = FUN_0014bef4((temp_v6 - 1U) & 0xffff);
    temp_v5 = temp_v7[temp_v1];
    temp_v2 = FUN_004d0cd4();
    dispatchIfFound(temp_v2,temp_v5 & 0xffff,0);
    FUN_00275fe4(0,1);
    DAT_00588008 = 0;
    FUN_00275fe4(1,temp_v5 & 0xffff);
    break;
  case 1:
    temp_v2 = FUN_00275bb0(1);
    FUN_003afe2c(temp_v2,0,0);
    eventTexSetJobParam();
    FUN_0036f298(temp_v2);
    FUN_00275fe4(2,temp_v2);
    FUN_0031bca4(temp_v2,0,1);
    FUN_00275fe4(0,2);
    DAT_00588008 = 0;
    break;
  case 2:
    temp_v2 = FUN_00275bb0(2);
    FUN_0031bca4(temp_v2,0xf,0);
    FUN_00275fe4(0,3);
    DAT_00588008 = 0;
    break;
  case 3:
    DAT_00588008 = DAT_00588008 + 1;
    if (DAT_00588008 >= 0xf) {
      FUN_00275fe4(0,4);
      DAT_00588008 = 0;
    }
    break;
  case 4:
    temp_v0 = FUN_00275bb0(1);
    FUN_00184310(temp_v0);
    sysMemClear(temp_v8,0x80);
    sysMemClear(temp_v9,0x80);
    temp_v5 = FUN_00275bb0(1);
    temp_v5 = temp_v5 & 0xffff;
    FUN_00180118(temp_v5);
    FUN_002e342c(temp_v8,temp_v5);
    temp_v0 = FUN_00275bb0(1);
    temp_v2 = FUN_0014bf3c(temp_v0,0);
    FUN_002e342c(temp_v9,temp_v2);
    FUN_003180c4(8,temp_v8);
    FUN_003180c4(9,temp_v9);
    temp_v1 = dataTableValueOrZero(0x1e);
    FUN_00167f24(0x15);
    temp_v7[0] = 0;
    FUN_00237898(temp_v1,0x38,DAT_00588008,6);
    DAT_00588008 = DAT_00588008 + 1;
    if (temp_v1 == 1) {
      FUN_00275fe4(0,10);
      DAT_00588008 = 0;
    }
    break;
  case 10:
    temp_v2 = FUN_00275bb0(2);
    FUN_0031bca4(temp_v2,10,1);
    FUN_00275fe4(0,0xb);
    DAT_00588008 = 0;
    break;
  case 0xb:
    DAT_00588008 = DAT_00588008 + 1;
    if (DAT_00588008 >= 10) {
      FUN_00275fe4(0,0xc);
      DAT_00588008 = 0;
    }
    break;
  case 0xc:
    temp_v2 = FUN_00275bb0(2);
    temp_v1 = jobIsValid();
    if (temp_v1 != 0) {
      temp_v1 = jobGetWork(temp_v2);
      if (*(int *)(temp_v1 + 0xc) != 1) {
        *(unsigned int *)(temp_v1 + 0x28) = 0xbe800000;
        *(unsigned char *)(temp_v1 + 0x30) = 1;
      }
      else {
        jobStop(temp_v2,0);
      }
    }
    FUN_00275fe4(0,0xd);
    DAT_00588008 = 0;
    break;
  case 0xd:
    return 1;
  }
  return 0;
}

} /* extern "C" */
