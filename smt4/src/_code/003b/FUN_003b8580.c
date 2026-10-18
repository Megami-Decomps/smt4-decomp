/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8580` (_code @ 0x3b8580, 0x1d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00433158; /* 0x433158 */
extern short DAT_0049fa94; /* 0x49fa94 */
extern short DAT_0049fa96; /* 0x49fa96 */

/* Supplied declaration required: FUN_0022b778. */
/* Supplied declaration required: FUN_0022b83c. */
extern unsigned int FUN_0022b8c0(int);
/* Supplied declaration required: FUN_002764a8. */
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_00341a3c. */
/* Supplied declaration required: FUN_003b875c. */


void FUN_003b8580(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0049fa96 != 0) {
    *(unsigned int *)(param_1 + 0x28) = 0xd;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    DAT_0049fa96 = 0;
  }
  else if (DAT_0049fa94 != 0) {
    *(unsigned int *)(param_1 + 0x28) = 0xc;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    DAT_0049fa94 = 0;
  }
  else {
    temp_v0 = DAT_00433158;
    FUN_002764a8();
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 0x28) = 0xe;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
    else {
      temp_v1 = *(unsigned int *)(param_1 + 0x20);
      if ((temp_v1 & 0x400000) != 0) {
        FUN_0029c3c0(0,0x1e,0xff);
        *(unsigned int *)(param_1 + 0x2c) = 0;
        *(unsigned int *)(param_1 + 0x28) = 0x10;
      }
      else if ((((!((temp_v1 & 0x10) == 0 && (temp_v1 & 0x200000) == 0)) ||
                (!((temp_v1 & 0x40000) == 0 && (temp_v1 & 0x800000) == 0))) ||
               (!((temp_v1 & 0x4000000) == 0 && (temp_v1 & 0x1000000) == 0))) ||
              (!(((temp_v1 & 0x2000000) == 0 && (temp_v1 & 0x8000000) == 0) && (temp_v1 & 0x20000000) == 0
                ))) {
        if ((temp_v1 & 0x100) == 0) {
          FUN_0029c3c0(0,10,0xff);
        }
        temp_v1 = *(unsigned int *)(param_1 + 0x20);
        if (((((temp_v1 & 0x800000) != 0 || (temp_v1 & 0x1000000) != 0) ||
             ((temp_v1 & 0x2000000) != 0 || (temp_v1 & 0x8000000) != 0)) ||
            (((temp_v1 & 0x100000) != 0 || (temp_v1 & 0x80000) != 0 ||
             (((temp_v1 & 0x200000) != 0 || (temp_v1 & 0x40000) != 0 ||
              ((temp_v1 & 0x4000000) != 0 || (temp_v1 & 0x20000000) != 0)))))) && ((temp_v1 & 0x100) == 0)
           ) {
          FUN_0029c3c0(1,10,0xff);
        }
        *(unsigned int *)(param_1 + 0x2c) = 0;
        *(unsigned int *)(param_1 + 0x28) = 0x10;
      }
      else if ((temp_v1 & 0x2000) != 0) {
        if ((temp_v1 & 0x40) != 0) {
          *(unsigned int *)(param_1 + 0x20) = temp_v1 & 0xffffffbf;
          FUN_00296e90();
        }
        *(unsigned int *)(param_1 + 0x28) = 6;
        *(unsigned int *)(param_1 + 0x2c) = 0;
        temp_v2 = FUN_0022b8c0(param_1 + 0x9c);
        *(unsigned int *)(param_1 + 0xd60) = temp_v2;
        *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffdfff;
      }
      else {
        FUN_003b875c(param_1);
      }
    }
  }
  FUN_0022b778(param_1);
  FUN_0022b83c(param_1,param_1 + 0x58);
  if (*(char *)(param_1 + 0xe58) != '\0') {
    FUN_00341a3c(*(unsigned int *)(param_1 + 0xe5c));
    return;
  }
  return;
}
