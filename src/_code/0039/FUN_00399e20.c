/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399e20` (_code @ 0x399e20, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_00231338(); /* 0x231338 */
extern int FUN_00399854(); /* 0x399854 */
extern int FUN_00399d60(); /* 0x399d60 */
extern int FUN_0039be44(); /* 0x39be44 */
extern int FUN_0039c2b8(); /* 0x39c2b8 */
extern int FUN_0039c564(); /* 0x39c564 */
extern int FUN_0039cbf0(); /* 0x39cbf0 */
extern int FUN_0039cc8c(); /* 0x39cc8c */
extern int FUN_0039cd50(); /* 0x39cd50 */


void FUN_00399e20(int param_1)

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
  *(unsigned int *)(param_1 + 0xb14) = 0x39f834;
  *(unsigned int *)(param_1 + 0xb18) = 0;
  *(romwright_code **)(param_1 + 0xb1c) = FUN_00399854;
  *(unsigned int *)(param_1 + 0xb20) = 0;
  *(romwright_code **)(param_1 + 0xb24) = FUN_00399d60;
  *(unsigned int *)(param_1 + 0xb28) = 0;
  *(romwright_code **)(param_1 + 0xb34) = FUN_0039c564;
  *(unsigned int *)(param_1 + 0xb38) = 0;
  *(romwright_code **)(param_1 + 0xb3c) = FUN_0039c2b8;
  *(unsigned int *)(param_1 + 0xb40) = 0;
  *(romwright_code **)(param_1 + 0xb44) = FUN_0039cbf0;
  *(unsigned int *)(param_1 + 0xb48) = 0;
  *(romwright_code **)(param_1 + 0xb54) = FUN_0039cc8c;
  *(unsigned int *)(param_1 + 0xb58) = 0;
  *(romwright_code **)(param_1 + 0xb5c) = FUN_0039cd50;
  *(unsigned int *)(param_1 + 0xb60) = 0;
  *(romwright_code **)(param_1 + 0xb64) = FUN_00231338;
  *(unsigned int *)(param_1 + 0xb68) = 0;
  *(romwright_code **)(param_1 + 0xb6c) = FUN_0039be44;
  *(unsigned int *)(param_1 + 0xb70) = 0;
  return;
}
