/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047db34` (_code @ 0x47db34, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned char DAT_005f1b70; /* 0x5f1b70 */

/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_00324c48. */
extern char *FUN_004731a4(void);
/* Supplied declaration required: FUN_004731d8. */


unsigned int FUN_0047db34(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_4;
  pcVar2 = (char *)FUN_004731a4();
  temp_v0 = *pcVar2;
  temp_v1 = 0;
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 == '\x03') {
        temp_v1 = 1;
        if (param_2 != 0) {
          temp_v2 = (unsigned int)(unsigned char)pcVar2[1];
          FUN_00137ee0(0xe,&temp_v2,4);
          DAT_005f1b70 = 0;
        }
        else {
          FUN_00324bc8((unsigned char)pcVar2[1] + 200,0);
        }
      }
    }
    else {
      temp_v1 = 1;
      FUN_00324c48((unsigned char)pcVar2[1] + 100,pcVar2[2],0xffffffff);
      DAT_005f1604 = 0xffffffff;
      if (param_2 != 0) {
        FUN_00137ee0(8,0);
        DAT_005f1b70 = 0;
      }
    }
  }
  else {
    temp_v1 = 1;
    FUN_00324c48(pcVar2[1],pcVar2[2],pcVar2[3]);
    if (param_2 != 0) {
      FUN_00137ee0(6,0);
      DAT_005f1b70 = 0;
    }
  }
  FUN_004731d8();
  return temp_v1;
}
