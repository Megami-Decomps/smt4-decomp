/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b404` (_code @ 0x35b404, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_003459d4; /* 0x3459d4 */
extern unsigned char LAB_0036edf4; /* 0x36edf4 */
extern unsigned int *DAT_0058812c; /* 0x58812c */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_003c607c. */
extern int FUN_003f86c8(unsigned int);
/* Supplied declaration required: FUN_003f881c. */


void FUN_0035b404(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  int temp_v0;
  
  puVar1 = (unsigned int *)0xac;
  FUN_0016007c();
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  else {
    puVar1 = (unsigned int *)0x0;
  }
  pcVar2 = "DEVIL_MARKET PROC";
  DAT_0058812c = puVar1;
  FUN_0014e38c("DEVIL_MARKET PROC",4,0,0,&LAB_003459d4,0,0);
  *puVar1 = (unsigned int)pcVar2;
  FUN_0015155c("DEVIL_MARKET DD",0xeb,0,0,&LAB_0036edf4,0,0,pcVar2);
  puVar1[0x27] = param_1;
  FUN_002804b0("npc_shop/DevilMarket/DevilMarket.mbm",puVar1 + 4,0);
  FUN_002804b0("npc_shop/DevilMarket/DevilMarket.bf",puVar1 + 5,0);
  *(unsigned char *)(puVar1 + 7) = 0;
  temp_v0 = FUN_003f86c8(0x4f);
  if (temp_v0 == 0) {
    FUN_003f881c(0x4f,0);
    *(unsigned char *)(puVar1 + 7) = 1;
  }
  FUN_00342010();
  FUN_002c7e6c();
  FUN_002c85b0(0);
  FUN_002c8538(0);
  FUN_003c607c(1);
  puVar1[3] = puVar1[1];
  puVar1[1] = 1;
  puVar1[2] = 0;
  return;
}
