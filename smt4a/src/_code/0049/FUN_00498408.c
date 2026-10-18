/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00498408` (_code @ 0x498408, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short *FUN_001801a4(void);
extern unsigned int FUN_00192718(unsigned int);


unsigned int FUN_00498408(unsigned int param_1,unsigned int param_2)

{
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned short *)FUN_001801a4();
  temp_v0 = FUN_00192718(param_2);
  switch(temp_v0) {
  case 2:
    temp_v1 = (unsigned int)*puVar1;
    break;
  case 3:
    temp_v1 = (unsigned int)puVar1[1];
    break;
  case 4:
    temp_v1 = (unsigned int)puVar1[3];
    break;
  case 5:
    temp_v1 = (unsigned int)puVar1[4];
    break;
  case 6:
    temp_v1 = (unsigned int)puVar1[5];
    break;
  case 7:
    temp_v1 = (unsigned int)puVar1[6];
    break;
  case 8:
    temp_v1 = (unsigned int)puVar1[2];
    break;
  default:
    temp_v0 = 0;
    return temp_v0;
  }
  if (param_2 == temp_v1) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
