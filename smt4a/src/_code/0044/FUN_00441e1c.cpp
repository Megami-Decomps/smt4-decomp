/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00441e1c` (_code @ 0x441e1c, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1244(unsigned char *, unsigned int *);
int FUN_0043f2a8(int);
int FUN_0043f878(void);

typedef int romwright_code(...);
extern signed char DAT_005894f4; /* 0x5894f4 */
extern int DAT_005894f8; /* 0x5894f8 */
extern int *DAT_005894fc; /* 0x5894fc */
extern unsigned int *DAT_005c0afc; /* 0x5c0afc */
extern unsigned char DAT_0062d648; /* 0x62d648 */
extern unsigned char DAT_0062d6a0; /* 0x62d6a0 */
extern unsigned int DAT_0062d6a8; /* 0x62d6a8 */
extern unsigned int DAT_0062d6b0; /* 0x62d6b0 */
extern unsigned char DAT_0062d6b4; /* 0x62d6b4 */
extern unsigned char DAT_0062d6b5; /* 0x62d6b5 */
extern unsigned char DAT_0062d6b6; /* 0x62d6b6 */

/* Supplied declaration required: FUN_001a1244. */
/* Supplied declaration required: FUN_0043f2a8. */
/* Supplied declaration required: FUN_0043f878. */
extern void nn_fnd_ExpHeapBase_Finalize(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00441e1c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005894f4 == '\0') {
    temp_v0 = 0xc8a073f8;
  }
  else {
    FUN_0043f2a8(DAT_005894f4);
    FUN_0043f878();
    (**(romwright_code **)*DAT_005c0afc)();
    puVar1 = DAT_005c0afc;
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d6a0);
    FUN_001a1244(&DAT_0062d648,puVar1);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d6a0);
    DAT_005c0afc = (unsigned int *)0x0;
    DAT_0062d6b0 = 0;
    DAT_0062d6b4 = (unsigned char)temp_v1;
    DAT_0062d6b5 = (unsigned char)((unsigned int)temp_v1 >> 8);
    DAT_0062d6b6 = (unsigned char)((unsigned int)temp_v1 >> 0x10);
    DAT_0062d6a8 = 0xffffffff;
    nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_0062d648);
    if (DAT_005894f8 != 0) {
      (**(romwright_code **)(*DAT_005894fc + 4))();
      DAT_005894f8 = 0;
      DAT_005894fc = (int *)0x0;
    }
    temp_v0 = 0;
    DAT_005894f4 = '\0';
  }
  return temp_v0;
}

} /* extern "C" */
