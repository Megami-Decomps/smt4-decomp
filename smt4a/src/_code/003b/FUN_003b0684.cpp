/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0684` (_code @ 0x3b0684, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_00235dc4(int *, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_00235dc4. */
extern unsigned int scrGetArg(unsigned int);
extern int FUN_002deb84(void);
extern int stateAt4IsAbove2(void);
extern int QuestCenter_GetActiveEntry(void);


unsigned int FUN_003b0684(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_14;
  unsigned int temp_v4;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v1 = scrGetArg(0);
    temp_v2 = scrGetArg(1);
    jyoucyuGetTableEntry(0);
    temp_v4 = 1;
    temp_v3 = temp_v1;
    uStack_14 = temp_v2;
    FUN_00235dc4(&temp_v3,0xc);
  }
  temp_v0 = QuestCenter_GetActiveEntry();
  if ((temp_v0 == 0) || (temp_v0 = stateAt4IsAbove2(), temp_v0 == 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
