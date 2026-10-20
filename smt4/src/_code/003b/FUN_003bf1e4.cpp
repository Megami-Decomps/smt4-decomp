/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf1e4` (_code @ 0x3bf1e4, 0x25c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e6f4(int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

/* Supplied declaration required: FUN_0027e6f4. */
extern int FUN_002939f4(void);
extern int FUN_002973ec(void);
extern int aeabi_idivmod(int, int);


int FUN_003bf1e4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  temp_v1 = FUN_002939f4();
  if ((*(unsigned int *)(temp_v1 + 0xe0) & 0x40000) != 0) {
    return 0;
  }
  if (((*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) == 0) && ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x400000) == 0))
  {
    if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x800000) != 0) {
      return 0;
    }
    puVar5 = *(unsigned int **)(temp_v1 + 0x1fc0);
    temp_v2 = 0;
    temp_v6 = 0;
    temp_v0 = *(unsigned char *)(temp_v1 + 0x44b6);
    temp_v3 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v5 = 0;
    if (((*puVar5 & 1) != 0) && ((*puVar5 & 0x40) == 0)) {
      temp_v5 = 1;
      temp_v2 = (int)*(short *)((int)puVar5 + 0x1c2);
      temp_v3 = (int)(short)puVar5[0x71];
    }
    if (((puVar5[0xa2] & 1) != 0) && ((puVar5[0xa2] & 0x40) == 0)) {
      temp_v5 = temp_v5 + 1;
      temp_v2 = temp_v2 + *(short *)((int)puVar5 + 0x44a);
      temp_v3 = temp_v3 + (short)puVar5[0x113];
    }
    if (((puVar5[0x144] & 1) != 0) && ((puVar5[0x144] & 0x40) == 0)) {
      temp_v5 = temp_v5 + 1;
      temp_v2 = temp_v2 + *(short *)((int)puVar5 + 0x6d2);
      temp_v3 = temp_v3 + (short)puVar5[0x1b5];
    }
    if (((puVar5[0x1e6] & 1) != 0) && ((puVar5[0x1e6] & 0x40) == 0)) {
      temp_v5 = temp_v5 + 1;
      temp_v2 = temp_v2 + *(short *)((int)puVar5 + 0x95a);
      temp_v3 = temp_v3 + (short)puVar5[599];
    }
    temp_v2 = aeabi_idivmod(temp_v2,temp_v5);
    temp_v3 = aeabi_idivmod(temp_v3,temp_v5);
    temp_v4 = 0;
    temp_v5 = 4;
    do {
      puVar4 = puVar5 + temp_v5 * 0xa2;
      if (((*puVar4 & 1) != 0) && ((*puVar4 & 0x40) == 0)) {
        temp_v4 = temp_v4 + 1;
        temp_v6 = temp_v6 + *(short *)((int)puVar4 + 0x1c2);
        temp_v7 = temp_v7 + (short)puVar4[0x71];
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x36);
    temp_v5 = aeabi_idivmod(temp_v6,temp_v4);
    temp_v6 = aeabi_idivmod(temp_v7,temp_v4);
    FUN_0027e6f4(temp_v1,1);
    if (-1 < temp_v1) {
      temp_v8 = -0x32;
    }
    temp_v2 = (temp_v2 - temp_v5) + (temp_v3 - temp_v6) / 2 + (unsigned int)temp_v0 * 10 + temp_v8 + 0x32;
    temp_v1 = FUN_002973ec();
    if (temp_v1 != 1) {
      if ((temp_v1 == 2) || (temp_v2 < 0)) {
        return 0;
      }
      if (temp_v2 < 0x65) {
        return temp_v2;
      }
    }
    return 100;
  }
  return 100;
}

} /* extern "C" */
