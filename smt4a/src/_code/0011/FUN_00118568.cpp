/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118568` (_code @ 0x118568, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5700(int *, unsigned char *, int, int);
int FUN_002f5020(int *, unsigned char *, int, int);
int FUN_00304d1a(...);
int FUN_00304d92(...);

extern unsigned char LAB_0012218d; /* 0x12218d */
extern unsigned char LAB_0012d05b; /* 0x12d05b */
extern unsigned char LAB_0012d065; /* 0x12d065 */

/* Supplied declaration required: FUN_002e5700. */
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00304d1a. */
/* Supplied declaration required: FUN_00304d92. */


void FUN_00118568(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_00304d1a(param_1,temp_v0);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  else {
    FUN_002f5020(&uStack_20,&LAB_0012d065,0xc,1);
    FUN_00304d1a(param_1,&uStack_20);
    if (*(char *)(param_1 + 4) != '\0') {
      puVar2 = &LAB_0012218d;
      FUN_002e5700(&uStack_20,puVar2,0xc,1);
      return;
    }
    FUN_002e5700(&uStack_20,&LAB_0012218d,0xc,1);
  }
  temp_v0 = FUN_00304d10(param_2,1);
  if (temp_v0 != 0) {
    FUN_00304d92(param_1,temp_v0);
    return;
  }
  FUN_002f5020(&uStack_20,&LAB_0012d05b,0xc,1);
  FUN_00304d92(param_1,&uStack_20);
  puVar2 = (unsigned char *)0x122173;
  FUN_002e5700(&uStack_20,puVar2,0xc,1);
  return;
}

} /* extern "C" */
