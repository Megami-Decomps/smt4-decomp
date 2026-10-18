/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003249c0` (_code @ 0x3249c0, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702a8; /* 0x5702a8 */
extern unsigned int DAT_005702ac; /* 0x5702ac */


int FUN_003249c0(unsigned int *param_1,int param_2)

{
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  short *psVar5;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = 0;
  if ((!((DAT_005702a4 & param_1[1]) == 0 && (DAT_005702a0 & *param_1) == 0)) ||
     (!((*param_1 & DAT_005702a8) == 0 && (param_1[1] & DAT_005702ac) == 0))) {
    if ((*(short *)((int)param_1 + 0x32a) == 2 || *(short *)((int)param_1 + 0x32a) == 3) &&
       ((short)param_1[0xcb] == param_2)) {
      temp_v2 = 1;
    }
  }
  else {
    if (((*(short *)((int)param_1 + 0x33a) == 2) || (*(short *)((int)param_1 + 0x33a) == 3)) &&
       ((short)param_1[0xcf] == param_2)) {
      temp_v2 = 1;
    }
    temp_v3 = 0;
    temp_v0 = *(short *)((int)param_1 + 0x342);
    temp_v4 = 4;
    puVar4 = param_1 + 0xcf;
    psVar5 = (short *)((int)param_1 + 0x33a);
    do {
      temp_v1 = psVar5[8];
      if ((temp_v0 == 2 || temp_v0 == 3) && ((short)puVar4[2] == param_2)) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v0 = psVar5[0xc];
      if ((temp_v1 == 2 || temp_v1 == 3) && ((short)puVar4[4] == param_2)) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v4 = temp_v4 - 1;
      puVar4 = puVar4 + 4;
      psVar5 = psVar5 + 8;
    } while (temp_v4 != 0);
    temp_v2 = temp_v2 + temp_v3;
    if ((*(short *)((int)param_1 + 0x382) == 2) || (*(short *)((int)param_1 + 0x382) == 3)) {
      if ((short)param_1[0xe1] == param_2) {
        temp_v2 = temp_v2 + 1;
      }
      return temp_v2;
    }
  }
  return temp_v2;
}
