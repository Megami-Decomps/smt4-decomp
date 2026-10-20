/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c67d0` (_code @ 0x4c67d0, 0x378 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003eebf4(int, int);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned int DAT_005713f0; /* 0x5713f0 */
extern unsigned int DAT_005713f4; /* 0x5713f4 */
extern unsigned int DAT_00571420; /* 0x571420 */
extern unsigned int DAT_00571424; /* 0x571424 */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */
extern unsigned int DAT_005714c8; /* 0x5714c8 */
extern unsigned int DAT_005714cc; /* 0x5714cc */
extern unsigned int DAT_005714d0; /* 0x5714d0 */
extern unsigned int DAT_005714d4; /* 0x5714d4 */

extern int FUN_0014aa78(void);
extern int FUN_00213b5c(void);
extern int FUN_002626e0(void);
/* Supplied declaration required: FUN_003eebf4. */
extern int aeabi_idivmod(int, int);


int FUN_004c67d0(void)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar10;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  
  temp_v3 = FUN_0014aa78();
  if ((*(unsigned int *)(temp_v3 + 0x10c) & 0x40000) != 0) {
    return 0;
  }
  if ((DAT_00571498 & *(unsigned int *)(temp_v3 + 0x45a0)) != 0 ||
      (DAT_0057149c & *(unsigned int *)(temp_v3 + 0x45a4)) != 0) {
    return 100;
  }
  temp_v4 = FUN_002626e0();
  temp_v2 = DAT_005713f4;
  temp_v1 = DAT_005713f0;
  if (temp_v4 != 0) {
    return 0;
  }
  if ((DAT_005714c8 & *(unsigned int *)(temp_v3 + 0x45a8)) != 0 ||
      (DAT_005714cc & *(unsigned int *)(temp_v3 + 0x45ac)) != 0) {
    return 100;
  }
  if ((*(unsigned int *)(temp_v3 + 0x45a8) & DAT_005714d0) != 0 ||
      (*(unsigned int *)(temp_v3 + 0x45ac) & DAT_005714d4) != 0) {
    return 0;
  }
  temp_v0 = *(unsigned char *)(temp_v3 + 0x45ba);
  puVar6 = *(unsigned int **)(temp_v3 + 0x1ffc);
  temp_v4 = 0;
  temp_v8 = 0;
  temp_v5 = 0;
  temp_v7 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  if (((*puVar6 & DAT_005713f0) != 0 || (puVar6[1] & DAT_005713f4) != 0) &&
     ((*puVar6 & DAT_00571420) == 0 && (puVar6[1] & DAT_00571424) == 0)) {
    temp_v7 = 1;
    temp_v4 = (int)*(short *)((int)puVar6 + 0x26e);
    temp_v5 = (int)(short)puVar6[0x9c];
  }
  if (((puVar6[0x102] & DAT_005713f0) != 0 || (puVar6[0x103] & DAT_005713f4) != 0) &&
     ((puVar6[0x102] & DAT_00571420) == 0 && (puVar6[0x103] & DAT_00571424) == 0)) {
    temp_v7 = temp_v7 + 1;
    temp_v4 = temp_v4 + *(short *)((int)puVar6 + 0x676);
    temp_v5 = temp_v5 + (short)puVar6[0x19e];
  }
  if (((puVar6[0x204] & DAT_005713f0) != 0 || (puVar6[0x205] & DAT_005713f4) != 0) &&
     ((puVar6[0x204] & DAT_00571420) == 0 && (puVar6[0x205] & DAT_00571424) == 0)) {
    temp_v7 = temp_v7 + 1;
    temp_v4 = temp_v4 + *(short *)((int)puVar6 + 0xa7e);
    temp_v5 = temp_v5 + (short)puVar6[0x2a0];
  }
  if (((puVar6[0x306] & DAT_005713f0) != 0 || (puVar6[0x307] & DAT_005713f4) != 0) &&
     ((puVar6[0x306] & DAT_00571420) == 0 && (puVar6[0x307] & DAT_00571424) == 0)) {
    temp_v7 = temp_v7 + 1;
    temp_v4 = temp_v4 + *(short *)((int)puVar6 + 0xe86);
    temp_v5 = temp_v5 + (short)puVar6[0x3a2];
  }
  temp_v4 = aeabi_idivmod(temp_v4,temp_v7);
  temp_v5 = aeabi_idivmod(temp_v5,temp_v7);
  temp_v6 = 0;
  temp_v7 = 4;
  do {
    puVar10 = puVar6 + temp_v7 * 0x102;
    if (((*puVar10 & temp_v1) != 0 || (puVar10[1] & temp_v2) != 0) &&
       ((*puVar10 & DAT_00571420) == 0 && (puVar10[1] & DAT_00571424) == 0)) {
      temp_v6 = temp_v6 + 1;
      temp_v8 = temp_v8 + *(short *)((int)puVar10 + 0x26e);
      temp_v9 = (short)puVar10[0x9c] + temp_v9;
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x36);
  temp_v7 = aeabi_idivmod(temp_v8,temp_v6);
  temp_v8 = aeabi_idivmod(temp_v9,temp_v6);
  FUN_003eebf4(temp_v3,1);
  if (-1 < temp_v3) {
    temp_v10 = -0x32;
  }
  temp_v3 = temp_v10 + (temp_v4 - temp_v7) + (temp_v5 - temp_v8) / 2 + (unsigned int)temp_v0 * 10 + 0x32;
  temp_v4 = FUN_00213b5c();
  if (temp_v4 != 1) {
    if (temp_v4 == 2) {
      temp_v3 = temp_v3 / 2;
LAB_004c6b1c:
      if (-1 < temp_v3) {
        if (temp_v3 < 0x65) {
          return temp_v3;
        }
        temp_v3 = 100;
        return temp_v3;
      }
    }
    else {
      if (temp_v4 == 3) {
        temp_v3 = 100;
        return temp_v3;
      }
      if (temp_v4 != 4) goto LAB_004c6b1c;
    }
    temp_v3 = 0;
  }
  else {
    temp_v3 = 100;
  }
  return temp_v3;
}

} /* extern "C" */
