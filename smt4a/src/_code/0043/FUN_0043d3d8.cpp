/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043d3d8` (_code @ 0x43d3d8, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00159110(unsigned char *, int, int, int);
int FUN_0016f864(int);
int FUN_001a1244(unsigned char *, unsigned int *);
int FUN_0043f384(void);
int FUN_0043f440(unsigned int *, unsigned int);
int FUN_0043f878(void);
int FUN_0043f8c8(unsigned int *, int);

typedef int romwright_code(...);
extern signed char DAT_005894f4; /* 0x5894f4 */
extern unsigned int *DAT_005c0afc; /* 0x5c0afc */
extern unsigned char DAT_0062d648; /* 0x62d648 */
extern unsigned char DAT_0062d6a0; /* 0x62d6a0 */
extern unsigned int DAT_0062d6a8; /* 0x62d6a8 */
extern unsigned int DAT_0062d6ac; /* 0x62d6ac */
extern unsigned char *DAT_0062d6b0; /* 0x62d6b0 */
extern unsigned char DAT_0062d6b4; /* 0x62d6b4 */
extern unsigned char DAT_0062d6b5; /* 0x62d6b5 */
extern unsigned char DAT_0062d6b6; /* 0x62d6b6 */

/* Supplied declaration required: FUN_00159110. */
/* Supplied declaration required: FUN_0016f864. */
extern unsigned int *nn_os_CriticalSection_Initialize(unsigned char *);
/* Supplied declaration required: FUN_001a1244. */
/* Supplied declaration required: FUN_0043f384. */
/* Supplied declaration required: FUN_0043f440. */
/* Supplied declaration required: FUN_0043f878. */
/* Supplied declaration required: FUN_0043f8c8. */
extern void nn_fnd_ExpHeapBase_Finalize(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int * FUN_0043d3d8(unsigned int *param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  if (DAT_005894f4 != '\0') {
    puVar2 = (unsigned int *)0xc8a073f9;
  }
  else {
    FUN_0016f864(0);
    FUN_00159110(&DAT_0062d648,(int)param_1 + param_3,param_2 - param_3,0);
    puVar2 = (unsigned int *)nn_os_CriticalSection_Initialize(&DAT_0062d6a0);
    DAT_0062d6b0 = &DAT_0062d648;
    DAT_0062d6b4 = 0;
    DAT_0062d6b6 = 0;
    DAT_0062d6b5 = 0;
    FUN_0043f384();
    temp_v3 = temp_v0;
    if ((-1 < (int)puVar2) &&
       (FUN_0043f8c8(param_1,param_3), temp_v3 = temp_v1, puVar2 = param_1, -1 < (int)param_1))
    {
      puVar2 = &DAT_0062d6ac;
      FUN_0043f440(&DAT_0062d6ac,param_4);
      if (-1 < (int)puVar2) {
        DAT_005894f4 = 1;
        return (unsigned int *)0x0;
      }
      FUN_0043f878();
      temp_v3 = temp_v2;
    }
    if (DAT_005c0afc != (unsigned int *)0x0) {
      (**(romwright_code **)*DAT_005c0afc)();
      puVar1 = DAT_005c0afc;
      nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d6a0);
      FUN_001a1244(&DAT_0062d648,puVar1);
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d6a0);
      DAT_005c0afc = (unsigned int *)0x0;
      temp_v3 = temp_v4;
    }
    DAT_0062d6b0 = (unsigned char *)0x0;
    DAT_0062d6b4 = (unsigned char)temp_v3;
    DAT_0062d6b5 = (unsigned char)((unsigned int)temp_v3 >> 8);
    DAT_0062d6b6 = (unsigned char)((unsigned int)temp_v3 >> 0x10);
    DAT_0062d6a8 = 0xffffffff;
    nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_0062d648);
  }
  return puVar2;
}

} /* extern "C" */
