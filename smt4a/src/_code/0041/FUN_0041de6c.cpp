/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041de6c` (_code @ 0x41de6c, 0x460 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001386e8(int);
int FUN_0014af84(void);
int sysPlaySe(...);
int FUN_001a9110(unsigned int, unsigned int);
int FUN_002299b0(void);
int FUN_0023b45c(...);
int FUN_00275f44(unsigned int, int);
int FUN_002c8538(...);
int FUN_002c9104(void);
int FUN_002e342c(...);
int FUN_002e6134(void);
int FUN_002f0384(...);
int FUN_0033440c(...);
int FUN_0033449c(...);
int FUN_0034aac8(...);
int FUN_003720a0(...);
int FUN_0038b5fc(...);
int FUN_003a76a8(...);
int FUN_003c1490(int, int);
int FUN_003fd63c(int, int);
int FUN_00408184(int, int);
int rt_memcpy_w(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_00588e15; /* 0x588e15 */
extern signed char DAT_00588e16; /* 0x588e16 */
extern signed char DAT_00588e17; /* 0x588e17 */
extern unsigned int DAT_00588e28; /* 0x588e28 */

/* Supplied declaration required: FUN_001386e8. */
/* Supplied declaration required: FUN_0014af84. */
/* Supplied declaration required: sysPlaySe. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001a9110. */
extern int FUN_00224880(unsigned int);
extern unsigned int FUN_00228af0(void);
/* Supplied declaration required: FUN_002299b0. */
/* Supplied declaration required: FUN_0023b45c. */
extern unsigned int FUN_00261458(void);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b74(void);
extern int FUN_002a6464(void);
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c9104. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6134. */
/* Supplied declaration required: FUN_002f0384. */
extern int FUN_00334158(void);
/* Supplied declaration required: FUN_0033440c. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_0034aac8. */
extern int FUN_0035d734(void);
/* Supplied declaration required: FUN_003720a0. */
extern int FUN_0038b348(void);
/* Supplied declaration required: FUN_0038b5fc. */
/* Supplied declaration required: FUN_003a76a8. */
extern int FUN_003b70d0(void);
/* Supplied declaration required: FUN_003c1490. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041de6c(int param_1)

{
/* irregular: 22 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    temp_v0 = FUN_0035d734();
    if (temp_v0 != 0) {
      return;
    }
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x40));
    if (temp_v0 != 2) {
      return;
    }
    temp_v0 = FUN_002a4b74();
    if (temp_v0 != 0) {
      FUN_001386e8(1);
      *(unsigned char *)(param_1 + 0xe) = 0;
      *(unsigned char *)(param_1 + 0x12) = 0;
      *(unsigned char *)(param_1 + 0xf) = 0;
      sysPlaySe(0xaa);
      return;
    }
    FUN_002e6134();
    FUN_003a76a8(0);
    *(unsigned char *)(param_1 + 0xe) = 1;
    temp_v1 = FUN_00261458();
    rt_memcpy_w(temp_v1,*(unsigned int *)(param_1 + 0x1c),0x80);
    temp_v1 = FUN_00228af0();
    FUN_001a9110(temp_v1,*(unsigned int *)(param_1 + 0x20));
    temp_v1 = FUN_0014af84();
    rt_memcpy_w(temp_v1,*(unsigned int *)(param_1 + 0x24),0x2a71c);
    if ((DAT_00588e16 != '\0') && (temp_v0 = FUN_0018719c(0x470), temp_v0 == 0)) {
      FUN_003fd63c(0x470,1);
    }
    if ((DAT_00588e17 != '\0') && (temp_v0 = FUN_0018719c(0x471), temp_v0 == 0)) {
      FUN_003fd63c(0x471,1);
    }
    FUN_00275f44(*(unsigned int *)(param_1 + 0x40),1);
    puVar2 = (unsigned short *)FUN_0014af84();
    *puVar2 = 4;
    temp_v0 = FUN_0014af84();
    *(unsigned char *)(temp_v0 + 2) = *(unsigned char *)(param_1 + 6);
    FUN_0014af84();
    FUN_002299b0();
    FUN_002c9104();
    FUN_00408184(0x20,1);
    temp_v0 = FUN_0014af84();
    FUN_003c1490(*(int *)(param_1 + 0x2f8) + 1,*(unsigned char *)(temp_v0 + 2));
    return;
  }
  temp_v0 = FUN_0038b348();
  if ((temp_v0 != 0) && (*(char *)(param_1 + 0xf) == '\0')) {
    temp_v0 = FUN_003b70d0();
    if (temp_v0 != 0) {
      FUN_00275f44(*(unsigned int *)(param_1 + 0x40),2);
      temp_v1 = FUN_00261458();
      rt_memcpy_w(param_1 + *(int *)(param_1 + 0x2f8) * 0x80 + 0x6c,temp_v1,0x80);
      *(unsigned char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) = 1;
      puVar5 = *(unsigned int **)(param_1 + 0x54);
      temp_v0 = param_1 + *(int *)(param_1 + 0x2f8) * 0x80;
      *puVar5 = *(unsigned int *)(temp_v0 + 0x7e);
      puVar5[1] = *(unsigned int *)(temp_v0 + 0x82);
      puVar5[2] = *(unsigned int *)(temp_v0 + 0x86);
      *(unsigned short *)(puVar5 + 3) = *(unsigned short *)(temp_v0 + 0x8a);
      *(unsigned int *)((int)puVar5 + 0xe) = *(unsigned int *)(temp_v0 + 0xaa);
      *(unsigned int *)((int)puVar5 + 0x12) = *(unsigned int *)(temp_v0 + 0xae);
      *(unsigned int *)((int)puVar5 + 0x16) = *(unsigned int *)(temp_v0 + 0xb2);
      *(unsigned short *)((int)puVar5 + 0x1a) = *(unsigned short *)(temp_v0 + 0xb6);
      rt_memcpy_w(puVar5 + 7,temp_v0 + 0x9c,0xe);
      *(unsigned short *)((int)puVar5 + 0x2a) = *(unsigned short *)(temp_v0 + 0x90);
      *(unsigned short *)(puVar5 + 0xb) = *(unsigned short *)(temp_v0 + 0x92);
      puVar5[0xc] = *(unsigned int *)(temp_v0 + 0x8c);
      FUN_002e342c(puVar5 + 0x13,temp_v0 + 0x6c);
      *(unsigned short *)((int)puVar5 + 0x62) = *(unsigned short *)(temp_v0 + 0xd0);
      temp_v2 = FUN_0014af84();
      FUN_002e342c(temp_v2 + 0x54,temp_v0 + 0x6c);
      FUN_003720a0(*(unsigned int *)(param_1 + 0x54),0);
      FUN_0033440c(*(unsigned char *)(param_1 + *(int *)(param_1 + 0x2f8) * 0x80 + 0xd6));
      temp_v0 = param_1 + *(int *)(param_1 + 0x2f8) * 0x80;
      if (temp_v0 != -0x6c) {
        FUN_0034aac8(*(char *)(temp_v0 + 0xb8) != '\0');
      }
      FUN_0033449c(0);
      FUN_0023b45c(1);
      FUN_002c8538(1);
      FUN_002f0384(0);
      *(unsigned char *)(param_1 + 0x68) = 0;
      FUN_0038b5fc(1,*(unsigned short *)(*(int *)(param_1 + 0x54) + 8));
      FUN_0038b5fc(2,*(unsigned short *)(*(int *)(param_1 + 0x54) + 10));
      FUN_0038b5fc(0,*(unsigned short *)(*(int *)(param_1 + 0x54) + 6));
    }
    *(unsigned char *)(param_1 + 0xf) = 1;
    *(unsigned char *)(param_1 + 0x5c) = 1;
    FUN_003a76a8(1);
    sysPlaySe(0xa0);
  }
  if ((*(char *)(param_1 + 0x5c) != '\0') && (temp_v0 = FUN_00334158(), temp_v0 != 0)) {
    *(unsigned char *)(param_1 + 0x5c) = 0;
    FUN_002f0384(1);
    *(unsigned char *)(param_1 + 0x68) = 1;
  }
  temp_v0 = FUN_0035d734();
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      return;
    }
    *(unsigned char *)(param_1 + 0xf) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x2f8) < 1) {
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x40));
    if (temp_v0 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0x2f8) >= 1) {
      if ((*(char *)(param_1 + 0x13) != '\0') &&
         (temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x40)), temp_v0 != 2)) {
        return;
      }
    }
  }
  else if ((*(char *)(param_1 + 0x13) != '\0') &&
          (temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x40)), temp_v0 != 2)) {
    return;
  }
  temp_v0 = FUN_002a6464();
  if (((temp_v0 != 0) && (temp_v0 = FUN_0038b348(), temp_v0 != 0)) && (*(char *)(param_1 + 0x5c) == '\0'))
  {
    DAT_00588e15 = 1;
    *(unsigned char *)(param_1 + 0x12) = 0;
    *(unsigned char *)(param_1 + 0xe) = 0;
    *(unsigned char *)(param_1 + 0xf) = 0;
    temp_v0 = FUN_003b70d0();
    if (temp_v0 == 0) {
      *(unsigned int *)(param_1 + 0x2f8) = DAT_00588e28;
    }
    return;
  }
  return;
}

} /* extern "C" */
