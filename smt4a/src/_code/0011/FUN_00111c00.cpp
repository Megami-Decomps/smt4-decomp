/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111c00` (_code @ 0x111c00, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea974(unsigned char [104]);
int onlineUrlDestroy(unsigned char [104]);
int FUN_002fd412(int);

extern unsigned char LAB_00111b05; /* 0x111b05 */
extern unsigned char LAB_00111c78; /* 0x111c78 */

/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: onlineUrlDestroy. */
extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002fd412. */
extern int FUN_002fd546(int);


void FUN_00111c00(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [104];
  unsigned char temp_v3 [16];
  unsigned char temp_v4 [16];
  
  temp_v0 = FUN_002eb5f4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002eb5f4(), *(int *)(temp_v0 + 0xd0) != 0)) {
    FUN_002ea974(temp_v2);
    temp_v0 = FUN_002fd546(param_1);
    if (temp_v0 == 0) {
      FUN_002fd412(param_1);
      *(unsigned int *)(param_1 + 0x1ac) = **(unsigned int **)(param_1 + 0x1ac);
    }
    temp_v1 = FUN_002ea3c0(temp_v3,0x111a09,0,&LAB_00111c78);
    FUN_002ea3d0(param_1,temp_v1);
    onlineUrlDestroy(temp_v2);
  }
  else {
    temp_v1 = FUN_002ea3c0(temp_v4,&LAB_00111b05,0,&LAB_00111c78);
    FUN_002ea3d0(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
