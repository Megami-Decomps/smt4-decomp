/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f33b0` (_code @ 0x3f33b0, 0x2a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char spEA; /* 0xea: local_ea */
} param_3_stack;

extern int FUN_002c2bf4(); /* 0x2c2bf4 */

/* Supplied declaration required: FUN_0010063a. */
extern int FUN_001ab854(unsigned char);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_002a6894. */
extern int FUN_004bca68(int);
/* Supplied declaration required: FUN_004bcd90. */
extern unsigned int FUN_004bd21c(int);
/* Supplied declaration required: FUN_004bd30c. */
extern int FUN_004bd340(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_004bd3ec. */
/* Supplied declaration required: FUN_004bd6b0. */
/* Supplied declaration required: FUN_004d0d70. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_003f33b0(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [52];
  short asStack_11c [25];
  unsigned char temp_v8;
  unsigned char temp_v9 [200];
  
  rt_memcpy_w(temp_v7,param_1,300);
  temp_v1 = FUN_001ab888();
  temp_v2 = (unsigned int)temp_v8;
  temp_v6 = -1;
  if ((int)*(char *)(temp_v1 + 0x1ca0) == temp_v2) {
    temp_v6 = 0;
  }
  else if ((int)*(char *)(temp_v1 + 0x1ca1) == temp_v2) {
    temp_v6 = 1;
  }
  else if ((int)*(char *)(temp_v1 + 0x1ca2) == temp_v2) {
    temp_v6 = 2;
  }
  FUN_004d0d70(*(unsigned char *)(param_1 + 0x66));
  FUN_004bd30c(temp_v8,param_2,0);
  temp_v3 = FUN_001ab854(temp_v8);
  if (-1 < temp_v6) {
    *(unsigned char *)(temp_v1 + temp_v6 + 0x1ca0) = *(unsigned char *)(temp_v3 + 0x66);
  }
  temp_v1 = 0;
  do {
    temp_v5 = temp_v3 + temp_v1;
    temp_v6 = temp_v1 + 2;
    *(unsigned char *)(temp_v5 + 0x68) = *(unsigned char *)(temp_v5 + 0x68) | temp_v9[temp_v1];
    *(unsigned char *)(temp_v5 + 0x69) = temp_v9[temp_v1 + 1] | *(unsigned char *)(temp_v5 + 0x69);
    temp_v1 = temp_v6;
  } while (temp_v6 < 0x40);
  temp_v1 = FUN_004bd340(temp_v7,2);
  if (temp_v1 != 0) {
    FUN_004bd3ec(temp_v3,2);
  }
  FUN_002a6894(temp_v3);
  temp_v5 = 0;
  temp_v1 = 0;
  temp_v6 = 0;
  do {
    if (asStack_11c[temp_v6] != 0) {
      temp_v4 = FUN_004bca68(temp_v3);
      if (temp_v4 != 0) {
        if (asStack_11c[temp_v6] != 0) {
          temp_v5 = temp_v5 + 1;
        }
      }
      else {
        temp_v4 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(param_3 + temp_v4) = asStack_11c[temp_v6];
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  FUN_0010063a(param_3,8,2,FUN_002c2bf4);
  temp_v2 = FUN_004bd21c(temp_v3);
  if (0 < 8 - temp_v1) {
    *(unsigned short *)(param_3 + temp_v1 * 2) = 0;
  }
  if (0 < (int)(temp_v2 - 1)) {
    psVar6 = (short *)(temp_v3 + 0x32);
    if (((temp_v2 & 1) == 0) && (psVar6 = (short *)(temp_v3 + 0x34), *psVar6 == 0)) {
      temp_v1 = temp_v1 - 1;
    }
    temp_v0 = psVar6[1];
    temp_v4 = 0;
    for (temp_v6 = (int)(temp_v2 - 1) >> 1; temp_v6 != 0; temp_v6 = temp_v6 - 1) {
      if (temp_v0 == 0) {
        temp_v1 = temp_v1 - 1;
      }
      temp_v0 = psVar6[3];
      if (psVar6[2] == 0) {
        temp_v4 = temp_v4 - 1;
      }
      psVar6 = psVar6 + 2;
    }
    temp_v1 = temp_v1 + temp_v4;
  }
  if ((-1 < (int)(temp_v2 - 1)) && (*(short *)(temp_v3 + (temp_v2 - 1) * 2 + 0x34) == 0)) {
    temp_v1 = temp_v1 - 1;
  }
  if (0 < temp_v1) {
    FUN_004bcd90(temp_v3);
    return 1;
  }
  temp_v1 = 0;
  do {
    temp_v6 = temp_v5;
    if (*(short *)(param_3 + temp_v1 * 2) != 0) {
      for (; temp_v6 < 8; temp_v6 = temp_v6 + 1) {
        if (*(short *)(temp_v3 + temp_v6 * 2 + 0x34) == 0) {
          FUN_004bd6b0(temp_v3);
          break;
        }
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 8) {
      FUN_004bcd90(temp_v3);
      return 0;
    }
  } while( 1 );
}
