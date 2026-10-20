/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128f5c` (_code @ 0x128f5c, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00135778(unsigned int, unsigned int);
int FUN_002eb310(unsigned int, int *);
int FUN_002ff380(unsigned int);
int FUN_00300934(int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00135778. */
/* Supplied declaration required: FUN_002eb310. */
extern int FUN_002ed28c(int, unsigned int *);
/* Supplied declaration required: FUN_002ff380. */
/* Supplied declaration required: FUN_00300934. */


void FUN_00128f5c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int uStack_14;
  
  temp_v2 = param_3;
  uStack_14 = param_4;
  FUN_002ff380(param_2);
  temp_v0 = FUN_002ed28c(param_1,&temp_v2);
  if (temp_v0 != 0) {
    FUN_00135778(param_2,temp_v2);
    for (temp_v1 = 0; temp_v1 < temp_v2; temp_v1 = temp_v1 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      FUN_00300934(param_1,&uStack_14);
      if (*(char *)(param_1 + 4) != '\0') {
        FUN_002ff380(param_2);
        return;
      }
      FUN_002eb310(param_2,&uStack_14);
    }
  }
  return;
}

} /* extern "C" */
