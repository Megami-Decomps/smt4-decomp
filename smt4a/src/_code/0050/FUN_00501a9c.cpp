/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00501a9c` (_code @ 0x501a9c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042d3d8(int, int);
int FUN_0042fd64(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_7: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

extern unsigned char g_asdCecModuleFlags; /* 0x5b448b */

/* Supplied declaration required: FUN_0042d3d8. */
/* Supplied declaration required: FUN_0042fd64. */


int FUN_00501a9c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_2;
    FUN_0042fd64(param_2,param_3,param_4,param_5,param_6,param_7);
    if (temp_v0 != -0x375ef410) {
      return temp_v0;
    }
    FUN_0042d3d8(1,0);
    temp_v1 = temp_v1 + 1;
    (*(unsigned char *)((unsigned char *)&g_asdCecModuleFlags + 0x1)) = 1;
  } while (temp_v1 < 3);
  (*(unsigned char *)((unsigned char *)&g_asdCecModuleFlags + 0x1)) = 1;
  return temp_v0;
}

} /* extern "C" */
