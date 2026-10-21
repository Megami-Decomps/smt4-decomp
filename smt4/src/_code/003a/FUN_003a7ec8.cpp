/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7ec8` (_code @ 0x3a7ec8, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029ce60(unsigned int, int, int, int, int);
int devilGetRecord(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int gameSlotTableGetHeader(void);
extern int flaggedValueHolderGetTotal(int);
extern int partyHasStoredDemon(unsigned int);
extern int FUN_0029c1fc(void);
/* Supplied declaration required: FUN_0029ce60. */
/* Supplied declaration required: devilGetRecord. */


unsigned int FUN_003a7ec8(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = param_2;
  FUN_0029ce60(param_2,*(unsigned char *)(param_1 + 0x5a5),0,'c' < *(char *)(param_1 + 0x94),0);
  temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x20);
  if (*(char *)(param_1 + 0x5a5) == '\0') {
    devilGetRecord(*(unsigned short *)(param_1 + temp_v2 * 0x20 + 0x5ac));
  }
  temp_v3 = gameSlotTableGetHeader();
  if (temp_v3 < temp_v1) {
    temp_v0 = '\x01';
  }
  else {
    temp_v2 = partyHasStoredDemon(param_2);
    if (temp_v2 != 0) {
      temp_v0 = '\x02';
    }
    else if (*(char *)(param_1 + 0x5a5) == '\x02') {
      temp_v0 = '\x03';
    }
    else {
      temp_v2 = FUN_0029c1fc();
      if (temp_v2 != -1) {
        if (*(char *)(param_1 + 0xa5b0) != '\0') {
          return 0;
        }
        return 1;
      }
      temp_v0 = '\x05';
    }
  }
  *(char *)(param_1 + 0xa5b0) = temp_v0;
  return 0;
}

} /* extern "C" */
