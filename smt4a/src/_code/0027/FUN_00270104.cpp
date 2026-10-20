/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270104` (_code @ 0x270104, 0x388 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_0019de98(unsigned int, unsigned int);
int FUN_0032d0c8(unsigned int, int, int, unsigned int);
int FUN_00342348(int);
int FUN_00359b6c(unsigned int);
int FUN_00399e20(unsigned int, int);
int FUN_003aeb18(unsigned int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int DAT_00573bc8; /* 0x573bc8 */
extern unsigned int DAT_00573bcc; /* 0x573bcc */

/* Supplied declaration required: FUN_0014aa78. */
extern unsigned int FUN_001801a4(void);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
extern unsigned int FUN_0019e4d4(unsigned short);
extern int FUN_001ab854(void);
extern int FUN_002919a4(void);
extern int FUN_002a4860(unsigned int);
extern int FUN_002a4894(unsigned int);
extern int FUN_002cc9e0(int, unsigned int);
extern unsigned int FUN_002f8e14(unsigned int);
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_00342348. */
/* Supplied declaration required: FUN_00359b6c. */
/* Supplied declaration required: FUN_00399e20. */
/* Supplied declaration required: FUN_003aeb18. */
extern int FUN_003e46f4(unsigned int);
extern unsigned int FUN_003ef9b8(unsigned int, unsigned int);


void FUN_00270104(int param_1)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int *piVar8;
  unsigned char temp_v6;
  unsigned int temp_v7 [8];
  
  temp_v1 = FUN_002a4860(*(unsigned int *)(param_1 + 0x3c40));
  temp_v2 = FUN_002a4894(*(unsigned int *)(param_1 + 0x3c40));
  temp_v4 = temp_v1 + temp_v2;
  temp_v1 = FUN_002cc9e0(param_1,0);
  if (temp_v1 != 1) {
    temp_v1 = FUN_002cc9e0(param_1,0);
    if (temp_v1 != 2) {
      temp_v1 = FUN_002cc9e0(param_1,0);
      if (temp_v1 == 7) {
        FUN_00342348(*(unsigned short *)(param_1 + temp_v4 * 2 + 0x3ca8));
        return;
      }
      temp_v1 = FUN_002cc9e0(param_1,0);
      if (temp_v1 == 3) {
        temp_v5 = 0;
        temp_v7[3] = 0;
        temp_v7[4] = 1;
        temp_v7[5] = 2;
        temp_v1 = 0;
        temp_v7[2] = 0x33;
        temp_v7[0] = 0x2e;
        temp_v7[1] = 0x32;
        do {
          temp_v2 = FUN_003e46f4(temp_v7[temp_v1]);
          if (temp_v2 != 0) {
            if (temp_v5 == temp_v4) {
              temp_v3 = FUN_002f8e14(temp_v7[temp_v1 + 3] & 0xff);
              FUN_0019de98(temp_v3,0xf4f4f4ff);
              return;
            }
            temp_v5 = temp_v5 + 1;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 3);
        return;
      }
      temp_v1 = FUN_002cc9e0(param_1,0);
      if (temp_v1 != 0xc) {
        return;
      }
      temp_v4 = *(unsigned int *)(param_1 + 0x3e18);
      if (temp_v4 == 0) {
        return;
      }
    }
    else {
      temp_v1 = FUN_0014aa78();
      if (!((*(unsigned int *)(temp_v1 + 0x45a8) & DAT_00573bc8) == 0 &&
           (*(unsigned int *)(temp_v1 + 0x45ac) & DAT_00573bcc) == 0)) {
        temp_v3 = FUN_0014aa78();
        temp_v4 = FUN_003ef9b8(temp_v3,temp_v4);
      }
      else {
        FUN_0014aa78();
        temp_v4 = 0;
      }
      if (temp_v4 == 0) {
        return;
      }
    }
  }
  else {
    piVar8 = (int *)(param_1 + 0x3890);
    puVar6 = (unsigned int *)(param_1 + 0x4b98);
    temp_v0 = *(short *)(param_1 + *piVar8 * 2 + 0x4210);
    if (temp_v0 != -1) {
      if (temp_v4 == 0) {
        if (temp_v0 == -2) {
          temp_v1 = FUN_002919a4();
          temp_v3 = FUN_0019e4d4(*(unsigned short *)(temp_v1 + 0x62));
          FUN_0032d0c8(*puVar6,2,*(unsigned short *)(temp_v1 + 0x62),temp_v3);
          return;
        }
        temp_v1 = FUN_001ab854();
        temp_v3 = FUN_0019e4d4(*(unsigned short *)(temp_v1 + 0x62));
        FUN_0032d0c8(*puVar6,2,*(unsigned short *)(temp_v1 + 0x62),temp_v3);
        return;
      }
      temp_v1 = FUN_0014aa78();
      if ((*(unsigned int *)(temp_v1 + 0x45ac) & DAT_00573bcc) != 0 ||
          (*(unsigned int *)(temp_v1 + 0x45a8) & DAT_00573bc8) != 0) {
        FUN_00359b6c(temp_v4);
        return;
      }
      temp_v4 = (unsigned int)*(unsigned short *)(param_1 + *piVar8 * 0x10 + temp_v4 * 2 + 0x3c42);
    }
    else {
      if (temp_v4 == 0) {
        FUN_003aeb18(*puVar6,0);
        return;
      }
      if ((temp_v4 == 1) && (temp_v1 = FUN_0018719c(0x410), temp_v1 != 0)) {
        temp_v5 = FUN_001801a4();
        temp_v6 = *(short *)(temp_v5 + 2) != 0;
        if (temp_v6) {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 4);
        }
        if (temp_v6 && temp_v5 != 0) {
          FUN_00399e20(*puVar6,1);
          return;
        }
      }
      temp_v1 = -2;
      temp_v2 = FUN_0018719c(0x410);
      if (temp_v2 != 0) {
        temp_v5 = FUN_001801a4();
        temp_v6 = *(short *)(temp_v5 + 2) != 0;
        if (temp_v6) {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 4);
        }
        if (!temp_v6 || temp_v5 == 0) {
          temp_v1 = -1;
        }
      }
      else {
        temp_v1 = -1;
      }
      temp_v2 = FUN_0014aa78();
      if (!((*(unsigned int *)(temp_v2 + 0x45a8) & DAT_00573bc8) == 0 &&
           (*(unsigned int *)(temp_v2 + 0x45ac) & DAT_00573bcc) == 0)) {
        temp_v4 = temp_v4 + temp_v1 + 1;
      }
      else {
        temp_v4 = (unsigned int)*(unsigned short *)(param_1 + *piVar8 * 0x10 + (temp_v4 + temp_v1) * 2 + 0x3c44);
      }
    }
    if (temp_v4 == 0) {
      return;
    }
  }
  FUN_00359b6c(temp_v4);
  return;
}

} /* extern "C" */
