/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7ca4` (_code @ 0x2e7ca4, 0x22c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00248f70(void);
int FUN_0024fb58(void);
int FUN_00256fec(void);
int FUN_00257108(void);
int FUN_0025715c(void);
int FUN_002c2264(unsigned int);
int FUN_002c2318(unsigned int);
int memAlloc(int, int, int, unsigned int, int, int);
int asdMemFree(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00248f70. */
/* Supplied declaration required: FUN_0024fb58. */
extern unsigned int FUN_00256fdc(unsigned int);
/* Supplied declaration required: FUN_00256fec. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_002c2264. */
/* Supplied declaration required: FUN_002c2318. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdMemFree. */


void FUN_002e7ca4(int param_1,int param_2)

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
      FUN_0025715c();
    }
    temp_v0 = *(unsigned int *)(param_2 + 0x44);
    FUN_00256fec();
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
          FUN_002c2318(*(unsigned int *)(*(int *)(param_1 + 0x34) + temp_v1 * 4));
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
        FUN_0024fb58();
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
          FUN_002c2264(*(unsigned int *)(*(int *)(param_1 + 0x3c) + temp_v1 * 4));
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
        FUN_00248f70();
        *(unsigned int *)(*(int *)(param_1 + 0x3c) + temp_v1 * 4) = temp_v0;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v2);
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00257108();
    }
    temp_v0 = FUN_00256fdc(*(unsigned int *)(param_2 + 0x48));
    *(unsigned int *)(param_1 + 0x48) = temp_v0;
  }
  *(unsigned short *)(param_1 + 0xc) = *(unsigned short *)(param_2 + 0xc);
  return;
}

} /* extern "C" */
