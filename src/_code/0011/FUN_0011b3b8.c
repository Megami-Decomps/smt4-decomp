/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b3b8` (_code @ 0x11b3b8, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0011b480; /* 0x11b480 */
extern unsigned char LAB_0011b48c; /* 0x11b48c */
extern unsigned char LAB_0011b494; /* 0x11b494 */

/* Supplied declaration required: FUN_0011bb60. */
/* Supplied declaration required: FUN_00126c38. */
/* Supplied declaration required: FUN_002af624. */
extern unsigned int FUN_002b6030(int, int);
/* Supplied declaration required: FUN_002b7488. */
/* Supplied declaration required: FUN_002c15d8. */


unsigned int FUN_0011b3b8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002b7488();
  FUN_0011bb60(param_1 + 0x138,param_2,param_4,0xffffffff);
  *(unsigned int *)(param_1 + 0x128) = param_2;
  *(unsigned char *)(param_1 + 300) = 0;
  FUN_002c15d8(param_1 + 0x138,param_1 + 0x12a20,&LAB_0011b480);
  FUN_002c15d8(param_1 + 0x138,param_1 + 0x12a30,&LAB_0011b48c);
  FUN_002c15d8(param_1 + 0x138,param_1 + 0x12a28,&LAB_0011b494);
  FUN_002c15d8(param_1 + 0x138,param_1 + 0x12a38,"uMatrix");
  temp_v0 = param_1 + 0x138;
  FUN_002c15d8(temp_v0,param_1 + 0x12a40,"uMaterialColor");
  FUN_002b7488();
  temp_v1 = FUN_002b6030(param_1 + 0x138,temp_v0);
  FUN_002af624(temp_v0,temp_v1);
  FUN_00126c38(param_1);
  return 1;
}
