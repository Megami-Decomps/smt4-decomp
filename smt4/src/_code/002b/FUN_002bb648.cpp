/* NON_MATCHING: direct supervisor call 3 cannot be represented under the no-SVC rule. */
/* romwright 0.5.0 decompilation of FUN_002bb648 for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_002bb648(unsigned int param_1,unsigned int param_2)

{
  code *pcVar1;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  DAT_004d4200 = 5;
  DAT_004d4201 = 0;
  DAT_004d4202 = 0xbca3;
  DAT_004d4204 = param_1;
  DAT_004d4208 = param_2;
  FUN_002ad4f8();
  pcVar1 = DAT_0044e450;
  if (DAT_0044e450 != (code *)0x0) {
    DAT_0044e450 = (code *)0x0;
    (*pcVar1)(0,0,0,0,0,param_1,unaff_r4,in_lr);
  }
  software_interrupt(0x3c);
  return 0;
}
*/
#include "common.h"
