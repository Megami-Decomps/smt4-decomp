/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac838` (_code @ 0x2ac838, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int FUN_001008c8(char **, char, unsigned int);
/* Supplied declaration required: FUN_00100bfe. */
extern unsigned int FUN_002c66f2(unsigned int, unsigned int);


unsigned int FUN_002ac838(unsigned short *param_1,char *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  char *pcVar3;
  int temp_v2;
  char *pcVar5;
  unsigned int temp_v3;
  char *pcStack_20;
  unsigned int uStack_1c;
  
  if (param_2 != (char *)0x0) {
    temp_v0 = *param_2;
    pcVar5 = param_2;
    while (temp_v0 != '\0') {
      pcVar3 = pcVar5;
      FUN_00100bfe(pcVar5,2);
      if ((int)pcVar3 < 1) {
        if (param_1 != (unsigned short *)0x0) {
          *param_1 = 0;
        }
        return 0xffffffff;
      }
      pcVar5 = pcVar5 + (int)pcVar3;
      temp_v0 = *pcVar5;
    }
  }
  pcStack_20 = param_2;
  uStack_1c = param_3;
  uStack_1c = FUN_002c66f2(0,2);
  temp_v1 = 0;
  do {
    do {
      temp_v3 = temp_v1;
      if ((param_1 != (unsigned short *)0x0) && (param_3 <= temp_v3)) {
        return temp_v3;
      }
      temp_v0 = *param_2;
      param_2 = param_2 + 1;
      temp_v2 = FUN_001008c8(&pcStack_20,temp_v0,uStack_1c);
      if (temp_v2 == -1) {
        return 0xffffffff;
      }
      temp_v1 = temp_v3;
    } while (temp_v2 == -2);
    if (param_1 != (unsigned short *)0x0) {
      param_1[temp_v3] = (short)pcStack_20;
    }
    temp_v1 = temp_v3 + 1;
  } while ((short)pcStack_20 != 0);
  return temp_v3;
}
