/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003848b8` (_code @ 0x3848b8, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00234cd8(unsigned int, int, int);
int FUN_0028c640(unsigned int, int, unsigned char [16]);
int FUN_002adde8(unsigned int, unsigned char [32], unsigned char [16]);
int FUN_002be624(unsigned char [32], unsigned char *, unsigned int);
int FUN_00341a3c(unsigned int);

typedef int romwright_code(...);
extern unsigned char LAB_003849c4; /* 0x3849c4 */

/* Supplied declaration required: FUN_00234cd8. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_002adde8. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_00341a3c. */


void FUN_003848b8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  romwright_code *pcVar4;
  unsigned char temp_v3;
  unsigned char temp_v4 [32];
  unsigned char temp_v5 [16];
  
  temp_v1 = param_1 + *(int *)(param_1 + 4) * 8;
  pcVar4 = *(romwright_code **)(temp_v1 + 0x5c8);
  temp_v2 = *(unsigned int *)(temp_v1 + 0x5cc);
  if ((pcVar4 != (romwright_code *)0x0) || (((temp_v2 & 1) != 0 && (temp_v2 != 0)))) {
    if ((temp_v2 & 1) != 0) {
      pcVar4 = *(romwright_code **)((unsigned char *)pcVar4 + *(int *)(param_1 + ((int)temp_v2 >> 1)));
    }
    (*pcVar4)();
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    temp_v1 = *(int *)(param_1 + 0xfb0);
    if (*(int *)(param_1 + 0xfb4) != temp_v1) {
      *(int *)(param_1 + 0xfb4) = temp_v1;
      FUN_00234cd8(*(unsigned int *)(param_1 + 0xfac),temp_v1,0);
    }
    FUN_00341a3c(*(unsigned int *)(param_1 + 0xfac));
  }
  temp_v0 = *(char *)(param_1 + 0xd40);
  temp_v3 = temp_v0 == '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(param_1 + 0x21);
  }
  if (temp_v3 && temp_v0 == '\0') {
    temp_v2 = 0;
    *(unsigned char *)(param_1 + 0xd40) = 1;
    do {
      FUN_002be624(temp_v4,&LAB_003849c4,temp_v2 + 1);
      FUN_002adde8(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xfac) + 0x1c) + 8),temp_v4,
                   temp_v5);
      temp_v1 = param_1 + temp_v2 * 4;
      FUN_0028c640(*(unsigned int *)(*(int *)(temp_v1 + 0xd10) + 8),0,temp_v5);
      FUN_0028c640(*(unsigned int *)(*(int *)(temp_v1 + 0xd28) + 8),0,temp_v5);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
  }
  return;
}

} /* extern "C" */
