/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295f54` (_code @ 0x295f54, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int infoWinSetTimer(...);
int dialogOpen(int);
int infoWinSetMessage(unsigned int, unsigned int);
int FUN_00295660(int, int *);
int infoWinStartTimer(int);
int FUN_002bd06c(unsigned int);
int libc_strcpy(int *, unsigned int);

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int g_infoWin; /* 0x43e128 */

extern int FUN_001ab9dc(void);
extern int dialogGetTimer(void);
/* Supplied declaration required: infoWinSetTimer. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: infoWinSetMessage. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: infoWinStartTimer. */
extern int dialogIsActive(void);
extern int gameGetUnitRecord(int);
extern int FUN_002b6b04(void);
extern unsigned int FUN_002bce30(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: libc_strcpy. */


void FUN_00295f54(int param_1,int param_2)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v0 = (int)*(short *)(param_1 + 0xcfca);
  if (temp_v0 != 0) {
    param_2 = (int)*(short *)(param_1 + 0xcfc8);
  }
  if (temp_v0 != 0 && temp_v0 != param_2) {
    temp_v0 = FUN_002b6b04();
    if (temp_v0 == 0) {
      temp_v3 = -1;
      temp_v0 = 0;
      do {
        if (*(short *)(param_1 + temp_v0 * 2 + 0xcf96) == *(short *)(param_1 + 0xcfc8)) {
          temp_v3 = (int)(short)temp_v0;
          if (temp_v3 == 0) {
            temp_v1 = *(unsigned int *)(param_1 + 0x356c);
            temp_v4 = 200;
            goto LAB_00296090;
          }
          break;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x19);
      temp_v0 = gameGetUnitRecord(temp_v3 - 1);
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
      FUN_002bd06c(temp_v2);
      libc_strcpy(&temp_v5,temp_v2);
      FUN_00295660(8,&temp_v5);
      temp_v1 = FUN_002bce30(*(unsigned short *)(temp_v0 + 0x46),0);
      libc_strcpy(&temp_v5,temp_v1);
      FUN_00295660(0x10,&temp_v5);
      temp_v1 = *(unsigned int *)(param_1 + 0x356c);
      temp_v4 = 0xc9;
LAB_00296090:
      infoWinSetMessage(temp_v1,temp_v4);
      *(short *)(param_1 + 0xcfc8) = *(short *)(param_1 + 0xcfc8) + 1;
      dialogOpen(1);
      if (*(short *)(param_1 + 0xcfca) == *(short *)(param_1 + 0xcfc8)) {
        infoWinSetTimer(0xffffffff);
        *(unsigned int *)(g_infoWin + 0xc) = 0;
        return;
      }
      infoWinSetTimer(0x5a);
      return;
    }
    temp_v0 = dialogIsActive();
    if ((((temp_v0 != 0) && (temp_v0 = FUN_001ab9dc(), temp_v0 >= 0x5b)) &&
        (temp_v0 = dialogGetTimer(), temp_v0 == -1)) &&
       (*(short *)(param_1 + 0xcfca) != *(short *)(param_1 + 0xcfc8))) {
      infoWinStartTimer(1);
      return;
    }
  }
  return;
}

} /* extern "C" */
