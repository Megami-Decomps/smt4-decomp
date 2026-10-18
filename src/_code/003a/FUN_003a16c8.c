/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a16c8` (_code @ 0x3a16c8, 0x1f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002306ec. */
/* Supplied declaration required: FUN_0023077c. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_00292eb0. */
extern int FUN_002958bc(void);
/* Supplied declaration required: FUN_0029a320. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029d924. */
/* Supplied declaration required: FUN_0029e19c. */
extern int FUN_0029e398(void);
/* Supplied declaration required: FUN_002a7aa0. */
extern int FUN_002ae64c(short);


void FUN_003a16c8(int param_1)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  romwright_code *pcVar5;
  int *piVar6;
  
  temp_v1 = param_1 + *(int *)(param_1 + 4) * 8;
  pcVar5 = *(romwright_code **)(temp_v1 + 0x20);
  temp_v2 = *(unsigned int *)(temp_v1 + 0x24);
  if ((pcVar5 != (romwright_code *)0x0) || (((temp_v2 & 1) != 0 && (temp_v2 != 0)))) {
    if ((temp_v2 & 1) != 0) {
      pcVar5 = *(romwright_code **)(pcVar5 + *(int *)(param_1 + ((int)temp_v2 >> 1)));
    }
    (*pcVar5)();
  }
  piVar6 = (int *)(param_1 + 0x15d24);
  switch(*piVar6) {
  case 1:
    temp_v1 = FUN_0029e398();
    if (temp_v1 != 0) {
      FUN_0029e19c(0xffffffff,0);
      FUN_0029d924(1);
      temp_v1 = *(int *)(param_1 + 0x860);
      temp_v3 = FUN_002337a0(param_1 + temp_v1 * 0x74 + 0x880);
      temp_v0 = *(short *)(param_1 + temp_v1 * 0x1002 + 0xc94 + temp_v3 * 4);
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ae64c(temp_v0);
        if (temp_v1 == 4) {
          FUN_0029a320(0,temp_v0);
        }
        temp_v1 = FUN_002ae64c(temp_v0);
        if (temp_v1 == 5) {
          FUN_0029a320(1,temp_v0);
        }
        temp_v1 = FUN_002ae64c(temp_v0);
        if (temp_v1 == 6) {
          FUN_0029a320(2,temp_v0);
        }
      }
      temp_v1 = 2;
      *piVar6 = temp_v1;
      return;
    }
    break;
  case 3:
    temp_v1 = FUN_002958bc();
    if (temp_v1 != 0) {
      *piVar6 = 0;
      FUN_0029a3c4(0);
      FUN_00292eb0();
      FUN_0023077c(1);
      return;
    }
    break;
  case 4:
    temp_v3 = FUN_0029e398();
    temp_v1 = 0;
    if (temp_v3 != 0) {
      temp_v1 = *piVar6;
    }
    if (temp_v3 != 0 && temp_v1 != 3) {
      if (temp_v1 == 1) {
        temp_v1 = 4;
        *piVar6 = temp_v1;
        return;
      }
      FUN_0029ccf8();
      *piVar6 = 3;
      FUN_002306ec(0);
      if (*(int *)(param_1 + 0x15d48) != 0) {
        FUN_002a7aa0();
        *(int *)(param_1 + 0x15d48) = 0;
        return;
      }
    }
  }
  return;
}
