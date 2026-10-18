/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00329414` (_code @ 0x329414, 0x978 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_00241eb4. */
/* Supplied declaration required: FUN_0024205c. */
/* Supplied declaration required: FUN_002420c8. */
/* Supplied declaration required: FUN_00242130. */
/* Supplied declaration required: FUN_002488a8. */
/* Supplied declaration required: FUN_0026e690. */
/* Supplied declaration required: FUN_00282c44. */
extern int FUN_002931cc(unsigned int);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_00299000. */
/* Supplied declaration required: FUN_0029d8c0. */
extern unsigned int FUN_0029e3bc(int);
/* Supplied declaration required: FUN_0029e41c. */
extern int FUN_0029e468(void);
/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029edfc. */
/* Supplied declaration required: FUN_0029f088. */
extern int FUN_0029f0f4(int);
extern int FUN_0029f248(int);
/* Supplied declaration required: FUN_0029f260. */
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
/* Supplied declaration required: FUN_0029fae8. */
extern int FUN_002a0f88(void);
/* Supplied declaration required: FUN_002ae818. */
/* Supplied declaration required: FUN_002b88c4. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b902c(unsigned int);
/* Supplied declaration required: FUN_002b91c4. */
extern int FUN_002b9220(int, unsigned int);
/* Supplied declaration required: FUN_002bc200. */
extern unsigned int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002bffbc(unsigned int);
extern int FUN_002c0144(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1830. */
/* Supplied declaration required: FUN_002dfe88. */


unsigned int FUN_00329414(int *param_1)

{
/* irregular: 29 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  char temp_v12 [4];
  
  temp_v7 = *param_1;
  FUN_002bf9f0(temp_v7 + 0x364);
  FUN_002bf9f0(temp_v7 + 0x3f0);
  temp_v9 = 0x100016d;
  temp_v10 = 0x100016e;
  switch(*(unsigned int *)(temp_v7 + 8)) {
  case 0:
    temp_v6 = FUN_002b9220(temp_v7 + 0x2d8,0);
    if (temp_v6 != 0) {
      FUN_002b8b78(0x19);
      FUN_00242130(temp_v7);
      FUN_002488a8(temp_v7,3);
      temp_v6 = 0;
      do {
        temp_v4 = FUN_0029f0f4(temp_v7 + 0x10);
        if (temp_v4 <= temp_v6) break;
        temp_v1 = FUN_002b88c4(0x1d,temp_v6 + 0x40e);
        temp_v4 = temp_v6 * 2;
        temp_v6 = temp_v6 + 1;
        *(unsigned short *)(temp_v7 + temp_v4 + 0x508) = temp_v1;
        *(short *)(temp_v7 + 0x524) = *(short *)(temp_v7 + 0x524) + 1;
      } while (temp_v6 < 10);
      temp_v1 = FUN_002b88c4(0x1d,0x573);
      *(unsigned short *)(temp_v7 + 0x51e) = temp_v1;
      temp_v1 = FUN_002b88c4(0x1d,0x574);
      *(unsigned short *)(temp_v7 + 0x520) = temp_v1;
      temp_v1 = FUN_002b88c4(0x1d,0x575);
      *(unsigned short *)(temp_v7 + 0x522) = temp_v1;
      *(short *)(temp_v7 + 0x524) = *(short *)(temp_v7 + 0x524) + 3;
    }
    break;
  case 1:
    temp_v6 = FUN_002bffbc(0);
    if (temp_v6 == 0) {
      temp_v6 = FUN_002bffbc(1);
      if (temp_v6 != 0) {
        FUN_002bc200(0x100016e);
        return 0xffffffff;
      }
      temp_v6 = FUN_002b902c(5);
      if ((temp_v6 == 0) && (temp_v6 = FUN_002b902c(0xe), temp_v6 == 0)) {
        temp_v6 = FUN_002b902c(6);
        if ((temp_v6 == 0) && (temp_v6 = FUN_002b902c(0xf), temp_v6 == 0)) {
          temp_v6 = FUN_002c0144(0xa0,0x30,200,0x20,2);
          if (temp_v6 != 0) {
            temp_v4 = FUN_0029f248(temp_v7 + 0x10);
            temp_v6 = temp_v4 - 1;
            if (temp_v4 - 1 < 0) {
              temp_v6 = 0;
            }
          }
          else {
            temp_v6 = FUN_002c0144(0xa0,0xc6,200,0x20,2);
            if (temp_v6 == 0) {
              return 0;
            }
            temp_v4 = FUN_0029f248(temp_v7 + 0x10);
            temp_v2 = FUN_0029f0f4(temp_v7 + 0x10);
            temp_v6 = temp_v4 + 1;
            if (temp_v2 <= temp_v4 + 1) {
              temp_v6 = temp_v4;
            }
          }
          FUN_0029edfc(temp_v7 + 0x10,temp_v6);
          FUN_0029f278(temp_v7 + 0x10,1);
          return 0;
        }
        temp_v6 = *(int *)(temp_v7 + 0xc) + 1;
        *(int *)(temp_v7 + 0xc) = temp_v6;
        if (temp_v6 < 2) {
          return 0;
        }
        *(unsigned int *)(temp_v7 + 0xc) = 0;
        return 0;
      }
      temp_v6 = *(int *)(temp_v7 + 0xc) - 1;
      *(int *)(temp_v7 + 0xc) = temp_v6;
      if (-1 < temp_v6) {
        return 0;
      }
      *(unsigned int *)(temp_v7 + 0xc) = 1;
      return 0;
    }
    if (*(int *)(temp_v7 + 0xc) != 0) {
      if (*(int *)(temp_v7 + 0xc) != 1) {
        return 0;
      }
      FUN_002488a8(temp_v7,3);
    }
    else {
      FUN_002488a8(temp_v7,2);
    }
    if (temp_v7 == 0) {
      return 0;
    }
    FUN_002bc200(temp_v9);
    break;
  case 2:
    temp_v6 = temp_v7 + 0x10;
    FUN_0029f278(temp_v6,1);
    if (temp_v6 != 0) {
      FUN_00242130();
      return 0;
    }
    temp_v6 = FUN_002bffbc(0);
    if (temp_v6 == 0) {
      temp_v6 = FUN_002bffbc(1);
      if (temp_v6 == 0) {
        return 0;
      }
      FUN_002488a8(temp_v7,1);
      if (temp_v7 == 0) {
        return 0;
      }
      FUN_002bc200();
      return 0;
    }
    temp_v6 = FUN_0029f260(temp_v7 + 0x10);
    temp_v4 = FUN_0029f248(temp_v7 + 0x10);
    temp_v6 = *(int *)(temp_v7 + (temp_v4 + temp_v6) * 4 + 0x74);
    FUN_0026e690(temp_v6,0);
    if (temp_v6 == 0) {
      return 0;
    }
    FUN_002bc200(0x100016d);
    *(unsigned int *)(temp_v7 + 0x2a8) = 0;
    if (*(char *)(temp_v7 + 0x2b4) != '\0') {
      temp_v10 = 0x2e;
      temp_v6 = FUN_002931cc(0x2e);
      if (temp_v6 == 0) {
        temp_v6 = 0x2e;
        FUN_00282c44();
        if (temp_v6 == 0) {
          *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x2a8) * 4 + 0x74) = temp_v10;
          *(int *)(temp_v7 + 0x2a8) = *(int *)(temp_v7 + 0x2a8) + 1;
        }
      }
    }
    else if (*(char *)(temp_v7 + 0x2b5) == '\0') {
      temp_v8 = 1;
      do {
        temp_v6 = FUN_002931cc(temp_v8);
        if ((temp_v6 == 0) && (temp_v5 = temp_v8, FUN_00282c44(), temp_v5 == 0)) {
          *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x2a8) * 4 + 0x74) = temp_v8;
          *(int *)(temp_v7 + 0x2a8) = *(int *)(temp_v7 + 0x2a8) + 1;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x8d);
    }
    else {
      temp_v10 = 0x18;
      temp_v6 = FUN_002931cc(0x18);
      if (temp_v6 == 0) {
        temp_v6 = 0x18;
        FUN_00282c44();
        if (temp_v6 == 0) {
          *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x2a8) * 4 + 0x74) = temp_v10;
          *(int *)(temp_v7 + 0x2a8) = *(int *)(temp_v7 + 0x2a8) + 1;
        }
      }
    }
    FUN_0029fae8(temp_v7 + 0x10,*(unsigned int *)(temp_v7 + 0x2a8),10,1,1,1);
    if (*(int *)(temp_v7 + 0x2a8) != 0) {
      return 0;
    }
    temp_v10 = 1;
    FUN_002488a8(temp_v7,temp_v10);
    return 0;
  case 3:
    temp_v12[0] = '\0';
    temp_v3 = FUN_002bf6d0(0x1d,0x575);
    temp_v6 = temp_v7 + 0x10;
    FUN_0029f878(temp_v6,temp_v3,temp_v7 + 0x508,(int)*(short *)(temp_v7 + 0x522),
                 (int)*(short *)(temp_v7 + 0x51e),(int)*(short *)(temp_v7 + 0x520),temp_v12,0,1);
    if (temp_v6 != 0) {
      FUN_00242130();
      return 0;
    }
    temp_v6 = temp_v7 + 0x10;
    FUN_0029f278(temp_v6,1);
    if (temp_v6 != 0) {
      FUN_00242130();
      return 0;
    }
    temp_v6 = FUN_002c1830(0,1);
    if (temp_v6 != 0 || temp_v12[0] != '\0') {
      temp_v6 = FUN_0029f260(temp_v7 + 0x10);
      temp_v4 = FUN_0029f248(temp_v7 + 0x10);
      temp_v4 = *(int *)(temp_v7 + (temp_v4 + temp_v6) * 4 + 0x74);
      temp_v6 = temp_v4;
      FUN_0026e690(temp_v4,0,1);
      if (temp_v6 == 0) {
        FUN_002b91c4(0x100016e);
        return 0;
      }
      temp_v6 = temp_v4;
      FUN_002420c8(temp_v4);
      FUN_00295904(0,temp_v6);
      FUN_0024205c(temp_v4);
      FUN_0029f088(0x18,temp_v4,0xffffffff,0);
      FUN_002971e4(*(unsigned int *)(temp_v7 + 0x530),0);
      FUN_002488a8(temp_v7,4);
      temp_v10 = temp_v9;
      FUN_002bc200(temp_v10);
      return 0;
    }
    temp_v6 = FUN_002c1830(1);
    if (temp_v6 != 0) {
      temp_v0 = *(char *)(temp_v7 + 0x2b4);
      temp_v8 = temp_v7 + 0x200;
      temp_v11 = temp_v0 != '\0';
      if (!temp_v11) {
        temp_v0 = *(char *)(temp_v7 + 0x2b5);
      }
      if (temp_v11 || temp_v0 != '\0') {
        return 0;
      }
      temp_v11 = *(char *)(temp_v7 + 0x2b6) != '\0';
      if (!temp_v11) {
        temp_v8 = (unsigned int)*(unsigned char *)(temp_v7 + 0x2b7);
      }
      if (temp_v11 || temp_v8 != 0) {
        return 0;
      }
      FUN_002488a8(temp_v7,7);
      FUN_002bc200(temp_v10);
      return 0;
    }
    temp_v6 = FUN_002c1830(9,1);
    if (temp_v6 == 0) {
      return 0;
    }
    FUN_002bc200(0x100016d);
    FUN_0029e63c(0xd,0);
    FUN_0029e5c8(0x21);
    FUN_0029e5c8(0x15);
    FUN_0029e5c8(0x16);
    FUN_0029e5c8(3);
    FUN_0029e48c();
    temp_v10 = 6;
    FUN_002488a8(temp_v7,temp_v10);
    return 0;
  case 4:
    temp_v6 = FUN_0019dfbc(*(unsigned int *)(temp_v7 + 0x530));
    if ((temp_v6 == 2) && (temp_v6 = FUN_002a0f88(), temp_v6 != 0)) {
      temp_v6 = FUN_00297674();
      if (temp_v6 != 0) {
        FUN_002488a8(temp_v7,3);
      }
      else {
        temp_v6 = FUN_0029f260(temp_v7 + 0x10);
        temp_v4 = FUN_0029f248(temp_v7 + 0x10);
        FUN_0026e690(*(unsigned int *)(temp_v7 + (temp_v4 + temp_v6) * 4 + 0x74),0);
        FUN_002b91c4(0x100025c);
        FUN_002488a8(temp_v7,5);
      }
      FUN_002b8b78(0x19);
    }
    break;
  case 5:
    temp_v6 = FUN_002bf9f0(temp_v7 + 0x47c);
    if (temp_v6 == 0) {
      return 0;
    }
    temp_v0 = *(char *)(temp_v7 + 0x2b4);
    temp_v11 = temp_v0 == '\0';
    if (temp_v11) {
      temp_v0 = *(char *)(temp_v7 + 0x2b5);
    }
    if (temp_v11 && temp_v0 == '\0') {
      temp_v0 = *(char *)(temp_v7 + 0x2b6);
      temp_v11 = temp_v0 == '\0';
      if (temp_v11) {
        temp_v0 = *(char *)(temp_v7 + 0x2b7);
      }
      if (temp_v11 && temp_v0 == '\0') {
        temp_v10 = FUN_0029f260(temp_v7 + 0x10);
        temp_v9 = FUN_0029e3bc(temp_v7 + 0x10);
        *(unsigned int *)(temp_v7 + 0x2a8) = 0;
        if (*(char *)(temp_v7 + 0x2b4) != '\0') {
          *(unsigned int *)(temp_v7 + 0x74) = 0x2e;
          *(unsigned int *)(temp_v7 + 0x2a8) = 1;
        }
        else if (*(char *)(temp_v7 + 0x2b5) != '\0') {
          *(unsigned int *)(temp_v7 + 0x74) = 0x18;
          *(unsigned int *)(temp_v7 + 0x2a8) = 1;
        }
        else if (*(char *)(temp_v7 + 0x2b7) != '\0') {
          *(unsigned int *)(temp_v7 + 0x74) = 0x76;
          *(unsigned int *)(temp_v7 + 0x2a8) = 1;
        }
        else {
          temp_v8 = 1;
          do {
            temp_v5 = temp_v8;
            FUN_002ae818();
            if ((temp_v5 != 0) &&
               ((temp_v6 = FUN_002931cc(temp_v8), temp_v6 != 0 ||
                (temp_v5 = temp_v8, FUN_00282c44(), temp_v5 != 2)))) {
              *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x2a8) * 4 + 0x74) = temp_v8;
              *(int *)(temp_v7 + 0x2a8) = *(int *)(temp_v7 + 0x2a8) + 1;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 0x8d);
        }
        FUN_0029fae8(temp_v7 + 0x10,*(unsigned int *)(temp_v7 + 0x2a8),10,1,1,1);
        FUN_00241eb4();
        FUN_00299000(temp_v7 + 0x10,temp_v10);
        FUN_0029d8c0(temp_v7 + 0x10,temp_v9);
        FUN_00242130(temp_v7);
        FUN_002488a8(temp_v7,3);
        return 0;
      }
    }
    FUN_002488a8(temp_v7,7);
    temp_v9 = temp_v10;
    FUN_002bc200(temp_v9);
    break;
  case 6:
    temp_v6 = FUN_0029e468();
    if (temp_v6 != 0) {
      FUN_0029e41c();
      FUN_002b8b78(0x19);
      FUN_00242130(temp_v7);
      FUN_002488a8(temp_v7,3);
    }
    else {
      FUN_00241eb4();
    }
    break;
  case 7:
    temp_v7 = FUN_002bf9f0(temp_v7 + 0x2d8);
    if (temp_v7 != 0) {
      FUN_002dfe88(1);
      return 0xffffffff;
    }
  }
  return 0;
}
