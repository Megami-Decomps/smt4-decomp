/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292f4c` (_code @ 0x292f4c, 0x2dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int FUN_002177a4(unsigned int);
extern unsigned int FUN_0028d24c(void);
extern unsigned int FUN_0028d2e8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029212c. */
extern int FUN_00292f28(int);
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_00297ca4(int, unsigned int);
/* Supplied declaration required: FUN_0029c94c. */
/* Supplied declaration required: FUN_0029da34. */
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(unsigned int);
extern int FUN_0029efc0(unsigned int);
extern int FUN_002a8740(int);
extern unsigned int FUN_002b066c(unsigned short);
extern unsigned int FUN_002b63ac(void);
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_00309bc8. */
/* Supplied declaration required: FUN_003170b0. */


void FUN_00292f4c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned char temp_v5;
  unsigned int temp_v6 [7];
  
  temp_v0 = FUN_0029efc0(*(unsigned int *)(param_1 + 0x340c));
  temp_v1 = FUN_0029efa8(*(unsigned int *)(param_1 + 0x340c));
  temp_v3 = temp_v0 + temp_v1;
  temp_v0 = FUN_00297ca4(param_1,0);
  if (temp_v0 != 1) {
    temp_v0 = FUN_00297ca4(param_1,0);
    if (temp_v0 != 2) {
      temp_v0 = FUN_00297ca4(param_1,0);
      if (temp_v0 == 7) {
        FUN_0029212c(*(unsigned short *)(param_1 + temp_v3 * 2 + 0x3480));
        return;
      }
      temp_v0 = FUN_00297ca4(param_1,0);
      if (temp_v0 == 3) {
        temp_v4 = 0;
        temp_v6[4] = 4;
        temp_v6[0] = 0;
        temp_v6[1] = 1;
        temp_v6[2] = 2;
        temp_v6[3] = 3;
        temp_v6[5] = 5;
        temp_v0 = 0;
        do {
          temp_v1 = FUN_00292f28(temp_v0 + 0x2e);
          if (temp_v1 != 0) {
            if (temp_v4 == temp_v3) {
              temp_v2 = FUN_002177a4(temp_v6[temp_v0] & 0xff);
              FUN_0029ee6c(temp_v2,0x323232ff);
              return;
            }
            temp_v4 = temp_v4 + 1;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 6);
        return;
      }
    }
    else {
      temp_v0 = FUN_002939f4();
      if ((*(unsigned int *)(temp_v0 + 0x44a8) & 0x40) != 0) {
        temp_v2 = FUN_002939f4();
        temp_v3 = FUN_0028d2e8(temp_v2,temp_v3);
      }
      else {
        FUN_002939f4();
        temp_v3 = FUN_0028d24c();
      }
      if (temp_v3 != 0) {
        FUN_0029c94c(temp_v3);
        return;
      }
    }
    return;
  }
  puVar6 = (unsigned int *)(param_1 + 0x59bc);
  if (*(int *)(param_1 + 0x305c) != 0) {
    if (temp_v3 == 0) {
      temp_v0 = FUN_002a8740((int)*(short *)(param_1 + *(int *)(param_1 + 0x305c) * 2 + 0x38f4));
      temp_v2 = FUN_002b066c(*(unsigned short *)(temp_v0 + 0x46));
      FUN_0029da34(*puVar6,2,*(unsigned short *)(temp_v0 + 0x46),temp_v2);
      return;
    }
    temp_v0 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v0 + 0x44a8) & 0x40) != 0) {
      FUN_0029c94c(temp_v3);
      return;
    }
    temp_v3 = (unsigned int)*(unsigned short *)(param_1 + *(int *)(param_1 + 0x305c) * 0x10 + temp_v3 * 2 + 0x341a);
  }
  else {
    if (temp_v3 == 0) {
      FUN_003170b0(*puVar6,0);
      return;
    }
    if ((temp_v3 == 1) && (temp_v0 = FUN_002c09d0(0x410), temp_v0 != 0)) {
      temp_v4 = FUN_002b63ac();
      temp_v5 = *(short *)(temp_v4 + 2) != 0;
      if (temp_v5) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v4 + 4);
      }
      if (temp_v5 && temp_v4 != 0) {
        FUN_00309bc8(*puVar6,1);
        return;
      }
    }
    temp_v0 = -2;
    temp_v1 = FUN_002c09d0(0x410);
    if (temp_v1 != 0) {
      temp_v4 = FUN_002b63ac();
      temp_v5 = *(short *)(temp_v4 + 2) != 0;
      if (temp_v5) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v4 + 4);
      }
      if (!temp_v5 || temp_v4 == 0) {
        temp_v0 = -1;
      }
    }
    else {
      temp_v0 = -1;
    }
    temp_v1 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x40) != 0) {
      temp_v3 = temp_v3 + temp_v0 + 1;
    }
    else {
      temp_v3 = (unsigned int)*(unsigned short *)
                     (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + (temp_v3 + temp_v0) * 2 + 0x341c);
    }
  }
  if (temp_v3 == 0) {
    return;
  }
  FUN_0029c94c(temp_v3);
  return;
}
