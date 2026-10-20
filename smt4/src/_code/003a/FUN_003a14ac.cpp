/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a14ac` (_code @ 0x3a14ac, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230558(int);
int FUN_002305e8(int);
int FUN_00292c0c(void);
int FUN_0029a084(int, int);
int FUN_0029a128(int);
int FUN_0029ca58(void);
int FUN_0029d684(int);
int FUN_0029defc(unsigned int, int);
int asdMdlManagerDestroy(void);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00230558. */
/* Supplied declaration required: FUN_002305e8. */
extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_00292c0c. */
extern int FUN_00295618(void);
/* Supplied declaration required: FUN_0029a084. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_0029ca58. */
/* Supplied declaration required: FUN_0029d684. */
/* Supplied declaration required: FUN_0029defc. */
extern int FUN_0029e0f8(void);
/* Supplied declaration required: asdMdlManagerDestroy. */
extern int FUN_002ae3c0(short);


void FUN_003a14ac(int param_1)

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
      pcVar5 = *(romwright_code **)((unsigned char *)pcVar5 + *(int *)(param_1 + ((int)temp_v2 >> 1)));
    }
    (*pcVar5)();
  }
  piVar6 = (int *)(param_1 + 0x15d24);
  switch(*piVar6) {
  case 1:
    temp_v1 = FUN_0029e0f8();
    if (temp_v1 != 0) {
      FUN_0029defc(0xffffffff,0);
      FUN_0029d684(1);
      temp_v1 = *(int *)(param_1 + 0x860);
      temp_v3 = FUN_0023360c(param_1 + temp_v1 * 0x74 + 0x880);
      temp_v0 = *(short *)(param_1 + temp_v1 * 0x1002 + 0xc94 + temp_v3 * 4);
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ae3c0(temp_v0);
        if (temp_v1 == 4) {
          FUN_0029a084(0,temp_v0);
        }
        temp_v1 = FUN_002ae3c0(temp_v0);
        if (temp_v1 == 5) {
          FUN_0029a084(1,temp_v0);
        }
        temp_v1 = FUN_002ae3c0(temp_v0);
        if (temp_v1 == 6) {
          FUN_0029a084(2,temp_v0);
        }
      }
      temp_v1 = 2;
      *piVar6 = temp_v1;
      return;
    }
    break;
  case 3:
    temp_v1 = FUN_00295618();
    if (temp_v1 != 0) {
      *piVar6 = 0;
      FUN_0029a128(0);
      FUN_00292c0c();
      FUN_002305e8(1);
      return;
    }
    break;
  case 4:
    temp_v3 = FUN_0029e0f8();
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
      FUN_0029ca58();
      *piVar6 = 3;
      FUN_00230558(0);
      if (*(int *)(param_1 + 0x15d48) != 0) {
        asdMdlManagerDestroy();
        *(int *)(param_1 + 0x15d48) = 0;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
