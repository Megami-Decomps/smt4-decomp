/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002893ec` (_code @ 0x2893ec, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_0049f924; /* 0x49f924 */
extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_002769b4. */
/* Supplied declaration required: FUN_00289508. */
/* Supplied declaration required: FUN_00289574. */
extern char *FUN_00289594(void);
/* Supplied declaration required: FUN_002c57c8. */


unsigned int FUN_002893ec(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_4;
  pcVar2 = (char *)FUN_00289594();
  temp_v0 = *pcVar2;
  temp_v1 = 0;
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 == '\x03') {
        temp_v1 = 1;
        if (param_2 != 0) {
          temp_v2 = (unsigned int)(unsigned char)pcVar2[1];
          FUN_002c57c8(0xe,&temp_v2,4);
          DAT_0049fc14 = 0;
        }
        else {
          FUN_002769b4((unsigned char)pcVar2[1] + 200,0);
        }
      }
    }
    else {
      temp_v1 = 1;
      FUN_00289574((unsigned char)pcVar2[1] + 100,pcVar2[2],0xffffffff);
      DAT_0049f924 = 0xffffffff;
      if (param_2 != 0) {
        FUN_002c57c8(8,0);
        DAT_0049fc14 = 0;
      }
    }
  }
  else {
    temp_v1 = 1;
    FUN_00289574(pcVar2[1],pcVar2[2],pcVar2[3]);
    if (param_2 != 0) {
      FUN_002c57c8(6,0);
      DAT_0049fc14 = 0;
    }
  }
  FUN_00289508();
  return temp_v1;
}
