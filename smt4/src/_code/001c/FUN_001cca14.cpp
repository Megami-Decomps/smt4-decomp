/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cca14` (_code @ 0x1cca14, 0x1494 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00204ed0(...);
int FUN_00288e68(...);
int FUN_0029a268(...);
int FUN_0029a284(...);
int FUN_002b6dd8(...);
int FUN_002b75ec(...);
int FUN_002b9024(void);
int FUN_002be624(...);

int FUN_00187114(int, int);
int FUN_00290994(...);
int FUN_0029a17c(...);
int FUN_0029ab54(...);
int FUN_0029efa8(...);
int FUN_0029efc0(...);
int FUN_002b6758(...);
int FUN_002bdf94(...);
int FUN_002be370(...);
int FUN_002be5a4(...);
int FUN_002be650(...);
int FUN_002beda4(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int FUN_0032bc00(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern unsigned char LAB_001cd3d0; /* 0x1cd3d0 */
extern unsigned char LAB_001cd808; /* 0x1cd808 */
extern unsigned char LAB_001cd814; /* 0x1cd814 */
extern unsigned char LAB_001cdebc; /* 0x1cdebc */
extern int DAT_0044e190; /* 0x44e190 */
extern int DAT_0044ea00; /* 0x44ea00 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00187114. */
/* Supplied declaration required: FUN_00204ed0. */
extern unsigned long long FUN_0026aa78(void);
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: FUN_00290994. */
/* Supplied declaration required: FUN_0029a17c. */
/* Supplied declaration required: FUN_0029a268. */
/* Supplied declaration required: FUN_0029a284. */
/* Supplied declaration required: FUN_0029ab54. */
extern int FUN_0029ac94(void);
extern unsigned short *FUN_0029acb0(void);
extern int FUN_0029e908(int);
extern int FUN_0029e9cc(unsigned short);
extern int FUN_0029ee54(int);
/* Supplied declaration required: FUN_0029efa8. */
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002b75ec. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002be650. */
extern int FUN_002bed98(int);
/* Supplied declaration required: FUN_002beda4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c09d0(unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0032bc00. */


unsigned int FUN_001cca14(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 26 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char **ppuVar8;
  unsigned short *puVar9;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  int temp_v12;
  int *piVar16;
  int temp_v13;
  unsigned char *puVar18;
  unsigned int temp_v14;
  unsigned int in_fpscr;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  unsigned char *temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  int iStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int temp_v24;
  int temp_v25;
  
  temp_v12 = DAT_0044e190;
  temp_v1 = FUN_002beda4(DAT_0044e190 + 0x28);
  temp_v2 = FUN_002bed98(temp_v12 + 0x28);
  temp_v10 = DAT_0044e190;
  temp_v13 = *(int *)(temp_v12 + 0x400);
  if (temp_v13 == 1) {
    temp_v13 = *(int *)(temp_v12 + 0x408);
  }
  else if (temp_v13 == 2) {
    temp_v13 = *(int *)(temp_v12 + 0x404);
  }
  switch(temp_v13) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    FUN_00187114(temp_v1,temp_v2);
    break;
  case 0x10:
    puVar18 = (unsigned char *)0x0;
    temp_v19 = DAT_0044e190;
    temp_v10 = FUN_0029efa8(DAT_0044e190 + 0x564);
    temp_v18 = 0;
    temp_v17 = (unsigned char *)0x0;
    FUN_002bf380(2,0x1a,0xc,temp_v1,temp_v2,0xb3);
    FUN_002bf288(2,0x1a,0x52b,temp_v1,temp_v2,0xb5);
    FUN_002bf288(2,0x1a,0x52c,temp_v1,temp_v2,0xb5);
    FUN_0029ab54(temp_v1,temp_v2);
    temp_v12 = temp_v19;
    temp_v13 = 0;
LAB_001ccb9c:
    do {
      temp_v8 = 0;
      if (temp_v13 == 0) {
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v12 + 0x554);
        puVar18 = (unsigned char *)0x3d;
      }
      else if (temp_v13 != 1) {
        if (temp_v13 != 2) {
          if (temp_v13 == 3) {
            puVar18 = (unsigned char *)0x12d;
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v12 + 0x55a);
          }
          else if (temp_v13 == 4) {
            puVar18 = (unsigned char *)0x1a5;
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v12 + 0x55c);
          }
          else if (temp_v13 == 5) {
            puVar18 = (unsigned char *)0x21d;
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v12 + 0x55e);
          }
          else if (temp_v13 == 6) {
            puVar18 = (unsigned char *)0x295;
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v12 + 0x560);
          }
        }
        else {
          puVar18 = (unsigned char *)0x30d;
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v12 + 0x558);
          temp_v7 = FUN_002c09d0(0x410);
          if (temp_v7 == 0) {
            temp_v13 = 3;
            goto LAB_001ccb9c;
          }
        }
      }
      else {
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v12 + 0x556);
        puVar18 = (unsigned char *)0xb5;
        temp_v7 = FUN_002c09d0(0x410);
        if (temp_v7 == 0) {
          temp_v13 = 2;
          goto LAB_001ccb9c;
        }
      }
      temp_v7 = FUN_002bf4f8(0x1a,temp_v13 + 0x466);
      FUN_002bf380(2,0x1a,0xd,*(short *)(temp_v7 + 8) + temp_v1,*(short *)(temp_v7 + 10) + temp_v2,0xb3);
      if (temp_v13 == temp_v10) {
        temp_v17 = puVar18;
        temp_v18 = temp_v8;
      }
      temp_v6 = FUN_002bf4f8(0x1a,0x464);
      FUN_002be370((short)(int)puVar18,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v7 + 8) + temp_v1,
                   (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v6 + 10) + temp_v2,0xb5,0);
      if (temp_v8 != 0) {
        temp_v6 = FUN_002bf4f8(0x1a,0x465);
        FUN_002be650(temp_v8,0);
        if (temp_v8 != 0) {
          VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v6 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v6 + 8) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,0xff,temp_v8,(int)*(short *)(temp_v7 + 8));
        }
      }
      temp_v13 = temp_v13 + 1;
    } while (temp_v13 < 7);
    if ((*(int *)(temp_v19 + 0x400) == 0x10) &&
       ((temp_v12 = FUN_002c09d0(0x410), temp_v12 != 0 || (temp_v10 != 1 && temp_v10 != 2)))) {
      temp_v10 = FUN_002bf4f8(0x1a,temp_v10 + 0x477);
      FUN_002bf538();
      FUN_002bf288(2,0x1a,0x46d,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xbf)
      ;
      FUN_002bf288(2,0x1a,0x46e,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xbf)
      ;
      FUN_002bf288(2,0x1a,0x46f,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xbf)
      ;
      FUN_002bf538();
      FUN_002bf288(2,0x1a,0x470,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xc4)
      ;
      FUN_002bf288(2,0x1a,0x471,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xc4)
      ;
      FUN_002bf288(2,0x1a,0x474,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xc4)
      ;
      temp_v13 = FUN_002bf4f8(0x1a,0x471);
      temp_v12 = DAT_0044ea00;
      piVar16 = (int *)(DAT_0044ea00 + 0x130c);
      temp_v7 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = 3;
      if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v7 != 3) {
        (**(romwright_code **)(temp_v12 + 0x1328))();
        *(unsigned char *)(temp_v12 + 0x1324) = 0;
      }
      FUN_0029a17c((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v13 + 8) + temp_v1,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v2,
                   (int)**(short **)(temp_v13 + 0xc),(int)(*(short **)(temp_v13 + 0xc))[1],1);
      temp_v12 = FUN_002bed98(temp_v19 + 600);
      temp_v0 = *(short *)(temp_v10 + 10);
      temp_v13 = FUN_002beda4(temp_v19 + 600);
      FUN_002bf288(2,0x1a,0x473,temp_v13 + temp_v1 + (int)*(short *)(temp_v10 + 8),
                   temp_v12 + temp_v2 + (int)temp_v0,0xc9);
      temp_v12 = DAT_0044ea00;
      piVar16 = (int *)(DAT_0044ea00 + 0x130c);
      temp_v13 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = 0;
      if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v13 != 0) {
        (**(romwright_code **)(temp_v12 + 0x1328))(0);
        *(unsigned char *)(temp_v12 + 0x1324) = 0;
      }
      if (0 < (int)temp_v18) {
        temp_v12 = FUN_002bf4f8(0x1a,0x476);
        temp_v8 = temp_v18;
        FUN_002be650(temp_v18,0);
        if (temp_v8 != 0) {
          VectorSignedToFloat((int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(3,0xffffffff,temp_v8,(int)*(short *)(temp_v12 + 10));
        }
      }
      temp_v12 = FUN_002bf4f8(0x1a,0x475);
      FUN_002be370((int)(short)(int)temp_v17,
                   (int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v1,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xc9,0);
    }
    break;
  case 0x11:
  case 0x12:
    FUN_0032bc00(temp_v1,temp_v2);
    break;
  case 0x13:
  case 0x14:
    temp_v12 = DAT_0044e190 + 0x223c;
    temp_v24 = temp_v12;
    temp_v13 = FUN_0029efc0();
    temp_v7 = FUN_0029efa8(temp_v12);
    temp_v12 = FUN_0029e908(temp_v12);
    FUN_002bf380(2,0x1a,0x10,temp_v1,temp_v2,0xb3);
    FUN_0029ab54(temp_v1,temp_v2);
    temp_v25 = temp_v10 + 0x2200;
    if (*(short *)(temp_v10 + 0x2232) < 1) {
      FUN_002bf538();
    }
    temp_v19 = temp_v10 + 0x400;
    temp_v20 = temp_v12 + (temp_v13 + temp_v7) * 4;
    temp_v12 = 0;
    do {
      temp_v13 = 0;
      do {
        temp_v7 = FUN_0029efc0(temp_v24);
        temp_v7 = temp_v13 + (temp_v7 + temp_v12) * 4;
        if (*(short *)(temp_v25 + 0x30) <= temp_v7) break;
        temp_v3 = FUN_002bf4f8(0x1a,temp_v13 + temp_v12 * 4 + 0x4ae);
        temp_v5 = DAT_0044ea00;
        temp_v4 = *(int *)(temp_v10 + 0x400);
        temp_v6 = temp_v4;
        if (temp_v4 == 0x13) {
          temp_v6 = temp_v20;
        }
        if (!(temp_v4 != 0x13 || temp_v6 != temp_v7)) {
          FUN_002bf288(2,0x1a,0x4a3,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,
                       0xb5);
        }
        else {
          temp_v6 = FUN_002c5da8(6,1,0);
          piVar16 = (int *)(temp_v5 + 0x12ac);
          temp_v4 = piVar16[*piVar16 + 2];
          piVar16[*piVar16 + 2] = temp_v6;
          if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v4 != temp_v6) {
            (**(romwright_code **)(temp_v5 + 0x12c8))();
            *(unsigned char *)(temp_v5 + 0x12c4) = 0;
          }
          FUN_002bf288(2,0x1a,0x4a2,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,
                       0xb5);
          temp_v6 = DAT_0044ea00;
          temp_v5 = FUN_002c5da8(6,7,0);
          piVar16 = (int *)(temp_v6 + 0x12ac);
          temp_v4 = piVar16[*piVar16 + 2];
          piVar16[*piVar16 + 2] = temp_v5;
          if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v4 != temp_v5) {
            (**(romwright_code **)(temp_v6 + 0x12c8))();
            *(unsigned char *)(temp_v6 + 0x12c4) = 0;
          }
        }
        temp_v7 = temp_v10 + temp_v7 * 4;
        if (*(short *)(temp_v7 + 0xe32) != 0) {
          temp_v6 = FUN_002bf4f8(0x1a,0x4a4);
          FUN_002b6758((int)*(short *)(temp_v7 + 0xe30),
                       (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + temp_v1,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v6 + 10) + temp_v2,0xba,0);
          FUN_002bf288(2,0x1a,0x4a6,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,
                       0xba);
          temp_v6 = FUN_002bf4f8(0x1a,0x4ad);
          temp_v18 = (unsigned int)*(unsigned short *)(temp_v7 + 0xe32);
          temp_v17 = &LAB_001cd3d0;
          FUN_002bdf94(2,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v6 + 10) + temp_v2,1,6,0xba);
        }
        else {
          FUN_002bf288(2,0x1a,0x4a4,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,
                       0xba);
          FUN_002bf288(2,0x1a,0x4a6,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,
                       0xba);
          temp_v7 = FUN_002bf4f8(0x1a,0x4ad);
          temp_v17 = &LAB_001cd808;
          FUN_002bdf94(2,(int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v7 + 10) + temp_v2,1,6,0xba);
        }
        temp_v13 = temp_v13 + 1;
      } while (temp_v13 < 4);
      temp_v12 = temp_v12 + 1;
    } while (temp_v12 < 9);
    FUN_002bf538();
    if ((*(int *)(temp_v10 + 0x400) == 0x13) && (0 < *(short *)(temp_v25 + 0x32))) {
      temp_v12 = FUN_0029e908(temp_v24);
      temp_v10 = FUN_0029efa8(temp_v24);
      temp_v10 = FUN_002bf4f8(0x1a,temp_v12 + temp_v10 * 4 + 0x4ae);
      FUN_002bf538();
      temp_v12 = DAT_0044ea00;
      temp_v13 = FUN_002c5da8(6,1,0);
      piVar16 = (int *)(temp_v12 + 0x12ac);
      temp_v7 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v13;
      if (*(char *)(temp_v12 + 0x12c4) != '\0' || temp_v7 != temp_v13) {
        (**(romwright_code **)(temp_v12 + 0x12c8))();
        *(unsigned char *)(temp_v12 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x1a,0x4a7,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xc9)
      ;
      temp_v12 = DAT_0044ea00;
      temp_v10 = FUN_002c5da8(6,7,0);
      piVar16 = (int *)(temp_v12 + 0x12ac);
      temp_v13 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v10;
      if (*(char *)(temp_v12 + 0x12c4) != '\0' || temp_v13 != temp_v10) {
        (**(romwright_code **)(temp_v12 + 0x12c8))();
        *(unsigned char *)(temp_v12 + 0x12c4) = 0;
      }
      FUN_002bf538();
    }
    iStack_9c = (int)*(short *)(temp_v19 + 0x78);
    temp_v23 = (int)*(short *)(temp_v19 + 0x76);
    uStack_98 = 0xc4;
    uStack_94 = 0;
    temp_v20 = 0x401;
    temp_v17 = (unsigned char *)0x406;
    temp_v22 = (int)*(short *)(temp_v19 + 0x74);
    temp_v21 = 0x403;
    temp_v18 = 0x400;
    temp_v19 = 0x402;
    FUN_00290994(temp_v24,temp_v1,temp_v2,0x1a,0x404,0x405);
    if (*(short *)(temp_v25 + 0x32) < 1) {
      FUN_002bf380(2,0x1a,0x1b,temp_v1,temp_v2,0xdd);
      temp_v12 = FUN_002bf4f8(0x1a,0x544);
      FUN_002be624(&temp_v17,&LAB_001cd814);
      ppuVar8 = &temp_v17;
      FUN_002b6dd8(ppuVar8,2);
      VectorSignedToFloat(temp_v1 + (int)*(short *)(temp_v12 + 8) +
                                  ((int)**(short **)(temp_v12 + 0xc) - (int)ppuVar8) / 2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v12 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,0xffffffff,&temp_v17);
    }
    break;
  case 0x15:
    FUN_002bf380(2,0x1a,0xf,temp_v1,temp_v2,0xb3);
    FUN_002bf380(2,0x1a,0xe,temp_v1,temp_v2,0xb3);
    FUN_0029ab54(temp_v1,temp_v2);
    temp_v8 = (unsigned int)*(unsigned short *)(temp_v10 + 0x47e);
    FUN_002b9024();
    if (temp_v8 != 0) {
      if (*(char *)(temp_v8 + 5) == '\x01') {
        FUN_002bf288(2,0x1a,0x483,temp_v1,temp_v2,0xbf);
      }
      if (*(char *)(temp_v8 + 5) == '\x05') {
        FUN_002bf288(2,0x1a,0x484,temp_v1,temp_v2,0xbf);
      }
      if (*(char *)(temp_v8 + 5) == '\x04') {
        FUN_002bf288(2,0x1a,0x485,temp_v1,temp_v2,0xbf);
      }
    }
    temp_v11 = 0;
    temp_v12 = FUN_0029ac94();
    if (temp_v12 != 0xd) {
      if (temp_v12 == 6) {
        puVar9 = (unsigned short *)FUN_0029acb0();
        temp_v12 = FUN_0029e9cc(*puVar9);
        if (temp_v12 == 0) {
          temp_v11 = 1;
        }
      }
    }
    else {
      temp_v11 = 1;
    }
    if ((*(short *)(temp_v10 + 0x47e) < 0) || (temp_v11)) {
      FUN_002bf288(2,0x1a,0x545,temp_v1,temp_v2,0xbf);
    }
    else {
      temp_v12 = 0;
      do {
        temp_v13 = FUN_002bf4f8(0x1a,temp_v12 + 0x48d);
        temp_v7 = FUN_0029efc0(temp_v10 + 0x22a8);
        FUN_002b75ec(*(unsigned int *)(temp_v10 + 0x22a0),*(short *)(temp_v13 + 8) + temp_v1,
                     *(short *)(temp_v13 + 10) + temp_v2,0xb5,6,temp_v7 + temp_v12);
        temp_v12 = temp_v12 + 1;
      } while (temp_v12 < 8);
      iStack_9c = (int)*(short *)(temp_v10 + 0x478);
      temp_v23 = (int)*(short *)(temp_v10 + 0x476);
      uStack_98 = 0xc4;
      uStack_94 = 0;
      temp_v22 = (int)*(short *)(temp_v10 + 0x474);
      temp_v19 = 0x488;
      temp_v21 = 0x489;
      temp_v20 = 0x487;
      temp_v18 = 0x486;
      temp_v17 = (unsigned char *)0x48c;
      FUN_00290994(temp_v10 + 0x22a8,temp_v1,temp_v2,0x1a,0x48a,0x48b);
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    FUN_002bf380(2,0x1a,4,temp_v1,temp_v2,0xb3);
    FUN_002bf380(2,0x1a,0x17,temp_v1,temp_v2,0xb5);
    FUN_002bf380(2,0x1a,0x18,temp_v1,temp_v2,0xb5);
    temp_v19 = temp_v10 + 0x230c;
    temp_v12 = 0;
    do {
      temp_v15 = FUN_0026aa78();
      if (temp_v12 >= (int)temp_v15) {
        FUN_002bf288(2,0x1a,temp_v12 + 0x54b,temp_v1,temp_v2,0xb5);
      }
      else {
        if (temp_v13 != 0x19) {
          temp_v15 = temp_v15 & 0xffffffff00000000;
          temp_v14 = 0xff;
          if (temp_v13 != 0x17) {
            if (temp_v13 == 0x1a) {
              temp_v16 = FUN_0029efa8(temp_v19);
              temp_v15 = temp_v16 & 0xffffffff00000000;
              if ((int)temp_v16 == temp_v12) {
                if (*(int *)(temp_v10 + 0x40c) < 9) {
                  temp_v15 = romwright_piece_4_4(0xffffffd8,*(int *)(temp_v10 + 0x40c) * -0x28);
                }
                else {
                  temp_v15 = FUN_002beda4(temp_v10 + 0x2e4);
                }
                temp_v14 = 0x8400ff;
              }
            }
          }
          else {
            temp_v16 = FUN_0029efa8(temp_v19);
            temp_v15 = temp_v16 & 0xffffffff00000000;
            if ((int)temp_v16 == temp_v12) {
              if (*(int *)(temp_v10 + 0x40c) < 9) {
                temp_v15 = romwright_piece_4_4(0xffffffd8,*(int *)(temp_v10 + 0x40c) * -0x28);
              }
              else {
                temp_v15 = FUN_002beda4(temp_v10 + 0x2e4);
                temp_v14 = 0x8400ff;
              }
            }
          }
        }
        else {
          temp_v15 = FUN_0029efa8(temp_v19);
          if ((int)temp_v15 == temp_v12) goto LAB_001cdb08;
          temp_v15 = temp_v15 & 0xffffffff00000000;
          temp_v14 = 0xff;
        }
        temp_v9 = (unsigned int)*(unsigned short *)(temp_v10 + temp_v12 * 2 + 0x2370);
        temp_v8 = 0;
        if (temp_v9 != 0) {
          FUN_00288e68(temp_v9,(int)(temp_v15 >> 0x20),0);
          temp_v8 = temp_v9;
        }
        FUN_00204ed0(temp_v1 + (int)temp_v15,temp_v2,temp_v8,temp_v12 + 0x414,temp_v14);
      }
LAB_001cdb08:
      temp_v12 = temp_v12 + 1;
    } while (temp_v12 < 8);
    if (!(temp_v13 == 0x18 || temp_v13 == 0x1b)) {
      if ((temp_v13 != 0x16 && temp_v13 != 0x17) && temp_v13 != 0x1a) {
        temp_v12 = FUN_0029efa8(temp_v19);
        temp_v7 = FUN_0029ee54(temp_v19);
        if (temp_v12 == temp_v7 - 1) goto LAB_001cdd1c;
      }
      temp_v8 = (unsigned int)*(unsigned short *)(temp_v10 + 0x2380);
      FUN_00288e68(temp_v8);
      FUN_002bf288(2,0x1a,0x4e3,temp_v1,temp_v2,0xb3);
      FUN_002bf288(2,0x1a,0x4e4,temp_v1,temp_v2,0xb3);
      FUN_002bf288(2,0x1a,0x4e5,temp_v1,temp_v2,0xb3);
      temp_v12 = 0;
      if (temp_v13 == 0x17 || temp_v13 == 0x1a) {
        temp_v12 = *(int *)(temp_v10 + 0x40c) * -0x28;
      }
      FUN_00204ed0(temp_v12 + temp_v1,temp_v2,temp_v8,0x54a,0xff);
    }
    else {
      FUN_002bf288(2,0x1a,0x4e3,temp_v1,temp_v2,0xb3);
      FUN_002bf288(2,0x1a,0x4e4,temp_v1,temp_v2,0xb3);
      FUN_002bf288(2,0x1a,0x4e5,temp_v1,temp_v2,0xb3);
      temp_v12 = FUN_002bf4f8(0x1a,0x4e6);
      FUN_002be624(&temp_v21,&LAB_001cdebc);
      VectorSignedToFloat(*(short *)(temp_v12 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v12 + 8) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,0x323232ff,&temp_v21);
      if (temp_v13 == 0x18 || temp_v13 == 0x1b) {
        temp_v12 = FUN_0029efa8(temp_v19);
        temp_v9 = (unsigned int)*(unsigned short *)(temp_v10 + temp_v12 * 2 + 0x2370);
        temp_v8 = 0;
        if (temp_v9 != 0) {
          FUN_00288e68();
          temp_v8 = temp_v9;
        }
        temp_v17 = (unsigned char *)0x1;
        temp_v18 = 0;
        FUN_0029a284(temp_v1,temp_v2,temp_v8 & 0xffff,temp_v12 + 0x42c,0,0);
      }
    }
LAB_001cdd1c:
    temp_v12 = DAT_0044ea00;
    if (temp_v13 != 0x19) {
      if (temp_v13 == 0x17 || temp_v13 == 0x1a) {
        temp_v1 = FUN_002c5da8(6,1,0);
        piVar16 = (int *)(temp_v12 + 0x12ac);
        temp_v2 = piVar16[*piVar16 + 2];
        piVar16[*piVar16 + 2] = temp_v1;
        if (*(char *)(temp_v12 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
          (**(romwright_code **)(temp_v12 + 0x12c8))();
          *(unsigned char *)(temp_v12 + 0x12c4) = 0;
        }
        FUN_0029a268(temp_v10 + 0x370);
        temp_v12 = DAT_0044ea00;
        temp_v10 = FUN_002c5da8(6,7,0);
        piVar16 = (int *)(temp_v12 + 0x12ac);
        temp_v1 = piVar16[*piVar16 + 2];
        piVar16[*piVar16 + 2] = temp_v10;
        if (*(char *)(temp_v12 + 0x12c4) != '\0' || temp_v1 != temp_v10) {
          (**(romwright_code **)(temp_v12 + 0x12c8))();
          *(unsigned char *)(temp_v12 + 0x12c4) = 0;
        }
      }
    }
    else {
      temp_v12 = FUN_0029efa8(temp_v19);
      temp_v13 = FUN_0029ee54(temp_v19);
      if (temp_v13 - 1 == temp_v12) {
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v10 + 0x2380);
        FUN_00288e68(temp_v8);
        temp_v17 = (unsigned char *)0x1;
        temp_v18 = 0;
        FUN_0029a284(temp_v1,temp_v2,temp_v8,0x435,0,0);
      }
      else {
        temp_v9 = (unsigned int)*(unsigned short *)(temp_v10 + temp_v12 * 2 + 0x2370);
        temp_v8 = 0;
        if (temp_v9 != 0) {
          FUN_00288e68();
          temp_v8 = temp_v9;
        }
        temp_v17 = (unsigned char *)0x1;
        temp_v18 = 0;
        FUN_0029a284(temp_v1,temp_v2,temp_v8 & 0xffff,temp_v12 + 0x42c,0,0);
      }
    }
  }
  return 0;
}

} /* extern "C" */
