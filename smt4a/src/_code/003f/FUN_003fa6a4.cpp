/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fa6a4` (_code @ 0x3fa6a4, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "network/Common/CTRNetInit.h"

extern "C" {

int FUN_0010d29c(void);
int FUN_0010d2a6(void);
int _ZN9Obj559f087vfunc00Ev(int, unsigned int);
int asdOperatorNew(void);
int _ZN9Obj557c908setStateEj(void);
int FUN_00514d48(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_00559bd8; /* 0x559bd8 */
extern unsigned char DAT_0055a808; /* 0x55a808 */
extern unsigned int DAT_005949a0; /* 0x5949a0 */

/* Supplied declaration required: FUN_0010d29c. */
/* Supplied declaration required: FUN_0010d2a6. */
/* Supplied declaration required: _ZN9Obj559f087vfunc00Ev. */
extern int FUN_0012bc90(unsigned int *);
/* Supplied declaration required: asdOperatorNew. */
extern int onlineContextGetInstance(void);
extern int FUN_002e9ff4(int);
/* Supplied declaration required: _ZN9Obj557c908setStateEj. */
/* Supplied declaration required: FUN_00514d48. */


void FUN_003fa6a4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00432acc();
  if (temp_v0 == 0) {
    return;
  }
  puVar2 = (unsigned int *)0x100;
  asdOperatorNew();
  temp_v0 = 0;
  if (puVar2 != (unsigned int *)0x0) {
    temp_v3 = *(unsigned int *)(param_1 + 0x38);
    *puVar2 = (unsigned int)"ﳨOﳠO";
    temp_v0 = FUN_0012bc90(puVar2 + 1);
    temp_v1 = FUN_002e9ff4(temp_v0 + 0x78);
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x20) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = 0;
    *(unsigned int *)(temp_v1 + 0x28) = 0;
    *(unsigned int *)(temp_v1 + 0x2c) = 0;
    *(unsigned int *)(temp_v1 + 0x30) = 0;
    *(unsigned int *)(temp_v1 + 0x34) = 0;
    *(unsigned int *)(temp_v1 + 0x38) = 0;
    *(unsigned int *)(temp_v1 + 0x3c) = 0;
    *(unsigned int *)(temp_v1 + 0x40) = 0;
    *(unsigned int *)(temp_v1 + 0x44) = 0;
    *(unsigned int *)(temp_v1 + 0x48) = 0;
    *(unsigned int *)(temp_v1 + 0x4c) = 0;
    *(unsigned int *)(temp_v1 + 0x50) = 0;
    *(unsigned int *)(temp_v1 + 0x54) = 0;
    *(unsigned int *)(temp_v1 + 0x58) = 0;
    *(unsigned int *)(temp_v1 + 0x5c) = 0;
    *(unsigned char **)(temp_v1 + 0x60) = &DAT_0055a808;
    *(unsigned char *)(temp_v1 + 100) = 0;
    temp_v1 = temp_v1 + 0x6c;
    FUN_00514d48(temp_v1,0);
    *(unsigned char **)(temp_v1 - 0xc) = &DAT_00559bd8;
    temp_v0 = temp_v1 - 0xe8;
    *(unsigned int *)(temp_v1 + 0x10) = 0;
    *(unsigned char *)(temp_v1 + 0x14) = 0;
    _ZN9Obj559f087vfunc00Ev(temp_v1 - 0xe4,temp_v3);
    temp_v2 = onlineContextGetInstance();
    if ((*(char *)(temp_v2 + 0x84) == '\x02') ||
       (((*(char *)(temp_v2 + 0x84) == '\x01' && (*(unsigned int *)(temp_v2 + 0x80) != 0)) &&
        ((*(unsigned int *)(temp_v2 + 0x80) & ~DAT_005949a0) == 0)))) {
      FUN_0010d29c();
    }
    *(unsigned int *)(temp_v1 - 0x84) = 0xf;
    if ((*(char *)(temp_v2 + 0x84) == '\x02') ||
       (((*(char *)(temp_v2 + 0x84) == '\x01' && (*(unsigned int *)(temp_v2 + 0x80) != 0)) &&
        ((*(unsigned int *)(temp_v2 + 0x80) & ~DAT_005949a0) == 0)))) {
      FUN_0010d2a6();
    }
  }
  *(int *)(param_1 + 0x44) = temp_v0;
  _ZN9Obj557c908setStateEj();
  return;
}

} /* extern "C" */
