/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004029f4` (_code @ 0x4029f4, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(unsigned int);
int FUN_0019de98(int, unsigned int);
int screenStartOrClear(unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_002ebce4(void);
/* Supplied declaration required: screenStartOrClear. */


void FUN_004029f4(int param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  *(char *)(param_1 + 4) = (char)param_2;
  *(unsigned char *)(param_1 + 5) = param_3;
  temp_v2 = 0;
  temp_v0 = 0x100;
  switch(param_2) {
  case 0:
  case 1:
  case 8:
    FUN_0019de98(0,0xf4f4f4ff);
    return;
  case 4:
  case 5:
  case 6:
  case 7:
    if (*(int *)(param_1 + 0x108) != 0) {
      temp_v0 = 0xff;
    }
    else if (*(char *)(param_1 + 0x104) == '\0') {
      temp_v0 = 0x101;
    }
    else {
      temp_v0 = 0x102;
    }
    temp_v2 = 1;
  }
  sysPlaySe(temp_v0);
  temp_v1 = FUN_002ebce4();
  if (temp_v1 == 0) {
    return;
  }
  screenStartOrClear(*(unsigned int *)(param_1 + 0xc),temp_v2);
  return;
}

} /* extern "C" */
