/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7de4` (_code @ 0x3a7de4, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023553c(int);
int FUN_00295c04(unsigned int);
int FUN_0029be5c(int, unsigned int);
int FUN_0029c1c8(int, int);
int FUN_0029ce60(unsigned int, int, int);
int FUN_002a0cc8(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_0023553c. */
/* Supplied declaration required: FUN_00295c04. */
/* Supplied declaration required: FUN_0029be5c. */
/* Supplied declaration required: FUN_0029c1c8. */
extern int FUN_0029c1fc(void);
extern int FUN_0029c3ec(void);
/* Supplied declaration required: FUN_0029ce60. */
/* Supplied declaration required: FUN_002a0cc8. */
extern int gameGlobalsFlagIsClear(void);


void FUN_003a7de4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_0029c3ec();
  if ((temp_v1 == 1) && (temp_v1 = gameGlobalsFlagIsClear(), temp_v1 != 0)) {
    FUN_0023553c(0);
    temp_v1 = FUN_0023360c(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
    temp_v1 = FUN_0029c1fc();
    if (temp_v1 != -1) {
      FUN_0029c1c8(temp_v1,temp_v0);
    }
    temp_v2 = (unsigned int)temp_v0;
    FUN_0029ce60(temp_v2,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_00295c04(-temp_v2);
    FUN_0029be5c(0x28,temp_v2);
    FUN_002a0cc8(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
