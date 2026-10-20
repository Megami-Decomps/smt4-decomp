/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036332c` (_code @ 0x36332c, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013dd78(unsigned int);
int memAlloc(int, int, int, unsigned int, int, int);
int FUN_001836b0(unsigned int);
int asdMemFree(unsigned int);
int FUN_00201890(void);
int FUN_00222104(void);
int FUN_00222180(void);
int FUN_00222434(void);
int FUN_00291038(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0013dd78. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00201890. */
extern unsigned int FUN_00201940(unsigned int);
/* Supplied declaration required: FUN_00222104. */
/* Supplied declaration required: FUN_00222180. */
/* Supplied declaration required: FUN_00222434. */
/* Supplied declaration required: FUN_00291038. */


void FUN_0036332c(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  switch(*(unsigned short *)(param_2 + 0xc)) {
  case 1:
  case 4:
  case 9:
    *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_2 + 0x54);
    *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_2 + 0x58);
    break;
  case 2:
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00222104();
    }
    temp_v0 = *(unsigned int *)(param_2 + 0x44);
    FUN_00201890();
    *(unsigned int *)(param_1 + 0x44) = temp_v0;
    break;
  case 5:
    temp_v2 = *(unsigned int *)(*(int *)(param_2 + 0x4c) + 8);
    if (temp_v2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      temp_v1 = 0;
      if (temp_v1 < temp_v2) {
        do {
          FUN_0013dd78(*(unsigned int *)(*(int *)(param_1 + 0x34) + temp_v1 * 4));
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < temp_v2);
      }
      asdMemFree(*(unsigned int *)(param_1 + 0x38));
      *(unsigned int *)(param_1 + 0x34) = 0;
      *(unsigned int *)(param_1 + 0x38) = 0;
    }
    if (temp_v2 << 2 == 0) {
      return;
    }
    temp_v0 = 0x10000;
    memAlloc(0x10000,0x100,0,temp_v2 << 2,0x10,1);
    *(unsigned int *)(param_1 + 0x38) = temp_v0;
    temp_v1 = 0;
    *(unsigned int *)(param_1 + 0x34) = temp_v0;
    if (temp_v2 != 0) {
      do {
        temp_v0 = **(unsigned int **)(param_2 + 0x34);
        FUN_00222180();
        *(unsigned int *)(*(int *)(param_1 + 0x34) + temp_v1 * 4) = temp_v0;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v2);
    }
    break;
  case 6:
    temp_v2 = *(unsigned int *)(*(int *)(param_2 + 0x4c) + 8);
    if (temp_v2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      temp_v1 = 0;
      if (temp_v1 < temp_v2) {
        do {
          FUN_001836b0(*(unsigned int *)(*(int *)(param_1 + 0x3c) + temp_v1 * 4));
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < temp_v2);
      }
      asdMemFree(*(unsigned int *)(param_1 + 0x40));
      *(unsigned int *)(param_1 + 0x3c) = 0;
      *(unsigned int *)(param_1 + 0x40) = 0;
    }
    if (temp_v2 << 2 == 0) {
      return;
    }
    temp_v0 = 0x10000;
    memAlloc(0x10000,0x100,0,temp_v2 << 2,0x10,1);
    *(unsigned int *)(param_1 + 0x40) = temp_v0;
    temp_v1 = 0;
    *(unsigned int *)(param_1 + 0x3c) = temp_v0;
    if (temp_v2 != 0) {
      do {
        temp_v0 = **(unsigned int **)(param_2 + 0x3c);
        FUN_00291038();
        *(unsigned int *)(*(int *)(param_1 + 0x3c) + temp_v1 * 4) = temp_v0;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v2);
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00222434();
    }
    temp_v0 = FUN_00201940(*(unsigned int *)(param_2 + 0x48));
    *(unsigned int *)(param_1 + 0x48) = temp_v0;
  }
  *(unsigned short *)(param_1 + 0xc) = *(unsigned short *)(param_2 + 0xc);
  return;
}

} /* extern "C" */
