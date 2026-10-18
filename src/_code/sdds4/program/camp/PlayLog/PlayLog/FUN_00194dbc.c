/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00194dbc` (_code @ 0x194dbc, 0x240 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char DAT_00402d58; /* 0x402d58 */
extern int DAT_0043dd08; /* 0x43dd08 */

extern int FUN_00290a38(unsigned short);
extern int FUN_00290a4c(void);
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002c0e4c. */
/* Supplied declaration required: FUN_002c0e9c. */
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4e28. */


void FUN_00194dbc(void)

{
/* irregular: 1 goto(s); 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  
  if (DAT_0043dd08 == 0) {
    DAT_0043dd08 = FUN_002c4b84(0x100,0x100,0,0x488,1);
  }
  temp_v0 = DAT_0043dd08;
  FUN_002c4b30(DAT_0043dd08,0x488);
  *(unsigned int *)(temp_v0 + 0x344) = 0;
  FUN_002c4e28(0x30);
  FUN_002a6214(0x30,0);
  FUN_002976ac(0x37);
  FUN_002c3344(temp_v0);
  FUN_002c32f8(temp_v0,&DAT_00402d58,0x18,0,0,0,0,0,0,0,0);
  temp_v4 = 0;
  do {
    temp_v6 = temp_v0 + temp_v4 * 0x8c;
    FUN_002bdb2c(temp_v6 + 0x20,0x30,0,temp_v0,1);
    FUN_002bdac0(temp_v6 + 0x20,0);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 5);
  temp_v6 = 0;
  temp_v5 = 0;
  temp_v1 = FUN_002c0ec4(0x37,0);
  FUN_002c0e9c();
  temp_v4 = FUN_002c0e4c(temp_v1);
  if (temp_v4 != 0) {
    do {
      temp_v1 = FUN_002c0ec4(0x37,0);
      temp_v4 = FUN_002c0e9c();
      temp_v2 = FUN_002c0e4c(temp_v1);
      if (temp_v5 >= temp_v2) {
        puVar8 = (unsigned short *)0x0;
LAB_00194fc8:
        temp_v4 = FUN_00290a38(*puVar8 & 0xff);
        temp_v3 = temp_v0 + temp_v5 * 4;
        *(int *)(temp_v3 + 0x35c) = temp_v4;
        if ((*puVar8 & 0xff) != 0x29) {
          if (*(int *)(temp_v0 + temp_v5 * 4 + 0x35c) != 0) {
            temp_v4 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(short *)(temp_v0 + temp_v4 + 0x424) = (short)temp_v5;
          }
        }
        else if (temp_v4 != 0) {
          temp_v4 = temp_v4 - 1;
          *(int *)(temp_v3 + 0x35c) = temp_v4;
          if (*(int *)(temp_v0 + temp_v5 * 4 + 0x35c) != 0) {
            temp_v4 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(short *)(temp_v0 + temp_v4 + 0x424) = (short)temp_v5;
          }
        }
      }
      else {
        puVar8 = (unsigned short *)(temp_v4 + temp_v5 * 0x40);
        if ((puVar8 == (unsigned short *)0x0) || (-1 < (short)*puVar8)) goto LAB_00194fc8;
        temp_v4 = FUN_00290a4c();
        temp_v3 = temp_v0 + temp_v5 * 4;
        *(int *)(temp_v3 + 0x35c) = temp_v4;
        if (*(int *)(temp_v0 + temp_v5 * 4 + 0x35c) != 0) {
          temp_v4 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(short *)(temp_v0 + temp_v4 + 0x424) = (short)temp_v5;
        }
      }
      temp_v5 = temp_v5 + 1;
      temp_v1 = FUN_002c0ec4(0x37,0);
      FUN_002c0e9c();
      temp_v2 = FUN_002c0e4c(temp_v1);
    } while (temp_v5 < temp_v2);
  }
  FUN_0029fae8(temp_v0 + 0x2dc,temp_v6,5,1,0,1);
  return;
}
