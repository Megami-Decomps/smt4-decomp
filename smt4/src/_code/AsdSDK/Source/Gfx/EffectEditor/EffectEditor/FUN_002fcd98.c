/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fcd98` (_code @ 0x2fcd98, 0xfcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int FUN_002e6fa8(); /* 0x2e6fa8 */
extern int FUN_002fcd5c(); /* 0x2fcd5c */
extern unsigned char LAB_002fd4d8; /* 0x2fd4d8 */
extern unsigned char LAB_002fd4e4; /* 0x2fd4e4 */
extern unsigned char LAB_002fd4f0; /* 0x2fd4f0 */
extern unsigned char LAB_002fd508; /* 0x2fd508 */
extern unsigned char LAB_002fd51c; /* 0x2fd51c */
extern unsigned char LAB_002fd9bc; /* 0x2fd9bc */
extern unsigned char LAB_002fd9c4; /* 0x2fd9c4 */
extern unsigned char LAB_002fd9d4; /* 0x2fd9d4 */
extern unsigned char LAB_002fd9d8; /* 0x2fd9d8 */
extern unsigned char LAB_002fd9e8; /* 0x2fd9e8 */
extern unsigned char LAB_002fdd68; /* 0x2fdd68 */
extern unsigned char LAB_002fdd70; /* 0x2fdd70 */
extern unsigned char LAB_002fdd78; /* 0x2fdd78 */
extern unsigned char LAB_002fdd80; /* 0x2fdd80 */
extern unsigned char LAB_002fdd84; /* 0x2fdd84 */
extern unsigned char LAB_002fdd8c; /* 0x2fdd8c */
extern unsigned char LAB_002fdd94; /* 0x2fdd94 */
extern int FUN_00313704(); /* 0x313704 */
extern int FUN_003238d0(); /* 0x3238d0 */
extern int FUN_0032465c(); /* 0x32465c */
extern signed char DAT_0044ea80; /* 0x44ea80 */
extern unsigned char DAT_0044ea81; /* 0x44ea81 */
extern signed char DAT_0044ea86; /* 0x44ea86 */
extern signed char DAT_0044ea87; /* 0x44ea87 */
extern unsigned char DAT_0044ea88; /* 0x44ea88 */
extern unsigned char DAT_0044ea89; /* 0x44ea89 */
extern int DAT_0044ea8c; /* 0x44ea8c */
extern int DAT_0044ea90; /* 0x44ea90 */
extern int DAT_0044ea94; /* 0x44ea94 */
extern int DAT_0044eaa0; /* 0x44eaa0 */
extern unsigned char *DAT_0044eab4; /* 0x44eab4 */
extern unsigned char *DAT_0044eab8; /* 0x44eab8 */
extern unsigned char DAT_0044eafc; /* 0x44eafc */
extern int DAT_0044eb00; /* 0x44eb00 */
extern char s_EXIT_0044eb14[5]; /* 0x44eb14 */
extern unsigned char DAT_0044eb38; /* 0x44eb38 */
extern unsigned char DAT_0044f508; /* 0x44f508 */
extern unsigned char DAT_0044f5b0; /* 0x44f5b0 */
extern unsigned char DAT_0044f778; /* 0x44f778 */
extern unsigned char DAT_0044f7e8; /* 0x44f7e8 */
extern unsigned char DAT_0044f858; /* 0x44f858 */
extern unsigned int DAT_0044f864; /* 0x44f864 */
extern unsigned int DAT_0044f868; /* 0x44f868 */
extern int DAT_0044f86c; /* 0x44f86c */
extern int DAT_0044f870; /* 0x44f870 */
extern unsigned char DAT_0044f890; /* 0x44f890 */
extern unsigned int uRam0044f8a0; /* 0x44f8a0 */
extern char s_LOAD_PARTS_0044fe68[11]; /* 0x44fe68 */
extern char s_NEW__PARTS_0044fe73[11]; /* 0x44fe73 */
extern char s_SAVE_EPL__0044fe7e[10]; /* 0x44fe7e */
extern char s_LOAD_EPL__0044fe88[10]; /* 0x44fe88 */
extern unsigned int DAT_004d8c10; /* 0x4d8c10 */
extern unsigned int DAT_004d8c20; /* 0x4d8c20 */
extern unsigned int uRam004d8c84; /* 0x4d8c84 */
extern unsigned char DAT_004d8ca0; /* 0x4d8ca0 */

/* Supplied declaration required: FUN_001d2560. */
extern unsigned int FUN_0021a468(int);
/* Supplied declaration required: FUN_00246854. */
/* Supplied declaration required: FUN_002468e0. */
/* Supplied declaration required: FUN_00246908. */
/* Supplied declaration required: FUN_0024dd00. */
/* Supplied declaration required: FUN_0024dd48. */
/* Supplied declaration required: FUN_0024dd80. */
extern unsigned char *FUN_0024dd90(void);
/* Supplied declaration required: FUN_0024fc18. */
/* Supplied declaration required: FUN_002501e0. */
/* Supplied declaration required: FUN_00250200. */
/* Supplied declaration required: FUN_002629a8. */
/* Supplied declaration required: FUN_002629f0. */
/* Supplied declaration required: FUN_00281bb0. */
/* Supplied declaration required: FUN_002a353c. */
/* Supplied declaration required: FUN_002a36fc. */
/* Supplied declaration required: FUN_002a3958. */
/* Supplied declaration required: FUN_002a3ab0. */
/* Supplied declaration required: FUN_002a4e98. */
/* Supplied declaration required: FUN_002b8cec. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bfde4. */
extern int FUN_002c15fc(unsigned int);
extern int FUN_002c32a0(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c79c4. */
extern int FUN_002f310c(int);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_002fcd98(void)

{
/* irregular: 11 goto(s); 30 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char *puVar12;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int unaff_r11;
  unsigned int *puVar17;
  unsigned char temp_v13;
  unsigned char temp_v14;
  int temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  unsigned long long temp_v18;
  
  temp_v14 = 0;
  temp_v17 = 0;
  if (DAT_0044eab4 == &DAT_0044f858) {
    DAT_0044f868 = DAT_0044f868 & 0xfffffffe;
  }
  if (DAT_0044ea94 == 0) {
    FUN_001d2560();
  }
  temp_v2 = FUN_00246908();
  temp_v1 = 0;
  if (DAT_0044eab4 == &DAT_0044f858) {
    if (DAT_0044f864 != 0) {
      if (DAT_0044f864 == 0x14) {
        temp_v3 = FUN_002b8cec(6);
        if (temp_v3 == 0) {
          FUN_0024dd80(6);
          temp_v3 = FUN_002b8cec();
          if (temp_v3 == 0) goto LAB_002fcedc;
        }
        if (DAT_0044f864 + DAT_0044ea8c + 1 < temp_v2) {
          temp_v1 = 1;
          temp_v17 = 1;
          DAT_0044ea8c = DAT_0044ea8c + 1;
        }
      }
    }
    else {
      temp_v3 = FUN_002b8cec(5);
      if (temp_v3 == 0) {
        FUN_0024dd80(5);
        temp_v3 = FUN_002b8cec();
        if (temp_v3 == 0) goto LAB_002fcedc;
      }
      if (DAT_0044ea8c != 0) {
        DAT_0044ea8c = DAT_0044ea8c - 1;
        temp_v1 = 1;
        temp_v17 = 1;
      }
    }
LAB_002fcedc:
    temp_v11 = DAT_0044f864 + DAT_0044ea8c;
    if (temp_v11 < temp_v2) {
      temp_v3 = FUN_002468e0(DAT_0044ea94,temp_v11);
      temp_v9 = *(unsigned int *)(temp_v3 + 0x80);
      temp_v4 = FUN_002b8cec(4);
      if (temp_v4 == 0) {
        FUN_0024dd80(4);
        temp_v4 = FUN_002b8cec();
        if (temp_v4 != 0) goto LAB_002fcf3c;
LAB_002fcfbc:
        temp_v4 = FUN_002b8cec(3);
        if (temp_v4 == 0) {
          FUN_0024dd80(3);
          temp_v4 = FUN_002b8cec();
          if (temp_v4 == 0) goto LAB_002fd050;
        }
        temp_v14 = 1;
        temp_v4 = FUN_002c15fc(7);
        if ((temp_v4 != 0) || (temp_v4 = FUN_002c15fc(0x18), temp_v4 != 0)) {
          temp_v9 = temp_v9 + 10;
        }
        else {
          temp_v4 = FUN_002c15fc(8);
          if ((temp_v4 == 0) && (temp_v4 = FUN_002c15fc(0x1c), temp_v4 == 0)) {
            temp_v9 = temp_v9 + 1;
          }
          else {
            temp_v9 = temp_v9 + 100;
          }
        }
      }
      else {
LAB_002fcf3c:
        if (temp_v9 == 0) goto LAB_002fcfbc;
        temp_v14 = 1;
        temp_v4 = FUN_002c15fc(7);
        if ((temp_v4 != 0) || (temp_v4 = FUN_002c15fc(0x18), temp_v4 != 0)) {
          if (temp_v9 >= 10) {
            temp_v9 = temp_v9 - 10;
          }
          else {
            temp_v9 = 0;
          }
        }
        else {
          temp_v4 = FUN_002c15fc(8);
          if ((temp_v4 == 0) && (temp_v4 = FUN_002c15fc(0x1c), temp_v4 == 0)) {
            temp_v9 = temp_v9 - 1;
          }
          else if (temp_v9 >= 100) {
            temp_v9 = temp_v9 - 100;
          }
          else {
            temp_v9 = 0;
          }
        }
      }
LAB_002fd050:
      *(unsigned int *)(temp_v3 + 0x80) = temp_v9;
    }
    temp_v3 = FUN_002bfde4(10);
    if (temp_v3 == 0) {
      FUN_0024dd80(10);
      temp_v3 = FUN_002bfde4();
      if (temp_v3 != 0) {
        if (temp_v11 < temp_v2) {
          temp_v3 = FUN_002468e0(DAT_0044ea94,temp_v11);
          *(unsigned int *)(temp_v3 + 0x84) = *(unsigned int *)(temp_v3 + 0x84) ^ 2;
        }
      }
    }
    else if (temp_v11 < temp_v2) {
      temp_v3 = FUN_002468e0(DAT_0044ea94,temp_v11);
      *(unsigned int *)(temp_v3 + 0x84) = *(unsigned int *)(temp_v3 + 0x84) ^ 2;
    }
  }
  temp_v11 = temp_v2;
  if (temp_v2 >= 0x16) {
    temp_v11 = 0x15;
  }
  temp_v9 = temp_v11 + 10;
  temp_v4 = FUN_002c32a0(0x10000,0x100,0,temp_v9 * 0x2c,0x10,1);
  FUN_002c3944(temp_v4,temp_v9 * 0x2c);
  puVar12 = (unsigned char *)0x80;
  temp_v12 = temp_v4 + temp_v9 * 0x18;
  temp_v3 = temp_v4;
  rt_memcpy_w(&DAT_004d8c20,DAT_0044ea94);
  if (temp_v11 != 0) {
    unaff_r11 = 0x44f4d4;
  }
  temp_v15 = 0;
  temp_v18 = 0;
  temp_v10 = 0;
  if (temp_v10 < temp_v11) {
    do {
      temp_v15 = FUN_002468e0(DAT_0044ea94,DAT_0044ea8c + temp_v10);
      temp_v7 = 0;
      do {
        puVar6 = *(unsigned int **)(unaff_r11 + temp_v7 * 4);
        if (puVar6 != (unsigned int *)0x0) {
          puVar12 = (unsigned char *)*puVar6;
        }
        if (puVar6 != (unsigned int *)0x0 && puVar12 != (unsigned char *)0x0) {
          do {
            if (((*(short *)(puVar12 + 4) != 0x1b) &&
                (*(short *)(puVar12 + 4) == *(short *)(*(int *)(temp_v15 + 0x90) + 4))) &&
               (*(short *)(puVar12 + 8) == *(short *)(*(int *)(temp_v15 + 0x90) + 0xc)))
            goto LAB_002fd1c8;
            puVar6 = puVar6 + 7;
            puVar12 = (unsigned char *)*puVar6;
          } while (puVar12 != (unsigned char *)0x0);
        }
        temp_v7 = (temp_v7 + 1) & 0xffff;
      } while (temp_v7 < 0xd);
      puVar12 = &DAT_0044eb38;
LAB_002fd1c8:
      temp_v7 = *(unsigned int *)(temp_v15 + 0x84) & 2;
      if ((*(unsigned int *)(temp_v15 + 0x98) & 1) != 0) {
        if (*(short *)(puVar12 + 4) != 0x14) {
          FUN_002be624(temp_v12,&LAB_002fd4d8,temp_v15 + 0x9c,*(unsigned int *)(temp_v15 + 0x80));
        }
        else {
          FUN_002be624(temp_v12,&LAB_002fd508,temp_v15 + 0x9c,*(unsigned int *)(temp_v15 + 0x80));
        }
        temp_v15 = temp_v4 + temp_v10 * 0x18;
        *(unsigned char **)(temp_v15 + 8) = &DAT_0044f778;
        if (temp_v7 == 0) {
          temp_v8 = 0xffffff;
        }
        else {
          temp_v8 = 0xfffffe;
        }
        *(unsigned int *)(temp_v15 + 0xc) = temp_v8;
      }
      else {
        if (*(short *)(puVar12 + 4) != 0x14) {
          FUN_002be624(temp_v12,&LAB_002fd4e4,temp_v15 + 0x9c,*(unsigned int *)(temp_v15 + 0x80));
        }
        else {
          FUN_002be624(temp_v12,&LAB_002fd4f0,temp_v15 + 0x9c,*(unsigned int *)(temp_v15 + 0x80));
        }
        if (*(short *)(puVar12 + 4) == 0) {
          temp_v8 = 0x44f7b0;
        }
        else {
          temp_v8 = 0x44f740;
        }
        *(unsigned int *)(temp_v4 + temp_v10 * 0x18 + 8) = temp_v8;
        if (temp_v7 != 0) {
          temp_v8 = 0xfffffe;
        }
        if (temp_v7 == 0) {
          temp_v8 = 0xffffff;
        }
        *(unsigned int *)(temp_v4 + temp_v10 * 0x18 + 0xc) = temp_v8;
      }
      piVar7 = (int *)(temp_v4 + temp_v10 * 0x18);
      puVar12 = (unsigned char *)0x1a;
      *piVar7 = temp_v12;
      *(unsigned char *)(piVar7 + 1) = 0x1a;
      temp_v10 = temp_v10 + 1;
      piVar7[4] = 0;
      temp_v12 = temp_v12 + 0x14;
      temp_v15 = (int)temp_v18;
      piVar7[5] = temp_v15;
    } while (temp_v10 < temp_v11);
  }
  temp_v13 = temp_v11 != 0;
  if (temp_v13) {
    puVar6 = (unsigned int *)(temp_v4 + temp_v10 * 0x18);
    *puVar6 = 0;
    *(unsigned char *)(puVar6 + 1) = 0x19;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar17 = (unsigned int *)(temp_v4 + (temp_v10 + 1) * 0x18);
    puVar6[5] = temp_v15;
    *puVar17 = (unsigned int)&LAB_002fd51c;
    *(unsigned char *)(puVar17 + 1) = 0x1a;
    puVar17[4] = 0;
    puVar17[2] = (unsigned int)&DAT_0044f890;
    puVar17[3] = 0;
    temp_v10 = temp_v10 + 2;
    puVar17[5] = temp_v15;
  }
  puVar6 = (unsigned int *)(temp_v4 + temp_v10 * 0x18);
  *puVar6 = (unsigned int)s_NEW__PARTS_0044fe73;
  *(unsigned char *)(puVar6 + 1) = 0x1c;
  puVar12 = &DAT_0044f7e8;
  puVar6[4] = 0;
  puVar6[2] = (unsigned int)&DAT_0044f7e8;
  puVar6[3] = 0;
  puVar17 = (unsigned int *)(temp_v4 + (temp_v10 + 1) * 0x18);
  puVar6[5] = temp_v15;
  *puVar17 = (unsigned int)s_LOAD_PARTS_0044fe68;
  *(unsigned char *)(puVar17 + 1) = 0x1e;
  puVar17[4] = 0;
  puVar17[2] = (unsigned int)FUN_003238d0;
  puVar17[3] = (unsigned int)FUN_002fcd5c;
  puVar17[5] = temp_v15;
  temp_v12 = temp_v10 + 3;
  *(unsigned char *)(temp_v4 + (temp_v10 + 2) * 0x18 + 4) = 0x18;
  if (temp_v13) {
    puVar6 = (unsigned int *)(temp_v4 + temp_v12 * 0x18);
    temp_v12 = temp_v10 + 4;
    *puVar6 = (unsigned int)s_SAVE_EPL__0044fe7e;
    *(unsigned char *)(puVar6 + 1) = 0x1e;
    puVar6[4] = 0;
    puVar6[5] = temp_v15;
    puVar6[2] = (unsigned int)FUN_002e6fa8;
    puVar6[3] = (unsigned int)FUN_00313704;
  }
  puVar6 = (unsigned int *)(temp_v4 + temp_v12 * 0x18);
  DAT_0044f870 = temp_v12 + 1;
  *puVar6 = (unsigned int)s_LOAD_EPL__0044fe88;
  *(unsigned char *)(puVar6 + 1) = 0x1e;
  puVar6[4] = 0;
  puVar6[5] = temp_v15;
  puVar6[2] = (unsigned int)FUN_0032465c;
  puVar6[3] = (unsigned int)FUN_002fcd5c;
  if (temp_v13) {
    puVar6 = (unsigned int *)(temp_v4 + DAT_0044f870 * 0x18);
    *puVar6 = (unsigned int)&DAT_0044eafc;
    *(unsigned char *)(puVar6 + 1) = 0x1a;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[5] = temp_v15;
    DAT_0044f870 = temp_v12 + 2;
    puVar6[2] = (unsigned int)&DAT_0044f508;
  }
  puVar6 = (unsigned int *)(temp_v4 + DAT_0044f870 * 0x18);
  *puVar6 = (unsigned int)s_EXIT_0044eb14;
  *(unsigned char *)(puVar6 + 1) = 0x1a;
  puVar6[4] = 0;
  puVar6[2] = (unsigned int)&DAT_0044f5b0;
  puVar6[3] = 0;
  DAT_0044f870 = DAT_0044f870 + 1;
  puVar6[5] = temp_v15;
  if (temp_v9 <= DAT_0044f864) {
    DAT_0044f864 = temp_v11 + 9;
  }
  temp_v11 = DAT_0044f864;
  temp_v16 = *(float *)(DAT_0044ea94 + 0x74);
  DAT_0044f86c = temp_v4;
  if (DAT_0044ea89 == 0) {
    DAT_0044eab4 = (unsigned char *)FUN_0024dd90();
  }
  if ((DAT_0044eab4 == &DAT_0044f890) && ((uRam0044f8a0 & 8) != 0)) {
    temp_v14 = 1;
  }
  if (temp_v1) {
    if (DAT_0044f864 == DAT_0044f870 - 1U) {
      DAT_0044f864 = 0;
    }
    else if ((DAT_0044f864 == 0x16) && (DAT_0044ea8c + 0x15U <= temp_v2)) {
      DAT_0044f864 = 0x14;
    }
  }
  temp_v9 = DAT_0044f870 - 1;
  temp_v2 = temp_v9;
  if (temp_v9 == temp_v11) {
    temp_v2 = DAT_0044f864;
  }
  if (temp_v9 == temp_v11 && temp_v2 == 0) {
    DAT_0044ea8c = 0;
  }
  FUN_0024dd48(DAT_0044eab4);
  if (*(float *)(DAT_0044ea94 + 0x74) != temp_v16) {
    temp_v14 = 1;
  }
  if (DAT_0044eab8 != (unsigned char *)0x0) {
    DAT_0044eab4 = DAT_0044eab8;
    DAT_0044eab8 = (unsigned char *)0x0;
  }
  FUN_002c415c(temp_v3);
  if (DAT_0044ea87 == '\0') {
    temp_v8 = 0x800001;
  }
  else {
    DAT_0044ea87 = '\0';
    DAT_0044ea88 = 1;
    DAT_0044ea8c = 0;
    temp_v8 = 0;
    DAT_0044f864 = 0;
  }
  rt_memcpy_w(DAT_0044ea94,&DAT_004d8c20,0x80);
  temp_v3 = FUN_002bfde4(0x19);
  if (temp_v3 != 0) {
    DAT_0044ea89 = DAT_0044ea89 != 1;
  }
  else {
    temp_v3 = FUN_002bfde4(0);
    if (temp_v3 == 0) {
      FUN_0024dd80(0);
      temp_v3 = FUN_002bfde4();
      if (temp_v3 != 0) {
        if (DAT_0044ea89 == 1) {
          DAT_0044ea89 = 2;
        }
      }
    }
    else if (DAT_0044ea89 == 1) {
      DAT_0044ea89 = 2;
    }
  }
  if (DAT_0044ea89 != 1) {
    if (DAT_0044ea89 == 2) {
      FUN_0024dd00(0x1c4,0x17,5,&LAB_002fd9c4);
    }
  }
  else {
    FUN_0024dd00(0x1c4,0x17,5,&LAB_002fd9bc);
  }
  if (DAT_0044eab4 != &DAT_0044f858) {
    temp_v3 = FUN_002bfde4(10);
    if (temp_v3 == 0) {
      FUN_0024dd80(10);
      temp_v3 = FUN_002bfde4();
      if (temp_v3 != 0) {
        DAT_0044ea86 = '\x01';
      }
    }
    else {
      DAT_0044ea86 = '\x01';
    }
  }
  if (DAT_0044ea86 == '\0') {
    if (DAT_0044eab4 == &DAT_0044f858) {
      temp_v2 = DAT_0044f864;
      if (DAT_0044f864 == temp_v11) {
        temp_v2 = temp_v17;
      }
      if (DAT_0044f864 != temp_v11 || temp_v2 != 0) goto LAB_002fd78c;
    }
    temp_v3 = FUN_002bfde4(9);
    if (temp_v3 == 0) {
      FUN_0024dd80(9);
      temp_v3 = FUN_002bfde4();
      if (temp_v3 != 0) {
        temp_v1 = 1;
      }
      else {
        temp_v1 = 0;
      }
    }
    else {
      temp_v1 = 1;
    }
    if (temp_v1 || temp_v14) {
      if (DAT_0044ea90 != 0) {
        FUN_002629f0(DAT_0044ea90,3);
        DAT_0044ea90 = 0;
        if (!temp_v14) goto LAB_002fd8ac;
      }
      temp_v3 = DAT_0044ea94;
      FUN_002a4e98();
      DAT_0044ea90 = temp_v3;
      FUN_002a3958();
      FUN_002a3ab0(DAT_0044ea90,&DAT_004d8c10);
      FUN_002a36fc(DAT_0044ea90);
      FUN_002a353c(DAT_0044ea90,uRam004d8c84);
    }
  }
  else {
LAB_002fd78c:
    if (DAT_0044eaa0 != 0) {
      FUN_002629a8(DAT_0044eaa0,3);
      DAT_0044eaa0 = 0;
    }
    temp_v11 = DAT_0044f864 + DAT_0044ea8c;
    temp_v2 = FUN_00246908(DAT_0044ea94);
    if (temp_v11 < temp_v2) {
      if (DAT_0044ea90 != 0) {
        FUN_002629f0(DAT_0044ea90,3);
        DAT_0044ea90 = 0;
      }
      temp_v3 = FUN_002468e0(DAT_0044ea94,temp_v11);
      temp_v4 = *(int *)(temp_v3 + 0x90);
      FUN_0024fc18();
      DAT_0044eaa0 = temp_v4;
      rt_memcpy_w(&DAT_004d8ca0,temp_v3,0x80);
    }
    DAT_0044ea86 = '\0';
  }
LAB_002fd8ac:
  if (DAT_0044ea80 != '\0') {
    FUN_0024dd00(0xaa,0,6,&LAB_002fd9d4);
  }
  if (DAT_0044ea90 != 0) {
    temp_v5 = *(unsigned int *)(DAT_0044ea90 + 0x84);
    temp_v6 = FUN_0021a468(DAT_0044ea90);
    FUN_0024dd00(0xaa,0xc,6,&LAB_002fd9d8,temp_v6,temp_v5);
    if (DAT_0044ea89 != 0) {
      if (DAT_0044ea89 != 1) {
        temp_v0 = DAT_0044ea89;
        if (DAT_0044ea89 == 2) {
          temp_v0 = DAT_0044ea81;
        }
        if (DAT_0044ea89 == 2 && temp_v0 == 0) {
          FUN_00281bb0(DAT_0044ea90);
        }
      }
      else {
        temp_v3 = FUN_002bfde4(1);
        if (temp_v3 == 0) {
          FUN_0024dd80(1);
          temp_v3 = FUN_002bfde4();
          if (temp_v3 != 0) {
            FUN_00281bb0(DAT_0044ea90);
          }
        }
        else {
          FUN_00281bb0(DAT_0044ea90);
        }
      }
    }
    else {
      FUN_00281bb0(DAT_0044ea90);
    }
    FUN_002c79c4(DAT_0044ea90);
    temp_v3 = FUN_002f310c(DAT_0044ea90);
    if (temp_v3 != 0) {
      DAT_0044eb00 = DAT_0044eb00 + 1;
      if (DAT_0044eb00 < 0x18) {
        FUN_0024dd00(10,0xf0,0,&LAB_002fd9e8,temp_v6,temp_v5);
      }
      else if (DAT_0044eb00 >= 0x30) {
        DAT_0044eb00 = 0;
      }
    }
LAB_002fda48:
    if (DAT_0044ea89 == 2) {
      temp_v0 = DAT_0044ea81 & 8;
      DAT_0044ea81 = DAT_0044ea81 + 1;
      if (temp_v0 != 0) {
        DAT_0044ea81 = 0;
      }
    }
  }
  else {
    if (DAT_0044eaa0 == 0) goto LAB_002fda48;
    FUN_00250200();
    if (DAT_0044ea89 != 0) {
      if ((DAT_0044ea89 != 1) && (DAT_0044ea89 == 2)) {
        if (DAT_0044ea81 == 0) goto LAB_002fda40;
        temp_v0 = DAT_0044ea81 & 8;
        DAT_0044ea81 = DAT_0044ea81 + 1;
        if (temp_v0 != 0) {
          DAT_0044ea81 = 0;
        }
      }
    }
    else {
LAB_002fda40:
      FUN_002501e0(DAT_0044eaa0);
      if (DAT_0044ea89 == 2) {
        temp_v0 = DAT_0044ea81 & 8;
        DAT_0044ea81 = DAT_0044ea81 + 1;
        if (temp_v0 != 0) {
          DAT_0044ea81 = 0;
        }
      }
    }
  }
  temp_v11 = DAT_0044f864 + DAT_0044ea8c;
  temp_v2 = FUN_00246908(DAT_0044ea94);
  if (temp_v11 < temp_v2) {
    temp_v4 = FUN_002468e0(DAT_0044ea94,temp_v11);
    temp_v3 = temp_v4;
    FUN_00246854();
    if (*(short *)(temp_v3 + 4) == 1) {
      temp_v4 = *(int *)(temp_v4 + 0x90);
      temp_v3 = *(int *)(temp_v3 + 0xc);
      temp_v2 = 0;
      do {
        puVar6 = *(unsigned int **)(temp_v2 * 4 + 0x44f4d4);
        if (puVar6 != (unsigned int *)0x0) {
          puVar12 = (unsigned char *)*puVar6;
        }
        if (puVar6 != (unsigned int *)0x0 && puVar12 != (unsigned char *)0x0) {
          do {
            temp_v14 = *(short *)(puVar12 + 4) == *(short *)(temp_v4 + 4);
            if (temp_v14) {
              puVar12 = (unsigned char *)(unsigned int)*(unsigned short *)(puVar12 + 8);
            }
            if (temp_v14 && puVar12 == (unsigned char *)(unsigned int)*(unsigned short *)(temp_v4 + 0xc)) {
              temp_v12 = puVar6[1];
              goto LAB_002fdb30;
            }
            puVar6 = puVar6 + 7;
            puVar12 = (unsigned char *)*puVar6;
          } while (puVar12 != (unsigned char *)0x0);
        }
        temp_v2 = (temp_v2 + 1) & 0xffff;
      } while (temp_v2 < 0xd);
      temp_v12 = 0;
LAB_002fdb30:
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v4 + 0x1c);
      if (!(temp_v2 == 5 || temp_v2 == 6)) {
        temp_v5 = 0;
      }
      else {
        *(unsigned int *)(temp_v3 + 0xc0) = 0;
        temp_v2 = 1;
        temp_v5 = 0xffffffff;
        *(unsigned int *)(temp_v3 + 0xc4) = 1;
      }
      if (temp_v12 != 0) {
        temp_v2 = *(unsigned int *)(temp_v12 + 0x18);
      }
      if (temp_v12 != 0 && temp_v2 != 0) {
        temp_v3 = 0;
        do {
          temp_v4 = *(int *)(temp_v12 + 0x14);
          if ((*(char *)(temp_v4 + temp_v3 * 0x18 + 4) == '\x1a') &&
             (*(int *)(temp_v4 + temp_v3 * 0x18 + 0x14) == -0x380ee000)) {
            *(unsigned int *)(temp_v4 + temp_v3 * 0x18 + 0x10) = temp_v5;
            *(unsigned int *)(*(int *)(temp_v12 + 0x14) + temp_v3 * 0x18 + 0xc) = temp_v5;
          }
          temp_v2 = temp_v2 - 1;
          temp_v3 = temp_v3 + 1;
        } while (temp_v2 != 0);
      }
    }
  }
  if (DAT_0044ea90 == 0) {
    temp_v11 = DAT_0044f864 + DAT_0044ea8c;
    temp_v2 = FUN_00246908(DAT_0044ea94);
    if (temp_v11 < temp_v2) {
      puVar17 = (unsigned int *)FUN_002468e0(DAT_0044ea94,temp_v11);
      puVar6 = puVar17;
      FUN_00246854();
      switch(*(unsigned short *)(puVar17[0x24] + 0x1c)) {
      case 0:
      case 4:
        FUN_0024dd00(0xf0,0,0,&LAB_002fdd80,*puVar6);
        break;
      case 1:
        FUN_0024dd00(0xf0,0,0,&LAB_002fdd68,*puVar6);
        break;
      case 2:
        FUN_0024dd00(0xf0,0,0,&LAB_002fdd70,*puVar6);
        break;
      case 3:
        FUN_0024dd00(0xf0,0,0,&LAB_002fdd78,*puVar6);
        break;
      case 5:
        FUN_0024dd00(0xf0,0,0,&LAB_002fdd84,*puVar6);
        break;
      case 6:
        FUN_0024dd00(0xf0,0,0,&LAB_002fdd8c,*puVar6);
        break;
      case 7:
        FUN_0024dd00(0xf0,0,0,&LAB_002fdd94,*puVar6);
      }
    }
  }
  return temp_v8;
}
