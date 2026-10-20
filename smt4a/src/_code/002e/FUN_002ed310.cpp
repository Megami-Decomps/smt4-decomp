/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed310` (_code @ 0x2ed310, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eab08(unsigned int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002eab08. */
extern int ll_sdiv(int, int, unsigned int, unsigned int);


int FUN_002ed310(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v1 = param_3;
  temp_v2 = param_4;
  FUN_002eab08(&temp_v1);
  temp_v0 = ll_sdiv(temp_v1 - *(unsigned int *)(param_1 + 0x28),
                  (temp_v2 - *(int *)(param_1 + 0x2c)) -
                  (unsigned int)(temp_v1 < *(unsigned int *)(param_1 + 0x28)),1000,0);
  return temp_v0 + *(int *)(param_1 + 0x30);
}

} /* extern "C" */
