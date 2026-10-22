#include "classes/Obj558b24.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114760` (_code @ 0x114760, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea704(void);
int onlineUrlGetAddress(void);
int onlineUrlDestroy(...);
int FUN_002eb858(unsigned char [32], unsigned int, int);
int onlineSockAddrConstruct2(...);
int FUN_002ee568(...);
int FUN_002fa434(unsigned char [36], unsigned int);
int FUN_002fff82(int, unsigned int);
int FUN_002fffbe(unsigned char [48]);
int FUN_002fffd0(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp100; /* 0x100: local_100 */
} param_1_stack;

extern unsigned char LAB_0010dc81; /* 0x10dc81 */
extern unsigned char LAB_001148a0; /* 0x1148a0 */

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea704. */
/* Supplied declaration required: onlineUrlGetAddress. */
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: FUN_002eb858. */
/* Supplied declaration required: onlineSockAddrConstruct2. */
/* Supplied declaration required: FUN_002ee568. */
/* Supplied declaration required: FUN_002fa434. */
extern int FUN_002fdb0c(unsigned char *);
extern unsigned int FUN_002fff64(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002fff82. */
/* Supplied declaration required: FUN_002fffbe. */
/* Supplied declaration required: FUN_002fffd0. */


void FUN_00114760(int param_1)

{
/* irregular: 13 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6 [3];
  unsigned char temp_v7 [48];
  unsigned char temp_v8 [36];
  unsigned char temp_v9 [20];
  unsigned char temp_v10 [32];
  unsigned char temp_v11 [48];
  unsigned char temp_v12 [4];
  unsigned char temp_v13 [36];
  
  temp_v1 = FUN_002ea704();
  if ((temp_v1 != 0) && (temp_v1 = FUN_002ea704(), *(char *)(temp_v1 + 0x10c) != '\0')) {
    temp_v1 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v1,*(unsigned int *)(param_1 + 0x114));
    if (temp_v1 != 0) {
      temp_v1 = FUN_002ea704();
      piVar3 = (int *)(temp_v1 + 0x114);
      temp_v5 = 0;
      temp_v6[0] = param_1 + 0xcc;
      do {
        FUN_002ee568(temp_v7,*(unsigned int *)(*(int *)*piVar3 + 4));
        temp_v2 = onlineUrlGetAddress();
        temp_v3 = *(unsigned int *)(temp_v2 + 8);
        FUN_002eb858(temp_v10,
                     (temp_v3 << 0x18) | (((temp_v3 >> 8) & 0xff) << 0x10) |
                     (((temp_v3 >> 0x10) & 0xff) << 8) | (temp_v3 >> 0x18),0x8237);
        onlineUrlDestroy(temp_v7);
        temp_v4 = onlineSockAddrConstruct2(temp_v12,temp_v10);
        temp_v4 = FUN_002fff64(temp_v11,0,temp_v4);
        FUN_002fff82(temp_v6[0],temp_v4);
        FUN_002fffbe(temp_v11);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 5);
      temp_v5 = 0;
      do {
        temp_v4 = FUN_002ea704();
        FUN_002fa434(temp_v8,temp_v4);
        temp_v2 = FUN_002fdb0c(temp_v8);
        if ((temp_v2 == 2) && ((unsigned int)((*(int *)(temp_v1 + 0x118) - *piVar3) >> 2) >= 2)) {
          temp_v0 = 1;
        }
        else {
          temp_v0 = 0;
        }
        (((Obj558b24 *)(temp_v8))->Obj558b24::~Obj558b24(), (int)(temp_v8));
        if (temp_v0) {
          temp_v2 = ((int *)*piVar3)[1];
        }
        else {
          temp_v2 = *(int *)*piVar3;
        }
        FUN_002ee568(temp_v9,*(unsigned int *)(temp_v2 + 4));
        temp_v4 = onlineUrlGetAddress();
        temp_v4 = onlineSockAddrConstruct2(temp_v13,temp_v4);
        temp_v4 = FUN_002fff64(temp_v7,0x65,temp_v4);
        FUN_002fff82(temp_v6[0],temp_v4);
        FUN_002fffbe(temp_v7);
        onlineUrlDestroy(temp_v9);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 5);
      FUN_002fffd0(param_1,0x9c4);
      return;
    }
  }
  temp_v4 = FUN_002ea3c0(temp_v6,&LAB_0010dc81,0,&LAB_001148a0);
  FUN_002ea3d0(param_1,temp_v4);
  return;
}

} /* extern "C" */
