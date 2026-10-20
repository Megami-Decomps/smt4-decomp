/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029974c` (_code @ 0x29974c, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00299370(unsigned short *);
int FUN_0029a0cc(unsigned short *);
int FUN_0029c4ac(int);
int rt_memcpy_w(unsigned short *, unsigned int, int);

/* stack frame of param_1: 7 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp9C; /* 0x9c: local_9c */
    unsigned short sp9E; /* 0x9e: local_9e */
    unsigned short spA0; /* 0xa0: local_a0 */
    unsigned short spA2; /* 0xa2: local_a2 */
    unsigned short spA4; /* 0xa4: local_a4 */
    unsigned short spA6; /* 0xa6: local_a6 */
    unsigned short spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern int g_camp; /* 0x43da90 */

/* Supplied declaration required: FUN_00299370. */
/* Supplied declaration required: FUN_0029a0cc. */
/* Supplied declaration required: FUN_0029c4ac. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0029974c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  
  temp_v1 = g_camp;
  temp_v0 = gameGetPlayerData();
  temp_v3 = 0;
  temp_v2 = 0;
  if (param_1 == 0x11) {
    temp_v3 = temp_v1 + 0x2a4;
    temp_v2 = temp_v1 + 0x1e7c;
  }
  else if (param_1 == 0x12) {
    temp_v3 = temp_v1 + 0x308;
    temp_v2 = temp_v1 + 0x1f6c;
  }
  else if (param_1 == 0x13) {
    temp_v3 = temp_v1 + 0x36c;
    temp_v2 = temp_v1 + 0x205c;
  }
  else if (param_1 == 0x14) {
    temp_v3 = temp_v1 + 0x3d0;
    temp_v2 = temp_v1 + 0x20c0;
  }
  else if (param_1 == 0x15) {
    temp_v3 = temp_v1 + 0x434;
    temp_v2 = temp_v1 + 0x21b0;
  }
  else if (param_1 == 0x16) {
    temp_v3 = temp_v1 + 0x498;
    temp_v2 = temp_v1 + 0x22a0;
  }
  else if (param_1 == 0x17) {
    temp_v3 = temp_v1 + 0x4fc;
    temp_v2 = temp_v1 + 0x2390;
  }
  temp_v1 = FUN_0029efc0(temp_v3);
  temp_v3 = FUN_0029efa8(temp_v3);
  temp_v1 = temp_v1 + temp_v3;
  rt_memcpy_w(&temp_v4,temp_v0,0x8c);
  if (param_1 != 0x11) {
    if (param_1 != 0x12) {
      if (param_1 != 0x13) {
        if (param_1 != 0x14) {
          if (param_1 != 0x15) {
            if (param_1 != 0x16) {
              if (param_1 == 0x17) {
                temp_v10 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
              }
            }
            else {
              temp_v9 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
            }
          }
          else {
            temp_v8 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
          }
        }
        else {
          temp_v7 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
        }
      }
      else {
        temp_v6 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
      }
    }
    else {
      temp_v5 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
    }
  }
  else {
    temp_v4 = *(unsigned short *)(temp_v2 + temp_v1 * 2);
  }
  FUN_00299370(&temp_v4);
  FUN_0029a0cc(&temp_v4);
  FUN_0029c4ac(0);
  return;
}

} /* extern "C" */
