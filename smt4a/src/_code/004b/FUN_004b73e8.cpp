/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b73e8` (_code @ 0x4b73e8, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4908(int, int, int);
int FUN_003491e8(void);
int FUN_00407450(unsigned int);
int FUN_00471d00(void);
int FUN_004b75d0(int);
int FUN_004b7694(int);
int FUN_004b9ff4(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_aocSystem; /* 0x570280 */
extern short DAT_005f17a8; /* 0x5f17a8 */
extern short DAT_005f17aa; /* 0x5f17aa */

/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_003491e8. */
/* Supplied declaration required: FUN_00407450. */
/* Supplied declaration required: FUN_00471d00. */
/* Supplied declaration required: FUN_004b75d0. */
/* Supplied declaration required: FUN_004b7694. */
/* Supplied declaration required: FUN_004b9ff4. */
extern unsigned int FUN_004ba790(int);


void FUN_004b73e8(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_005f17aa != 0) {
    *(unsigned int *)(param_1 + 0x28) = 0xd;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    DAT_005f17aa = 0;
  }
  else if (DAT_005f17a8 != 0) {
    *(unsigned int *)(param_1 + 0x28) = 0xc;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    DAT_005f17a8 = 0;
  }
  else {
    temp_v0 = g_aocSystem;
    FUN_00471d00();
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 0x28) = 0xe;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
    else {
      temp_v1 = *(unsigned int *)(param_1 + 0x20);
      if ((temp_v1 & 0x400000) != 0) {
        FUN_001f4908(0,0x1e,0xff);
        *(unsigned int *)(param_1 + 0x2c) = 0;
        *(unsigned int *)(param_1 + 0x28) = 0x10;
      }
      else if ((((!((temp_v1 & 0x10) == 0 && (temp_v1 & 0x200000) == 0)) ||
                (!((temp_v1 & 0x40000) == 0 && (temp_v1 & 0x800000) == 0))) ||
               (!((temp_v1 & 0x4000000) == 0 && (temp_v1 & 0x1000000) == 0))) ||
              (!(((temp_v1 & 0x2000000) == 0 && (temp_v1 & 0x8000000) == 0) && (temp_v1 & 0x20000000) == 0
                ))) {
        if ((temp_v1 & 0x100) == 0) {
          FUN_001f4908(0,10,0xff);
        }
        temp_v1 = *(unsigned int *)(param_1 + 0x20);
        if (((((temp_v1 & 0x800000) != 0 || (temp_v1 & 0x1000000) != 0) ||
             ((temp_v1 & 0x2000000) != 0 || (temp_v1 & 0x8000000) != 0)) ||
            (((temp_v1 & 0x100000) != 0 || (temp_v1 & 0x80000) != 0 ||
             (((temp_v1 & 0x200000) != 0 || (temp_v1 & 0x40000) != 0 ||
              ((temp_v1 & 0x4000000) != 0 || (temp_v1 & 0x20000000) != 0)))))) && ((temp_v1 & 0x100) == 0)
           ) {
          FUN_001f4908(1,10,0xff);
        }
        *(unsigned int *)(param_1 + 0x2c) = 0;
        *(unsigned int *)(param_1 + 0x28) = 0x10;
      }
      else if ((temp_v1 & 0x2000) != 0) {
        if ((temp_v1 & 0x40) != 0) {
          *(unsigned int *)(param_1 + 0x20) = temp_v1 & 0xffffffbf;
          FUN_003491e8();
        }
        *(unsigned int *)(param_1 + 0x28) = 6;
        *(unsigned int *)(param_1 + 0x2c) = 0;
        temp_v2 = FUN_004ba790(param_1 + 0x9c);
        *(unsigned int *)(param_1 + 0x111c) = temp_v2;
        *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffdfff;
      }
      else {
        FUN_004b7694(param_1);
      }
    }
  }
  FUN_004b75d0(param_1);
  FUN_004b9ff4(param_1,param_1 + 0x58);
  if (*(char *)(param_1 + 0x1214) != '\0') {
    FUN_00407450(*(unsigned int *)(param_1 + 0x1218));
    return;
  }
  return;
}

} /* extern "C" */
