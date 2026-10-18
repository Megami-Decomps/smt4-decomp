/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c1014` (_code @ 0x1c1014, 0xd2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern int DAT_0043db10; /* 0x43db10 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0026eda8. */
/* Supplied declaration required: FUN_0026ee14. */
extern int FUN_0026ee68(unsigned int);
/* Supplied declaration required: FUN_0026ef04. */
/* Supplied declaration required: FUN_0026efec. */
extern int FUN_0026f024(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0026f100. */
/* Supplied declaration required: FUN_0026f188. */
extern unsigned int FUN_0026f1f0(void);
/* Supplied declaration required: FUN_0026f204. */
/* Supplied declaration required: FUN_0026f784. */
/* Supplied declaration required: FUN_0026f800. */
extern int FUN_0028d594(void);
/* Supplied declaration required: FUN_00293f10. */
/* Supplied declaration required: FUN_002975ac. */
/* Supplied declaration required: FUN_0029ede8. */
extern int FUN_002b8cec(unsigned int);
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf810. */
extern int FUN_002bff6c(int, int, int, int);
/* Supplied declaration required: FUN_002bffe0. */
extern int FUN_002c15fc(unsigned int);
/* Supplied declaration required: FUN_002ebfbc. */
/* Supplied declaration required: FUN_0030a84c. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_001c1014(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  int temp_v17 [37];
  
  temp_v0 = DAT_0043db10;
  temp_v16 = 0x3f800000;
  temp_v1 = *(int *)(DAT_0043db10 + 0x144);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        return 0;
      }
      temp_v1 = 0;
      do {
        temp_v8 = temp_v0 + temp_v1 * 0x14;
        temp_v17[0] = *(int *)(temp_v8 + 0xd4);
        temp_v17[1] = 0;
        temp_v5 = FUN_0026f024(temp_v8 + 0xcc,0,0xfffffeb6,4);
        if (temp_v5 != 0) {
          *(unsigned char *)(temp_v8 + 0xd8) = 1;
        }
        else {
          *(int *)(temp_v8 + 0xd4) = *(int *)(temp_v8 + 0xd4) + 1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 4);
      temp_v1 = 0;
      do {
        temp_v5 = temp_v0 + temp_v1 * 0x14;
        FUN_0026f100(temp_v5 + 0xa0,0xc,*(unsigned int *)(temp_v5 + 0xac));
        temp_v1 = temp_v1 + 1;
        *(int *)(temp_v5 + 0xac) = *(int *)(temp_v5 + 0xac) + 1;
      } while (temp_v1 < 2);
      if (*(char *)(temp_v0 + 0x100) != '\x01') {
        return 0;
      }
      temp_v1 = *(int *)(temp_v0 + 8);
      FUN_0026f784();
      if (temp_v1 == 0) {
        return 0;
      }
      temp_v1 = (int)*(short *)(*(int *)(temp_v0 + 0x138) + 0x88);
      FUN_00293f10(temp_v1,1);
      if (temp_v1 == 0) {
        return 0;
      }
      *(unsigned char *)(temp_v0 + 0x15c) = 1;
      return 0;
    }
  }
  else {
    temp_v1 = *(int *)(DAT_0043db10 + 8);
    FUN_0026f784();
    if ((temp_v1 != 0) && (*(int *)(temp_v0 + 0x160) != 0)) {
      temp_v1 = (int)*(short *)(*(int *)(temp_v0 + 0x138) + 0x88);
      FUN_00293f10(temp_v1,1);
      if (temp_v1 != 0) {
        if (*(char *)(temp_v0 + 0x164) == '\0') {
          FUN_0026f204(*(unsigned int *)(temp_v0 + 0x138),*(unsigned int *)(temp_v0 + 0xc),
                       *(unsigned int *)(temp_v0 + 0x160));
          *(unsigned char *)(temp_v0 + 0x164) = 1;
        }
        temp_v1 = FUN_0028d594();
        if (temp_v1 == 0) {
          FUN_0029ede8(0,*(unsigned int *)(temp_v0 + 0x148),0xffffffff);
          temp_v2 = FUN_0026f1f0();
          FUN_0026f188(temp_v2,0xe);
        }
        if (*(int *)(temp_v0 + 0x14c) == *(int *)(temp_v0 + 0x13c)) {
          FUN_0026f800(*(unsigned int *)(temp_v0 + 8),1);
          *(unsigned char *)(temp_v0 + 0x165) = 1;
        }
        *(unsigned int *)(temp_v0 + 0x144) = 1;
        if (*(char *)(temp_v0 + 0x114) == '\0') {
          FUN_0026f800(*(unsigned int *)(temp_v0 + 8),0);
          *(unsigned char *)(temp_v0 + 0x165) = 0;
          FUN_0026f100(temp_v0 + 0xb4,0xc,*(unsigned int *)(temp_v0 + 0xc0));
          temp_v1 = 0;
          *(int *)(temp_v0 + 0xc0) = *(int *)(temp_v0 + 0xc0) + 1;
          do {
            temp_v17[0] = *(int *)(temp_v0 + 0xd4);
            temp_v17[1] = 1;
            temp_v8 = FUN_0026f024(temp_v0 + 0xcc,0x14a,0,0xc);
            temp_v5 = temp_v1;
            if (temp_v8 != 0) {
              *(unsigned char *)(temp_v0 + 0xd8) = 1;
            }
            else {
              *(int *)(temp_v0 + 0xd4) = *(int *)(temp_v0 + 0xd4) + 1;
            }
            while( 1 ) {
              temp_v1 = temp_v5 + 1;
              *(int *)(temp_v0 + temp_v5 * 0x14 + 200) = (int)temp_v16;
              if (temp_v1 >= 4) {
                if (*(int *)(temp_v0 + 0x144) == 1) {
                  *(unsigned int *)(temp_v0 + 0x144) = 0;
                }
                goto LAB_001c1220;
              }
              if (temp_v1 == 0) break;
              temp_v8 = temp_v0 + temp_v1 * 0x14;
              temp_v5 = temp_v1;
              if (*(int *)(temp_v8 + 0xc0) >= 3) {
                temp_v17[0] = *(int *)(temp_v8 + 0xd4);
                temp_v17[1] = 1;
                temp_v1 = FUN_0026f024(temp_v8 + 0xcc,0x14a,0,0xc);
                if (temp_v1 != 0) {
                  *(unsigned char *)(temp_v8 + 0xd8) = 1;
                }
                else {
                  *(int *)(temp_v8 + 0xd4) = *(int *)(temp_v8 + 0xd4) + 1;
                }
              }
            }
          } while( 1 );
        }
      }
    }
  }
LAB_001c1220:
  if (*(char *)(temp_v0 + 0x114) == '\0') {
    return 0;
  }
  temp_v8 = 0;
  temp_v5 = *(int *)(temp_v0 + 0x13c);
  temp_v1 = FUN_002b8cec(0);
  if (temp_v1 == 0) {
    temp_v1 = FUN_002b8cec(1);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v0 + 0xd4) = 0;
      *(unsigned char *)(temp_v0 + 0xd8) = 0;
      *(unsigned int *)(temp_v0 + 0xe8) = 0;
      *(unsigned char *)(temp_v0 + 0xec) = 0;
      *(unsigned int *)(temp_v0 + 0xfc) = 0;
      *(unsigned char *)(temp_v0 + 0x100) = 0;
      *(unsigned int *)(temp_v0 + 0x110) = 0;
      *(unsigned char *)(temp_v0 + 0x114) = 0;
      *(unsigned int *)(temp_v0 + 0xac) = 0;
      *(unsigned char *)(temp_v0 + 0xb0) = 0;
      *(unsigned int *)(temp_v0 + 0xc0) = 0;
      *(unsigned char *)(temp_v0 + 0xc4) = 0;
      FUN_0026f800(*(unsigned int *)(temp_v0 + 8),0);
      temp_v8 = 2;
    }
    else {
      temp_v1 = FUN_002b8cec(5);
      if (temp_v1 != 0) {
        temp_v1 = *(int *)(temp_v0 + 0x13c) - 1;
        *(int *)(temp_v0 + 0x13c) = temp_v1;
        if (temp_v1 < 0) {
          *(unsigned int *)(temp_v0 + 0x13c) = 0;
          *(unsigned int *)(temp_v0 + 0x140) = 0;
        }
        else if ((temp_v1 < *(int *)(temp_v0 + 0x140)) || (*(int *)(temp_v0 + 0x140) + 3 <= temp_v1)) {
          *(int *)(temp_v0 + 0x140) = temp_v1;
        }
      }
      else {
        temp_v1 = FUN_002b8cec(6);
        if (temp_v1 != 0) {
          temp_v1 = *(int *)(temp_v0 + 0x148);
          temp_v9 = *(int *)(temp_v0 + 0x13c) + 1;
          *(int *)(temp_v0 + 0x13c) = temp_v9;
          if (temp_v9 >= temp_v1) {
            *(int *)(temp_v0 + 0x13c) = temp_v1 - 1;
            if (*(int *)(temp_v0 + 0x148) >= 3) {
              temp_v1 = temp_v1 - 3;
              *(int *)(temp_v0 + 0x140) = temp_v1;
            }
          }
          else {
            temp_v1 = *(int *)(temp_v0 + 0x140);
            if ((temp_v9 < temp_v1) || (temp_v1 + 3 <= temp_v9)) {
              temp_v1 = temp_v1 + 1;
              *(int *)(temp_v0 + 0x140) = temp_v1;
            }
          }
        }
        else {
          temp_v1 = FUN_002b8cec(4);
          if ((((temp_v1 == 0) || (temp_v1 = FUN_002c15fc(6), temp_v1 != 0)) ||
              (temp_v1 = FUN_002c15fc(5), temp_v1 != 0)) || (temp_v1 = FUN_002c15fc(3), temp_v1 != 0)) {
            temp_v1 = FUN_002b8cec(3);
            if (((temp_v1 == 0) || (temp_v1 = FUN_002c15fc(6), temp_v1 != 0)) ||
               ((temp_v1 = FUN_002c15fc(5), temp_v1 != 0 || (temp_v1 = FUN_002c15fc(4), temp_v1 != 0)))) {
              temp_v1 = FUN_002b8cec(10);
              if (temp_v1 != 0) {
                if (*(char *)(temp_v0 + 0x15d) != '\0') {
                  *(unsigned char *)(temp_v0 + 0x15d) = 0;
                }
                else {
                  *(unsigned char *)(temp_v0 + 0x15d) = 1;
                }
                *(unsigned int *)(temp_v0 + 0xa4) = 0x14a;
                *(unsigned int *)(temp_v0 + 0xac) = 0;
                FUN_002bf810(0x100016d);
              }
            }
            else {
              temp_v1 = *(int *)(temp_v0 + 0x148);
              temp_v9 = *(int *)(temp_v0 + 0x13c);
              temp_v7 = temp_v9 + 3;
              *(int *)(temp_v0 + 0x13c) = temp_v7;
              if (temp_v1 <= temp_v7) {
                temp_v9 = temp_v1 - 1;
              }
              *(int *)(temp_v0 + 0x140) = *(int *)(temp_v0 + 0x140) + 3;
              if (temp_v1 <= temp_v7) {
                *(int *)(temp_v0 + 0x13c) = temp_v9;
              }
              temp_v9 = *(int *)(temp_v0 + 0x148) - 3;
              temp_v1 = *(int *)(temp_v0 + 0x140);
              if (temp_v9 < *(int *)(temp_v0 + 0x140)) {
                temp_v1 = temp_v9;
              }
              *(int *)(temp_v0 + 0x140) = temp_v1;
              if (temp_v1 < 1) {
                temp_v1 = 0;
              }
              *(int *)(temp_v0 + 0x140) = temp_v1;
            }
          }
          else {
            *(int *)(temp_v0 + 0x13c) = *(int *)(temp_v0 + 0x13c) - 3;
            temp_v9 = *(int *)(temp_v0 + 0x13c);
            temp_v1 = *(int *)(temp_v0 + 0x140) - 3;
            *(int *)(temp_v0 + 0x140) = temp_v1;
            if (temp_v9 < 1) {
              temp_v9 = 0;
            }
            if (temp_v1 < 1) {
              temp_v1 = 0;
            }
            *(int *)(temp_v0 + 0x13c) = temp_v9;
            *(int *)(temp_v0 + 0x140) = temp_v1;
          }
        }
      }
    }
  }
  if (*(int *)(temp_v0 + 0x13c) == temp_v5) {
    *(int *)(temp_v0 + 0x158) = *(int *)(temp_v0 + 0x158) + 1;
  }
  else {
    if (*(int *)(temp_v0 + 0x158) >= 3) {
      temp_v1 = FUN_0026efec(temp_v5);
      if ((*(unsigned char *)(temp_v1 + 0x20) & 0x10) != 0) {
        *(unsigned char *)(temp_v1 + 0x20) = *(unsigned char *)(temp_v1 + 0x20) & 0xef;
      }
    }
    temp_v1 = DAT_0043db10;
    temp_v5 = 0;
    do {
      temp_v8 = FUN_0026efec(*(int *)(temp_v1 + 0x140) + temp_v5);
      if (*(short *)(temp_v8 + 0x48) != 0) {
        FUN_0026ef04(*(unsigned int *)(temp_v1 + temp_v5 * 4 + 300),temp_v8);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 3);
    temp_v2 = FUN_0026efec(*(unsigned int *)(temp_v1 + 0x13c));
    *(unsigned int *)(temp_v1 + 0xc) = temp_v2;
    FUN_002bf810(0x100016c);
    temp_v8 = 1;
    *(unsigned int *)(temp_v0 + 0x158) = 0;
  }
  FUN_002975ac(*(unsigned int *)(temp_v0 + 8));
  if (temp_v8 == 0) {
    temp_v9 = *(int *)(temp_v0 + 0x13c);
    temp_v8 = 0;
    temp_v1 = -1;
    *(unsigned int *)(temp_v0 + 0x154) = 0;
    temp_v5 = FUN_002bf4f8(0x39,0x42);
    temp_v17[0] = 0;
    temp_v5 = FUN_002bff6c((int)*(short *)(temp_v5 + 8),(int)*(short *)(temp_v5 + 10),
                         (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1]);
    if (temp_v5 != 0) {
      temp_v3 = *(unsigned int *)(temp_v0 + 0x154) | 1;
    }
    else {
      temp_v3 = *(unsigned int *)(temp_v0 + 0x154) & 0xfffffffe;
    }
    *(unsigned int *)(temp_v0 + 0x154) = temp_v3;
    temp_v5 = FUN_002bf4f8(0x39,0x43);
    temp_v17[0] = 0;
    temp_v5 = FUN_002bff6c((int)*(short *)(temp_v5 + 8),(int)*(short *)(temp_v5 + 10),
                         (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1]);
    if (temp_v5 != 0) {
      *(unsigned int *)(temp_v0 + 0x154) = *(unsigned int *)(temp_v0 + 0x154) | 2;
    }
    else {
      *(unsigned int *)(temp_v0 + 0x154) = *(unsigned int *)(temp_v0 + 0x154) & 0xfffffffd;
    }
    temp_v5 = FUN_002bf4f8(0x39,0x41);
    temp_v17[0] = 0;
    temp_v5 = FUN_002bff6c((int)*(short *)(temp_v5 + 8),(int)*(short *)(temp_v5 + 10),
                         (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1]);
    temp_v7 = 0;
    if (temp_v5 != 0) {
      *(unsigned int *)(temp_v0 + 0x154) = *(unsigned int *)(temp_v0 + 0x154) | 4;
    }
    else {
      *(unsigned int *)(temp_v0 + 0x154) = *(unsigned int *)(temp_v0 + 0x154) & 0xfffffffb;
    }
    do {
      if (temp_v7 < *(int *)(temp_v0 + 0x148)) {
        temp_v5 = FUN_002bf4f8(0x39,temp_v7 + 0x96);
        temp_v17[0] = 0;
        temp_v5 = FUN_002bff6c((int)*(short *)(temp_v5 + 8),(int)*(short *)(temp_v5 + 10),
                             (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1]);
        if (temp_v5 != 0) {
          temp_v1 = temp_v7;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 3);
    if (*(int *)(temp_v0 + 0x148) < 3) {
      *(unsigned int *)(temp_v0 + 0x154) = 0;
      *(unsigned int *)(temp_v0 + 0x150) = 0;
    }
    else {
      temp_v3 = *(unsigned int *)(temp_v0 + 0x154);
      if (temp_v3 != 0) {
        temp_v4 = *(int *)(temp_v0 + 0x150) + 1;
        *(unsigned int *)(temp_v0 + 0x150) = temp_v4;
        if ((temp_v4 == 1) || (((int)temp_v4 >= 0xf && ((temp_v4 & 1) == 0)))) {
          if ((temp_v3 & 1) != 0) {
            temp_v3 = temp_v3 | 8;
            *(unsigned int *)(temp_v0 + 0x154) = temp_v3;
          }
          else if ((temp_v3 & 2) != 0) {
            temp_v3 = temp_v3 | 0x10;
            *(unsigned int *)(temp_v0 + 0x154) = temp_v3;
          }
        }
      }
      else {
        *(unsigned int *)(temp_v0 + 0x150) = 0;
      }
    }
    temp_v5 = FUN_002b8cec(0);
    if (temp_v5 == 0) {
      temp_v5 = FUN_0026ee68(2);
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v0 + 0xd4) = 0;
        *(unsigned char *)(temp_v0 + 0xd8) = 0;
        *(unsigned int *)(temp_v0 + 0xe8) = 0;
        *(unsigned char *)(temp_v0 + 0xec) = 0;
        *(unsigned int *)(temp_v0 + 0xfc) = 0;
        *(unsigned char *)(temp_v0 + 0x100) = 0;
        *(unsigned int *)(temp_v0 + 0x110) = 0;
        *(unsigned char *)(temp_v0 + 0x114) = 0;
        *(unsigned int *)(temp_v0 + 0xac) = 0;
        *(unsigned char *)(temp_v0 + 0xb0) = 0;
        *(unsigned int *)(temp_v0 + 0xc0) = 0;
        *(unsigned char *)(temp_v0 + 0xc4) = 0;
        FUN_0026f800(*(unsigned int *)(temp_v0 + 8),0);
        temp_v8 = 2;
      }
      else if (((((*(unsigned int *)(temp_v0 + 0x154) & 8) == 0) || (temp_v5 = FUN_002c15fc(6), temp_v5 != 0)) ||
               (temp_v5 = FUN_002c15fc(5), temp_v5 != 0)) ||
              ((temp_v5 = FUN_002c15fc(3), temp_v5 != 0 || (temp_v5 = FUN_002c15fc(4), temp_v5 != 0)))) {
        if (((((*(unsigned int *)(temp_v0 + 0x154) & 0x10) == 0) ||
             ((temp_v5 = FUN_002c15fc(6), temp_v5 != 0 || (temp_v5 = FUN_002c15fc(5), temp_v5 != 0)))) ||
            (temp_v5 = FUN_002c15fc(3), temp_v5 != 0)) || (temp_v5 = FUN_002c15fc(4), temp_v5 != 0)) {
          if (((((*(unsigned int *)(temp_v0 + 0x154) & 4) == 0) || (temp_v5 = FUN_002c15fc(6), temp_v5 != 0)) ||
              (temp_v5 = FUN_002c15fc(5), temp_v5 != 0)) ||
             ((temp_v5 = FUN_002c15fc(3), temp_v5 != 0 || (temp_v5 = FUN_002c15fc(4), temp_v5 != 0)))) {
            if (((temp_v1 == -1) || (temp_v5 = FUN_002c15fc(6), temp_v5 != 0)) ||
               ((temp_v5 = FUN_002c15fc(5), temp_v5 != 0 ||
                ((temp_v5 = FUN_002c15fc(3), temp_v5 != 0 || (temp_v5 = FUN_002c15fc(4), temp_v5 != 0))))))
            {
              temp_v1 = FUN_0026ee68(4);
              if (temp_v1 != 0) {
                if (*(char *)(temp_v0 + 0x15d) != '\0') {
                  *(unsigned char *)(temp_v0 + 0x15d) = 0;
                }
                else {
                  *(unsigned char *)(temp_v0 + 0x15d) = 1;
                }
                *(unsigned int *)(temp_v0 + 0xa4) = 0x14a;
                *(unsigned int *)(temp_v0 + 0xac) = 0;
                FUN_002bf810(0x100016d);
              }
            }
            else {
              *(int *)(temp_v0 + 0x13c) = *(int *)(temp_v0 + 0x140) + temp_v1;
            }
          }
          else {
            temp_v5 = *(int *)(temp_v0 + 0x13c);
            temp_v7 = *(int *)(temp_v0 + 0x140);
            FUN_002bffe0(temp_v17 + 1,temp_v17,0);
            temp_v1 = FUN_002bf4f8(0x39,0x41);
            temp_v17[0] = temp_v17[0] - *(short *)(temp_v1 + 10);
            temp_v6 = *(int *)(temp_v0 + 0x148);
            temp_v15 = (float)VectorSignedToFloat(temp_v17[0],(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v1 + 0xc) + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v13 = (int)((temp_v15 / temp_v14) * temp_v12);
            temp_v1 = temp_v17[0];
            if (temp_v6 <= temp_v13) {
              temp_v1 = temp_v6 - 1;
            }
            *(int *)(temp_v0 + 0x13c) = temp_v13;
            if (temp_v6 <= temp_v13) {
              *(int *)(temp_v0 + 0x13c) = temp_v1;
            }
            temp_v1 = *(int *)(temp_v0 + 0x13c) - (temp_v5 - temp_v7);
            *(int *)(temp_v0 + 0x140) = temp_v1;
            if (temp_v1 < 1) {
              temp_v1 = 0;
            }
            *(int *)(temp_v0 + 0x140) = temp_v1;
            if (temp_v6 - 3 < temp_v1) {
              temp_v1 = temp_v6 - 3;
            }
            *(int *)(temp_v0 + 0x140) = temp_v1;
          }
        }
        else {
          temp_v1 = *(int *)(temp_v0 + 0x148);
          temp_v5 = *(int *)(temp_v0 + 0x13c) + 1;
          *(int *)(temp_v0 + 0x13c) = temp_v5;
          if (temp_v5 >= temp_v1) {
            *(int *)(temp_v0 + 0x13c) = temp_v1 - 1;
            if (temp_v1 >= 3) {
              temp_v1 = temp_v1 - 3;
              *(int *)(temp_v0 + 0x140) = temp_v1;
            }
          }
          else {
            temp_v1 = *(int *)(temp_v0 + 0x140);
            if ((temp_v5 < temp_v1) || (temp_v1 + 3 <= temp_v5)) {
              temp_v1 = temp_v1 + 1;
              *(int *)(temp_v0 + 0x140) = temp_v1;
            }
          }
        }
      }
      else {
        temp_v1 = *(int *)(temp_v0 + 0x13c) - 1;
        *(int *)(temp_v0 + 0x13c) = temp_v1;
        if (temp_v1 < 0) {
          *(unsigned int *)(temp_v0 + 0x13c) = 0;
          *(unsigned int *)(temp_v0 + 0x140) = 0;
        }
        else if ((temp_v1 < *(int *)(temp_v0 + 0x140)) || (*(int *)(temp_v0 + 0x140) + 3 <= temp_v1)) {
          *(int *)(temp_v0 + 0x140) = temp_v1;
        }
      }
    }
    if (*(int *)(temp_v0 + 0x13c) != temp_v9) {
      if (*(int *)(temp_v0 + 0x158) >= 3) {
        temp_v1 = FUN_0026efec(temp_v9);
        if ((*(unsigned char *)(temp_v1 + 0x20) & 0x10) != 0) {
          *(unsigned char *)(temp_v1 + 0x20) = *(unsigned char *)(temp_v1 + 0x20) & 0xef;
        }
      }
      temp_v1 = DAT_0043db10;
      temp_v5 = 0;
      do {
        temp_v8 = FUN_0026efec(*(int *)(temp_v1 + 0x140) + temp_v5);
        if (*(short *)(temp_v8 + 0x48) != 0) {
          FUN_0026ef04(*(unsigned int *)(temp_v1 + temp_v5 * 4 + 300),temp_v8);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 3);
      temp_v2 = FUN_0026efec(*(unsigned int *)(temp_v1 + 0x13c));
      *(unsigned int *)(temp_v1 + 0xc) = temp_v2;
      FUN_002bf810(0x100016c);
      temp_v8 = 1;
      *(unsigned int *)(temp_v0 + 0x158) = 0;
    }
    FUN_002975ac(*(unsigned int *)(temp_v0 + 8));
    if (*(char *)(temp_v0 + 0x15d) != '\0') {
      temp_v17[0] = *(int *)(temp_v0 + 0xac);
      temp_v17[1] = 1;
      temp_v1 = FUN_0026f024(temp_v0 + 0xa4,0x14a,0,4);
      if (temp_v1 != 0) {
        *(unsigned char *)(temp_v0 + 0xb0) = 1;
      }
      *(int *)(temp_v0 + 0xac) = *(int *)(temp_v0 + 0xac) + 1;
    }
  }
  if (temp_v8 == 1) {
    *(unsigned int *)(temp_v0 + 0x168) = 0;
  }
  else if (temp_v8 == 2) {
    FUN_002bf810(0x100016e);
    *(unsigned int *)(temp_v0 + 0x144) = 2;
  }
  FUN_002ebfbc(temp_v0 + 0x118);
  temp_v1 = DAT_0043db10;
  if (*(int *)(temp_v0 + 0x144) == 1 && temp_v8 == 0) {
    temp_v8 = *(int *)(temp_v0 + 0x14c);
    temp_v9 = *(int *)(temp_v0 + 0x13c);
    temp_v11 = SBORROW4(temp_v8,temp_v9);
    temp_v5 = temp_v8 - temp_v9;
    temp_v10 = temp_v8 == temp_v9;
    if (!temp_v10) {
      temp_v8 = *(int *)(temp_v0 + 0x168);
      temp_v11 = SBORROW4(temp_v8,2);
      temp_v5 = temp_v8 - 2;
    }
    if (!((temp_v10 || temp_v8 == 2) || temp_v5 < 0 != temp_v11)) {
      FUN_0026f204(*(unsigned int *)(DAT_0043db10 + 0x138),*(unsigned int *)(DAT_0043db10 + 0xc),
                   *(unsigned int *)(DAT_0043db10 + 0x160));
      FUN_0030a84c(*(unsigned int *)(temp_v1 + 0xc),temp_v17);
      temp_v5 = *(int *)(temp_v1 + 8);
      FUN_0026f784();
      if (temp_v5 != 0) {
        FUN_0026ee14(*(unsigned int *)(temp_v1 + 8),temp_v17);
        FUN_0026eda8(*(unsigned int *)(temp_v1 + 8));
        FUN_0026f800(*(unsigned int *)(temp_v1 + 8),0);
        *(unsigned int *)(temp_v1 + 0x14c) = *(unsigned int *)(temp_v1 + 0x13c);
      }
      *(unsigned char *)(temp_v0 + 0x165) = 0;
      FUN_0026f800(*(unsigned int *)(temp_v0 + 8),0);
      *(unsigned int *)(temp_v0 + 0x168) = 0;
      *(unsigned int *)(temp_v0 + 0x144) = 0;
    }
    else {
      *(int *)(temp_v0 + 0x168) = *(int *)(temp_v0 + 0x168) + 1;
    }
  }
  if (*(int *)(temp_v0 + 0x14c) != *(int *)(temp_v0 + 0x13c)) {
    FUN_0026f800(*(unsigned int *)(temp_v0 + 8),0);
    *(unsigned char *)(temp_v0 + 0x165) = 0;
  }
  else if (*(int *)(temp_v0 + 0x144) == 1) {
    FUN_0026f800(*(unsigned int *)(temp_v0 + 8),1);
    *(unsigned char *)(temp_v0 + 0x165) = 1;
  }
  return 0;
}
