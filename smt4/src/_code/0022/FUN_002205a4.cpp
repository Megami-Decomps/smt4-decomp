/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002205a4` (_code @ 0x2205a4, 0x3bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001eb808(unsigned int);
int FUN_0024ecc0(...);
int FUN_0024edd4(int, int);
int FUN_0028703c(unsigned int);
int FUN_0029bb14(unsigned int);
int FUN_0029c2cc(unsigned int, int);
int FUN_002adf00(int, unsigned int);
int VectorSignedToFloat(unsigned int, int);
int rt_memcpy_w(int, int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001241a8(...); /* 0x1241a8 */
extern int FUN_00247f0c(...); /* 0x247f0c */
extern int FUN_0026e70c(...); /* 0x26e70c */
extern int g_bustupCutAnim; /* 0x43dfc0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001eb808. */
/* Supplied declaration required: FUN_0024ecc0. */
/* Supplied declaration required: FUN_0024edd4. */
/* Supplied declaration required: FUN_0028703c. */
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: FUN_002adf00. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002205a4(int param_1,int param_2,unsigned int param_3)

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
  *(unsigned int *)(g_bustupCutAnim + 0x5f8) = *(unsigned int *)(g_bustupCutAnim + 0x5f4);
  temp_v3 = *(unsigned int *)(temp_v0 + 0x600);
  *(int *)(temp_v0 + 0x600) = param_1;
  *(unsigned int *)(temp_v0 + 0x5fc) = temp_v3;
  piVar5 = (int *)(g_bustupCutAnim + 0x604);
  if (param_1 != 200) {
    temp_v1 = *(int *)(temp_v0 + 0x600);
    if (param_1 < 100) {
      *(unsigned int *)(temp_v0 + 0x5f4) = 0;
    }
    else {
      *(unsigned int *)(temp_v0 + 0x5f4) = 1;
      temp_v1 = temp_v1 - 100;
    }
    *(int *)(temp_v0 + 0x604) = temp_v1;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x604) = 0xb;
    *(unsigned int *)(temp_v0 + 0x5f4) = 1;
  }
  temp_v3 = 0;
  temp_v6 = 0x42960000;
  if (*(char *)(temp_v0 + 0x5f0) == '\0') {
    *(unsigned int *)(temp_v0 + 0x5e8) = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x604) * 4 + 0x6c8);
    *(unsigned int *)(temp_v0 + 0x5e4) = *(unsigned int *)(temp_v0 + *piVar5 * 4 + 0x658);
    *(unsigned char *)(temp_v0 + 0x5f1) = 0;
    if (*(int *)(temp_v0 + 0x600) == 200) {
      *(unsigned int *)(temp_v0 + 0x740) = *(unsigned int *)(temp_v0 + 0x630);
      FUN_0024ecc0(0);
    }
    *(unsigned int *)(temp_v0 + 0x5ec) = 2;
    if (*(int *)(temp_v0 + 0x5f4) == 0) {
      *(unsigned int *)(temp_v0 + 0x640) = temp_v3;
    }
    else {
      *(unsigned int *)(temp_v0 + 0x640) = temp_v6;
    }
    *(unsigned int *)(temp_v0 + 0x64c) = temp_v3;
    *(int *)(temp_v0 + 0x5f8) = *(int *)(temp_v0 + 0x5f4);
    *(unsigned int *)(temp_v0 + 0x5fc) = *(unsigned int *)(temp_v0 + 0x600);
    return;
  }
  FUN_002adf00(temp_v0 + 0x50c,*(unsigned int *)(temp_v0 + 0x5e8));
  if (*(char *)(temp_v0 + 0x5f1) != '\0') {
    FUN_0029c2cc(*(unsigned int *)(temp_v0 + 0x5e8),0);
  }
  temp_v1 = *(int *)(*(int *)(temp_v0 + 0x5e8) + 4);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(*(int *)(*(int *)(temp_v1 + 8) + 8) + 0x10);
    while (temp_v2 = temp_v2 - 1, -1 < temp_v2) {
      FUN_0024edd4(temp_v1,temp_v2);
    }
  }
  piVar5 = (int *)(temp_v0 + 0x5e4);
  FUN_0028703c(*(unsigned int *)(*(int *)(temp_v0 + 0x5e4) + 8));
  pcVar4 = (romwright_code *)FUN_0029bb14(*(unsigned int *)(*piVar5 + 8));
  if (param_2 == 0) {
    pcVar4 = FUN_0026e70c;
  }
  temp_v5 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x5d8) = temp_v5;
  *(unsigned int *)(temp_v0 + 0x5dc) = temp_v3;
  if (param_2 != 0) {
    if (param_2 == 1) {
      pcVar4 = FUN_00247f0c;
      *(romwright_code **)(temp_v0 + 0x5e0) = pcVar4;
    }
    else if (param_2 == 2) {
      *(romwright_code **)(temp_v0 + 0x5e0) = FUN_001241a8;
    }
  }
  else {
    *(romwright_code **)(temp_v0 + 0x5e0) = pcVar4;
  }
  *(unsigned int *)(temp_v0 + 0x644) = *(unsigned int *)(temp_v0 + 0x640);
  rt_memcpy_w(temp_v0 + 0x550,temp_v0 + 0x50c,0x44);
  *(unsigned int *)(temp_v0 + 0x654) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x650) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x64c) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x640) = temp_v3;
  if (*(int *)(temp_v0 + 0x5f4) != 0) {
    *(unsigned int *)(temp_v0 + 0x648) = temp_v6;
    if (*(int *)(temp_v0 + 0x5f8) == 0) {
      *(unsigned int *)(temp_v0 + 0x650) = 0xc2960000;
    }
  }
  else {
    *(unsigned int *)(temp_v0 + 0x648) = temp_v3;
    if (*(int *)(temp_v0 + 0x5f8) == 1) {
      *(unsigned int *)(temp_v0 + 0x650) = temp_v6;
    }
  }
  temp_v1 = 0;
  do {
    temp_v4 = temp_v0 + temp_v1 * 4;
    temp_v2 = jobIsValid(*(unsigned int *)(temp_v4 + 0x630));
    if (temp_v2 != 0) {
      FUN_001eb808(*(unsigned int *)(temp_v4 + 0x630));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v2 = temp_v0 + *(int *)(temp_v0 + 0x604) * 4;
  temp_v1 = *(int *)(temp_v2 + 0x6c8);
  *(int *)(temp_v0 + 0x5e8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x5e4) = *(unsigned int *)(temp_v2 + 0x658);
  *(unsigned char *)(temp_v0 + 0x5f1) = 0;
  temp_v1 = *(int *)(temp_v1 + 4);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(*(int *)(*(int *)(temp_v1 + 8) + 8) + 0x10);
    while (temp_v2 = temp_v2 - 1, -1 < temp_v2) {
      FUN_0024edd4(temp_v1,temp_v2);
    }
  }
  FUN_0028703c(*(unsigned int *)(*(int *)(temp_v0 + 0x5e4) + 8));
  FUN_0029bb14(*(unsigned int *)(*piVar5 + 8));
  temp_v1 = *(int *)(*(int *)(*piVar5 + 8) + 0x4c);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(*(int *)(*(int *)(temp_v1 + 8) + 8) + 0x10);
    while (temp_v2 = temp_v2 - 1, -1 < temp_v2) {
      FUN_0024edd4(temp_v1,temp_v2);
    }
  }
  temp_v1 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x5e4) + 8) + 0x50);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(*(int *)(*(int *)(temp_v1 + 8) + 8) + 0x10);
    while (temp_v2 = temp_v2 - 1, -1 < temp_v2) {
      FUN_0024edd4(temp_v1,temp_v2);
    }
  }
  *(unsigned int *)(temp_v0 + 0x5ec) = 5;
  if (*(int *)(temp_v0 + 0x600) != 200) {
    if (*(int *)(temp_v0 + 0x5fc) != 200) {
      return;
    }
    FUN_0024ecc0(*(unsigned int *)(temp_v0 + 0x740),0);
    return;
  }
  *(unsigned int *)(temp_v0 + 0x740) = *(unsigned int *)(temp_v0 + 0x630);
  FUN_0024ecc0(0,1);
  FUN_0024ecc0(0,2);
  FUN_0024ecc0(0,3);
  return;
}

} /* extern "C" */
