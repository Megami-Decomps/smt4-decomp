/* NON_MATCHING: fragment of a larger function (custom-register decoder entry uses sl as an argument and delegates to adjacent decoder blocks). */
/* romwright 0.5.0 decompilation of FUN_0017aba0 for reference (not compiled; its own view of the boundaries):

void FUN_0017aba0(void)

{
  int unaff_r6;
  unsigned int uVar1;
  
  FUN_0017b138();
  uVar1 = (unsigned int)(unsigned char)(&LAB_0017ab60)[unaff_r6];
  if (((&LAB_0017ab60)[unaff_r6] & 1) != 0) {
    func_0x0017af2c();
  }
  if ((uVar1 & 2) != 0) {
    func_0x0017af2c();
  }
  if ((uVar1 & 4) != 0) {
    func_0x0017af2c();
  }
  if ((uVar1 & 8) != 0) {
    func_0x0017af2c();
  }
  if ((uVar1 & 0x10) != 0) {
    func_0x0017af2c();
  }
  if ((uVar1 & 0x20) != 0) {
    func_0x0017af2c();
  }
  return;
}
*/
#include "common.h"
