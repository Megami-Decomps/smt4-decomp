/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001392fc` (_code @ 0x1392fc, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_00420f54; /* 0x420f54 */
extern unsigned char DAT_00430940; /* 0x430940 */
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

extern unsigned long long FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: nn_fnd_UnitHeapBase_Initialize. */
extern unsigned int nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *, unsigned int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_001392fc(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  
  nn_os_CriticalSection_Enter(&DAT_004d43d0);
  temp_v1 = temp_v0;
  if (((DAT_0044e65c & 1) == 0) &&
     (temp_v2 = FUN_002bfefc(&DAT_0044e65c), temp_v1 = (unsigned int)((unsigned long long)temp_v2 >> 0x20),
     (int)temp_v2 != 0)) {
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
    nn_fnd_UnitHeapBase_Initialize(&DAT_004d42e0,0x130,&DAT_00430940,0x1300,4,0);
    FUN_002c38fc(&DAT_004d4310);
    temp_v1 = 0x14dcb8;
  }
  DAT_0044e654 = (unsigned int *)&DAT_004d42e0;
  temp_v1 = nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                    ((unsigned int *)&DAT_004d42e0,temp_v1);
  nn_os_CriticalSection_Leave(&DAT_004d43d0);
  return temp_v1;
}
