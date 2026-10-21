/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0764` (_code @ 0x3e0764, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238d3c(int, int);
int FUN_00358f1c(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

extern unsigned char g_asdCecModuleFlags; /* 0x4656d0 */

/* Supplied declaration required: FUN_00238d3c. */
/* Supplied declaration required: FUN_00358f1c. */


int FUN_003e0764(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = 0;
  temp_v2 = param_2;
  temp_v3 = param_3;
  do {
    temp_v0 = param_2;
    FUN_00358f1c(param_2,param_3,param_4,param_5,param_6,param_1,temp_v2,temp_v3);
    if (temp_v0 != -0x375ef410) {
      return temp_v0;
    }
    FUN_00238d3c(1,0);
    temp_v1 = temp_v1 + 1;
    (*(unsigned char *)((unsigned char *)&g_asdCecModuleFlags + 0x1)) = 1;
  } while (temp_v1 < 3);
  (*(unsigned char *)((unsigned char *)&g_asdCecModuleFlags + 0x1)) = 1;
  return temp_v0;
}

} /* extern "C" */
