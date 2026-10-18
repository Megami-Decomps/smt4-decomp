/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b6bcc` (_code @ 0x1b6bcc, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

/* Supplied declaration required: FUN_001bc768. */
extern int FUN_002eba64(unsigned int *);


void FUN_001b6bcc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  
  puVar1 = DAT_005b40e0;
  if ((~*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x220) + 8) + 0x28) & 1) == 0) {
    DAT_005b40e0[1] = 0xf02c0;
    *puVar1 = 0x80000000;
    FUN_001bc768(puVar1 + 2,param_2 + 0x8c,0xbf02c1);
    puVar1 = DAT_005b40e0;
  }
  else {
    if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
      DAT_0064c054 = 0x3f800000;
      DAT_0064c058 = 0;
      DAT_0064c05c = 0;
      DAT_0064c060 = 0;
      DAT_0064c064 = 0;
      DAT_0064c068 = 0x3f800000;
      DAT_0064c06c = 0;
      DAT_0064c070 = 0;
      DAT_0064c074 = 0;
      DAT_0064c078 = 0;
      DAT_0064c07c = 0x3f800000;
      DAT_0064c080 = 0;
    }
    puVar1 = DAT_005b40e0;
    puVar3 = DAT_005b40e0 + 1;
    *DAT_005b40e0 = 0x80000000;
    *puVar3 = 0xf02c0;
    FUN_001bc768(puVar1 + 2,&DAT_0064c054,0xbf02c1);
    puVar1 = DAT_005b40e0;
  }
  DAT_005b40e0 = puVar1 + 0x10;
  *DAT_005b40e0 = 0x80000003;
  puVar1[0x11] = 0xf02c0;
  FUN_001bc768(puVar1 + 0x12,param_2 + 0x1bc,0xbf02c1);
  DAT_005b40e0 = DAT_005b40e0 + 0x10;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}
