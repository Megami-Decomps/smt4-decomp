/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001392fc` (_code @ 0x1392fc, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(unsigned int *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_00420f54; /* 0x420f54 */
extern unsigned int *DAT_0044e654; /* 0x44e654 */
extern unsigned int DAT_0044e65c; /* 0x44e65c */
extern unsigned char *DAT_004d42e0; /* 0x4d42e0 */
extern unsigned int DAT_004d42e4; /* 0x4d42e4 */
extern unsigned int DAT_004d42e8; /* 0x4d42e8 */
extern unsigned int DAT_004d42ec; /* 0x4d42ec */
extern unsigned int DAT_004d42f0; /* 0x4d42f0 */
extern unsigned int DAT_004d42f4; /* 0x4d42f4 */
extern unsigned int DAT_004d4304; /* 0x4d4304 */
extern unsigned int DAT_004d4310; /* 0x4d4310 */
extern unsigned int DAT_004d4314; /* 0x4d4314 */
extern unsigned int DAT_004d4318; /* 0x4d4318 */
extern unsigned int DAT_004d43d0; /* 0x4d43d0 */

extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
extern void nn_fnd_UnitHeapBase_Initialize(unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int);
extern unsigned int nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_001392fc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004d43d0);
  if (((DAT_0044e65c & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_0044e65c), temp_v0 != 0)) {
    DAT_004d42e4 = 0;
    DAT_004d42e8 = 0;
    DAT_004d42ec = 0;
    DAT_004d42f0 = 0;
    DAT_004d42f4 = 0;
    DAT_004d4304 = 0;
    DAT_004d4310 = 0;
    DAT_004d42e0 = &DAT_00420f54;
    DAT_004d4318 = 0xffffffff;
    DAT_004d4314 = 0;
    nn_fnd_UnitHeapBase_Initialize((unsigned int)&DAT_004d42e0,0x130,0x430940,0x1300,4,0);
    nn_os_CriticalSection_Initialize(&DAT_004d4310);
  }
  DAT_0044e654 = (unsigned int *)&DAT_004d42e0;
  temp_v1 = nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate();
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004d43d0);
  return temp_v1;
}

} /* extern "C" */
