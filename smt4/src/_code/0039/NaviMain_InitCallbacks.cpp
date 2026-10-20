/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_InitCallbacks` (_code @ 0x399c04, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_002311a4(...); /* 0x2311a4 */
extern int FUN_00399638(...); /* 0x399638 */
extern int FUN_00399b44(...); /* 0x399b44 */
extern int screenStep(...); /* 0x39bc28 */
extern int FUN_0039c09c(...); /* 0x39c09c */
extern int FUN_0039c348(...); /* 0x39c348 */
extern int FUN_0039c9d4(...); /* 0x39c9d4 */
extern int FUN_0039ca70(...); /* 0x39ca70 */
extern int FUN_0039cb34(...); /* 0x39cb34 */


void NaviMain_InitCallbacks(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 1;
  *(unsigned int *)(param_1 + 0xb14) = 0;
  *(unsigned int *)(param_1 + 0xb18) = 0;
  temp_v0 = 1;
  do {
    temp_v1 = param_1 + temp_v3 * 8;
    temp_v2 = param_1 + (temp_v3 + 1) * 8;
    *(unsigned int *)(temp_v1 + 0xb14) = 0;
    *(unsigned int *)(temp_v1 + 0xb18) = 0;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(temp_v2 + 0xb14) = 0;
    *(unsigned int *)(temp_v2 + 0xb18) = 0;
    temp_v3 = temp_v3 + 2;
  } while (temp_v0 < 0xd);
  *(unsigned int *)(param_1 + 0xb14) = 0x39f618;
  *(unsigned int *)(param_1 + 0xb18) = 0;
  *(romwright_code **)(param_1 + 0xb1c) = FUN_00399638;
  *(unsigned int *)(param_1 + 0xb20) = 0;
  *(romwright_code **)(param_1 + 0xb24) = FUN_00399b44;
  *(unsigned int *)(param_1 + 0xb28) = 0;
  *(romwright_code **)(param_1 + 0xb34) = FUN_0039c348;
  *(unsigned int *)(param_1 + 0xb38) = 0;
  *(romwright_code **)(param_1 + 0xb3c) = FUN_0039c09c;
  *(unsigned int *)(param_1 + 0xb40) = 0;
  *(romwright_code **)(param_1 + 0xb44) = FUN_0039c9d4;
  *(unsigned int *)(param_1 + 0xb48) = 0;
  *(romwright_code **)(param_1 + 0xb54) = FUN_0039ca70;
  *(unsigned int *)(param_1 + 0xb58) = 0;
  *(romwright_code **)(param_1 + 0xb5c) = FUN_0039cb34;
  *(unsigned int *)(param_1 + 0xb60) = 0;
  *(romwright_code **)(param_1 + 0xb64) = FUN_002311a4;
  *(unsigned int *)(param_1 + 0xb68) = 0;
  *(romwright_code **)(param_1 + 0xb6c) = screenStep;
  *(unsigned int *)(param_1 + 0xb70) = 0;
  return;
}

} /* extern "C" */
