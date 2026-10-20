/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cddd0` (_code @ 0x2cddd0, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00269dc8(void);
int FUN_0028dc68(int);
int FUN_0028dc98(...);
int FUN_00296934(void);
int FUN_002b8838(int);
int FUN_002fec80(int);

/* Supplied declaration required: FUN_00269dc8. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc68. */
/* Supplied declaration required: FUN_0028dc98. */
/* Supplied declaration required: FUN_00296934. */
extern unsigned short FUN_00296cc8(void);
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002fec60(void);
/* Supplied declaration required: FUN_002fec80. */


unsigned char FUN_002cddd0(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002893d8();
  if (temp_v1 == 0) {
    FUN_0028dc98(1);
    FUN_00269dc8();
    FUN_002fec80(temp_v0);
  }
  temp_v1 = FUN_002fec60();
  if (temp_v1 != 0) {
    FUN_00296934();
    FUN_002b8838(0x90);
    FUN_0028dc98(0xffffffff);
    FUN_0028dc68(0);
  }
  return temp_v1 != 0;
}

} /* extern "C" */
