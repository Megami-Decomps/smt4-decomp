/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_IsRegistered` (_code @ 0x43cadc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189a38(int, int);
int FUN_0018b868(void);
int FUN_0018b964(void);

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_0018ba70(unsigned int, unsigned int *);


int nn_applet_CTR_detail_IsRegistered
              (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  FUN_0018b868();
  temp_v0 = FUN_0018ba70(param_1,(unsigned int *)&temp_v1);
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x43cafc);
  }
  FUN_0018b964();
  return (int)(char)temp_v1;
}

} /* extern "C" */
