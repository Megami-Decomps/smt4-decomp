/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021b1a8` (_code @ 0x21b1a8, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019de98. */
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);


void FUN_0021b1a8(int param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002a4860(param_1 + 0x10);
  temp_v1 = FUN_002a4894(param_1 + 0x10);
  temp_v2 = *(unsigned int *)(param_1 + (temp_v1 + temp_v0) * 4 + 0x74);
  if (temp_v2 == 0x8b) {
    pcVar4 = "While Estoma is active, repels enemies\nup to eight levels higher than you.";
  }
  else if (temp_v2 == 0x8c) {
    pcVar4 = 
    "Reduces the number of turns it takes for\nan incapacitated partner to return to battle.";
  }
  else if (temp_v2 == 0x81) {
    pcVar4 = "Raises the odds of an enemy preemptive\nattack. (Press the Y Button to remove)";
  }
  else {
    if (temp_v2 != 0x80) goto LAB_0021b21c;
    pcVar4 = "Game over when protagonist\'s HP reaches\nzero. (Press the Y Button to remove)";
  }
  if (pcVar4 != (char *)0x0) {
    FUN_0019de98(pcVar4,0xf4f4f4ff);
    return;
  }
LAB_0021b21c:
  temp_v3 = 0;
  if (*(unsigned int *)(param_1 + 0x2b0) != 0) {
    do {
      if (*(unsigned short *)(*(int *)(param_1 + 0x2ac) + temp_v3 * 0x60) == temp_v2) {
        FUN_0019de98(temp_v3 * 0x60 + 2 + *(int *)(param_1 + 0x2ac),0xf4f4f4ff);
        return;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(unsigned int *)(param_1 + 0x2b0));
  }
  return;
}
