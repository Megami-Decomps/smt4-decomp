/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032aa84` (_code @ 0x32aa84, 0x190 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_0043e140; /* 0x43e140 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002ba46c. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002bef70(int);
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);


char FUN_0032aa84(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  
  temp_v0 = DAT_0043e140;
  temp_v6 = *(int *)(DAT_0043e140 + 8) != 0;
  temp_v1 = '\0';
  if (temp_v6) {
    temp_v1 = *(char *)(DAT_0043e140 + 0x10);
  }
  if (temp_v6 && temp_v1 != '\0') {
    FUN_002c3ba8(DAT_0044ea00);
    temp_v3 = DAT_0044ea00;
    temp_v2 = FUN_002c5f7c(1,0);
    piVar7 = (int *)(temp_v3 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = FUN_002bef7c(temp_v0 + 0x34);
    temp_v7 = 0.27f;
    FUN_002ba46c(DAT_0044ea00);
    temp_v2 = FUN_002bef70(temp_v0 + 0x34);
    FUN_002bf558(2,0xe,0xe,temp_v3 + (int)temp_v7,temp_v2,0x65);
    temp_v4 = FUN_002bf6d0(0xe,0x10b);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + temp_v3 + (int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3
                       );
    FUN_002be77c(3,0xffffffff,temp_v0 + 0xc0);
    FUN_002bef14();
    FUN_002bf710();
    temp_v0 = DAT_0044ea00;
    piVar7 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v3 = *piVar7;
    temp_v2 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    temp_v1 = '\0';
  }
  return temp_v1;
}
