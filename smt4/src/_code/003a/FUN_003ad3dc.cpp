/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad3dc` (_code @ 0x3ad3dc, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002898e4(void);
int FUN_0028c040(void);
int FUN_0028d6d0(void);
int FUN_0028d9b0(void);
int FUN_00297468(...);
int FUN_0029a128(int);
int FUN_0029e788(void);
int FUN_0029e874(int);
int FUN_002a0cc8(int);
int asdTMTexTableLoadSprites(int);
int FUN_002c58c8(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_003ad4b8; /* 0x3ad4b8 */

extern int *asdTMTexTableGetEntry(unsigned int);
/* Supplied declaration required: FUN_002898e4. */
extern int FUN_00289d58(void);
/* Supplied declaration required: FUN_0028c040. */
/* Supplied declaration required: FUN_0028d6d0. */
/* Supplied declaration required: FUN_0028d9b0. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_0029e788. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_003ad3dc(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  FUN_002898e4();
  temp_v0 = FUN_00289d58();
  if (temp_v0 == 0) {
    *(unsigned char *)(param_1 + 0x1c) = 1;
    FUN_0028d9b0();
    FUN_0028d6d0();
  }
  piVar2 = (int *)asdTMTexTableGetEntry(0xd);
  if (*piVar2 == 0) {
    *(unsigned char *)(param_1 + 0x1d) = 1;
  }
  piVar2 = (int *)asdTMTexTableGetEntry(0x1d);
  if (*piVar2 == 0) {
    asdTMTexTableLoadSprites(0x1d);
    temp_v0 = 0;
    do {
      FUN_002c58c8(0x1d,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
    *(unsigned char *)(param_1 + 0x1e) = 1;
  }
  FUN_0028c040();
  FUN_0029a128(2);
  FUN_0029e874(1);
  FUN_0029e788();
  FUN_002a0cc8(1);
  FUN_00297468(&LAB_003ad4b8,param_1 + 0x598,0);
  FUN_00297468(0x3ad4c8,param_1 + 0x59c,0);
  return;
}

} /* extern "C" */
