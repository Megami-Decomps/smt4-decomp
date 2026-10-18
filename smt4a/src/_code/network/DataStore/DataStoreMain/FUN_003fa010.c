/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fa010` (_code @ 0x3fa010, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_00166b00; /* 0x166b00 */
extern unsigned char DAT_0055ca64; /* 0x55ca64 */
extern unsigned char DAT_0055cb28; /* 0x55cb28 */

/* Supplied declaration required: FUN_00122a10. */
extern unsigned int FUN_00122a60(void);
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_002e760a(unsigned int);
extern int FUN_002e9300(int, char *);
/* Supplied declaration required: FUN_002e9ff4. */
extern unsigned int FUN_002fafd0(int, unsigned int);
extern unsigned int FUN_003f2f0c(void);
/* Supplied declaration required: FUN_003fa6a4. */
extern int FUN_00432acc(void);


void FUN_003fa010(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [24];
  
  switch(*param_1) {
  case 1:
    if (param_1[0xc] == 0) {
      temp_v0 = 8;
      FUN_00178b04(8,"c:\\SMT4F\\SMT4F\\sdds4\\program\\network\\DataStore\\DataStoreMain.cpp",0x147
                  );
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_003f2f0c();
      }
      param_1[0xc] = temp_v1;
    }
    break;
  case 6:
    if ((param_1[0x10] == 0) && (temp_v0 = FUN_00432acc(), temp_v0 != 0)) {
      temp_v0 = FUN_002e760a(0x150);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_00122a60();
      }
      param_1[0xd] = temp_v1;
      puVar1 = (unsigned int *)0x48;
      FUN_0016007c();
      piVar2 = (int *)0x0;
      if (puVar1 != (unsigned int *)0x0) {
        temp_v1 = param_1[0xd];
        *puVar1 = (unsigned int)&DAT_0055cb28;
        temp_v0 = FUN_002e9ff4(puVar1 + 1);
        *(unsigned char *)(temp_v0 + 0xc) = 0;
        *(unsigned char **)(temp_v0 - 4) = &DAT_0055ca64;
        *(unsigned int *)(temp_v0 + 0x10) = temp_v1;
        *(unsigned char **)(temp_v0 + 0x14) = &LAB_00166b00;
        temp_v0 = FUN_002e9300(temp_v0 + 0x18,"20256b73");
        *(unsigned int *)(temp_v0 + 0xc) = 0;
        *(unsigned int *)(temp_v0 + 8) = 60000;
        *(unsigned int *)(temp_v0 + 0x10) = 0;
        temp_v0 = FUN_002e9ff4(temp_v0 + 0x14);
        piVar2 = (int *)(temp_v0 - 0x30);
        *(unsigned int *)(temp_v0 + 0xc) = 0xe7e3ffff;
        *(unsigned int *)(temp_v0 + 0x10) = 0;
        *(unsigned char *)(temp_v0 + 0x14) = 0;
      }
      param_1[0x10] = (unsigned int)piVar2;
                    /* WARNING: Could not recover jumptable at 0x003fa15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(romwright_code **)(*piVar2 + 8))();
      return;
    }
    break;
  case 7:
    FUN_003fa6a4(param_1);
    return;
  case 8:
    temp_v0 = FUN_002e760a(0x78);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002fafd0(temp_v0,0);
    }
    param_1[0xf] = temp_v1;
    FUN_00122a10(temp_v2,param_1[0xd],temp_v1);
    return;
  }
  return;
}
