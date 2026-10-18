/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00216d68` (_code @ 0x216d68, 0x7a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 38 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned short spAA; /* 0xaa: local_aa */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_1_stack;

extern unsigned char LAB_00217518; /* 0x217518 */
extern unsigned char LAB_002c6dd8; /* 0x2c6dd8 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_001cdffc. */
/* Supplied declaration required: FUN_001ddab4. */
/* Supplied declaration required: FUN_00215a44. */
/* Supplied declaration required: FUN_0026abe0. */
extern int FUN_0026ac34(unsigned short, unsigned char, int, short *, unsigned char);
/* Supplied declaration required: FUN_0028c194. */
/* Supplied declaration required: FUN_002956c0. */
/* Supplied declaration required: FUN_00295760. */
/* Supplied declaration required: FUN_00295780. */
/* Supplied declaration required: FUN_00295798. */
extern int FUN_002958a0(void);
extern int FUN_002958bc(void);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00296a18. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029bfec. */
/* Supplied declaration required: FUN_0029c178. */
/* Supplied declaration required: FUN_0029c6c4. */
/* Supplied declaration required: FUN_0029c950. */
extern int FUN_0029cb94(int);
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029db94. */
extern int FUN_0029ed08(void);
extern int FUN_002a0f88(void);
/* Supplied declaration required: FUN_002a755c. */
extern int FUN_002a89e4(int);
/* Supplied declaration required: FUN_002b66ec. */
/* Supplied declaration required: FUN_002b7f0a. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b91c4. */
/* Supplied declaration required: FUN_002b9364. */
extern unsigned int FUN_002bd020(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002bf9f0. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
extern unsigned int FUN_002c5e2c(unsigned char *);
/* Supplied declaration required: FUN_0033bdc8. */
extern unsigned int FUN_0033c2f4(int);


void FUN_00216d68(int param_1)

{
/* irregular: 1 goto(s); 32 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  short *psVar11;
  short temp_v10;
  int *piVar13;
  int temp_v11;
  char *pcVar15;
  unsigned int *puVar16;
  int *piVar17;
  char temp_v12;
  int temp_v13;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int temp_v14;
  short temp_v15 [8];
  unsigned char temp_v16 [32];
  unsigned char temp_v17 [68];
  
  temp_v11 = param_1 + *(int *)(param_1 + 0xcf78) * 0x620;
  pcVar15 = (char *)(temp_v11 + 0x3654);
  temp_v2 = FUN_002a89e4((int)*pcVar15);
  piVar13 = (int *)(param_1 + 0x3534);
  temp_v3 = *piVar13;
  temp_v14 = param_1 + 0x73c;
  piVar17 = (int *)(param_1 + 0x3544);
  puVar16 = (unsigned int *)(param_1 + 0x3574);
  if (temp_v3 == 5) {
    if (*piVar17 < 8) {
      return;
    }
    FUN_002bf9f0(temp_v14);
    if (*piVar17 == 0x10) {
      FUN_00295780(0);
      FUN_0028c194();
      *(unsigned char *)(temp_v11 + 0x3c70) = 0;
      *(unsigned char *)(temp_v11 + 0x3c71) = 0;
      *(unsigned char *)(temp_v11 + 0x3c72) = 0;
      temp_v4 = FUN_0033c2f4(temp_v2);
      temp_v3 = FUN_0029ed08();
      *(unsigned char *)(param_1 + 0xd640) = temp_v3 == 0;
      temp_v13 = temp_v11 + 0x3c5c;
      temp_v3 = temp_v2;
      FUN_0033bdc8(temp_v2,temp_v4);
      temp_v0 = 0;
      if (temp_v3 != 0) {
        temp_v3 = FUN_0029cb94(temp_v2);
        temp_v9 = 0;
        do {
          if ((*(short *)(pcVar15 + temp_v9 * 2 + 0x608) != 0) && (temp_v5 = 0, 0 < temp_v3)) {
            do {
              if (*(short *)(temp_v2 + temp_v5 * 2 + 0x34) == 0) {
                *(short *)(temp_v2 + temp_v5 * 2 + 0x34) = *(short *)(pcVar15 + temp_v9 * 2 + 0x608);
                (pcVar15 + temp_v9 * 2 + 0x608)[0] = '\0';
                (pcVar15 + temp_v9 * 2 + 0x608)[1] = '\0';
                break;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < temp_v3);
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < 8);
        FUN_002b7f0a(temp_v13,8,2,&LAB_002c6dd8);
        temp_v0 = 1;
      }
      *(unsigned char *)(param_1 + 0xd044) = temp_v0;
      FUN_00295798(*(unsigned short *)(temp_v2 + 0x46),0);
      FUN_00295780(1);
      FUN_0029db94(temp_v2,0);
      FUN_001cdffc(temp_v2 + 0x34);
      FUN_00215a44((int)*(short *)(temp_v2 + 0x46));
      if (*(char *)(param_1 + 0xd044) != '\0') {
        temp_v15[0] = 0;
        temp_v15[1] = 0;
        temp_v15[2] = 0;
        temp_v15[3] = 0;
        temp_v15[4] = 0;
        temp_v15[5] = 0;
        temp_v15[6] = 0;
        temp_v15[7] = 0;
        temp_v3 = FUN_0026ac34(*(unsigned short *)(temp_v2 + 0x46),*(unsigned char *)(temp_v2 + 0x48),
                             temp_v2 + 0x34,temp_v15,*(char *)(temp_v2 + 0x4b) != '\0');
        FUN_0026abe0(temp_v15,(int)(char)temp_v3);
        temp_v13 = *(int *)(temp_v11 + 0x3c5c);
        uStack_b4 = *(unsigned int *)(temp_v11 + 0x3c60);
        uStack_b0 = *(unsigned int *)(temp_v11 + 0x3c64);
        uStack_ac = *(unsigned int *)(temp_v11 + 0x3c68);
        temp_v11 = 0;
        if (temp_v11 < temp_v3) {
          do {
            if (temp_v15[temp_v11] != 0) {
              temp_v9 = 0;
              do {
                if (*(short *)((int)&temp_v13 + temp_v9 * 2) == 0) {
                  *(short *)((int)&temp_v13 + temp_v9 * 2) = temp_v15[temp_v11];
                  break;
                }
                temp_v9 = temp_v9 + 1;
              } while (temp_v9 < 8);
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < temp_v3);
        }
        temp_v3 = 3;
        temp_v12 = (short)temp_v13 != 0;
        temp_v1 = '\0';
        psVar11 = (short *)&temp_v13;
        temp_v10 = (*(unsigned short *)((unsigned char *)&temp_v13 + 2));
        do {
          if (temp_v10 != 0) {
            temp_v12 = temp_v12 + '\x01';
          }
          temp_v10 = psVar11[3];
          if (psVar11[2] != 0) {
            temp_v1 = temp_v1 + '\x01';
          }
          temp_v3 = temp_v3 - 1;
          psVar11 = psVar11 + 2;
        } while (temp_v3 != 0);
        temp_v1 = temp_v1 + temp_v12;
        if ((*(unsigned short *)((unsigned char *)&uStack_ac + 2)) != 0) {
          temp_v1 = temp_v1 + '\x01';
        }
        FUN_0026abe0(&temp_v13,(int)temp_v1);
      }
      FUN_001ddab4();
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
      FUN_002bd25c(temp_v6);
      FUN_002bf86c(temp_v16,temp_v6);
      FUN_00295904(8,temp_v16);
      temp_v4 = FUN_002bd020(*(unsigned short *)(temp_v2 + 0x46),1);
      FUN_002bf86c(temp_v16,temp_v4);
      FUN_00295904(0x10,temp_v16);
      FUN_002a755c(*puVar16);
      FUN_002c4360(*(unsigned int *)(param_1 + 0x3578));
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
      FUN_002b9364();
      temp_v1 = *(char *)(temp_v6 + 0x30);
      temp_v4 = FUN_002c0ec4(0x25,0);
      pcVar15 = (char *)FUN_002c0e9c();
      temp_v6 = FUN_002c0e4c(temp_v4);
      temp_v7 = 0;
      if (temp_v7 < temp_v6) {
        do {
          if (*pcVar15 == temp_v1) goto LAB_002173b0;
          temp_v7 = temp_v7 + 1;
          pcVar15 = pcVar15 + 0x20;
        } while (temp_v7 < temp_v6);
      }
      pcVar15 = (char *)0x0;
LAB_002173b0:
      FUN_002be7fc(temp_v17,&LAB_00217518,pcVar15 + 1);
      temp_v4 = FUN_002c5e2c(temp_v17);
      *(unsigned int *)(param_1 + 0x3578) = temp_v4;
      temp_v8 = *(unsigned int *)(param_1 + 0x3570);
      FUN_002972f8(temp_v8,temp_v4);
      *puVar16 = temp_v8;
      FUN_0029c950(temp_v2);
      FUN_00295760(temp_v2);
    }
    if (*(char *)(temp_v14 + 0x8a) == '\0') {
      return;
    }
    FUN_002971e4(*puVar16,4);
    if (*(char *)(param_1 + 0xd044) == '\0') {
      if (*(char *)(param_1 + 0xd640) != '\0') {
        FUN_0029c178(*(unsigned short *)(temp_v2 + 0x46));
        *(unsigned char *)(param_1 + 0xd640) = 0;
      }
      *piVar13 = 0xb;
      FUN_0029c6c4(1);
      return;
    }
    *piVar13 = *piVar13 + 1;
    return;
  }
  if (temp_v3 < 5) {
    switch(temp_v3) {
    case 0:
      if (*(int *)(temp_v11 + 0x3c6c) != 2) {
        FUN_0029ccf8();
        FUN_0029bfec();
        temp_v2 = *piVar13 + 1;
        *piVar13 = temp_v2;
        return;
      }
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
      FUN_002b9364();
      FUN_002b9364(*(unsigned short *)(temp_v6 + 0x2a));
      FUN_002b66ec();
      if (((int)(*(unsigned char *)(temp_v6 + 0x29) - 2) <= (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x48)) &&
         ((unsigned int)*(unsigned char *)(temp_v2 + 0x48) < (unsigned int)*(unsigned char *)(temp_v6 + 0x29))) {
        FUN_0029ccf8();
        FUN_0029bfec();
        *piVar13 = *piVar13 + 1;
        return;
      }
      *piVar13 = 99;
      break;
    case 1:
      temp_v3 = FUN_002958bc();
      if (temp_v3 != 0) {
        temp_v3 = FUN_002958a0();
        if (temp_v3 == 0) {
          FUN_00295798(*(unsigned short *)(temp_v2 + 0x46),1);
          FUN_00295780(1);
        }
        temp_v2 = *(int *)(temp_v11 + 0x3c6c);
        if (temp_v2 == 0) {
          FUN_002971e4(*puVar16,0);
          FUN_002b8b78(0x65);
          *piVar13 = *piVar13 + 1;
          *piVar17 = 0;
          return;
        }
        if (temp_v2 != 2) {
          if (temp_v2 != 3) {
            return;
          }
          FUN_002971e4(*puVar16,1);
          FUN_002b8b78(0x65);
          temp_v2 = 0xb;
        }
        else {
          FUN_0029c6c4(1);
          FUN_002971e4(*puVar16,1);
          FUN_002b8b78(0x65);
          temp_v2 = 0x14;
        }
        *piVar13 = temp_v2;
        return;
      }
      break;
    case 2:
      temp_v2 = FUN_0019dfbc(*puVar16);
      if (temp_v2 == 2) {
        temp_v2 = FUN_00297674();
        if (temp_v2 == 0) {
          *piVar13 = *piVar13 + 1;
          FUN_0029c6c4(1);
          return;
        }
        temp_v2 = 10;
        *piVar13 = temp_v2;
        return;
      }
      break;
    case 3:
      temp_v2 = FUN_002a0f88();
      if (temp_v2 == 0) {
        return;
      }
      temp_v4 = *puVar16;
      temp_v8 = 2;
      FUN_002971e4(temp_v4,temp_v8);
      *piVar13 = *piVar13 + 1;
      return;
    case 4:
      temp_v2 = FUN_0019dfbc(*puVar16);
      if (temp_v2 == 2) {
        *piVar17 = 0;
        *piVar13 = *piVar13 + 1;
        FUN_002bf030(temp_v14,7);
        FUN_0029bfec();
        FUN_002b91c4(0x1000115);
        return;
      }
    }
  }
  else {
    if (temp_v3 != 0xb) {
      if (temp_v3 < 0xb) {
        if (temp_v3 == 6) {
          temp_v2 = FUN_0019dfbc(*puVar16);
          if (temp_v2 != 2) {
            return;
          }
          FUN_00296a18(param_1,0xe);
          return;
        }
        if (temp_v3 != 10) {
          return;
        }
        temp_v2 = FUN_002a0f88();
        if (temp_v2 == 0) {
          return;
        }
        FUN_0029c6c4(1);
        temp_v4 = *puVar16;
        temp_v8 = 3;
        FUN_002971e4(temp_v4,temp_v8);
        *piVar13 = *piVar13 + 1;
        return;
      }
      if (temp_v3 != 0x14) {
        if (temp_v3 != 99) {
          return;
        }
        if (*(char *)(temp_v11 + 0x3c72) == '\0') {
          FUN_0029bfec();
          FUN_002956c0(param_1);
          return;
        }
        FUN_00296a18(param_1,0x10);
        return;
      }
      temp_v2 = FUN_0019dfbc(*puVar16);
    }
    else {
      temp_v2 = FUN_0019dfbc(*puVar16);
    }
    if (temp_v2 == 2) {
      FUN_0029c6c4(0);
      *piVar13 = 99;
      return;
    }
  }
  return;
}
