/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c3d00` (_code @ 0x4c3d00, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a290(void);
int source4CCopyHalves(int, unsigned short [12]);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: source4CCopyHalves. */


int FUN_004c3d00(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3 [12];
  
  temp_v2 = 0;
  if (param_1 != 0) {
    temp_v3[0] = 0;
    temp_v3[1] = 0;
    temp_v3[2] = 0;
    temp_v3[3] = 0;
    temp_v3[4] = 0;
    temp_v3[5] = 0;
    temp_v3[6] = 0;
    temp_v3[7] = 0;
    temp_v3[8] = 0;
    temp_v3[9] = 0;
    source4CCopyHalves(param_1,temp_v3);
    temp_v1 = 0;
    do {
      temp_v0 = (unsigned int)temp_v3[temp_v1];
      if ((temp_v0 != 0) && (FUN_0034a290(), temp_v0 != 0)) {
        temp_v2 = temp_v2 + (unsigned int)*(unsigned char *)(temp_v0 + 0x31);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 9);
  }
  return temp_v2;
}

} /* extern "C" */
