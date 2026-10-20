/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a39bc` (_code @ 0x4a39bc, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_0031a218(unsigned int, int);
int FUN_003343f0(int);
int FUN_0035db58(void);
int FUN_003c5fc4(int);
int FUN_00480fc0(int, int);
int FUN_004a8750(unsigned int, int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
extern int FUN_00224880(unsigned int);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_0031a218. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0035db58. */
extern int FUN_00370794(void);
/* Supplied declaration required: FUN_003c5fc4. */
/* Supplied declaration required: FUN_00480fc0. */
/* Supplied declaration required: FUN_004a8750. */
extern int FUN_004cfe4c(int);


void FUN_004a39bc(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2 [4];
  
  temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x85c));
  if (temp_v0 == 2) {
    temp_v0 = FUN_00370794();
    if (temp_v0 != 3) {
      if (*(char *)(param_1 + 0xa870) == '\a') {
        temp_v2[0] = 3;
        temp_v2[1] = 2;
        *(char *)(param_1 + 0xa870) = '\0';
      }
      else {
        temp_v2[0] = 1;
        temp_v2[1] = 2;
      }
    }
    else {
      temp_v2[0] = 1;
      temp_v2[1] = 3;
      temp_v2[2] = 2;
    }
    temp_v0 = FUN_002a4b74();
    temp_v0 = temp_v2[temp_v0];
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        FUN_003c5fc4(0);
        FUN_003343f0(0);
        *(unsigned int *)(param_1 + 0x14) = 2;
        *(unsigned int *)(param_1 + 0x18) = 0;
        sysPlaySe(0x2f);
        return;
      }
      if (temp_v0 != 3) {
        FUN_003343f0(0);
        *(unsigned int *)(param_1 + 0x14) = 2;
        *(unsigned int *)(param_1 + 0x18) = 0;
      }
      else {
        FUN_00480fc0(0x7c3,1);
        FUN_003343f0(0);
        *(unsigned int *)(param_1 + 0x14) = 5;
        *(unsigned int *)(param_1 + 0x18) = 0;
        FUN_0035db58();
      }
    }
    else {
      temp_v0 = FUN_004cfe4c(param_1 + 0x20);
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x868);
      FUN_004a8750(temp_v1,*(unsigned char *)(param_1 + 0x861),0);
      FUN_0031a218(-temp_v1,0);
      FUN_003343f0(1);
      *(unsigned int *)(param_1 + 0x14) = 4;
      *(unsigned int *)(param_1 + 0x18) = 0;
      FUN_0035db58();
    }
    sysPlaySe(0x2f);
  }
  return;
}

} /* extern "C" */
