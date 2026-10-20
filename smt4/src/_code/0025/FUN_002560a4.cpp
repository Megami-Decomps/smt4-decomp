/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002560a4` (_code @ 0x2560a4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a7dbc(int, unsigned int, int, int);
int FUN_0028975c(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001a7dbc. */
/* Supplied declaration required: FUN_0028975c. */
extern int gameGetOptions(void);


void FUN_002560a4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = gameGetOptions();
  if ((*(unsigned short *)(temp_v0 + 0x608) & 1) != 0) {
    FUN_001a7dbc(temp_v0,0xffffffff,param_1,3);
    *(unsigned short *)(temp_v0 + 0x604) = 0;
    if (param_1 == 0x2a3) {
      FUN_0028975c(0x262,1);
      return;
    }
    if (param_1 == 0x2a5) {
      FUN_0028975c(0x263,1);
      return;
    }
  }
  return;
}

} /* extern "C" */
