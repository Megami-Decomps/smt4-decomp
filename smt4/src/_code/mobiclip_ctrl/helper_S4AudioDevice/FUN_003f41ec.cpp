/* NON_MATCHING: initializer starts late; uncovered instructions at 0x003f41ec/0x003f41f0/0x003f41f4 load the global into r2 and set r0/r1 to -1 before this unit's PUSH/STRD. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_0044d120; /* 0x44d120 */
extern unsigned int DAT_0044d124; /* 0x44d124 */
extern unsigned int DAT_0044d128; /* 0x44d128 */
extern unsigned char DAT_0044d12c; /* 0x44d12c */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */
extern unsigned int DAT_004c40fc; /* 0x4c40fc */
extern unsigned int DAT_004c4100; /* 0x4c4100 */


void FUN_003f41ec(unsigned int param_1,unsigned int param_2,int param_3)

{
  *(unsigned int *)(param_3 + 0x20) = param_1;
  *(unsigned int *)(param_3 + 0x24) = param_2;
  DAT_0044d120 = 0;
  DAT_0044d124 = 0;
  DAT_0044d128 = 0;
  DAT_0044d12c = 1;
  DAT_004c40f8 = 0;
  DAT_004c4100 = 0xffffffff;
  DAT_004c40fc = 0;
  return;
}

} /* extern "C" */
