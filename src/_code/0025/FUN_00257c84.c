/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257c84` (_code @ 0x257c84, 0x1d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int *DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_001e034c. */
/* Supplied declaration required: FUN_0029c7c8. */
/* Supplied declaration required: FUN_0029c950. */
extern int FUN_0029cb94(int);
/* Supplied declaration required: FUN_0029d080. */
/* Supplied declaration required: FUN_0029df14. */
extern int FUN_002b0824(unsigned int);
/* Supplied declaration required: FUN_002bcf58. */


unsigned int FUN_00257c84(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  
  puVar1 = DAT_0043dd68;
  puVar5 = DAT_0043dd68 + param_2 * 2 + 0x250e;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return 0;
      }
      temp_v2 = FUN_002b0824((*puVar5 & 0x3fffffff) >> 0xf);
    }
    else {
      temp_v2 = FUN_002b0824(*puVar5 & 0x7fff);
    }
    if (temp_v2 == 0) {
      return 0;
    }
    FUN_002bcf58(param_1,temp_v2,0x604);
  }
  else {
    if ((DAT_0043dd68[param_2 * 2 + 0x250f] & 0x1fffc) == 0) {
      return 0;
    }
    FUN_0029df14((DAT_0043dd68[param_2 * 2 + 0x250f] & 0x1ffff) >> 2,param_1,0x1fffc,param_4,param_4
                );
    temp_v2 = FUN_002b0824(*puVar5 & 0x7fff);
    temp_v0 = FUN_002b0824((*puVar5 & 0x3fffffff) >> 0xf);
    if (temp_v2 == 0 || temp_v0 == 0) {
      return 0;
    }
    FUN_0029c7c8(*puVar1,temp_v2,temp_v0,0,param_1);
    FUN_001e034c((puVar1[param_2 * 2 + 0x250f] & 0x1ffff) >> 2,temp_v2,temp_v0);
    temp_v2 = 0;
    do {
      if (*(short *)((int)puVar1 + temp_v2 * 2 + 0x9020) != 0) {
        temp_v0 = param_1 + 0x34;
        FUN_0029d080(temp_v0,8);
        if (temp_v0 == 0) {
          temp_v0 = FUN_0029cb94(param_1);
          temp_v1 = 0;
          if (temp_v1 < temp_v0) {
            do {
              if (*(short *)(param_1 + temp_v1 * 2 + 0x34) == 0) {
                *(unsigned short *)(param_1 + temp_v1 * 2 + 0x34) =
                     *(unsigned short *)((int)puVar1 + temp_v2 * 2 + 0x9020);
                break;
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < temp_v0);
          }
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
    FUN_0029c950(param_1);
  }
  return 1;
}
