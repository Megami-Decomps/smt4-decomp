/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115d60` (_code @ 0x115d60, 0x19a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int _ZN15OnlineTimestampC1Ev(...);
int FUN_002ea3d0(int, unsigned int);
int onlineUrlGetAddress(void);
int onlineUrlDestroy(...);
int FUN_002eb858(unsigned char [32], unsigned int, int);
int onlineSockAddrConstruct2(...);
int FUN_002ee568(...);
int FUN_002fff82(...);
int FUN_002fffbe(...);
int FUN_002fffd0(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_1_stack;

extern unsigned char LAB_0010dc81; /* 0x10dc81 */
extern unsigned char LAB_00115f08; /* 0x115f08 */

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: _ZN15OnlineTimestampC1Ev. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ea704(void);
/* Supplied declaration required: onlineUrlGetAddress. */
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: FUN_002eb858. */
/* Supplied declaration required: onlineSockAddrConstruct2. */
/* Supplied declaration required: FUN_002ee568. */
extern unsigned int FUN_002fff64(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002fff82. */
/* Supplied declaration required: FUN_002fffbe. */
/* Supplied declaration required: FUN_002fffd0. */


void FUN_00115d60(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [16];
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [104];
  unsigned char temp_v10 [32];
  unsigned char temp_v11 [16];
  unsigned char temp_v12 [32];
  unsigned char temp_v13 [36];
  
  temp_v0 = FUN_002ea704();
  temp_v5 = temp_v0 == 0;
  do {
    do {
      if (temp_v5) {
        temp_v3 = FUN_002ea3c0(temp_v6,&LAB_0010dc81,0,&LAB_00115f08);
        FUN_002ea3d0(param_1,temp_v3);
        return;
      }
      temp_v0 = FUN_002ea704();
      temp_v5 = 1;
    } while (*(char *)(temp_v0 + 0x10c) == '\0');
    temp_v0 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x114));
    temp_v5 = 1;
  } while (temp_v0 == 0);
  temp_v0 = FUN_002ea704();
  piVar2 = (int *)(temp_v0 + 0x114);
  temp_v0 = 0;
  temp_v4 = param_1 + 0xcc;
  do {
    FUN_002ee568(temp_v9,*(unsigned int *)(*(int *)*piVar2 + 4));
    temp_v1 = onlineUrlGetAddress();
    temp_v2 = *(unsigned int *)(temp_v1 + 8);
    FUN_002eb858(temp_v10,
                 (temp_v2 << 0x18) | (((temp_v2 >> 8) & 0xff) << 0x10) | (((temp_v2 >> 0x10) & 0xff) << 8)
                 | (temp_v2 >> 0x18),0x8237);
    onlineUrlDestroy(temp_v9);
    temp_v3 = onlineSockAddrConstruct2(temp_v13,temp_v10);
    temp_v3 = FUN_002fff64(temp_v11,0,temp_v3);
    FUN_002fff82(temp_v4,temp_v3);
    FUN_002fffbe(temp_v11);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  temp_v0 = 0;
  do {
    FUN_002ee568(temp_v9,*(unsigned int *)(*(int *)*piVar2 + 4));
    temp_v3 = onlineUrlGetAddress();
    temp_v3 = onlineSockAddrConstruct2(temp_v12,temp_v3);
    temp_v3 = FUN_002fff64(temp_v10,0x65,temp_v3);
    FUN_002fff82(temp_v4,temp_v3);
    FUN_002fffbe(temp_v10);
    onlineUrlDestroy(temp_v9);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  temp_v0 = 0;
  do {
    FUN_002ee568(temp_v9,*(unsigned int *)(*(int *)*piVar2 + 4));
    temp_v3 = onlineUrlGetAddress();
    temp_v3 = onlineSockAddrConstruct2(temp_v12,temp_v3);
    temp_v3 = FUN_002fff64(temp_v10,0x66,temp_v3);
    FUN_002fff82(temp_v4,temp_v3);
    FUN_002fffbe(temp_v10);
    onlineUrlDestroy(temp_v9);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  temp_v0 = 0;
  do {
    FUN_002ee568(temp_v9,*(unsigned int *)(*(int *)(*piVar2 + 8) + 4));
    temp_v3 = onlineUrlGetAddress();
    temp_v3 = onlineSockAddrConstruct2(temp_v12,temp_v3);
    temp_v3 = FUN_002fff64(temp_v10,0x67,temp_v3);
    FUN_002fff82(temp_v4,temp_v3);
    FUN_002fffbe(temp_v10);
    onlineUrlDestroy(temp_v9);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  FUN_002fffd0(param_1,0x9c4);
  _ZN15OnlineTimestampC1Ev(&temp_v7);
  *(unsigned int *)(param_1 + 0x280) = temp_v7;
  *(unsigned int *)(param_1 + 0x284) = temp_v8;
  return;
}

} /* extern "C" */
