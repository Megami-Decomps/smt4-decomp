/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a9e8` (_code @ 0x21a9e8, 0x52c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_002fde98(); /* 0x2fde98 */
extern int DAT_00573b8c; /* 0x573b8c */
extern unsigned int DAT_00573b90; /* 0x573b90 */
extern unsigned int DAT_00573bc8; /* 0x573bc8 */
extern unsigned int DAT_00573bcc; /* 0x573bcc */

/* Supplied declaration required: FUN_0010063a. */
extern int FUN_0014aa78(void);
extern unsigned int FUN_001801a4(void);
extern int FUN_0018719c(unsigned int);
extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0020d3d4. */
/* Supplied declaration required: FUN_0023f788. */
extern int FUN_002919a4(void);
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_0047fbb4(unsigned int);
extern int FUN_0047fd9c(unsigned int);
extern int FUN_00481104(unsigned int);
/* Supplied declaration required: FUN_004c67d0. */


/* WARNING: Removing unreachable block (ram,0x0021ae9c) */

void FUN_0021a9e8(int param_1)

{
/* irregular: 10 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  short *psVar5;
  int temp_v4;
  int temp_v5;
  int *piVar8;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v1 = param_1;
  FUN_004c67d0();
  *(int *)(param_1 + 0x38a0) = temp_v1;
  FUN_0020d3d4(param_1);
  FUN_0023f788(param_1);
  temp_v1 = FUN_0014aa78();
  piVar8 = (int *)(param_1 + 0x3890);
  temp_v2 = *piVar8;
  temp_v6 = param_1 + 0x3a4c;
  if ((*(unsigned int *)(temp_v1 + 0x45ac) & DAT_00573bcc) != 0 ||
      (DAT_00573bc8 & *(unsigned int *)(temp_v1 + 0x45a8)) != 0) {
    if ((*(short *)(param_1 + temp_v2 * 2 + 0x4210) == -1) &&
       (temp_v1 = FUN_0018719c(0x410), temp_v1 != 0)) {
      temp_v3 = FUN_001801a4();
      temp_v7 = *(short *)(temp_v3 + 2) != 0;
      if (temp_v7) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
      }
      if (temp_v7 && temp_v3 != 0) {
        FUN_00203b40(temp_v6,0x191,6,1,1,1);
        FUN_002a4964(temp_v6,DAT_00573b8c + 2);
      }
      else {
        FUN_00203b40(temp_v6,400,6,1,1,1);
        FUN_002a4964(temp_v6,DAT_00573b8c + 1);
      }
    }
    else {
      FUN_00203b40(temp_v6,400,6,1,1,1);
      FUN_002a4964(temp_v6,DAT_00573b8c + 1);
    }
  }
  else {
    if (*(short *)(param_1 + temp_v2 * 2 + 0x4210) != -1) {
      temp_v1 = param_1 + temp_v2 * 0x10;
      temp_v4 = 1;
      temp_v0 = *(short *)(temp_v1 + 0x3c46);
      if (*(short *)(temp_v1 + 0x3c44) != 0) {
        temp_v4 = 2;
      }
      temp_v2 = 0;
      temp_v5 = 3;
      psVar5 = (short *)(temp_v1 + 0x3c44);
      do {
        if (temp_v0 != 0) {
          temp_v4 = temp_v4 + 1;
        }
        temp_v0 = psVar5[3];
        if (psVar5[2] != 0) {
          temp_v2 = temp_v2 + 1;
        }
        temp_v5 = temp_v5 - 1;
        psVar5 = psVar5 + 2;
      } while (temp_v5 != 0);
      temp_v4 = temp_v4 + temp_v2;
      temp_v0 = *(short *)(temp_v1 + 0x3c52);
    }
    else {
      temp_v2 = 2;
      temp_v1 = FUN_0018719c(0x410);
      if (temp_v1 != 0) {
        temp_v3 = FUN_001801a4();
        temp_v7 = *(short *)(temp_v3 + 2) != 0;
        if (temp_v7) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
        }
        if (!temp_v7 || temp_v3 == 0) {
          temp_v2 = 1;
        }
      }
      else {
        temp_v2 = 1;
      }
      temp_v1 = 3;
      temp_v0 = *(short *)(param_1 + 0x3c46);
      if (*(short *)(param_1 + 0x3c44) != 0) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v4 = 0;
      psVar5 = (short *)(param_1 + 0x3c44);
      do {
        if (temp_v0 != 0) {
          temp_v2 = temp_v2 + 1;
        }
        temp_v0 = psVar5[3];
        if (psVar5[2] != 0) {
          temp_v4 = temp_v4 + 1;
        }
        temp_v1 = temp_v1 - 1;
        psVar5 = psVar5 + 2;
      } while (temp_v1 != 0);
      temp_v4 = temp_v4 + temp_v2;
      temp_v0 = *(short *)(param_1 + 0x3c52);
    }
    if (temp_v0 != 0) {
      temp_v4 = temp_v4 + 1;
    }
    FUN_00203b40(temp_v6,temp_v4,6,1,0,1);
  }
  temp_v1 = FUN_0014aa78();
  temp_v2 = param_1 + 0x3ab0;
  if (!((*(unsigned int *)(temp_v1 + 0x45ac) & DAT_00573bcc) == 0 &&
       (*(unsigned int *)(temp_v1 + 0x45a8) & DAT_00573bc8) == 0)) {
    temp_v1 = FUN_0014aa78();
    FUN_00203b40(temp_v2,(int)*(short *)(temp_v1 + 0xe0),6,1,1,1);
    FUN_002a4964(temp_v2,DAT_00573b90);
  }
  else {
    FUN_00203b40(temp_v2,1,6,1,0,1);
  }
  FUN_002e6354(param_1 + 0x3ca8,0xf8);
  temp_v1 = 0;
  temp_v3 = 1;
  do {
    temp_v2 = FUN_00481104(temp_v3);
    if ((temp_v2 != 0) && (temp_v2 = FUN_0047fbb4(temp_v3), temp_v2 != 0)) {
      temp_v0 = *(short *)(param_1 + *piVar8 * 2 + 0x4210);
      if (temp_v0 != -1) {
        if (temp_v0 != -2) {
          if ((-1 < temp_v0) && (temp_v2 = FUN_001ab854(), temp_v2 != 0)) {
            temp_v2 = FUN_0047fd9c(temp_v3);
            if (temp_v2 != 0) {
              temp_v2 = temp_v1 * 2;
              temp_v1 = temp_v1 + 1;
              *(short *)(param_1 + temp_v2 + 0x3ca8) = (short)temp_v3;
            }
          }
        }
        else {
          temp_v2 = FUN_002919a4();
          if (temp_v2 != 0) {
            temp_v2 = FUN_0047fd9c(temp_v3);
            if (temp_v2 != 0) {
              temp_v2 = temp_v1 * 2;
              temp_v1 = temp_v1 + 1;
              *(short *)(param_1 + temp_v2 + 0x3ca8) = (short)temp_v3;
            }
          }
        }
      }
      else {
        temp_v2 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(param_1 + temp_v2 + 0x3ca8) = (short)temp_v3;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x3d);
  temp_v3 = 0x79f;
  do {
    temp_v2 = FUN_00481104(temp_v3);
    if ((temp_v2 != 0) && (temp_v2 = FUN_0047fbb4(temp_v3), temp_v2 != 0)) {
      temp_v0 = *(short *)(param_1 + *piVar8 * 2 + 0x4210);
      if (temp_v0 != -1) {
        if (temp_v0 != -2) {
          if ((-1 < temp_v0) && (temp_v2 = FUN_001ab854(), temp_v2 != 0)) {
            temp_v2 = FUN_0047fd9c(temp_v3);
            if (temp_v2 != 0) {
              temp_v2 = temp_v1 * 2;
              temp_v1 = temp_v1 + 1;
              *(short *)(param_1 + temp_v2 + 0x3ca8) = (short)temp_v3;
            }
          }
        }
        else {
          temp_v2 = FUN_002919a4();
          if (temp_v2 != 0) {
            temp_v2 = FUN_0047fd9c(temp_v3);
            if (temp_v2 != 0) {
              temp_v2 = temp_v1 * 2;
              temp_v1 = temp_v1 + 1;
              *(short *)(param_1 + temp_v2 + 0x3ca8) = (short)temp_v3;
            }
          }
        }
      }
      else {
        temp_v2 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(param_1 + temp_v2 + 0x3ca8) = (short)temp_v3;
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x7df) {
      FUN_00203b40(param_1 + 0x3db4,*(int *)(param_1 + 0x3e18) != 0,1,1,0,1);
      FUN_00203b40(param_1 + 0x3b14,temp_v1,6,1,0,1);
      FUN_0010063a(param_1 + 0x3ca8,temp_v1,2,FUN_002fde98);
      FUN_002a4914(param_1 + *piVar8 * 100 + 0x38bc,0);
      *(int *)(param_1 + 0x3c40) = temp_v6;
      return;
    }
  } while( 1 );
}
