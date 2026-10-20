/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea852` (_code @ 0x2ea852, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea948(unsigned char [36], unsigned int, int);
int FUN_002eacc6(int *, int, unsigned char [36]);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;

/* Supplied declaration required: FUN_002ea948. */
/* Supplied declaration required: FUN_002eacc6. */
extern int FUN_002ead28(int *, unsigned int *);


unsigned int FUN_002ea852(int param_1,unsigned int param_2,unsigned char *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [36];
  int temp_v3;
  unsigned int temp_v4 [2];
  
  FUN_002ea948(temp_v2,param_2,*param_3);
  FUN_002eacc6(&temp_v3,param_1,temp_v2);
  temp_v4[0] = *(unsigned int *)(param_1 + 0x10);
  temp_v0 = FUN_002ead28(&temp_v3,temp_v4);
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(temp_v3 + 0x34);
  }
  return temp_v1;
}

} /* extern "C" */
