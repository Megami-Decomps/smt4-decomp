/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257a50` (_code @ 0x257a50, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e0450(unsigned int, int, int);
int FUN_0029c528(unsigned int, int, int, int, int);
int FUN_0029c6b0(int);
int FUN_0029cde0(int, int);
int FUN_0029dc74(unsigned int, int, int, unsigned int, unsigned int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int *g_unite; /* 0x43dd68 */

/* Supplied declaration required: FUN_001e0450. */
/* Supplied declaration required: FUN_0029c528. */
/* Supplied declaration required: FUN_0029c6b0. */
extern int FUN_0029c8f4(int);
/* Supplied declaration required: FUN_0029cde0. */
/* Supplied declaration required: FUN_0029dc74. */
extern int FUN_002b066c(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00257a50(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  
  puVar1 = g_unite;
  puVar5 = g_unite + param_2 * 2 + 0x250e;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return 0;
      }
      temp_v2 = FUN_002b066c((*puVar5 & 0x3fffffff) >> 0xf);
    }
    else {
      temp_v2 = FUN_002b066c(*puVar5 & 0x7fff);
    }
    if (temp_v2 == 0) {
      return 0;
    }
    rt_memcpy_w(param_1,temp_v2,0x604);
  }
  else {
    if ((g_unite[param_2 * 2 + 0x250f] & 0x1fffc) == 0) {
      return 0;
    }
    FUN_0029dc74((g_unite[param_2 * 2 + 0x250f] & 0x1ffff) >> 2,param_1,0x1fffc,param_4,param_4
                );
    temp_v2 = FUN_002b066c(*puVar5 & 0x7fff);
    temp_v0 = FUN_002b066c((*puVar5 & 0x3fffffff) >> 0xf);
    if (temp_v2 == 0 || temp_v0 == 0) {
      return 0;
    }
    FUN_0029c528(*puVar1,temp_v2,temp_v0,0,param_1);
    FUN_001e0450((puVar1[param_2 * 2 + 0x250f] & 0x1ffff) >> 2,temp_v2,temp_v0);
    temp_v2 = 0;
    do {
      if (*(short *)((int)puVar1 + temp_v2 * 2 + 0x9020) != 0) {
        temp_v0 = param_1 + 0x34;
        FUN_0029cde0(temp_v0,8);
        if (temp_v0 == 0) {
          temp_v0 = FUN_0029c8f4(param_1);
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
    FUN_0029c6b0(param_1);
  }
  return 1;
}

} /* extern "C" */
