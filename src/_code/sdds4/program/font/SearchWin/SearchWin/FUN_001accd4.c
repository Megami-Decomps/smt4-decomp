/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001accd4` (_code @ 0x1accd4, 0x37c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_0043e170; /* 0x43e170 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002ba46c. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002bef70(int);
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


char FUN_001accd4(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  
  temp_v10 = DAT_0043e170;
  temp_v11 = *(int *)(DAT_0043e170 + 8) != 0;
  temp_v1 = '\0';
  if (temp_v11) {
    temp_v1 = *(char *)(DAT_0043e170 + 0x14);
  }
  if (temp_v11 && temp_v1 != '\0') {
    FUN_002c3ba8(DAT_0044ea00);
    temp_v3 = DAT_0044ea00;
    temp_v2 = FUN_002c5f7c(1,0);
    piVar10 = (int *)(temp_v3 + 0x124c);
    temp_v4 = *piVar10;
    temp_v5 = piVar10[temp_v4 + 2];
    *piVar10 = temp_v4 + 1;
    piVar10[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v2 = FUN_002bef7c(temp_v10 + 0x38);
    temp_v12 = 0.27f;
    FUN_002ba46c(DAT_0044ea00);
    temp_v2 = temp_v2 + (int)temp_v12;
    temp_v4 = FUN_002bef70(temp_v10 + 0x38);
    FUN_002bf710();
    FUN_002bf558(2,0xe,0x14,temp_v2,temp_v4,0x65);
    temp_v3 = DAT_0044ea00;
    temp_v5 = FUN_002c5fa4(6,1,0);
    piVar10 = (int *)(temp_v3 + 0x12ac);
    temp_v6 = *piVar10;
    temp_v7 = piVar10[temp_v6 + 2];
    *piVar10 = temp_v6 + 1;
    piVar10[temp_v6 + 3] = temp_v5;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v7 != temp_v5) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    FUN_002bf558(2,0xe,0x15,temp_v2,temp_v4,0x66);
    temp_v3 = DAT_0044ea00;
    piVar10 = (int *)(DAT_0044ea00 + 0x12ac);
    temp_v5 = *piVar10;
    temp_v6 = piVar10[temp_v5 + 2];
    *piVar10 = temp_v5 - 1;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v6 != piVar10[temp_v5 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x12c8))(piVar10[temp_v5 + 1]);
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v3 = FUN_002bf6d0(0xe,0x16f);
    VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(4,0xf49800ff,temp_v10 + 0xc4);
    temp_v5 = 0;
    temp_v10 = *(int *)(temp_v10 + 0x10) / 5;
    temp_v4 = temp_v10 % 8;
    temp_v3 = (temp_v4 + 7) % 8;
    temp_v10 = (temp_v10 + 4) % 8;
    do {
      temp_v6 = 0;
      do {
        temp_v9 = temp_v5 * 3 + temp_v6;
        temp_v7 = FUN_002bf6d0(0xe,temp_v9 + 0x170);
        if (temp_v4 == temp_v9 || temp_v10 == temp_v9) {
          FUN_002bf460(2,0xe,0x155,*(short *)(temp_v7 + 8) + temp_v2,(int)*(short *)(temp_v7 + 10),0x6f);
        }
        else {
          temp_v0 = temp_v3;
          if (temp_v3 != temp_v9) {
            temp_v0 = (temp_v10 + 7) % 8;
          }
          temp_v8 = *(short *)(temp_v7 + 8) + temp_v2;
          if (!(temp_v3 != temp_v9 && temp_v0 != temp_v9)) {
            FUN_002bf460(2,0xe,0x156,temp_v8,(int)*(short *)(temp_v7 + 10),0x6f);
          }
          else {
            FUN_002bf460(2,0xe,0x154,temp_v8,(int)*(short *)(temp_v7 + 10),0x6f);
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 3);
    FUN_002bef14();
    FUN_002bf710();
    temp_v10 = DAT_0044ea00;
    piVar10 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v3 = *piVar10;
    temp_v2 = piVar10[temp_v3 + 2];
    *piVar10 = temp_v3 - 1;
    if (*(char *)(temp_v10 + 0x1264) != '\0' || temp_v2 != piVar10[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v10 + 0x1268))();
      *(unsigned char *)(temp_v10 + 0x1264) = 0;
    }
    temp_v1 = '\0';
  }
  return temp_v1;
}
