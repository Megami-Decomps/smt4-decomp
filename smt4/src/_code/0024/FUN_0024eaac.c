/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024eaac` (_code @ 0x24eaac, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_0026f024(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0026f100. */


unsigned int FUN_0024eaac(int param_1,int param_2)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r10;
  unsigned long long temp_v4;
  
  if (param_2 == 0) {
    unaff_r10 = 0xfffffeb6;
  }
  temp_v3 = 0;
  temp_v4 = 0x3f800000;
  if (param_2 == 0) {
    temp_v1 = 0;
    do {
      temp_v0 = param_1 + temp_v1 * 0x14;
      temp_v2 = FUN_0026f024(temp_v0 + 0x40,0,unaff_r10,4,*(unsigned int *)(temp_v0 + 0x48),1);
      if (temp_v2 != 0) {
        *(unsigned char *)(temp_v0 + 0x4c) = 1;
      }
      else {
        *(int *)(temp_v0 + 0x48) = *(int *)(temp_v0 + 0x48) + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 3);
    if (*(int *)(param_1 + 0x114) != 2) {
      temp_v1 = 0;
      do {
        temp_v2 = param_1 + temp_v1 * 0x14;
        FUN_0026f100(temp_v2 + 0x14,4,*(unsigned int *)(temp_v2 + 0x20));
        temp_v1 = temp_v1 + 1;
        *(int *)(temp_v2 + 0x20) = *(int *)(temp_v2 + 0x20) + 1;
      } while (temp_v1 < 2);
    }
LAB_0024ec74:
    if (((*(int *)(param_1 + 0x28) >= 0x3f800000) && (*(int *)(param_1 + 0x108) == 2)) &&
       (param_2 != 0)) {
      temp_v3 = 1;
    }
    if (*(char *)(param_1 + 0x74) == '\x01') {
      temp_v3 = 1;
    }
    return temp_v3;
  }
  if (*(int *)(param_1 + 0x108) != 4) {
    temp_v1 = 0;
    do {
      temp_v2 = param_1 + temp_v1 * 0x14;
      FUN_0026f100(temp_v2 + 0x14,0xc,*(unsigned int *)(temp_v2 + 0x20));
      temp_v1 = temp_v1 + 1;
      *(int *)(temp_v2 + 0x20) = *(int *)(temp_v2 + 0x20) + 1;
    } while (temp_v1 < 2);
    if (*(int *)(param_1 + 0x108) == 2) goto LAB_0024ec74;
  }
  temp_v1 = 0;
  do {
    temp_v0 = FUN_0026f024(param_1 + 0x40,0x14a,0,0xc,*(unsigned int *)(param_1 + 0x48),1);
    temp_v2 = temp_v1;
    if (temp_v0 != 0) {
      *(unsigned char *)(param_1 + 0x4c) = 1;
    }
    else {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    while( 1 ) {
      temp_v1 = temp_v2 + 1;
      *(int *)(param_1 + temp_v2 * 0x14 + 0x3c) = (int)temp_v4;
      if (temp_v1 >= 3) goto LAB_0024ec74;
      if (temp_v1 == 0) break;
      temp_v0 = param_1 + temp_v1 * 0x14;
      temp_v2 = temp_v1;
      if (*(int *)(temp_v0 + 0x34) >= 3) {
        temp_v1 = FUN_0026f024(temp_v0 + 0x40,0x14a,0,0xc,*(unsigned int *)(temp_v0 + 0x48),1);
        if (temp_v1 != 0) {
          *(unsigned char *)(temp_v0 + 0x4c) = 1;
        }
        else {
          *(int *)(temp_v0 + 0x48) = *(int *)(temp_v0 + 0x48) + 1;
        }
      }
    }
  } while( 1 );
}
