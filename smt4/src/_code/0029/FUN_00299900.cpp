/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299900` (_code @ 0x299900, 0x2bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00288e68(void);
int FUN_0029212c(int);
int FUN_0029c94c(...);
int FUN_0029ee6c(int, int);
int FUN_0029efc0(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_camp; /* 0x43da90 */

/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: FUN_0029212c. */
/* Supplied declaration required: FUN_0029c94c. */
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */


void FUN_00299900(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = g_camp;
  switch(param_1) {
  default:
    return;
  case 9:
    temp_v1 = FUN_0029efc0(g_camp + 0x1dc);
    temp_v2 = FUN_0029efa8(temp_v0 + 0x1dc);
    FUN_0029c94c(*(unsigned int *)(temp_v0 + (temp_v2 + temp_v1) * 8 + 0xe3c));
    return;
  case 10:
    break;
  case 0xb:
    temp_v1 = FUN_0029efc0(g_camp + 0xb0);
    temp_v2 = FUN_0029efa8(temp_v0 + 0xb0);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x147c));
    return;
  case 0xc:
    temp_v1 = FUN_0029efc0(g_camp + 0x114);
    temp_v2 = FUN_0029efa8(temp_v0 + 0x114);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x14f4));
    return;
  case 0xd:
    temp_v1 = FUN_0029efc0(g_camp + 0x178);
    temp_v2 = FUN_0029efa8(temp_v0 + 0x178);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x1cc4));
    return;
  case 0x11:
    temp_v1 = FUN_0029efc0(g_camp + 0x2a4);
    temp_v2 = FUN_0029efa8(temp_v0 + 0x2a4);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x1e7c));
    return;
  case 0x12:
    temp_v1 = FUN_0029efc0(g_camp + 0x308);
    temp_v2 = FUN_0029efa8(temp_v0 + 0x308);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x1f6c));
    return;
  case 0x13:
    temp_v1 = FUN_0029efc0(g_camp + 0x36c);
    temp_v2 = FUN_0029efa8(temp_v0 + 0x36c);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x205c));
    return;
  case 0x14:
    temp_v1 = FUN_0029efc0(g_camp + 0x3d0);
    temp_v2 = FUN_0029efa8(temp_v0 + 0x3d0);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x20c0));
    return;
  case 0x15:
    temp_v1 = g_camp + 0x434;
    temp_v2 = FUN_0029efc0();
    temp_v1 = FUN_0029efa8(temp_v1);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0x21b0));
    return;
  case 0x16:
    temp_v1 = g_camp + 0x498;
    temp_v2 = FUN_0029efc0();
    temp_v1 = FUN_0029efa8(temp_v1);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0x22a0));
    return;
  case 0x17:
    temp_v1 = g_camp + 0x4fc;
    temp_v2 = FUN_0029efc0();
    temp_v1 = FUN_0029efa8(temp_v1);
    FUN_0029212c(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0x2390));
    return;
  }
  temp_v1 = FUN_0029efc0(g_camp + 0x240);
  temp_v2 = FUN_0029efa8(temp_v0 + 0x240);
  if (*(short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x1db4) != 0) {
    FUN_00288e68();
    FUN_0029c94c();
    return;
  }
  FUN_0029ee6c(0,0x323232ff);
  return;
}

} /* extern "C" */
