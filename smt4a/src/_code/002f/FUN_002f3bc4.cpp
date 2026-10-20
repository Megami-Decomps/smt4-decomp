/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3bc4` (_code @ 0x2f3bc4, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028a538(unsigned int, int, int);
int FUN_0032fea0(int, int);
int FUN_0032ff20(unsigned int, int, int, unsigned int, unsigned int);
int FUN_004bcd90(int);
int FUN_004da6e0(unsigned int, int, int, int, int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int *DAT_0057f290; /* 0x57f290 */

extern int slotRecordFindById(unsigned int);
/* Supplied declaration required: FUN_0028a538. */
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: FUN_0032ff20. */
/* Supplied declaration required: FUN_004bcd90. */
extern int FUN_004bd21c(int);
/* Supplied declaration required: FUN_004da6e0. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_002f3bc4(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = DAT_0057f290;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return 0;
      }
      temp_v2 = slotRecordFindById((DAT_0057f290[param_2 * 2 + 0x241e] & 0x3fffffff) >> 0xf);
    }
    else {
      temp_v2 = slotRecordFindById(DAT_0057f290[param_2 * 2 + 0x241e] & 0x7fff);
    }
    if (temp_v2 == 0) {
      return 0;
    }
    rt_memcpy_w(param_1,temp_v2,300);
  }
  else {
    if ((DAT_0057f290[param_2 * 2 + 0x241f] & 0x1fffc) == 0) {
      return 0;
    }
    FUN_0032ff20((DAT_0057f290[param_2 * 2 + 0x241f] & 0x1ffff) >> 2,param_1,0x1fffc,param_4,param_4
                );
    temp_v2 = slotRecordFindById(puVar1[param_2 * 2 + 0x241e] & 0x7fff);
    temp_v0 = slotRecordFindById((puVar1[param_2 * 2 + 0x241e] & 0x3fffffff) >> 0xf);
    if (temp_v2 == 0 || temp_v0 == 0) {
      return 0;
    }
    FUN_004da6e0(*puVar1,temp_v2,temp_v0,0,param_1);
    FUN_0028a538((puVar1[param_2 * 2 + 0x241f] & 0x1ffff) >> 2,temp_v2,temp_v0);
    temp_v2 = 0;
    do {
      if (*(short *)((int)puVar1 + temp_v2 * 2 + 0x8b70) != 0) {
        temp_v0 = param_1 + 0x34;
        FUN_0032fea0(temp_v0,8);
        if (temp_v0 == 0) {
          temp_v0 = FUN_004bd21c(param_1);
          temp_v1 = 0;
          if (temp_v1 < temp_v0) {
            do {
              if (*(short *)(param_1 + temp_v1 * 2 + 0x34) == 0) {
                *(unsigned short *)(param_1 + temp_v1 * 2 + 0x34) =
                     *(unsigned short *)((int)puVar1 + temp_v2 * 2 + 0x8b70);
                break;
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < temp_v0);
          }
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
    FUN_004bcd90(param_1);
  }
  return 1;
}

} /* extern "C" */
