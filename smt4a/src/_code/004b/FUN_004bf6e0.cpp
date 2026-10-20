/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bf6e0` (_code @ 0x4bf6e0, 0x29c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_003e8bb0(unsigned char [68], unsigned int, int);
int FUN_003f0e20(...);

/* stack frame of param_1: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp5E; /* 0x5e: local_5e */
} param_1_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
extern unsigned int *FUN_004ee568(unsigned int);


void FUN_004bf6e0(int param_1)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  float in_s0;
  int temp_v4;
  unsigned char temp_v5 [68];
  
  temp_v2 = (int)in_s0;
  temp_v0 = FUN_0014aa78();
  FUN_003f0e20(temp_v0,(int)in_s0);
  temp_v1 = FUN_0014aa78();
  FUN_003f0e20(temp_v1,temp_v2);
  temp_v3 = temp_v2;
  switch(param_1) {
  case 7:
  case 8:
    if ((*(unsigned short *)(temp_v1 + 0x274) & 0x10) != 0) {
      temp_v0 = FUN_0014aa78();
      FUN_003f0e20(temp_v0,temp_v2);
    }
    break;
  case 9:
    temp_v0 = FUN_0014aa78();
    FUN_003f0e20(temp_v0,temp_v2);
    break;
  case 10:
    break;
  case 0xb:
    temp_v0 = FUN_0014aa78();
    FUN_003f0e20(temp_v0,temp_v2);
  }
  puVar3 = (unsigned int *)FUN_004ee568(DAT_0057113c);
  if ((*puVar3 & 0x200) == 0) {
    if (param_1 != 8) {
      if (param_1 == 7) {
        temp_v2 = temp_v3;
        temp_v0 = FUN_0014aa78();
        FUN_003f0e20(temp_v0,temp_v3);
        temp_v0 = FUN_0014aa78();
        FUN_003f0e20(temp_v0,temp_v2);
      }
    }
    else {
      temp_v4 = temp_v3;
      temp_v0 = FUN_0014aa78();
      FUN_003f0e20(temp_v0,temp_v3);
      temp_v2 = temp_v4;
      temp_v0 = FUN_0014aa78();
      FUN_003f0e20(temp_v0,temp_v4);
      temp_v3 = temp_v2;
      temp_v0 = FUN_0014aa78();
      FUN_003f0e20(temp_v0,temp_v2);
      temp_v2 = FUN_0014aa78();
      FUN_003f0e20(temp_v2,temp_v3);
      temp_v3 = 0;
      if (temp_v2 != 0) {
        temp_v3 = *(int *)(temp_v2 + 0x11c);
      }
      if ((temp_v2 != 0 && temp_v3 != 0) && -1 < temp_v3) {
        temp_v0 = FUN_0014aa78();
        FUN_003e8bb0(temp_v5,temp_v0,temp_v1);
      }
    }
  }
  return;
}

} /* extern "C" */
