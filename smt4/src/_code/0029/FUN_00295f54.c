/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295f54` (_code @ 0x295f54, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

extern int DAT_0043e128; /* 0x43e128 */

extern int FUN_001ab9dc(void);
extern int FUN_002015bc(void);
/* Supplied declaration required: FUN_002015d0. */
/* Supplied declaration required: FUN_0027e774. */
/* Supplied declaration required: FUN_0027e7b4. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00295ba4. */
extern int FUN_00295bd0(void);
extern int FUN_002a8740(int);
extern int FUN_002b6b04(void);
extern unsigned int FUN_002bce30(unsigned short, unsigned int);
extern unsigned int FUN_002bd06c(unsigned short);
/* Supplied declaration required: FUN_002bf694. */


void FUN_00295f54(int param_1,int param_2)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v0 = (int)*(short *)(param_1 + 0xcfca);
  if (temp_v0 != 0) {
    param_2 = (int)*(short *)(param_1 + 0xcfc8);
  }
  if (temp_v0 != 0 && temp_v0 != param_2) {
    temp_v0 = FUN_002b6b04();
    if (temp_v0 == 0) {
      temp_v2 = -1;
      temp_v0 = 0;
      do {
        if (*(short *)(param_1 + temp_v0 * 2 + 0xcf96) == *(short *)(param_1 + 0xcfc8)) {
          temp_v2 = (int)(short)temp_v0;
          if (temp_v2 == 0) {
            temp_v1 = *(unsigned int *)(param_1 + 0x356c);
            temp_v3 = 200;
            goto LAB_00296090;
          }
          break;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x19);
      temp_v0 = FUN_002a8740(temp_v2 - 1);
      temp_v4 = 0;
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v1 = FUN_002bd06c(*(unsigned short *)(temp_v0 + 0x46));
      FUN_002bf694(&temp_v4,temp_v1);
      FUN_00295660(8,&temp_v4);
      temp_v1 = FUN_002bce30(*(unsigned short *)(temp_v0 + 0x46),0);
      FUN_002bf694(&temp_v4,temp_v1);
      FUN_00295660(0x10,&temp_v4);
      temp_v1 = *(unsigned int *)(param_1 + 0x356c);
      temp_v3 = 0xc9;
LAB_00296090:
      FUN_0027e7b4(temp_v1,temp_v3);
      *(short *)(param_1 + 0xcfc8) = *(short *)(param_1 + 0xcfc8) + 1;
      FUN_0027e774(1);
      if (*(short *)(param_1 + 0xcfca) == *(short *)(param_1 + 0xcfc8)) {
        FUN_002015d0(0xffffffff);
        *(unsigned int *)(DAT_0043e128 + 0xc) = 0;
        return;
      }
      FUN_002015d0(0x5a);
      return;
    }
    temp_v0 = FUN_00295bd0();
    if ((((temp_v0 != 0) && (temp_v0 = FUN_001ab9dc(), temp_v0 >= 0x5b)) &&
        (temp_v0 = FUN_002015bc(), temp_v0 == -1)) &&
       (*(short *)(param_1 + 0xcfca) != *(short *)(param_1 + 0xcfc8))) {
      FUN_00295ba4(1);
      return;
    }
  }
  return;
}
