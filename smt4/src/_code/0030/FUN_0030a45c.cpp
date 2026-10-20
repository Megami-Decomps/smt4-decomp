/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a45c` (_code @ 0x30a45c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_002bf6fc(unsigned int, unsigned int, int, int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0043e068; /* 0x43e068 */
extern unsigned int DAT_0043e06c; /* 0x43e06c */
extern unsigned int DAT_0043e070; /* 0x43e070 */

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002bf6fc. */
extern unsigned int *jobGetWork(void);
extern int gameFlagIsSet(unsigned int);


unsigned int FUN_0030a45c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  scrGetArg(0);
  puVar1 = (unsigned int *)jobGetWork();
  temp_v2 = *puVar1;
  temp_v0 = scrGetArg(1);
  FUN_002bf6fc(temp_v2,temp_v0,1,1,0xffffffff);
  temp_v1 = gameFlagIsSet(0x522);
  if (temp_v1 != 0) {
    DAT_0043e06c = 1;
    DAT_0043e070 = 1;
    DAT_0043e068 = temp_v0;
  }
  return 1;
}

} /* extern "C" */
