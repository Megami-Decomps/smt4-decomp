/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8314` (_code @ 0x3a8314, 0x144 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_0043d9cc; /* 0x43d9cc */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0022d5c8. */
/* Supplied declaration required: FUN_0022e638. */
/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_002337a0(int);
extern int FUN_00240e8c(int);
/* Supplied declaration required: FUN_0026c7e8. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029cee4. */
extern int FUN_0029ebc4(int);
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0f50. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_003a820c. */


void FUN_003a8314(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 == 2) {
    temp_v0 = FUN_00297674();
    if (temp_v0 == 0) {
      temp_v0 = FUN_002337a0(param_1 + 0x20);
      FUN_003a820c(param_1,*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac));
      DAT_0043d9cc = 0xffffffff;
      temp_v1 = FUN_00240e8c(param_1 + 0x20);
      temp_v0 = FUN_0029ebc4(param_1 + 0x20);
      FUN_0022d5c8(param_1);
      if (temp_v0 >= 1) {
        temp_v0 = temp_v0 - 1;
      }
      else if ((temp_v1 != 0) && (*(int *)(param_1 + 0x28) <= temp_v1 + temp_v0)) {
        temp_v1 = temp_v1 - 1;
      }
      FUN_0022e638(param_1 + 0x20,temp_v0,temp_v1);
    }
    FUN_002a0f50();
    FUN_002b8b78();
    FUN_002a0f68(0);
    if (*(short *)(param_1 + 0x5a8) < 1) {
      if (*(char *)(param_1 + 0x5a4) == '\0') {
        FUN_0029cee4(1);
      }
      FUN_0029f10c(0,0x323232ff);
      FUN_0029ccf8();
      FUN_002333d4(param_1 + 0xdc,1);
      FUN_002a0f68(1);
      *(unsigned int *)(param_1 + 0x14) = 0xb;
      *(unsigned int *)(param_1 + 0x18) = 0;
      FUN_002329dc();
      FUN_0026c7e8();
      return;
    }
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
