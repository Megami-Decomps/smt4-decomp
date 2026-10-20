/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049ea54` (_code @ 0x49ea54, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018206c(int, int);
int FUN_001846d0(int, int);
int FUN_001acf98(int, int);
int FUN_00203b40(int, unsigned int, int, int, int, int);
int FUN_002e08b0(int, int);
int FUN_003d2150(int);
int FUN_0049d140(...);
int FUN_0049de10(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0018206c. */
/* Supplied declaration required: FUN_001846d0. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002e08b0. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: FUN_003d2150. */
extern int FUN_003f86c8(unsigned int);
/* Supplied declaration required: FUN_0049d140. */
/* Supplied declaration required: FUN_0049de10. */


void FUN_0049ea54(int param_1)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v6 = *(int *)(param_1 + 8) != 0;
  temp_v1 = 0;
  if (temp_v6) {
    temp_v1 = *(int *)(param_1 + 0xc);
  }
  if ((((temp_v6 && temp_v1 != 0) && (temp_v1 = FUN_00341940(0x33), temp_v1 != 0)) &&
      (temp_v1 = FUN_0018206c(0x33,0), temp_v1 != 0)) && (temp_v1 = FUN_003f86c8(0x46), temp_v1 != 0)) {
    temp_v2 = FUN_00187180(0x46,0);
    temp_v3 = FUN_00192798();
    *(unsigned int *)(param_1 + 0x10) = temp_v3;
    temp_v4 = FUN_00192748(temp_v2);
    *(unsigned int *)(param_1 + 0x14) = temp_v4;
    temp_v5 = *(unsigned int *)(param_1 + 0x470);
    if (((int)temp_v5 < 1) && (temp_v4 <= temp_v5)) {
      FUN_0049d140(param_1,0);
      return;
    }
    temp_v1 = *(int *)(param_1 + 0x10) + temp_v5 * 0x44;
    *(int *)(param_1 + 0x84) = temp_v1;
    temp_v0 = *(short *)(temp_v1 + 0x36);
    if ((temp_v0 != 0) && (temp_v1 = FUN_0018206c(0x33,temp_v0), temp_v1 == 0)) {
      FUN_001acf98(0x33,temp_v0);
    }
    temp_v0 = *(short *)(*(int *)(param_1 + 0x84) + 0x40);
    if ((temp_v0 != 0) && (temp_v1 = FUN_0018206c(0x33,temp_v0), temp_v1 == 0)) {
      FUN_001acf98(0x33,temp_v0);
    }
    FUN_0049de10(param_1);
    FUN_00203b40(param_1 + 0x124,*(unsigned int *)(param_1 + 0x94),9,1,1,1);
    FUN_002e08b0(param_1 + 0x124,0);
    *(unsigned int *)(param_1 + 0x188) = 0;
    FUN_001846d0(param_1 + 0x23c,0);
    FUN_001846d0(param_1 + 0x2c8,0);
    FUN_0049d140(param_1,8,9);
    FUN_003d2150(0x1000170);
    return;
  }
  return;
}

} /* extern "C" */
