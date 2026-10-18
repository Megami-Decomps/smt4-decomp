/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253634` (_code @ 0x253634, 0x1dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0022add0. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002baaa4. */
extern int FUN_002c0bcc(short);
/* Supplied declaration required: FUN_002c0c74. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */
/* Supplied declaration required: FUN_00389378. */


unsigned short FUN_00253634(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short *psVar6;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  short temp_v7;
  
  puVar1 = (unsigned short *)FUN_002baaa4(param_1);
  temp_v4 = (unsigned int)*puVar1;
  if (temp_v4 == 0) {
    FUN_002c0c74(param_1,param_2,1);
    puVar1 = (unsigned short *)FUN_002baaa4(param_1,param_2);
    temp_v4 = (unsigned int)*puVar1;
  }
  temp_v0 = FUN_002c0ec4(2,1);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  temp_v6 = temp_v1;
  if ((temp_v4 < temp_v2) && (temp_v6 = DAT_00433158, FUN_00389378(DAT_00433158,temp_v4), temp_v6 == 0)) {
    temp_v6 = temp_v1 + temp_v4 * 0x3c;
  }
  temp_v7 = 0;
  temp_v1 = 0;
  do {
    puVar1 = (unsigned short *)(temp_v6 + temp_v1 * 4);
    temp_v4 = (unsigned int)*puVar1;
    if (temp_v4 != 0) {
      if (param_3 != 0) {
        temp_v0 = FUN_002c0ec4(2);
        temp_v3 = FUN_002c0e9c();
        temp_v2 = FUN_002c0e4c(temp_v0);
        temp_v5 = temp_v3;
        if ((temp_v4 < temp_v2) && (temp_v5 = DAT_00433158, FUN_0022add0(DAT_00433158,temp_v4), temp_v5 == 0))
        {
          temp_v5 = temp_v3 + temp_v4 * 0x1c;
        }
        temp_v3 = 0;
        do {
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v3 * 2 + 0xc);
          if (((temp_v4 != 0) && (FUN_002b087c(), temp_v4 != 0)) &&
             ((*(char *)(temp_v4 + 0x9e) != '\0' || (*(char *)(temp_v4 + 0x9f) != '\0'))))
          goto LAB_002537a8;
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 6);
      }
      temp_v7 = temp_v7 + puVar1[1];
    }
LAB_002537a8:
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0xf) {
      temp_v1 = FUN_002c0bcc(temp_v7 - 1);
      temp_v5 = 0;
      while ((psVar6 = (short *)(temp_v6 + temp_v5 * 4), *psVar6 == 0 ||
             (temp_v1 = temp_v1 - (unsigned int)(unsigned short)psVar6[1], -1 < temp_v1))) {
        temp_v5 = temp_v5 + 1;
        if (temp_v5 >= 0xf) {
          return 0;
        }
      }
      return *(unsigned short *)(temp_v6 + temp_v5 * 4);
    }
  } while( 1 );
}
