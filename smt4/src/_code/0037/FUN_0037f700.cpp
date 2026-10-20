/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f700` (_code @ 0x37f700, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a215c(unsigned int, int);
int FUN_002c4038(int);
int FUN_0037b140(unsigned int);
int FUN_0037bd18(unsigned int);
int nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002a215c. */
extern unsigned int FUN_002a2174(void);
/* Supplied declaration required: FUN_002c4038. */
/* Supplied declaration required: FUN_0037b140. */
/* Supplied declaration required: FUN_0037bd18. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer. */


void FUN_0037f700(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  *(unsigned char *)(param_1 + 0xf) = 1;
  nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(param_1);
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v0 = FUN_002a2174();
    FUN_002a215c(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  temp_v1 = 0;
  do {
    FUN_0037b140(param_1 + temp_v1 * 0xc + 0x130);
    FUN_0037bd18(param_1 + temp_v1 * 0x10 + 0xf0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_002c4038(param_1);
  return;
}

} /* extern "C" */
