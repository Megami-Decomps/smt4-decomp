/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a007c` (_code @ 0x1a007c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(unsigned int *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_00558438; /* 0x558438 */
extern unsigned int *DAT_0058939c; /* 0x58939c */
extern unsigned int DAT_005893a4; /* 0x5893a4 */
extern unsigned char *DAT_0062d310; /* 0x62d310 */
extern unsigned int DAT_0062d314; /* 0x62d314 */
extern unsigned int DAT_0062d318; /* 0x62d318 */
extern unsigned int DAT_0062d31c; /* 0x62d31c */
extern unsigned int DAT_0062d320; /* 0x62d320 */
extern unsigned int DAT_0062d324; /* 0x62d324 */
extern unsigned int DAT_0062d334; /* 0x62d334 */
extern unsigned int DAT_0062d340; /* 0x62d340 */
extern unsigned int DAT_0062d344; /* 0x62d344 */
extern unsigned int DAT_0062d348; /* 0x62d348 */
extern unsigned int DAT_0062d400; /* 0x62d400 */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
extern int __cxa_guard_acquire(unsigned int *);
extern void nn_fnd_UnitHeapBase_Initialize(unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int);
extern unsigned int nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_001a007c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d400);
  if (((DAT_005893a4 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005893a4), temp_v0 != 0)) {
    DAT_0062d314 = 0;
    DAT_0062d318 = 0;
    DAT_0062d31c = 0;
    DAT_0062d320 = 0;
    DAT_0062d324 = 0;
    DAT_0062d334 = 0;
    DAT_0062d340 = 0;
    DAT_0062d310 = &DAT_00558438;
    DAT_0062d348 = 0xffffffff;
    DAT_0062d344 = 0;
    nn_fnd_UnitHeapBase_Initialize((unsigned int)&DAT_0062d310,0x130,0x56d940,0x1300,4,0);
    nn_os_CriticalSection_Initialize(&DAT_0062d340);
  }
  DAT_0058939c = (unsigned int *)&DAT_0062d310;
  temp_v1 = nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate();
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d400);
  return temp_v1;
}

} /* extern "C" */
