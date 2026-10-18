/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003abbc4` (_code @ 0x3abbc4, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);
extern int FUN_00211f8c(void);
extern unsigned int FUN_0022ebbc(void);
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002356d4. */
extern int FUN_00262edc(unsigned short);
extern int FUN_0026ace0(void);
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029c6dc. */


void FUN_003abbc4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  
  temp_v1 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v1 == 2) {
    temp_v1 = FUN_00297674();
    if (temp_v1 == 0) {
      pcVar5 = (char *)(param_1 + 0xa5b0);
      *pcVar5 = '\0';
      temp_v1 = FUN_002337a0(param_1 + 0x20);
      temp_v4 = *(unsigned int *)(param_1 + temp_v1 * 0x20 + 0x5b4);
      temp_v2 = FUN_0022ebbc();
      if (temp_v2 < temp_v4) {
        *pcVar5 = '\x01';
      }
      else {
        temp_v1 = FUN_002337a0(param_1 + 0x20);
        temp_v1 = FUN_00262edc(*(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac));
        if (temp_v1 != 0) {
          temp_v0 = '\x02';
          *pcVar5 = temp_v0;
        }
        else {
          temp_v1 = FUN_00211f8c();
          temp_v3 = FUN_0026ace0();
          if (temp_v1 >= temp_v3) {
            temp_v0 = '\x05';
            *pcVar5 = temp_v0;
          }
        }
      }
      if (*pcVar5 == '\0') {
        temp_v1 = FUN_002337a0(param_1 + 0x20);
        FUN_0029c6dc(-*(int *)(param_1 + temp_v1 * 0x20 + 0x5b4),0);
        *(unsigned int *)(param_1 + 0x14) = 6;
        *(unsigned int *)(param_1 + 0x18) = 0;
        return;
      }
      if (*pcVar5 == '\x05') {
        FUN_002356d4(0);
        *(unsigned int *)(param_1 + 0x14) = 9;
        *(unsigned int *)(param_1 + 0x18) = 0;
        return;
      }
      FUN_002356d4(0);
      *(unsigned int *)(param_1 + 0x14) = 8;
      *(unsigned int *)(param_1 + 0x18) = 0;
      return;
    }
    FUN_002356d4(0);
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
