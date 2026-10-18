/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dbe2c` (_code @ 0x1dbe2c, 0x6c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);
extern int FUN_001ddaf8(void);
extern int FUN_00223b88(void);
extern int FUN_00263140(void);
extern int FUN_00263164(void);
/* Supplied declaration required: FUN_00263194. */
/* Supplied declaration required: FUN_002631a4. */
/* Supplied declaration required: FUN_002631c0. */
/* Supplied declaration required: FUN_0026d8c0. */
/* Supplied declaration required: FUN_0026d8dc. */
extern int FUN_0026f0d8(unsigned int);
/* Supplied declaration required: FUN_0028c13c. */
/* Supplied declaration required: FUN_0028c194. */
/* Supplied declaration required: FUN_00292f44. */
extern int FUN_00293d50(void);
/* Supplied declaration required: FUN_002941b4. */
/* Supplied declaration required: FUN_00294568. */
/* Supplied declaration required: FUN_00295760. */
/* Supplied declaration required: FUN_00295780. */
/* Supplied declaration required: FUN_00295798. */
extern int FUN_002958a0(void);
extern int FUN_002958bc(void);
extern int FUN_002958e0(void);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00295b9c. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_0029c178. */
/* Supplied declaration required: FUN_0029c74c. */
/* Supplied declaration required: FUN_0029c768. */
/* Supplied declaration required: FUN_0029c784. */
/* Supplied declaration required: FUN_0029c950. */
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029d924. */
/* Supplied declaration required: FUN_0029db94. */
/* Supplied declaration required: FUN_0029e260. */
extern int FUN_0029e398(void);
/* Supplied declaration required: FUN_0029ea28. */
/* Supplied declaration required: FUN_0029eb14. */
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002bf9e8. */
extern int FUN_002bffbc(unsigned int);


/* WARNING: Removing unreachable block (ram,0x001dc4ac) */

unsigned int FUN_001dbe2c(int param_1)

{
/* irregular: 2 goto(s); 36 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [32];
  
  temp_v6 = 0;
  temp_v3 = param_1;
  FUN_002631c0();
  piVar7 = (int *)(param_1 + 0xd38);
  switch(*(unsigned int *)(param_1 + 0xd38)) {
  case 0:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
    FUN_002bd25c(temp_v4);
    FUN_002bf86c(temp_v8,temp_v4);
    FUN_00295904(0,temp_v8);
    FUN_002971e4(*(unsigned int *)(param_1 + 0xd04),0x16);
    temp_v2 = FUN_002958a0();
    if (temp_v2 == 0) {
      FUN_00295798(*(unsigned short *)(temp_v3 + 0x46),1);
    }
    FUN_002bcf58(param_1 + 0x6e4,temp_v3,0x604);
    *piVar7 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 1:
    temp_v3 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v3 != 2) {
      return 0;
    }
    FUN_00295780(1);
    *piVar7 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 2:
    temp_v3 = FUN_002958a0();
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_002971e4(*(unsigned int *)(param_1 + 0xd08),2);
    *piVar7 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 3:
    temp_v3 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd08));
    if (temp_v3 != 2) {
      return 0;
    }
    *piVar7 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 4:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
    FUN_002bd25c(temp_v4);
    FUN_002bf86c(temp_v8,temp_v4);
    FUN_00295904(0,temp_v8);
    temp_v2 = (int)*(short *)(param_1 + 0xd4);
    if (temp_v2 >= 1) {
      temp_v5 = 2;
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x590) + temp_v2;
      *(short *)(temp_v3 + 0x590) = (short)temp_v4;
      if ((temp_v4 & 0xffff) >= 1000) {
        *(unsigned short *)(temp_v3 + 0x590) = 999;
      }
      *(unsigned short *)(param_1 + 0xd4) = 0;
      temp_v0 = *(short *)(temp_v3 + 0x12);
      FUN_0029c950(temp_v3);
      temp_v1 = *(short *)(temp_v3 + 0x12);
      temp_v7 = temp_v1 == 999;
      if (temp_v1 >= 0x3e7) {
        temp_v7 = temp_v1 == temp_v0;
      }
      if (temp_v7) {
        temp_v5 = 9;
      }
    }
    else {
      temp_v2 = (int)*(short *)(param_1 + 0xd6);
      if (temp_v2 >= 1) {
        temp_v5 = 3;
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x592) + temp_v2;
        *(short *)(temp_v3 + 0x592) = (short)temp_v4;
        if ((temp_v4 & 0xffff) >= 1000) {
          *(unsigned short *)(temp_v3 + 0x592) = 999;
        }
        *(unsigned short *)(param_1 + 0xd6) = 0;
        temp_v0 = *(short *)(temp_v3 + 0x14);
        FUN_0029c950(temp_v3);
        temp_v1 = *(short *)(temp_v3 + 0x14);
        temp_v7 = temp_v1 == 999;
        if (temp_v1 >= 0x3e7) {
          temp_v7 = temp_v1 == temp_v0;
        }
        if (temp_v7) {
          temp_v5 = 10;
        }
      }
      else {
        temp_v2 = (int)*(short *)(param_1 + 0xd8);
        if (temp_v2 >= 1) {
          temp_v5 = 4;
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x594) + temp_v2;
          *(short *)(temp_v3 + 0x594) = (short)temp_v4;
          if ((temp_v4 & 0xffff) >= 1000) {
            *(unsigned short *)(temp_v3 + 0x594) = 999;
          }
          *(unsigned short *)(param_1 + 0xd8) = 0;
          temp_v0 = *(short *)(temp_v3 + 0x16);
          FUN_0029c950(temp_v3);
          temp_v1 = *(short *)(temp_v3 + 0x16);
          temp_v7 = temp_v1 == 999;
          if (temp_v1 >= 0x3e7) {
            temp_v7 = temp_v1 == temp_v0;
          }
          if (temp_v7) {
            temp_v5 = 0xb;
          }
        }
        else {
          temp_v2 = (int)*(short *)(param_1 + 0xda);
          if (temp_v2 >= 1) {
            temp_v5 = 5;
            temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x596) + temp_v2;
            *(short *)(temp_v3 + 0x596) = (short)temp_v4;
            if ((temp_v4 & 0xffff) >= 1000) {
              *(unsigned short *)(temp_v3 + 0x596) = 999;
            }
            *(unsigned short *)(param_1 + 0xda) = 0;
            temp_v0 = *(short *)(temp_v3 + 0x18);
            FUN_0029c950(temp_v3);
            temp_v1 = *(short *)(temp_v3 + 0x18);
            temp_v7 = temp_v1 == 999;
            if (temp_v1 >= 0x3e7) {
              temp_v7 = temp_v1 == temp_v0;
            }
            if (temp_v7) {
              temp_v5 = 0xc;
            }
          }
          else {
            temp_v2 = (int)*(short *)(param_1 + 0xdc);
            if (temp_v2 < 1) {
              FUN_0029a3c4(0);
              FUN_00292f44(0);
              FUN_0029eb14(0);
              temp_v6 = FUN_002631a4();
              FUN_00294568(temp_v6,1);
              FUN_0029c950(temp_v3);
              FUN_00263194(temp_v3,0x220);
              FUN_00295760(temp_v3);
              *(unsigned int *)(param_1 + 0xd38) = 6;
              FUN_0028c13c();
              if (*(char *)(param_1 + 0xd64) == '\0') {
                return 0;
              }
              FUN_0029c178(*(unsigned short *)(temp_v3 + 0x46));
              *(unsigned char *)(param_1 + 0xd64) = 0;
              return 0;
            }
            temp_v5 = 6;
            temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x598) + temp_v2;
            *(short *)(temp_v3 + 0x598) = (short)temp_v4;
            if ((temp_v4 & 0xffff) >= 1000) {
              *(unsigned short *)(temp_v3 + 0x598) = 999;
            }
            *(unsigned short *)(param_1 + 0xdc) = 0;
            temp_v0 = *(short *)(temp_v3 + 0x1a);
            FUN_0029c950(temp_v3);
            temp_v1 = *(short *)(temp_v3 + 0x1a);
            temp_v7 = temp_v1 == 999;
            if (temp_v1 >= 0x3e7) {
              temp_v7 = temp_v1 == temp_v0;
            }
            if (temp_v7) {
              temp_v5 = 0xd;
            }
          }
        }
      }
    }
    FUN_0029f088(1,temp_v2,0xffffffff,0);
    FUN_002971e4(*(unsigned int *)(param_1 + 0xd04),temp_v5);
    temp_v3 = *(int *)(param_1 + 0xd38) + 1;
    *piVar7 = temp_v3;
    break;
  case 5:
    temp_v3 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v3 != 2) {
      return 0;
    }
    temp_v3 = *(int *)(param_1 + 0xd38) - 1;
    *piVar7 = temp_v3;
    break;
  case 6:
    temp_v2 = FUN_00263164();
    if (temp_v2 == 0) {
      return 0;
    }
    temp_v2 = FUN_002631a4();
    FUN_002941b4(temp_v2,1);
    if (temp_v2 == 0) {
      return 0;
    }
    FUN_0028c194();
    FUN_00295798(*(unsigned short *)(temp_v3 + 0x46),1);
    *(unsigned char *)(param_1 + 0xd62) = 0;
    FUN_0029eb14(1);
    FUN_0029ea28();
    temp_v3 = FUN_00263140();
    if (temp_v3 == 0) {
      temp_v5 = 0xe3;
    }
    else {
      temp_v5 = 0xcc;
    }
    FUN_002b8b78(temp_v5);
    temp_v3 = *(int *)(param_1 + 0xd38) + 1;
    *piVar7 = temp_v3;
    break;
  case 7:
    temp_v3 = FUN_0029e398();
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_0029a3c4(0);
    FUN_0029c768(1);
    FUN_0029db94(param_1 + 0x6e4,0);
    FUN_002631c0();
    FUN_0029c784();
    FUN_0029c74c(0);
    FUN_0029d924(1);
    FUN_0026d8c0(0);
    temp_v3 = *(int *)(param_1 + 0xd38) + 1;
    *piVar7 = temp_v3;
    break;
  case 8:
    temp_v3 = FUN_002958e0();
    if ((((temp_v3 != 0) && (temp_v3 = FUN_00223b88(), temp_v3 == 0)) &&
        (temp_v3 = FUN_001ddaf8(), temp_v3 == 0)) &&
       ((temp_v3 = FUN_00293d50(), temp_v3 == 0 &&
        ((temp_v3 = FUN_002bffbc(0), temp_v3 != 0 || (temp_v3 = FUN_0026f0d8(1), temp_v3 != 0)))))) {
      FUN_002a0f68(1);
      FUN_002bf9e8(0x100016d);
      *piVar7 = *(int *)(param_1 + 0xd38) + 1;
      FUN_0029ccf8();
    }
    break;
  case 9:
    temp_v3 = FUN_002958bc();
    if (temp_v3 == 0) {
      return 0;
    }
    temp_v4 = *(unsigned int *)(param_1 + 0xd58);
    *(unsigned int *)(param_1 + 0xd58) = temp_v4 & 0xfffffffb;
    if ((temp_v4 & 8) != 0) {
      temp_v6 = 2;
LAB_001dc3fc:
      *(unsigned int *)(param_1 + 0xd2c) = temp_v6;
      *(unsigned int *)(param_1 + 0xd38) = 0;
      *(unsigned char *)(param_1 + 0xd62) = 1;
      FUN_00295780(1);
      FUN_002b8b78(0x3c);
      temp_v6 = 2;
    }
    else {
      if ((temp_v4 & 1) != 0) {
        temp_v6 = 3;
        goto LAB_001dc3fc;
      }
      if ((temp_v4 & 2) != 0) {
        temp_v6 = 5;
        goto LAB_001dc3fc;
      }
      *(unsigned int *)(param_1 + 0xd38) = 10;
    }
    temp_v5 = FUN_002631a4();
    FUN_00295b9c(temp_v5,1);
    FUN_0029a3c4(0);
    FUN_00292f44(0);
    FUN_0026d8c0(1);
    FUN_0029e260(0);
    FUN_0029eb14(0);
    FUN_0029c768(0);
    FUN_0026d8dc();
    *(unsigned char *)(param_1 + 0xd64) = 0;
    break;
  case 10:
    FUN_0028c194();
    *(unsigned int *)(param_1 + 0xd2c) = 6;
    temp_v6 = 2;
    *(unsigned int *)(param_1 + 0xd38) = 0;
  }
  return temp_v6;
}
