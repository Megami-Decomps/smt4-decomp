/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041481c` (_code @ 0x41481c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int FUN_002e9afe(int, int *);
int FUN_004130c0(int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002e9afe. */
extern int FUN_002f4e86(int);
/* Supplied declaration required: FUN_004130c0. */


void FUN_0041481c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  unsigned int temp_v2;
  
  temp_v2 = *(unsigned int *)(param_2 + 0x40);
  temp_v1 = *(unsigned int *)(param_2 + 0x38);
  uStack_14 = *(unsigned int *)(param_2 + 0x3c);
  FUN_002e9afe(param_1 + 0x7c,&temp_v1);
  temp_v0 = FUN_002f4e86(param_1 + 0x7c);
  if (temp_v0 == 0) {
    *(unsigned char *)(param_1 + 0xfc) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x98) != 0) {
      asdMemFree();
      *(unsigned int *)(param_1 + 0x98) = 0;
    }
    FUN_004130c0(param_1,6);
  }
  return;
}

} /* extern "C" */
