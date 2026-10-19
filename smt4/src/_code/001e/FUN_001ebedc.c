/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ebedc` (_code @ 0x1ebedc, 0x7ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int DAT_0043daa8; /* 0x43daa8 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_002595e0. */
/* Supplied declaration required: FUN_00259784. */
/* Supplied declaration required: FUN_002597c0. */
extern unsigned int FUN_002597e0(void);
extern unsigned int FUN_00259800(void);
extern unsigned int FUN_0025981c(void);
extern int FUN_00262f38(void);
/* Supplied declaration required: FUN_00262f78. */
/* Supplied declaration required: FUN_0026b9bc. */
/* Supplied declaration required: FUN_0026e61c. */
/* Supplied declaration required: FUN_0028bed4. */
/* Supplied declaration required: FUN_0028bf2c. */
extern unsigned int FUN_0028e934(unsigned char, unsigned int);
/* Supplied declaration required: FUN_002954dc. */
/* Supplied declaration required: FUN_002954f4. */
extern int FUN_002955fc(void);
/* Supplied declaration required: FUN_00295660. */
extern int FUN_00296d6c(unsigned int, int);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_0029bbc8. */
/* Supplied declaration required: FUN_0029bde4. */
/* Supplied declaration required: FUN_0029bed8. */
/* Supplied declaration required: FUN_0029c1c8. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_0029c6b0. */
extern int FUN_0029c8f4(int);
/* Supplied declaration required: FUN_0029e974. */
extern int FUN_0029ea68(unsigned short);
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
extern int FUN_002b89a4(unsigned int);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: FUN_002bd158. */
/* Supplied declaration required: FUN_002bd2b4. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_002c424c. */
extern int FUN_002e44a8(unsigned short);
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x001ec654) */

unsigned int FUN_001ebedc(int param_1)

{
/* irregular: 8 unstructured edge(s); 4 goto(s); 30 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  short *psVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15 [128];
  unsigned char temp_v16 [128];
  int *temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  int temp_v20 [9];
  
  temp_v17 = (int *)(param_1 + 0xd38);
  temp_v18 = 0;
  switch(*(unsigned int *)(param_1 + 0xd38)) {
  case 0:
    FUN_00296f4c(*(unsigned int *)(param_1 + 0xd04),0x17);
    temp_v7 = FUN_002955fc();
    if (temp_v7 == 0) {
      FUN_002954f4(*(unsigned short *)(param_1 + 0x126),1);
    }
    break;
  case 1:
    temp_v7 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v7 != 2) {
      return temp_v18;
    }
    temp_v7 = FUN_002e44a8(*(unsigned short *)(param_1 + 0x126));
    if (temp_v7 == 0) {
      return temp_v18;
    }
    FUN_002954dc(1);
    temp_v6 = (unsigned int)*(unsigned short *)(param_1 + 0x126);
    FUN_002b9024();
    temp_v5 = FUN_0028e934(*(unsigned char *)(temp_v6 + 2),1);
    FUN_002bf694(temp_v15,temp_v5);
    FUN_002bd158(temp_v15,temp_v16);
    FUN_00295660(0,temp_v16);
    temp_v6 = (unsigned int)*(unsigned short *)(param_1 + 0x126);
    FUN_002bd06c(temp_v6);
    FUN_002bf694(temp_v15,temp_v6);
    FUN_00295660(1,temp_v15);
    temp_v5 = *(unsigned int *)(param_1 + 0xd04);
    temp_v8 = 0x19;
    FUN_00296f4c(temp_v5,temp_v8);
    break;
  case 2:
    temp_v7 = FUN_002955fc();
    if (temp_v7 == 0) {
      return temp_v18;
    }
    temp_v7 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v7 != 2) {
      return temp_v18;
    }
    FUN_0028bed4();
    FUN_0029c3c0(0,0x1e,0xffffffff);
    temp_v5 = 0x1000173;
    FUN_002bf810(temp_v5);
    break;
  case 3:
    temp_v7 = FUN_00262f38();
    if (temp_v7 == 0) {
      return temp_v18;
    }
    temp_v7 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v7 == 2) {
      FUN_0028bf2c();
      break;
    }
    return temp_v18;
  case 4:
    temp_v7 = FUN_002b89a4(0);
    if (temp_v7 == 0) {
      return temp_v18;
    }
    if (*(unsigned short **)(param_1 + 0xce8) != (unsigned short *)0x0) {
      temp_v1 = **(unsigned short **)(param_1 + 0xce8);
      temp_v7 = FUN_002a8764();
      temp_v9 = 0;
      while( 1 ) {
        temp_v2 = FUN_002a8740((int)*(char *)(temp_v7 + temp_v9 + 0x90f0));
        if (*(short *)(temp_v2 + 0x46) == *(short *)(param_1 + 0x126)) break;
        temp_v9 = temp_v9 + 1;
        if (temp_v9 >= 0x18) goto LAB_001ec4d0;
      }
      FUN_0029bbc8(*(short *)(param_1 + 0x126));
      temp_v2 = (int)*(char *)(temp_v7 + temp_v9 + 0x90f0);
      *(unsigned char *)(temp_v7 + temp_v9 + 0x90f0) = 0xff;
      temp_v7 = FUN_0029ea68(temp_v1);
      temp_v19 = (unsigned int)(temp_v7 == 0);
      FUN_0029c1c8(temp_v2,temp_v1,0);
      temp_v7 = FUN_002a8740(temp_v2);
      temp_v2 = 0;
      temp_v9 = 0;
      temp_v20[0] = 0;
      temp_v20[1] = 0;
      temp_v20[2] = 0;
      temp_v20[3] = 0;
      do {
        temp_v12 = temp_v7 + temp_v9 * 2;
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v12 + 0x34);
        if ((temp_v6 != 0) && (FUN_0029e974(), (*(unsigned char *)(temp_v6 + 3) & 0x20) != 0)) {
          temp_v10 = temp_v2 * 2;
          temp_v2 = temp_v2 + 1;
          *(unsigned short *)((int)temp_v20 + temp_v10) = *(unsigned short *)(temp_v12 + 0x34);
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < 8);
      *(int *)(temp_v7 + 0x34) = temp_v20[0];
      *(int *)(temp_v7 + 0x38) = temp_v20[1];
      *(int *)(temp_v7 + 0x3c) = temp_v20[2];
      *(int *)(temp_v7 + 0x40) = temp_v20[3];
      rt_memcpy_w(temp_v7 + 0x8c,param_1 + 0x16c,0x500);
      rt_memcpy_w(param_1 + 0x6e4,temp_v7,0x604);
      FUN_0029c6b0(param_1 + 0x6e4);
      temp_v6 = 0;
      do {
        if (*(unsigned short *)(param_1 + 0x126) == temp_v6) {
          *(char *)(temp_v6 + temp_v7 + 0x8c) = *(char *)(temp_v6 + temp_v7 + 0x8c) + '\x01';
          break;
        }
        temp_v6 = temp_v6 + 1;
      } while ((int)temp_v6 < 0x500);
      FUN_0026e61c(temp_v7,2);
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v7 + 0x46);
      FUN_002b9024();
      temp_v9 = FUN_0029c8f4(temp_v7);
      temp_v10 = 0;
      temp_v12 = 4;
      temp_v2 = temp_v6 + 0x3a;
      do {
        if ((temp_v10 < temp_v9) && (*(short *)(temp_v2 + 2) != 0)) {
          temp_v3 = temp_v10 * 2;
          temp_v10 = temp_v10 + 1;
          *(short *)(temp_v7 + temp_v3 + 0x34) = *(short *)(temp_v2 + 2);
        }
        if ((temp_v10 < temp_v9) && (*(short *)(temp_v2 + 4) != 0)) {
          temp_v3 = temp_v10 * 2;
          temp_v10 = temp_v10 + 1;
          *(short *)(temp_v7 + temp_v3 + 0x34) = *(short *)(temp_v2 + 4);
        }
        temp_v12 = temp_v12 - 1;
        temp_v2 = temp_v2 + 4;
      } while (temp_v12 != 0);
      if (temp_v10 < temp_v9) {
        temp_v6 = FUN_0025981c();
        temp_v2 = *(int *)(param_1 + 0xce8);
        if ((unsigned int)(int)*(short *)(temp_v2 + 6) <= temp_v6) {
          if (temp_v7 != 0) {
            temp_v12 = 0;
            do {
              if ((unsigned int)*(unsigned short *)(temp_v7 + temp_v12 * 2 + 0x34) == (int)*(short *)(temp_v2 + 4))
              goto LAB_001ec2f4;
              temp_v12 = temp_v12 + 1;
            } while (temp_v12 < 8);
          }
          temp_v12 = temp_v10 * 2;
          temp_v10 = temp_v10 + 1;
          *(unsigned short *)(temp_v7 + temp_v12 + 0x34) = *(unsigned short *)(temp_v2 + 4);
        }
      }
LAB_001ec2f4:
      if (temp_v10 < temp_v9) {
        temp_v12 = 0;
        temp_v0 = *(short *)(param_1 + 0x116);
        temp_v6 = (unsigned int)(*(short *)(param_1 + 0x114) != 0);
        temp_v2 = 3;
        psVar4 = (short *)(param_1 + 0x114);
        do {
          if (temp_v0 != 0) {
            temp_v6 = temp_v6 + 1;
          }
          temp_v0 = psVar4[3];
          if (psVar4[2] != 0) {
            temp_v12 = temp_v12 + 1;
          }
          temp_v2 = temp_v2 - 1;
          psVar4 = psVar4 + 2;
        } while (temp_v2 != 0);
        temp_v12 = temp_v6 + temp_v12;
        if (*(short *)(param_1 + 0x122) != 0) {
          temp_v12 = temp_v12 + 1;
        }
        FUN_002c424c(temp_v20,0x20,0xffffffff);
        temp_v2 = 0;
        do {
          temp_v11 = 0;
          temp_v3 = FUN_00296d6c(0,temp_v12 - 1);
          temp_v4 = 0;
          do {
            if (temp_v20[temp_v4] == temp_v3) goto LAB_001ec410;
            temp_v11 = temp_v11 + 1;
            if (temp_v20[temp_v4] == -1) {
              temp_v20[temp_v4] = temp_v3;
              break;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 8);
          temp_v3 = param_1 + temp_v3 * 2;
          if (temp_v7 != 0) {
            temp_v4 = 0;
            do {
              if ((unsigned int)*(unsigned short *)(temp_v7 + temp_v4 * 2 + 0x34) == (int)*(short *)(temp_v3 + 0x114))
              goto LAB_001ec410;
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 8);
          }
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v3 + 0x114);
          FUN_0029e974();
          if ((*(unsigned char *)(temp_v6 + 3) & 0x20) != 0) {
            temp_v4 = temp_v10 * 2;
            temp_v10 = temp_v10 + 1;
            *(unsigned short *)(temp_v7 + temp_v4 + 0x34) = *(unsigned short *)(temp_v3 + 0x114);
          }
LAB_001ec410:
          temp_v14 = SBORROW4(temp_v10,temp_v9);
          temp_v3 = temp_v10 - temp_v9;
          if (temp_v10 < temp_v9) {
            temp_v14 = SBORROW4(temp_v2 + 1,100);
            temp_v3 = temp_v2 - 99;
          }
          temp_v13 = temp_v3 < 0;
          if (temp_v13 != temp_v14) {
            temp_v14 = SBORROW4(temp_v11,temp_v12);
            temp_v13 = temp_v11 - temp_v12 < 0;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v13 != temp_v14);
      }
      FUN_0029bde4(temp_v7);
      if (temp_v19 != 0) {
        FUN_0029bed8(*(unsigned short *)(temp_v7 + 0x46));
        *(unsigned char *)(param_1 + 0xd64) = 1;
      }
      temp_v5 = FUN_00259800();
      temp_v8 = FUN_002597e0();
      FUN_002bd2b4(DAT_0043daa8 + 0x48,(int)*(short *)(temp_v7 + 0x46),temp_v8,temp_v5);
      FUN_002597c0();
      FUN_00259784(DAT_0043daa8 + 0x48);
      FUN_002595e0(DAT_0043daa8 + 0x48);
    }
    else {
      rt_memcpy_w(param_1 + 0x6e4,param_1 + 0xe0,0x604);
    }
LAB_001ec4d0:
    temp_v1 = FUN_00262f78();
    FUN_002954f4(temp_v1,1);
    temp_v6 = FUN_00262f78();
    temp_v6 = temp_v6 & 0xffff;
    FUN_002b9024();
    temp_v5 = FUN_0028e934(*(unsigned char *)(temp_v6 + 2),1);
    FUN_002bf694(temp_v15,temp_v5);
    FUN_002bd158(temp_v15,temp_v16);
    FUN_00295660(0,temp_v16);
    temp_v6 = FUN_00262f78();
    temp_v6 = temp_v6 & 0xffff;
    FUN_002bd06c(temp_v6);
    FUN_002bf694(temp_v15,temp_v6);
    FUN_00295660(1,temp_v15);
    FUN_00296f4c(*(unsigned int *)(param_1 + 0xd04),0x1a);
    FUN_0026b9bc();
    temp_v5 = 0x1000115;
    FUN_002bf810(temp_v5);
    break;
  case 5:
    temp_v1 = FUN_00262f78();
    temp_v7 = FUN_002e44a8(temp_v1);
    if (temp_v7 != 0) {
      FUN_002954dc(1);
      FUN_002a03d8(0,0x1e);
      break;
    }
    return temp_v18;
  case 6:
    temp_v7 = FUN_002955fc();
    if (temp_v7 == 0) {
      return temp_v18;
    }
    temp_v7 = FUN_002b89a4(0);
    if (temp_v7 != 0) {
      temp_v7 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd04));
      if (temp_v7 == 2) {
        temp_v5 = *(unsigned int *)(param_1 + 0xd08);
        temp_v8 = 0;
        FUN_00296f4c(temp_v5,temp_v8);
        break;
      }
      return temp_v18;
    }
    return temp_v18;
  case 7:
    temp_v7 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd08));
    if (temp_v7 != 2) {
      return temp_v18;
    }
    temp_v6 = *(unsigned int *)(param_1 + 0xd58);
    *(unsigned int *)(param_1 + 0xd58) = temp_v6 & 0xfffffffe;
    if ((temp_v6 & 8) != 0) {
      temp_v7 = 2;
    }
    else if ((temp_v6 & 4) != 0) {
      temp_v7 = 4;
    }
    else {
      if ((temp_v6 & 2) == 0) {
        *(unsigned int *)(param_1 + 0xd38) = 10;
        FUN_0028bed4();
        *(unsigned char *)(param_1 + 0xd64) = 0;
        return temp_v18;
      }
      temp_v7 = 5;
    }
    *(int *)(param_1 + 0xd2c) = temp_v7;
    temp_v14 = temp_v7 == 4;
    if (temp_v14) {
      temp_v7 = 4;
    }
    *(unsigned int *)(param_1 + 0xd38) = 0;
    if (temp_v14) {
      *(int *)(param_1 + 0xd38) = temp_v7;
    }
    return 2;
  default:
    return temp_v18;
  case 10:
    temp_v7 = FUN_00262f38();
    if (temp_v7 != 0) {
      *(unsigned int *)(param_1 + 0xd38) = 0;
      FUN_0028bf2c();
      temp_v18 = 2;
      *(unsigned int *)(param_1 + 0xd2c) = 6;
    }
    return temp_v18;
  }
  *temp_v17 = *(int *)(param_1 + 0xd38) + 1;
  return temp_v18;
}
