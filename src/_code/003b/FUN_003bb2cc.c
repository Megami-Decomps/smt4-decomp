/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb2cc` (_code @ 0x3bb2cc, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_003b87a0(); /* 0x3b87a0 */
extern int FUN_003b8c88(); /* 0x3b8c88 */
extern int FUN_003b8e60(); /* 0x3b8e60 */
extern int FUN_003b9078(); /* 0x3b9078 */
extern int FUN_003b9458(); /* 0x3b9458 */
extern int FUN_003b94d4(); /* 0x3b94d4 */
extern int FUN_003b97c4(); /* 0x3b97c4 */
extern int FUN_003b9b4c(); /* 0x3b9b4c */
extern int FUN_003b9ca4(); /* 0x3b9ca4 */
extern int FUN_003b9d68(); /* 0x3b9d68 */
extern int FUN_003ba1f8(); /* 0x3ba1f8 */
extern int FUN_003ba3f8(); /* 0x3ba3f8 */
extern int FUN_003ba4dc(); /* 0x3ba4dc */
extern int FUN_003ba5ac(); /* 0x3ba5ac */
extern int FUN_003ba680(); /* 0x3ba680 */
extern int FUN_003ba6e4(); /* 0x3ba6e4 */
extern int FUN_003babb8(); /* 0x3babb8 */


void FUN_003bb2cc(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 1;
  temp_v0 = 1;
  *(unsigned int *)(param_1 + 0xdc0) = 0;
  *(unsigned int *)(param_1 + 0xdc4) = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 8;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(temp_v2 + 0xdc0) = 0;
    *(unsigned int *)(temp_v2 + 0xdc4) = 0;
    temp_v2 = param_1 + (temp_v1 + 1) * 8;
    *(unsigned int *)(temp_v2 + 0xdc0) = 0;
    *(unsigned int *)(temp_v2 + 0xdc4) = 0;
    temp_v1 = temp_v1 + 2;
  } while (temp_v0 < 0x13);
  *(romwright_code **)(param_1 + 0xdc8) = FUN_003ba4dc;
  *(unsigned int *)(param_1 + 0xdcc) = 0;
  *(romwright_code **)(param_1 + 0xdd0) = FUN_003b97c4;
  *(unsigned int *)(param_1 + 0xdd4) = 0;
  *(romwright_code **)(param_1 + 0xdd8) = FUN_003ba680;
  *(unsigned int *)(param_1 + 0xddc) = 0;
  *(romwright_code **)(param_1 + 0xde0) = FUN_003b8e60;
  *(unsigned int *)(param_1 + 0xde4) = 0;
  *(romwright_code **)(param_1 + 0xde8) = FUN_003b87a0;
  *(unsigned int *)(param_1 + 0xdec) = 0;
  *(romwright_code **)(param_1 + 0xdf0) = FUN_003b9078;
  *(unsigned int *)(param_1 + 0xdf4) = 0;
  *(romwright_code **)(param_1 + 0xdf8) = FUN_003babb8;
  *(unsigned int *)(param_1 + 0xdfc) = 0;
  *(romwright_code **)(param_1 + 0xe00) = FUN_003b9b4c;
  *(unsigned int *)(param_1 + 0xe04) = 0;
  *(romwright_code **)(param_1 + 0xe08) = FUN_003b9458;
  *(unsigned int *)(param_1 + 0xe0c) = 0;
  *(romwright_code **)(param_1 + 0xe10) = FUN_003b9ca4;
  *(unsigned int *)(param_1 + 0xe14) = 0;
  *(romwright_code **)(param_1 + 0xe18) = FUN_003b8c88;
  *(unsigned int *)(param_1 + 0xe1c) = 0;
  *(romwright_code **)(param_1 + 0xe20) = FUN_003ba1f8;
  *(unsigned int *)(param_1 + 0xe24) = 0;
  *(romwright_code **)(param_1 + 0xe28) = FUN_003ba3f8;
  *(unsigned int *)(param_1 + 0xe2c) = 0;
  *(romwright_code **)(param_1 + 0xe30) = FUN_003b9d68;
  *(unsigned int *)(param_1 + 0xe34) = 0;
  *(romwright_code **)(param_1 + 0xe38) = FUN_003ba5ac;
  *(unsigned int *)(param_1 + 0xe3c) = 0;
  *(romwright_code **)(param_1 + 0xe40) = FUN_003ba6e4;
  *(unsigned int *)(param_1 + 0xe44) = 0;
  *(romwright_code **)(param_1 + 0xe48) = FUN_003b94d4;
  *(unsigned int *)(param_1 + 0xe4c) = 0;
  return;
}
