/* NON_MATCHING: fragment of a larger function (custom-register decoder entry uses sl as an argument and delegates to adjacent decoder blocks). */
/* romwright 0.5.0 decompilation of FUN_001745a0 for reference (not compiled; its own view of the boundaries):

void FUN_001745a0(void)

{
  int unaff_r6;
  unsigned int uVar1;
  
  FUN_00174b38();
  uVar1 = (unsigned int)(unsigned char)(&LAB_00174560)[unaff_r6];
  if (((&LAB_00174560)[unaff_r6] & 1) != 0) {
    func_0x0017492c();
  }
  if ((uVar1 & 2) != 0) {
    func_0x0017492c();
  }
  if ((uVar1 & 4) != 0) {
    func_0x0017492c();
  }
  if ((uVar1 & 8) != 0) {
    func_0x0017492c();
  }
  if ((uVar1 & 0x10) != 0) {
    func_0x0017492c();
  }
  if ((uVar1 & 0x20) != 0) {
    func_0x0017492c();
  }
  return;
}
*/
#include "common.h"
