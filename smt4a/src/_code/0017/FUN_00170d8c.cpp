/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170d8c` (_code @ 0x170d8c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189a38(int, int);
int FUN_0018b868(void);
int FUN_0018b964(void);

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_0018baec(unsigned int, unsigned int *);


int FUN_00170d8c(unsigned int param_1,unsigned int *param_2,int param_3,int param_4,int param_5,
                unsigned int *param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = 0;
  temp_v2 = 0;
  FUN_0018b868();
  if ((param_2 == (unsigned int *)0x0) || (param_3 == 0)) {
    param_2 = (unsigned int *)&temp_v1;
  }
  temp_v0 = FUN_0018baec(param_1,param_2);
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x170e1c);
  }
  if (param_4 == 0 || param_5 == 0) {
    temp_v3 = 0;
  }
  if (param_6 != (unsigned int *)0x0) {
    *param_6 = temp_v3;
  }
  FUN_0018b964();
  return temp_v0;
}

} /* extern "C" */
