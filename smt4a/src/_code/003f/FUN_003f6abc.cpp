/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6abc` (_code @ 0x3f6abc, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016780c(unsigned int, int, int);
int FUN_001688c4(unsigned int);
int FUN_00203b40(int, int, int, int, int, int);
int FUN_002a1f60(unsigned int, int, unsigned int, int, int, unsigned int, int);
int FUN_002e08b0(int, int);
int FUN_003ff1d4(int, int);
int FUN_003ff20c(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0016780c. */
/* Supplied declaration required: FUN_001688c4. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_002e08b0. */
extern int flagsBGetBit1(unsigned short);
/* Supplied declaration required: FUN_003ff1d4. */
extern int flagsBGetBit2(unsigned short);
/* Supplied declaration required: FUN_003ff20c. */


void FUN_003f6abc(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = **(unsigned short **)(param_1 + 0x5e0);
  *(unsigned char *)(param_1 + 0x120) = 0;
  *(unsigned int *)(param_1 + 0x128) = 0;
  temp_v1 = **(unsigned short **)(param_1 + 0x5e0);
  FUN_0016780c(*(unsigned int *)(param_1 + 0x28),temp_v1,0);
  FUN_002a1f60(*(unsigned int *)(param_1 + 0x5d8),3,0xffffffff,0,3,*(unsigned int *)(param_1 + 0x28),
               temp_v1);
  temp_v2 = FUN_001688c4(*(unsigned int *)(param_1 + 0x5d8));
  *(unsigned int *)(param_1 + 0x5dc) = temp_v2;
  temp_v3 = FUN_001688c4(*(unsigned int *)(param_1 + 0x5d8));
  FUN_00203b40(param_1 + 0xbc,*(int *)(param_1 + 0x128) + temp_v3,7,1,0,1);
  FUN_002e08b0(param_1 + 0xbc,0);
  *(unsigned int *)(param_1 + 0x124) = 0;
  temp_v3 = flagsBGetBit2(temp_v0);
  if (temp_v3 == 0) {
    FUN_003ff20c(temp_v0,1);
  }
  *(unsigned int *)(param_1 + 0x3c) = 0;
  temp_v3 = flagsBGetBit1(temp_v0);
  if (temp_v3 != 0) {
    FUN_003ff1d4(temp_v0,0);
    temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x5e0) + 0x30);
    if (temp_v4 != 0) {
      *(unsigned int *)(param_1 + 0x3c) = temp_v4;
    }
  }
  *(unsigned int *)(param_1 + 0x50) = 0;
  return;
}

} /* extern "C" */
