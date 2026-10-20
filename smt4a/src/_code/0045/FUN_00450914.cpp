/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00450914` (_code @ 0x450914, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018e0cc(unsigned char [8], unsigned int *, unsigned int);
int FUN_001a90f0(unsigned int **, unsigned char [8]);

extern unsigned int FUN_0015d8e0(unsigned int **, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018e0cc. */
/* Supplied declaration required: FUN_001a90f0. */


unsigned int FUN_00450914(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puStack_28;
  char cStack_24;
  unsigned int *apuStack_20 [2];
  unsigned char temp_v3 [8];
  
  puVar2 = *(unsigned int **)(param_1 + 8);
  if (puVar2 != (unsigned int *)0x0) {
    puVar2 = (unsigned int *)((int)puVar2 + param_1 + 8);
  }
  temp_v2 = 0;
  apuStack_20[0] = (unsigned int *)0x0;
  if (puVar2 != (unsigned int *)0x0) {
    puVar3 = puVar2;
    if ((~*puVar2 & 0x20000004) != 0) {
      puVar3 = (unsigned int *)0x0;
    }
    if (puVar3 != (unsigned int *)0x0) {
      temp_v1 = puVar3[7];
      if (temp_v1 != 0) {
        temp_v0 = (int)puVar3 + temp_v1 + 0x1c;
      }
      else {
        temp_v0 = 0;
      }
      if (temp_v0 != 0) {
        puVar2 = (unsigned int *)0x0;
        if (temp_v1 != 0) {
          puVar2 = (unsigned int *)((int)puVar3 + temp_v1 + 0x1c);
        }
      }
      else {
        puStack_28 = (unsigned int *)0x0;
        cStack_24 = '\0';
        FUN_0018e0cc(temp_v3,puVar3,param_3);
        FUN_001a90f0(&puStack_28,temp_v3);
        if (cStack_24 == '\0') {
          return 0x80000001;
        }
        apuStack_20[0] = puStack_28;
        puVar2 = apuStack_20[0];
      }
    }
    apuStack_20[0] = puVar2;
    temp_v2 = FUN_0015d8e0(apuStack_20,param_2,param_3);
  }
  return temp_v2;
}

} /* extern "C" */
