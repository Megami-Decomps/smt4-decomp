/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00258a24` (_code @ 0x258a24, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ee690(short *);
int FUN_001ee8b4(short *);
int FUN_00215a8c(short *);
int FUN_00215b5c(int, int);
int FUN_0026a978(unsigned int *, int);
int FUN_0026ae64(void);
int FUN_00293ba8(void);
int FUN_002cf58c(void);
int FUN_002e2fb0(int, int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: FUN_001ee690. */
/* Supplied declaration required: FUN_001ee8b4. */
/* Supplied declaration required: FUN_00215a8c. */
/* Supplied declaration required: FUN_00215b5c. */
/* Supplied declaration required: FUN_0026a978. */
extern char FUN_0026a9cc(short, short, short *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0026ae64. */
extern int FUN_00293aac(void);
/* Supplied declaration required: FUN_00293ba8. */
extern unsigned char FUN_0029aafc(void);
extern unsigned char FUN_0029c8f4(unsigned int);
extern int FUN_002b066c(short);
/* Supplied declaration required: FUN_002cf58c. */
/* Supplied declaration required: FUN_002e2fb0. */


void FUN_00258a24(int param_1)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  short *psVar8;
  short *psVar9;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v1 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  temp_v2 = 8;
  psVar9 = (short *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1300);
  psVar8 = (short *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1300);
  temp_v0 = *psVar9;
  if (param_1 != 0) {
    psVar8 = (short *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x18b0);
  }
  if (temp_v0 < 0) {
    temp_v2 = FUN_0029aafc();
  }
  else if ((0 < temp_v0) && (*(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e66) != '\x06')) {
    temp_v2 = FUN_0029c8f4(0);
  }
  FUN_00215b5c(temp_v1 + 0x1348,temp_v2);
  if (param_1 != 0) {
    FUN_002e2fb0(temp_v1 + 0x18f8,temp_v2);
  }
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  if ((*psVar8 >= 1) && (temp_v3 = *(char *)(temp_v1 + 0x1e66), temp_v3 != '\x06')) {
    if (temp_v3 == '\x02' || temp_v3 == '\x03') {
      temp_v4 = FUN_002b066c(*psVar9);
      temp_v3 = '\0';
      if (temp_v4 != 0) {
        temp_v3 = *(char *)(temp_v4 + 0x4b);
      }
      if (temp_v4 == 0 || temp_v3 == '\0') {
        temp_v5 = 0;
      }
      else {
        temp_v5 = 1;
      }
    }
    else {
      temp_v5 = 0;
    }
    temp_v3 = FUN_0026a9cc(*psVar8,psVar8[1],psVar8 + 0x24,(unsigned int *)&temp_v6,temp_v5);
    temp_v4 = (int)temp_v3;
    puVar7 = (unsigned int *)&temp_v6;
  }
  else {
    temp_v4 = -1;
    puVar7 = (unsigned int *)0x0;
  }
  FUN_0026a978(puVar7,temp_v4);
  temp_v4 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  if (*(char *)(temp_v1 + 0x1e67) == '\x06') {
    *(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12e4) = 0;
    FUN_00293ba8();
    *(unsigned char *)(temp_v4 + 0x1e63) = 0;
  }
  if ((*psVar8 < 0) && (FUN_00215a8c(psVar8 + 0x1d), *(int *)(temp_v1 + 0x12e4) >= 2)) {
    *(unsigned int *)(temp_v1 + 0x12e4) = 1;
    FUN_00293ba8();
  }
  if (0 < *psVar8) {
    FUN_002cf58c();
    FUN_001ee690(psVar8 + 0x2c);
    FUN_001ee8b4(psVar8 + 0x4c);
    temp_v4 = FUN_00293aac();
    if (temp_v4 == 2) {
      *(unsigned int *)(temp_v1 + 0x12e4) = 1;
      FUN_00293ba8();
    }
  }
  FUN_0026ae64();
  return;
}

} /* extern "C" */
