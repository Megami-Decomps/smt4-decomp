/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d0c0` (_code @ 0x42d0c0, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014a918(void);
int FUN_002e3140(void);
int FUN_0042d328(int, unsigned char [32]);
int FUN_00514428(unsigned char [32], unsigned int);
int words4BClear(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_0014a918. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_0042d328. */
/* Supplied declaration required: FUN_00514428. */
extern int FUN_005144b8(unsigned char *);
/* Supplied declaration required: words4BClear. */


int FUN_0042d0c0(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1 [2];
  unsigned char temp_v2 [32];
  
  puVar1 = temp_v1;
  if (*(char *)(param_1 + 8) == '\0') {
    temp_v1[0] = 0;
    if (*(int *)(param_1 + 4) != 0) {
      puVar1 = (unsigned int *)0xe0a0183b;
    }
    else {
      FUN_0014a918();
      if (-1 < (int)puVar1) {
        puVar1 = (unsigned int *)0x0;
        *(unsigned int *)(param_1 + 4) = temp_v1[0];
      }
    }
    if ((int)puVar1 < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 8) = 1;
  }
  FUN_00514428(temp_v2,param_2);
  temp_v0 = FUN_005144b8(temp_v2);
  temp_v0 = temp_v0 - 0x18;
  words4BClear(temp_v0);
  FUN_0042d328(temp_v0,temp_v2);
  return temp_v0;
}

} /* extern "C" */
