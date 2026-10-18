/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020dc1c` (_code @ 0x20dc1c, 0x9bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 15 slot(s), 57 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern int DAT_0057f108; /* 0x57f108 */
extern unsigned int DAT_0057f10c; /* 0x57f10c */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_001641c4. */
extern int FUN_001643a0(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001801a4. */
/* Supplied declaration required: FUN_001834a4. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0020b660. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_0021b274. */
/* Supplied declaration required: FUN_002277d8. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023f604. */
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_0026fc00. */
/* Supplied declaration required: FUN_00284168. */
/* Supplied declaration required: FUN_002a4860. */
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a7324. */
extern int FUN_002c2c4c(int);
extern int FUN_002c2c68(int);
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0031d1d8. */
/* Supplied declaration required: FUN_0031f718. */
extern int FUN_00320af8(int, int);
/* Supplied declaration required: FUN_003343c0. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: FUN_003720a0. */
/* Supplied declaration required: FUN_00372100. */
/* Supplied declaration required: FUN_0037245c. */
/* Supplied declaration required: FUN_0038b688. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: FUN_004803e4. */
/* Supplied declaration required: FUN_0048053c. */
/* Supplied declaration required: FUN_00480fc0. */
/* Supplied declaration required: FUN_00481104. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0020dc1c(void)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 39 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  char *pcVar8;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [84];
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17 [4];
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  
  temp_v4 = DAT_0057f108;
  switch(*(unsigned int *)(DAT_0057f108 + 0x20)) {
  case 0:
    FUN_0026fc00(2,1,0xffffffff,0);
    *(unsigned int *)(temp_v4 + 0x331c) = 0;
    *(unsigned int *)(temp_v4 + 0x3320) = 0;
    *(unsigned int *)(temp_v4 + 0x3324) = 0;
    *(unsigned int *)(temp_v4 + 0x3328) = 0;
    *(unsigned int *)(temp_v4 + 0x332c) = 0;
    *(unsigned int *)(temp_v4 + 0x3330) = 0;
    *(unsigned int *)(temp_v4 + 0x3334) = 0;
    FUN_002e6354(temp_v4 + 0x3354,0xe);
    temp_v5 = 0;
    temp_v2 = 3;
    temp_v6 = 0;
    do {
      temp_v3 = temp_v4 + temp_v5 * 4;
      FUN_0037245c(temp_v6,temp_v3 + 0x3338,temp_v3 + 0x331c);
      temp_v5 = temp_v5 + 1;
      while( 1 ) {
        temp_v6 = temp_v6 + 1;
        if (temp_v6 >= 7) {
          temp_v6 = 0;
          do {
            temp_v3 = FUN_001834a4(0x12,temp_v6 + 0x477);
            temp_v1 = (int)*(short *)(temp_v3 + 8);
            FUN_00284168(temp_v1,(int)(short)(*(short *)(temp_v3 + 10) + (short)DAT_0057f10c),
                         (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
            *(short *)(temp_v4 + temp_v6 * 2 + 0x1b3e) = (short)temp_v1;
            *(char *)(temp_v4 + 0x1b6c) = *(char *)(temp_v4 + 0x1b6c) + '\x01';
            do {
              temp_v6 = temp_v6 + 1;
              if (temp_v6 >= 7) {
                temp_v6 = temp_v4 + 0x32b8;
                temp_v7 = 1;
                temp_v8 = 1;
                FUN_00203b40(temp_v6,temp_v5,temp_v5,1);
                FUN_0031d1d8(temp_v6,temp_v2);
                temp_v5 = FUN_002a4860(temp_v6);
                temp_v6 = FUN_002a4894(temp_v6);
                temp_v6 = FUN_00320af8(temp_v4,temp_v5 + temp_v6);
                if (temp_v6 == 0) {
                  temp_v2 = 0x118;
                }
                else {
                  temp_v2 = 0x117;
                }
                FUN_001681cc(temp_v2);
                FUN_002c85b0(0);
                FUN_002c8538(1);
                FUN_00215bd0();
                FUN_003343f0(1);
                *(unsigned int *)(temp_v4 + 0x20) = 1;
                goto LAB_0020de28;
              }
            } while ((temp_v6 == 1 || temp_v6 == 2) && (temp_v3 = FUN_0018719c(0x410), temp_v3 == 0));
          } while( 1 );
        }
        if ((temp_v6 != 1 && temp_v6 != 2) || (temp_v3 = FUN_0018719c(0x410), temp_v3 != 0)) break;
        temp_v2 = 1;
      }
    } while( 1 );
  case 1:
LAB_0020de28:
    temp_v5 = DAT_0057f108;
    temp_v6 = FUN_002c2c4c(DAT_0057f108 + 0x40);
    FUN_00163aa4(temp_v5 + 0x658);
    if ((*(short *)(temp_v5 + 0x964) != 2) && (*(short *)(temp_v5 + 0x964) != 10)) {
      temp_v3 = 0;
      if (temp_v3 < temp_v6) {
        do {
          if (temp_v3 <= *(int *)(temp_v5 + 0x14) - 1) {
            FUN_00163aa4(temp_v5 + temp_v3 * 0x8c + 0x914);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < temp_v6);
      }
    }
    else {
      temp_v3 = 0;
      while (temp_v6 = temp_v6 - 1, -1 < temp_v6) {
        if (temp_v3 <= *(int *)(temp_v5 + 0x14) - 1) {
          FUN_00163aa4(temp_v5 + temp_v6 * 0x8c + 0x914);
        }
        temp_v3 = temp_v3 + 1;
      }
    }
    if ((*(char *)(temp_v4 + 0x99e) != '\0') && (temp_v6 = FUN_0023b3d0(), temp_v6 != 0)) {
      FUN_002c85b0(0);
      FUN_0031f718(0xffffffff,0);
      temp_v6 = FUN_002a4860();
      temp_v5 = FUN_002a4894(temp_v4 + 0x32b8);
      temp_v6 = *(int *)(temp_v4 + (temp_v5 + temp_v6) * 4 + 0x3338);
      temp_v2 = FUN_001801a4();
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      rt_memcpy_w(&temp_v7,temp_v2,100);
      if (temp_v6 != 0) {
        FUN_0048053c(temp_v6,&temp_v13);
      }
      FUN_003df7c4(&temp_v7);
      FUN_00372100(&temp_v7,0);
      FUN_0038b688(&temp_v13);
      FUN_003343c0(1);
      FUN_0033449c(1);
      FUN_002a7324(1);
      *(unsigned int *)(temp_v4 + 0x20) = 2;
    }
    break;
  case 2:
    temp_v17[0] = 0;
    temp_v5 = FUN_001643a0();
    temp_v2 = FUN_001834a4(0x12,0x461);
    temp_v11 = 1;
    temp_v9 = temp_v17;
    temp_v8 = 0;
    temp_v10 = 0;
    temp_v3 = temp_v4 + 0x32b8;
    temp_v7 = 0;
    temp_v6 = temp_v3;
    FUN_003450d4(temp_v3,temp_v2,temp_v4 + 0x1b3e,0);
    if (temp_v6 != 0) {
      temp_v6 = FUN_002a4860(temp_v3);
      temp_v5 = FUN_002a4894(temp_v3);
      temp_v3 = *(int *)(temp_v4 + (temp_v6 + temp_v5) * 4 + 0x3338);
      temp_v2 = FUN_001801a4();
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 0;
      rt_memcpy_w(temp_v12,temp_v2,100);
      if (temp_v3 != 0) {
        FUN_0048053c(temp_v3,&temp_v18);
      }
      FUN_003df7c4(temp_v12);
      FUN_00372100(temp_v12,0);
      FUN_0038b688(&temp_v18);
      FUN_003343c0(1);
      temp_v4 = FUN_00320af8(temp_v4,temp_v6 + temp_v5);
    }
    else {
      temp_v6 = temp_v3;
      FUN_00228b04(temp_v3,1);
      if (temp_v6 == 0) {
        temp_v6 = 0;
        FUN_001517b4(0,1);
        if ((temp_v6 == 0) && (temp_v5 != 6)) {
          temp_v6 = 1;
          FUN_001517b4();
          if (temp_v6 != 0) {
            FUN_001641b4(0x100020f);
            FUN_0026fc00(2,3,0xffffffff,0);
            FUN_0022e774();
            *(unsigned int *)(temp_v4 + 0x20) = 3;
            return;
          }
          return;
        }
        temp_v6 = FUN_002a4860(temp_v3);
        temp_v5 = FUN_002a4894(temp_v3);
        temp_v3 = FUN_00320af8(temp_v4,temp_v6 + temp_v5);
        if (temp_v3 == 0) {
          return;
        }
        FUN_001641b4(0x100020e);
        FUN_003d2150(0x10000cc);
        temp_v6 = temp_v4 + (temp_v6 + temp_v5) * 4;
        FUN_004803e4(*(unsigned int *)(temp_v6 + 0x3338));
        FUN_001801a4();
        FUN_003df7c4();
        temp_v2 = FUN_001801a4();
        FUN_003720a0(temp_v2,0);
        temp_v6 = *(int *)(temp_v6 + 0x3338);
        temp_v2 = FUN_001801a4();
        temp_v7 = 0;
        temp_v8 = 0;
        temp_v9 = (unsigned char *)0x0;
        temp_v10 = 0;
        rt_memcpy_w(temp_v12,temp_v2,100);
        if (temp_v6 != 0) {
          FUN_0048053c(temp_v6,&temp_v7);
        }
        FUN_003df7c4(temp_v12);
        FUN_00372100(temp_v12,0);
        FUN_0038b688(&temp_v7);
        FUN_003343c0(1);
        temp_v6 = FUN_002a4860(temp_v4 + 0xc0);
        temp_v5 = FUN_002a4894(temp_v4 + 0xc0);
        temp_v0 = *(unsigned short *)(temp_v4 + (temp_v5 + temp_v6) * 2 + 0x21b0);
        FUN_00480fc0(temp_v0,1);
        temp_v6 = FUN_00481104(temp_v0);
        if (temp_v6 == 0) {
          FUN_0023f604(0xb);
          FUN_0026fc00(2,3,0xffffffff,0);
          FUN_0022e774();
          *(unsigned int *)(temp_v4 + 0x20) = 3;
          return;
        }
        return;
      }
      FUN_001641b4(0x100020d);
      temp_v6 = FUN_002a4860(temp_v3);
      temp_v5 = FUN_002a4894(temp_v3);
      temp_v3 = *(int *)(temp_v4 + (temp_v6 + temp_v5) * 4 + 0x3338);
      temp_v2 = FUN_001801a4();
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 0;
      rt_memcpy_w(temp_v12,temp_v2,100);
      if (temp_v3 != 0) {
        FUN_0048053c(temp_v3,&temp_v18);
      }
      FUN_003df7c4(temp_v12);
      FUN_00372100(temp_v12,0);
      FUN_0038b688(&temp_v18);
      FUN_003343c0(1);
      temp_v4 = FUN_00320af8(temp_v4,temp_v6 + temp_v5);
    }
    if (temp_v4 == 0) {
      temp_v2 = 0x118;
    }
    else {
      temp_v2 = 0x117;
    }
    FUN_001681cc(temp_v2);
    return;
  case 3:
    temp_v6 = FUN_002c2c4c(DAT_0057f108 + 0x40);
    FUN_00163aa4(temp_v4 + 0x658);
    if ((*(short *)(temp_v4 + 0x964) != 2) && (*(short *)(temp_v4 + 0x964) != 10)) {
      temp_v5 = 0;
      if (temp_v5 < temp_v6) {
        do {
          if (temp_v5 <= *(int *)(temp_v4 + 0x14) - 1) {
            FUN_00163aa4(temp_v4 + temp_v5 * 0x8c + 0x914);
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v6);
      }
    }
    else {
      temp_v5 = 0;
      while (temp_v6 = temp_v6 - 1, -1 < temp_v6) {
        if (temp_v5 <= *(int *)(temp_v4 + 0x14) - 1) {
          FUN_00163aa4(temp_v4 + temp_v6 * 0x8c + 0x914);
        }
        temp_v5 = temp_v5 + 1;
      }
    }
    if (*(char *)(temp_v4 + 0x99e) != '\0') {
      temp_v6 = FUN_0026c3a0();
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v4 + 0x20) = 4;
      }
      return;
    }
    break;
  case 4:
    temp_v6 = 0;
    pcVar8 = (char *)(DAT_0057f108 + 0x1b6c);
    do {
      temp_v5 = temp_v4 + temp_v6 * 2;
      if (-1 < *(short *)(temp_v5 + 0x1b3e)) {
        FUN_001641c4();
        *(unsigned short *)(temp_v5 + 0x1b3e) = 0xffff;
        *pcVar8 = *pcVar8 - '\x01';
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 7);
    FUN_003343f0(0);
    FUN_0033449c(0);
    temp_v6 = FUN_00481104(*(unsigned int *)(temp_v4 + 0x33b8));
    if (temp_v6 == 0) {
      FUN_0023f604(0xb);
    }
    FUN_002277d8();
    temp_v6 = FUN_002c2c68(temp_v4 + 0xc0);
    if (temp_v6 >= 1) {
      FUN_0021b274(1,0xffffffff,0);
      *(unsigned int *)(temp_v4 + 0x24) = 10;
      FUN_0020b660(4);
      return;
    }
    FUN_0021b274(3,0xffffffff,0);
    *(unsigned int *)(temp_v4 + 0x24) = 6;
    FUN_0020b660(5);
    return;
  }
  return;
}
