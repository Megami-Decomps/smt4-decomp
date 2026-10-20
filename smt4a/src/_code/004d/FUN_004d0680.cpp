/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0680` (_code @ 0x4d0680, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_00184528(int, int);
int FUN_00388758(int);
int FUN_004d097c(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_00184528. */
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_004d097c. */


void FUN_004d0680(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xb;
  temp_v0 = FUN_0035db94();
  if (temp_v0 == 1) {
    *(unsigned short *)(param_1 + 0xa874) = 9;
  }
  else {
    *(unsigned short *)(param_1 + 0xa874) = 0xb;
  }
  FUN_00184528(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa874));
  if (*(char *)(param_1 + 0x860) == '\0') {
    FUN_00388758(1);
  }
  FUN_004d097c(*(unsigned int *)(param_1 + 0x84c));
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x848)) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x848));
  }
  *(unsigned short *)(param_1 + 0x848) = 0;
  return;
}

} /* extern "C" */
