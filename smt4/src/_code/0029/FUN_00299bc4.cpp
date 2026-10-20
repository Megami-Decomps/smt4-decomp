/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299bc4` (_code @ 0x299bc4, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8584(int, int);

extern int DAT_0043da90; /* 0x43da90 */

extern int FUN_0029d644(unsigned int);
extern int FUN_0029ee54(unsigned int);
/* Supplied declaration required: FUN_002b8584. */


void FUN_00299bc4(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0043da90;
  temp_v2 = FUN_0029ee54(param_1);
  temp_v3 = FUN_0029d644(param_1);
  if (temp_v3 < temp_v2) {
    if (param_2 == 0) {
      temp_v1 = FUN_002b8584(0x1d,0x572);
      *(unsigned short *)(temp_v0 + 0xe02) = temp_v1;
      temp_v1 = FUN_002b8584(0x1d,0x570);
      *(unsigned short *)(temp_v0 + 0xe04) = temp_v1;
      temp_v1 = FUN_002b8584(0x1d,0x571);
      *(unsigned short *)(temp_v0 + 0xe06) = temp_v1;
LAB_00299cdc:
      temp_v3 = 0;
      temp_v2 = FUN_0029d644(param_1);
      if (0 < temp_v2) {
        do {
          temp_v2 = FUN_0029ee54(param_1);
          if (temp_v2 <= temp_v3) break;
          temp_v1 = FUN_002b8584(0x1d,temp_v3 + 0x40f);
          temp_v2 = temp_v3 * 2;
          temp_v3 = temp_v3 + 1;
          *(unsigned short *)(temp_v0 + temp_v2 + 0xe0c) = temp_v1;
          temp_v2 = FUN_0029d644(param_1);
        } while (temp_v3 < temp_v2);
      }
      temp_v1 = FUN_002b8584(0x1d,0x576);
      *(unsigned short *)(temp_v0 + 0xe08) = temp_v1;
      temp_v1 = FUN_002b8584(0x1d,0x577);
      *(unsigned short *)(temp_v0 + 0xe0a) = temp_v1;
      return;
    }
    temp_v1 = FUN_002b8584(0x1d,0x56d);
    *(unsigned short *)(temp_v0 + 0xe02) = temp_v1;
    temp_v1 = FUN_002b8584(0x1d,0x56e);
    *(unsigned short *)(temp_v0 + 0xe04) = temp_v1;
    temp_v1 = FUN_002b8584(0x1d,0x56f);
    *(unsigned short *)(temp_v0 + 0xe06) = temp_v1;
  }
  else if (param_2 == 0) goto LAB_00299cdc;
  temp_v3 = 0;
  temp_v2 = FUN_0029d644(param_1);
  if (0 < temp_v2) {
    do {
      temp_v2 = FUN_0029ee54(param_1);
      if (temp_v2 <= temp_v3) {
        return;
      }
      temp_v1 = FUN_002b8584(0x1d,temp_v3 + 0x40d);
      temp_v2 = temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      *(unsigned short *)(temp_v0 + temp_v2 + 0xe0c) = temp_v1;
      temp_v2 = FUN_0029d644(param_1);
    } while (temp_v3 < temp_v2);
  }
  return;
}

} /* extern "C" */
