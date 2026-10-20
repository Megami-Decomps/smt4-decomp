/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318174` (_code @ 0x318174, 0x3b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00186e2c(int, unsigned int);
int FUN_002a21a4(unsigned int);
int FUN_002e08c8(unsigned int);
int FUN_00341060(unsigned int);
int FUN_00359370(unsigned int, int);
int FUN_003ae9d8(...);
int FUN_00449814(int, int);
int VectorSignedToFloat(unsigned int, int);
int rt_memcpy_w(int, int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int FUN_0016242c(...); /* 0x16242c */
extern int FUN_001f3eec(...); /* 0x1f3eec */
extern int FUN_001f3f34(...); /* 0x1f3f34 */
extern int g_bustupCutAnim; /* 0x57f4c4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00186e2c. */
/* Supplied declaration required: FUN_002a21a4. */
/* Supplied declaration required: FUN_002e08c8. */
/* Supplied declaration required: FUN_00341060. */
/* Supplied declaration required: FUN_00359370. */
/* Supplied declaration required: FUN_003ae9d8. */
/* Supplied declaration required: FUN_00449814. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00318174(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  romwright_code *pcVar4;
  int *piVar5;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = g_bustupCutAnim;
  if (g_bustupCutAnim == 0) {
    return;
  }
  *(unsigned int *)(g_bustupCutAnim + 0x5fc) = *(unsigned int *)(g_bustupCutAnim + 0x5f8);
  temp_v3 = *(unsigned int *)(temp_v0 + 0x604);
  *(int *)(temp_v0 + 0x604) = param_1;
  *(unsigned int *)(temp_v0 + 0x600) = temp_v3;
  piVar5 = (int *)(g_bustupCutAnim + 0x608);
  if (param_1 != 200) {
    temp_v1 = *(int *)(temp_v0 + 0x604);
    if (param_1 < 100) {
      *(unsigned int *)(temp_v0 + 0x5f8) = 0;
    }
    else {
      *(unsigned int *)(temp_v0 + 0x5f8) = 1;
      temp_v1 = temp_v1 - 100;
    }
    *(int *)(temp_v0 + 0x608) = temp_v1;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x608) = 0xb;
    *(unsigned int *)(temp_v0 + 0x5f8) = 1;
  }
  temp_v3 = 0;
  temp_v6 = 0x42960000;
  if (*(char *)(temp_v0 + 0x5f4) == '\0') {
    *(unsigned int *)(temp_v0 + 0x5ec) = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x608) * 4 + 0x6cc);
    *(unsigned int *)(temp_v0 + 0x5e8) = *(unsigned int *)(temp_v0 + *piVar5 * 4 + 0x65c);
    *(unsigned char *)(temp_v0 + 0x5f5) = 0;
    if (*(int *)(temp_v0 + 0x604) == 200) {
      *(unsigned int *)(temp_v0 + 0x744) = *(unsigned int *)(temp_v0 + 0x634);
      FUN_003ae9d8(0);
    }
    *(unsigned int *)(temp_v0 + 0x5f0) = 2;
    if (*(int *)(temp_v0 + 0x5f8) == 0) {
      *(unsigned int *)(temp_v0 + 0x644) = temp_v3;
    }
    else {
      *(unsigned int *)(temp_v0 + 0x644) = temp_v6;
    }
    *(unsigned int *)(temp_v0 + 0x650) = temp_v3;
    *(int *)(temp_v0 + 0x5fc) = *(int *)(temp_v0 + 0x5f8);
    *(unsigned int *)(temp_v0 + 0x600) = *(unsigned int *)(temp_v0 + 0x604);
    return;
  }
  FUN_00186e2c(temp_v0 + 0x510,*(unsigned int *)(temp_v0 + 0x5ec));
  if (*(char *)(temp_v0 + 0x5f5) != '\0') {
    FUN_00359370(*(unsigned int *)(temp_v0 + 0x5ec),0);
  }
  temp_v1 = *(int *)(*(int *)(temp_v0 + 0x5ec) + 4);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(*(int *)(*(int *)(temp_v1 + 8) + 8) + 0x10);
    while (temp_v2 = temp_v2 - 1, -1 < temp_v2) {
      FUN_00449814(temp_v1,temp_v2);
    }
  }
  piVar5 = (int *)(temp_v0 + 0x5e8);
  FUN_002e08c8(*(unsigned int *)(*(int *)(temp_v0 + 0x5e8) + 8));
  pcVar4 = (romwright_code *)FUN_00341060(*(unsigned int *)(*piVar5 + 8));
  if (param_2 == 0) {
    pcVar4 = FUN_001f3eec;
  }
  temp_v5 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x5dc) = temp_v5;
  *(unsigned int *)(temp_v0 + 0x5e0) = temp_v3;
  if (param_2 != 0) {
    if (param_2 == 1) {
      pcVar4 = FUN_001f3f34;
      *(romwright_code **)(temp_v0 + 0x5e4) = pcVar4;
    }
    else if (param_2 == 2) {
      *(romwright_code **)(temp_v0 + 0x5e4) = FUN_0016242c;
    }
  }
  else {
    *(romwright_code **)(temp_v0 + 0x5e4) = pcVar4;
  }
  *(unsigned int *)(temp_v0 + 0x648) = *(unsigned int *)(temp_v0 + 0x644);
  rt_memcpy_w(temp_v0 + 0x554,temp_v0 + 0x510,0x44);
  *(unsigned int *)(temp_v0 + 0x658) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x654) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x650) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x644) = temp_v3;
  if (*(int *)(temp_v0 + 0x5f8) != 0) {
    *(unsigned int *)(temp_v0 + 0x64c) = temp_v6;
    if (*(int *)(temp_v0 + 0x5fc) == 0) {
      *(unsigned int *)(temp_v0 + 0x654) = 0xc2960000;
    }
  }
  else {
    *(unsigned int *)(temp_v0 + 0x64c) = temp_v3;
    if (*(int *)(temp_v0 + 0x5fc) == 1) {
      *(unsigned int *)(temp_v0 + 0x654) = temp_v6;
    }
  }
  temp_v1 = 0;
  do {
    temp_v4 = temp_v0 + temp_v1 * 4;
    temp_v2 = jobIsValid(*(unsigned int *)(temp_v4 + 0x634));
    if (temp_v2 != 0) {
      FUN_002a21a4(*(unsigned int *)(temp_v4 + 0x634));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = temp_v0 + *(int *)(temp_v0 + 0x608) * 4;
  temp_v2 = *(int *)(temp_v1 + 0x6cc);
  *(int *)(temp_v0 + 0x5ec) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x5e8) = *(unsigned int *)(temp_v1 + 0x65c);
  *(unsigned char *)(temp_v0 + 0x5f5) = 0;
  temp_v1 = *(int *)(temp_v2 + 4);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(*(int *)(*(int *)(temp_v1 + 8) + 8) + 0x10);
    while (temp_v2 = temp_v2 - 1, -1 < temp_v2) {
      FUN_00449814(temp_v1,temp_v2);
    }
  }
  FUN_002e08c8(*(unsigned int *)(*(int *)(temp_v0 + 0x5e8) + 8));
  FUN_00341060(*(unsigned int *)(*piVar5 + 8));
  temp_v1 = *(int *)(*(int *)(*piVar5 + 8) + 0x4c);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(*(int *)(*(int *)(temp_v1 + 8) + 8) + 0x10);
    while (temp_v2 = temp_v2 - 1, -1 < temp_v2) {
      FUN_00449814(temp_v1,temp_v2);
    }
  }
  temp_v1 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x5e8) + 8) + 0x50);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(*(int *)(*(int *)(temp_v1 + 8) + 8) + 0x10);
    while (temp_v2 = temp_v2 - 1, -1 < temp_v2) {
      FUN_00449814(temp_v1,temp_v2);
    }
  }
  *(unsigned int *)(temp_v0 + 0x5f0) = 5;
  if (*(int *)(temp_v0 + 0x604) != 200) {
    if (*(int *)(temp_v0 + 0x600) != 200) {
      return;
    }
    FUN_003ae9d8(*(unsigned int *)(temp_v0 + 0x744),0);
    return;
  }
  *(unsigned int *)(temp_v0 + 0x744) = *(unsigned int *)(temp_v0 + 0x634);
  FUN_003ae9d8(0,1);
  FUN_003ae9d8(0,2);
  FUN_003ae9d8(0,3);
  return;
}

} /* extern "C" */
