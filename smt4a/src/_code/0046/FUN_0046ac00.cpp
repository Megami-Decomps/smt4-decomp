/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046ac00` (_code @ 0x46ac00, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_0019ea64(int);
int FUN_0020401c(void);
int FUN_003a7630(int);
int FUN_003c1060(void);
int FUN_003c3e14(void);
int FUN_003fd63c(int, int);
int FUN_00468878(int, unsigned char *);
int FUN_0046bc3c(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0046adb0; /* 0x46adb0 */
extern unsigned char LAB_0046adc4; /* 0x46adc4 */
extern unsigned char LAB_0046add4; /* 0x46add4 */
extern unsigned char LAB_0046ade0; /* 0x46ade0 */

/* Supplied declaration required: FUN_001681cc. */
extern unsigned char FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_0020401c. */
extern int FUN_002c2758(unsigned short);
/* Supplied declaration required: FUN_003a7630. */
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_00468878. */
/* Supplied declaration required: FUN_0046bc3c. */


void FUN_0046ac00(int param_1)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  temp_v2 = 0;
  do {
    temp_v3 = FUN_002c2758(temp_v2);
    temp_v4 = temp_v2;
    if (temp_v3 == 1) break;
    temp_v2 = temp_v2 + 1;
    temp_v4 = 0;
  } while (temp_v2 < 0x20);
  temp_v5 = 0;
  temp_v1 = FUN_0018719c(0x586);
  if ((temp_v4 == 6) && (*(char *)(param_1 + 0x18) != '\0')) {
    temp_v5 = *(char *)(param_1 + 0x10) != '\x0e';
    FUN_003fd63c(0x586,1);
  }
  temp_v6 = (temp_v5 & ~temp_v1) == 0;
  temp_v0 = '\0';
  if (!temp_v6) {
    temp_v0 = *(char *)(param_1 + 0x18);
  }
  if (!(temp_v6 || temp_v0 == '\0')) {
    FUN_003c3e14();
    FUN_0019ea64(1);
    FUN_001681cc(0x92);
    FUN_00468878(param_1,&LAB_0046adb0);
    *(unsigned char *)(param_1 + 0x1b) = 1;
    *(unsigned int *)(param_1 + 4) = 0xe;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    if (((temp_v4 != 0) && (temp_v5 == 0)) && (*(char *)(param_1 + 0x18) != '\0')) {
      FUN_003c3e14();
      FUN_0019ea64(1);
      FUN_001681cc(0x92);
      FUN_00468878(param_1,&LAB_0046adc4);
      *(unsigned char *)(param_1 + 0x1b) = 1;
      *(unsigned int *)(param_1 + 4) = 0xe;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
    FUN_003a7630(1);
    FUN_003c1060();
    if (*(char *)(param_1 + 0x1b) != '\0') {
      FUN_00468878(param_1,&LAB_0046add4);
    }
    else {
      FUN_00468878(param_1,&LAB_0046ade0);
    }
    FUN_0046bc3c(param_1 + 0x19,(int)*(char *)(param_1 + 0x10));
    FUN_0020401c();
    *(unsigned int *)(param_1 + 4) = 6;
    *(unsigned int *)(param_1 + 8) = 0;
    if (*(char *)(param_1 + 0x18) == '\0') {
      FUN_001681cc(0xa0);
      return;
    }
  }
  return;
}

} /* extern "C" */
