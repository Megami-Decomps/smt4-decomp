/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9ef8` (_code @ 0x2e9ef8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [16], int);
int FUN_002e6e5c(unsigned char [16]);
int FUN_002e9af4(void);
int FUN_002e9e80(unsigned int **);
int FUN_002e9e8a(unsigned int, unsigned int, unsigned int **);
int FUN_002e9ec8(int, unsigned int);
int FUN_002e9f00(void);
int FUN_002e9f64(unsigned int **);

extern unsigned int FUN_00103e8e(int, unsigned int);
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9e80. */
/* Supplied declaration required: FUN_002e9e8a. */
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_002e9f64. */


unsigned int FUN_002e9ef8(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puStack_28;
  unsigned int *puStack_24;
  unsigned char temp_v2 [16];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  FUN_002e9e80(&puStack_28);
  temp_v1 = FUN_002e9af4();
  FUN_002e9e8a(temp_v1,*(unsigned int *)(param_1 + 0x44),&puStack_28);
  temp_v1 = FUN_00103e8e(param_1,param_2);
  for (puVar3 = puStack_28; puStack_24 != puVar3; puVar3 = puVar3 + 1) {
    temp_v0 = FUN_002e9af4();
    FUN_002e9ec8(temp_v0,*puVar3);
    if (temp_v0 != 0) {
      FUN_002e9f00();
    }
  }
  FUN_002e9f64(&puStack_28);
  FUN_002e6e5c(temp_v2);
  return temp_v1;
}

} /* extern "C" */
