/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043f384` (_code @ 0x43f384, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_0055b418; /* 0x55b418 */
extern unsigned int *DAT_005c0afc; /* 0x5c0afc */
extern unsigned char DAT_0062d648; /* 0x62d648 */
extern unsigned char DAT_0062d6a0; /* 0x62d6a0 */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0043f384(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d6a0);
  puVar2 = (unsigned int *)nn_fnd_ExpHeapBase_Allocate((unsigned int)&DAT_0062d648,0x3794,4,0,0,0);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d6a0);
  if (puVar2 == (unsigned int *)0x0) {
    temp_v0 = -0x279f8c0d;
  }
  else {
    temp_v0 = 0;
  }
  puVar1 = DAT_005c0afc;
  if ((-1 < temp_v0) && (puVar1 = puVar2, puVar2 != (unsigned int *)0x0)) {
    *puVar2 = (unsigned int)&DAT_0055b418;
    puVar2[0xde2] = 0;
    nn_os_CriticalSection_Initialize();
    puVar2[0x6c1] = 0;
  }
  DAT_005c0afc = puVar1;
  return;
}

} /* extern "C" */
