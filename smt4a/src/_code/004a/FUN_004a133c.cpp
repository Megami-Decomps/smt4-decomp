/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a133c` (_code @ 0x4a133c, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_004a15a0(...); /* 0x4a15a0 */
extern int FUN_004a18ec(...); /* 0x4a18ec */
extern int FUN_004a2064(...); /* 0x4a2064 */
extern int FUN_004a2238(...); /* 0x4a2238 */
extern int FUN_004a2404(...); /* 0x4a2404 */
extern int FUN_004a24a8(...); /* 0x4a24a8 */
extern int FUN_004a2ee0(...); /* 0x4a2ee0 */
extern int FUN_004a2f8c(...); /* 0x4a2f8c */
extern int FUN_004a3154(...); /* 0x4a3154 */
extern int FUN_004a35e4(...); /* 0x4a35e4 */
extern int FUN_004a374c(...); /* 0x4a374c */
extern int FUN_004a38bc(...); /* 0x4a38bc */
extern int FUN_004a39bc(...); /* 0x4a39bc */
extern int FUN_004a40f4(...); /* 0x4a40f4 */


void FUN_004a133c(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0x10;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    *(unsigned int *)(temp_v2 + 0xa878) = 0;
    *(unsigned int *)(temp_v2 + 0xa87c) = 0;
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v2 + 0xa8f8) = 0;
    *(unsigned int *)(temp_v2 + 0xa8fc) = 0;
    *(unsigned int *)(temp_v2 + 0xa978) = 0;
    *(unsigned int *)(temp_v2 + 0xa97c) = 0;
  } while (temp_v1 != 0);
  *(romwright_code **)(param_1 + 0xa878) = FUN_004a2238;
  *(unsigned int *)(param_1 + 0xa87c) = 0;
  *(romwright_code **)(param_1 + 0xa880) = FUN_004a2404;
  *(unsigned int *)(param_1 + 0xa884) = 0;
  *(romwright_code **)(param_1 + 0xa888) = FUN_004a2064;
  *(unsigned int *)(param_1 + 0xa88c) = 0;
  *(romwright_code **)(param_1 + 0xa890) = FUN_004a39bc;
  *(unsigned int *)(param_1 + 0xa894) = 0;
  *(romwright_code **)(param_1 + 0xa898) = FUN_004a3154;
  *(unsigned int *)(param_1 + 0xa89c) = 0;
  *(romwright_code **)(param_1 + 0xa8a0) = FUN_004a18ec;
  *(unsigned int *)(param_1 + 0xa8a4) = 0;
  *(romwright_code **)(param_1 + 0xa8a8) = FUN_004a374c;
  *(unsigned int *)(param_1 + 0xa8ac) = 0;
  *(romwright_code **)(param_1 + 0xa8b0) = FUN_004a40f4;
  *(unsigned int *)(param_1 + 0xa8b4) = 0;
  *(romwright_code **)(param_1 + 0xa8b8) = FUN_004a38bc;
  *(unsigned int *)(param_1 + 0xa8bc) = 0;
  *(romwright_code **)(param_1 + 0xa8c0) = FUN_004a2f8c;
  *(unsigned int *)(param_1 + 0xa8c4) = 0;
  *(romwright_code **)(param_1 + 0xa8c8) = FUN_004a35e4;
  *(unsigned int *)(param_1 + 0xa8cc) = 0;
  *(romwright_code **)(param_1 + 0xa8d0) = FUN_004a2064;
  *(unsigned int *)(param_1 + 0xa8d4) = 0;
  *(romwright_code **)(param_1 + 0xa8d8) = FUN_004a15a0;
  *(unsigned int *)(param_1 + 0xa8dc) = 0;
  *(romwright_code **)(param_1 + 0xa8e0) = FUN_004a2ee0;
  *(unsigned int *)(param_1 + 0xa8e4) = 0;
  *(unsigned int *)(param_1 + 0xa8e8) = 0x4a321c;
  *(unsigned int *)(param_1 + 0xa8ec) = 0;
  *(romwright_code **)(param_1 + 0xa980) = FUN_004a24a8;
  *(unsigned int *)(param_1 + 0xa984) = 0;
  *(romwright_code **)(param_1 + 0xa988) = FUN_004a24a8;
  *(unsigned int *)(param_1 + 0xa98c) = 0;
  *(unsigned int *)(param_1 + 0xa990) = 0x4a4098;
  *(unsigned int *)(param_1 + 0xa994) = 0;
  *(unsigned int *)(param_1 + 0xa998) = 0x4a4098;
  *(unsigned int *)(param_1 + 0xa99c) = 0;
  *(unsigned int *)(param_1 + 0xa9a0) = 0x4a4098;
  *(unsigned int *)(param_1 + 0xa9a4) = 0;
  *(unsigned int *)(param_1 + 0xa9a8) = 0x4a4090;
  *(unsigned int *)(param_1 + 0xa9ac) = 0;
  *(romwright_code **)(param_1 + 0xa9b0) = FUN_004a24a8;
  *(unsigned int *)(param_1 + 0xa9b4) = 0;
  *(unsigned int *)(param_1 + 0xa9b8) = 0x4a4094;
  *(unsigned int *)(param_1 + 0xa9bc) = 0;
  *(romwright_code **)(param_1 + 0xa9d0) = FUN_004a24a8;
  *(unsigned int *)(param_1 + 0xa9d4) = 0;
  *(romwright_code **)(param_1 + 0xa9d8) = FUN_004a24a8;
  *(unsigned int *)(param_1 + 0xa9dc) = 0;
  *(romwright_code **)(param_1 + 0xa9e0) = FUN_004a24a8;
  *(unsigned int *)(param_1 + 0xa9e4) = 0;
  *(unsigned int *)(param_1 + 0xa9c0) = 0x4a24a4;
  *(unsigned int *)(param_1 + 0xa9c4) = 0;
  *(romwright_code **)(param_1 + 0xa9c8) = FUN_004a24a8;
  *(unsigned int *)(param_1 + 0xa9cc) = 0;
  return;
}

} /* extern "C" */
