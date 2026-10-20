/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003537c8` (_code @ 0x3537c8, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [132], unsigned char *, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_001cd3ec(void);
int FUN_0040a908(unsigned int, int);
int FUN_0040a918(unsigned int, int);

extern unsigned char LAB_00353888; /* 0x353888 */
extern unsigned char LAB_003538a0; /* 0x3538a0 */
extern int g_mapGimic; /* 0x580ca0 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
extern unsigned int FUN_0040ac08(void);


void FUN_003537c8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [132];
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v2 = g_mapGimic + temp_v0 * 0x18;
    if (*(char *)(temp_v2 + 0x8c4) == '\0') break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 10) {
      return;
    }
  }
  FUN_00100388(temp_v3,&LAB_00353888,param_1);
  *(char *)(temp_v2 + 0x8c4) = '\x01';
  temp_v0 = 0x20;
  *(short *)(temp_v2 + 0x8c8) = (short)param_1;
  FUN_00178b04(0x20,&LAB_003538a0,0x9c6);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0040ac08();
  }
  *(unsigned int *)(temp_v2 + 0x8cc) = temp_v1;
  FUN_001cd3ec();
  if ((param_1 != 0x6a && param_1 != 0xd2) && (param_1 != 0xd3 && param_1 != 0xd4)) {
    return;
  }
  FUN_0040a908(*(unsigned int *)(temp_v2 + 0x8cc),0x10000);
  FUN_0040a918(*(unsigned int *)(temp_v2 + 0x8cc),0x20000);
  return;
}

} /* extern "C" */
