/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ac48` (_code @ 0x10ac48, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineContextGetInstance(void);
int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int sharedRefAddRef(int);
int FUN_002e78d0(unsigned int, int, int);
int FUN_002ea3d0(int, unsigned int);

extern unsigned char LAB_0010acb0; /* 0x10acb0 */

/* Supplied declaration required: onlineContextGetInstance. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: sharedRefAddRef. */
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */


unsigned int FUN_0010ac48(int param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [20];
  
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 != 0) {
    *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_2 + 0x44);
    temp_v1 = FUN_002ea3c0(temp_v3,0x10abad,0,&LAB_0010acb0);
    FUN_002ea3d0(param_1,temp_v1);
    if (param_3 == 0) {
      sharedRefAddRef(param_1);
    }
    temp_v1 = onlineContextGetInstance();
    FUN_002e78d0(temp_v1,param_1,0);
    _ZN9Obj55b28cD1Ev(temp_v2);
    temp_v1 = 1;
  }
  else {
    _ZN9Obj55b28cD1Ev(temp_v2);
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
