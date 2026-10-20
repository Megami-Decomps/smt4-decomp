/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c63f0` (_code @ 0x4c63f0, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_0034a290(void);
int FUN_003ebd40(...);
int FUN_003f0e20(...);
int FUN_004c39b0(unsigned int *, unsigned short [10]);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int DAT_00571438; /* 0x571438 */
extern unsigned int DAT_0057143c; /* 0x57143c */
extern unsigned int DAT_00571440; /* 0x571440 */
extern unsigned int DAT_00571444; /* 0x571444 */
extern unsigned int DAT_00571478; /* 0x571478 */
extern unsigned int DAT_0057147c; /* 0x57147c */
extern unsigned int DAT_005714b0; /* 0x5714b0 */
extern unsigned int DAT_005714b4; /* 0x5714b4 */

/* Supplied declaration required: btlGetMainState. */
extern int FUN_001633a0(unsigned int);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003ebd40. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c39b0. */


unsigned int FUN_004c63f0(unsigned int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5 [10];
  
  puVar1 = (unsigned int *)btlGetMainState();
  FUN_003f0e20(puVar1,param_1);
  temp_v4 = 0;
  temp_v0 = btlGetMainState();
  FUN_003f0e20(temp_v0,param_1);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0xd4);
  }
  if ((temp_v0 != 0 && temp_v1 != 0) && -1 < temp_v1) {
    temp_v1 = btlGetMainState();
    FUN_003ebd40(temp_v1,puVar1,3);
    if (temp_v1 == 0) {
      temp_v1 = FUN_001633a0(99);
      temp_v0 = btlGetMainState();
      if ((*(unsigned int *)(temp_v0 + 0x45ac) & DAT_005714b4) != 0 ||
          (DAT_005714b0 & *(unsigned int *)(temp_v0 + 0x45a8)) != 0) {
        temp_v1 = 0;
      }
      temp_v0 = FUN_0018719c(0x1fb);
      if ((temp_v0 != 0) || (temp_v1 < 0x46)) {
        temp_v4 = 3;
        goto LAB_004c6530;
      }
    }
  }
  temp_v5[0] = 0;
  temp_v5[1] = 0;
  temp_v5[2] = 0;
  temp_v5[3] = 0;
  temp_v5[4] = 0;
  temp_v5[5] = 0;
  temp_v5[6] = 0;
  temp_v5[7] = 0;
  temp_v5[8] = 0;
  temp_v5[9] = 0;
  FUN_004c39b0(puVar1,temp_v5);
  temp_v1 = 0;
  do {
    temp_v2 = (unsigned int)temp_v5[temp_v1];
    if (((temp_v2 != 0) && (FUN_0034a290(), temp_v2 != 0)) && (temp_v4 < (*(unsigned int *)(temp_v2 + 0x44) & 3))) {
      temp_v0 = btlGetMainState();
      FUN_003ebd40(temp_v0,puVar1,*(unsigned int *)(temp_v2 + 0x44) & 3);
      if (temp_v0 == 0) {
        temp_v4 = *(unsigned int *)(temp_v2 + 0x44) & 3;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 9);
  if (temp_v4 == 0) {
    return 0;
  }
LAB_004c6530:
  temp_v1 = btlGetMainState();
  FUN_003ebd40(temp_v1,puVar1,temp_v4);
  temp_v3 = DAT_0057147c;
  temp_v2 = DAT_00571438;
  if (temp_v1 != 0) {
    return 0;
  }
  if (temp_v4 != 1) {
    if (temp_v4 != 2) {
      if (temp_v4 != 3) {
        return temp_v4;
      }
      *puVar1 = *puVar1 | DAT_00571478;
      temp_v3 = puVar1[1] | temp_v3;
    }
    else {
      temp_v3 = puVar1[1] | DAT_00571444;
      *puVar1 = DAT_00571440 | *puVar1;
    }
    puVar1[1] = temp_v3;
  }
  else {
    puVar1[1] = puVar1[1] | DAT_0057143c;
    *puVar1 = *puVar1 | temp_v2;
  }
  return temp_v4;
}

} /* extern "C" */
