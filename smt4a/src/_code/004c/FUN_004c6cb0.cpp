/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c6cb0` (_code @ 0x4c6cb0, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a290(void);
int FUN_003f0e20(int, unsigned int);
int source4CCopyHalves(void);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int btlGetMainState(void);
extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: FUN_0034a290. */
extern int FUN_003ec77c(int);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: source4CCopyHalves. */


int FUN_004c6cb0(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short temp_v7 [12];
  
  temp_v1 = btlGetMainState();
  FUN_003f0e20(temp_v1,param_1);
  if (*(char *)(temp_v1 + 0x45b9) == '\0') {
    temp_v5 = *(int *)(temp_v1 + 0xf0);
    if (temp_v5 == 0x16c) {
      return 0;
    }
    if (temp_v5 < 0x16d) {
      if (temp_v5 - 0x169U < 2 || temp_v5 == 0x16b) {
        return 0;
      }
    }
    else if (temp_v5 == 0x17d || temp_v5 == 0x17e) {
      return 0;
    }
  }
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  temp_v7[2] = 0;
  temp_v7[3] = 0;
  temp_v7[4] = 0;
  temp_v7[5] = 0;
  temp_v7[6] = 0;
  temp_v7[7] = 0;
  temp_v7[8] = 0;
  temp_v7[9] = 0;
  source4CCopyHalves();
  temp_v6 = 1;
  temp_v5 = 0;
  do {
    temp_v2 = (unsigned int)temp_v7[temp_v5];
    if (((temp_v2 != 0) && (FUN_0034a290(), temp_v2 != 0)) && ((*(unsigned short *)(temp_v2 + 0x3e) & 4) != 0)) {
      temp_v6 = 2;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 9);
  temp_v5 = 0;
  do {
    temp_v2 = (unsigned int)temp_v7[temp_v5];
    if (temp_v2 != 0) {
      FUN_0034a290();
      temp_v0 = 0;
      if (temp_v2 != 0) {
        temp_v0 = *(short *)(temp_v2 + 0x38);
      }
      if (((temp_v2 != 0 && temp_v0 != 0) && (temp_v3 = FUN_003ec77c(temp_v1), temp_v3 == 0)) &&
         ((temp_v0 = *(short *)(temp_v2 + 0x3a), temp_v0 != 0 &&
          ((param_2 == 0 ||
           (temp_v3 = lcgRandomRange(99), temp_v4 = temp_v0 * temp_v6, temp_v4 - temp_v3 != 0 && temp_v3 <= temp_v4)))
          ))) {
        return (int)*(short *)(temp_v2 + 0x38);
      }
    }
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 9) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
