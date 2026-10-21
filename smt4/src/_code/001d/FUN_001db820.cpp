/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db820` (_code @ 0x1db820, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3510(...);
int FUN_00354dac(int, int, int, unsigned int);
int FUN_00354e48(int, unsigned int, unsigned int, int, unsigned int, unsigned int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned char g_appletBusyFlag; /* 0x465228 */

extern unsigned int fileLoadSync(unsigned int, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002c3510. */
extern unsigned long long FUN_002c3520(void);
/* Supplied declaration required: FUN_00354dac. */
/* Supplied declaration required: FUN_00354e48. */


int FUN_001db820(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  
  temp_v0 = fileLoadSync(param_5,(unsigned int *)&temp_v3,0);
  temp_v1 = param_1;
  FUN_00354e48(param_1,param_2,temp_v0,temp_v3,param_4,param_3);
  FUN_002c3510();
  if (-1 < temp_v1) {
    temp_v2 = FUN_002c3520();
    temp_v1 = (int)temp_v2;
    FUN_00354dac(temp_v1,(int)((unsigned long long)temp_v2 >> 0x20),param_1,param_2);
    FUN_002c3510();
    if (-1 < temp_v1) {
      g_appletBusyFlag = 1;
    }
    FUN_002c3510(temp_v1);
  }
  return temp_v1;
}

} /* extern "C" */
