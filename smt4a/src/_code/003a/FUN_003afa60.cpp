/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003afa60` (_code @ 0x3afa60, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);
int FUN_002a4860(...);
int FUN_002a4894(int);
int FUN_0036edfc(unsigned int, unsigned int);
int FUN_003b6250(unsigned int, unsigned int);
int FUN_003cbd04(int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int);
int FUN_003cdeb0(int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_002a4860. */
/* Supplied declaration required: FUN_002a4894. */
/* Supplied declaration required: FUN_0036edfc. */
/* Supplied declaration required: FUN_003b6250. */
/* Supplied declaration required: FUN_003cbd04. */
/* Supplied declaration required: FUN_003cdeb0. */


void FUN_003afa60(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  temp_v1 = param_1 + 0x8e14;
  FUN_002a4860();
  temp_v2 = FUN_002a4860(temp_v1);
  temp_v3 = FUN_002a4894(temp_v1);
  temp_v0 = 0;
  if ((param_3 != 0) &&
     ((temp_v3 + temp_v2 >= *(int *)(param_1 + 0x8e84) || (*(char *)(param_1 + 0x8eac) != '\0')))) {
    FUN_003b6250(param_4,param_5);
    temp_v0 = 1;
  }
  else {
    FUN_0036edfc(param_4,param_5);
  }
  temp_v5 = 0;
  do {
    temp_v2 = FUN_002a4860(temp_v1);
    temp_v3 = *(int *)(param_1 + 0x8e80);
    if ((((param_3 == 0) || (temp_v4 = FUN_002a4894(temp_v1), temp_v4 != temp_v5)) || (temp_v0)) ||
       (*(char *)(param_1 + 0x8e8a) == '\0')) {
      temp_v6 = 0;
      temp_v4 = FUN_002a4894(temp_v1);
      temp_v7 = temp_v4 == temp_v5;
      if (temp_v7) {
        temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x8e8a);
      }
      if ((temp_v7 && temp_v4 == 0) && (param_3 != 0)) {
        temp_v6 = 1;
      }
      FUN_003cbd04(param_1,temp_v5,param_2,(int)(temp_v2 + temp_v5) < temp_v3,param_4,param_5,temp_v6);
      FUN_001677c0();
    }
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < 8);
  if (((!temp_v0) && (*(char *)(param_1 + 0x8e8a) != '\0')) && (param_3 != 0)) {
    FUN_003cdeb0(param_1,param_2,param_4,param_5);
    return;
  }
  return;
}

} /* extern "C" */
