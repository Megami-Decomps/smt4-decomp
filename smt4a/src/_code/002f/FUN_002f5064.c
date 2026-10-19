/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5064` (_code @ 0x2f5064, 0x814 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 38 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned short spAA; /* 0xaa: local_aa */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_1_stack;

extern unsigned char LAB_002f5758; /* 0x2f5758 */
extern unsigned char LAB_00321c94; /* 0x321c94 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0010063a. */
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_001801a4. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001846d0. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
extern int FUN_001ab854(int);
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_0020b490. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_0026272c(void);
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_0026c3c4. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_00285774. */
extern int FUN_002a4b28(void);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002a5e7c. */
/* Supplied declaration required: FUN_002a7288. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002f01c4. */
/* Supplied declaration required: FUN_003180c4. */
extern int FUN_0032169c(void);
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_00334214. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: FUN_0035ab40. */
/* Supplied declaration required: FUN_0035da20. */
/* Supplied declaration required: FUN_0035fc4c. */
/* Supplied declaration required: FUN_0035fd38. */
/* Supplied declaration required: FUN_003d2204. */
/* Supplied declaration required: FUN_003f33b0. */
extern unsigned int FUN_003f3908(int);
extern int FUN_004bcaa8(unsigned short, unsigned short, int, unsigned int *, unsigned char);
/* Supplied declaration required: FUN_004bcb54. */
/* Supplied declaration required: FUN_004bcd90. */
extern int FUN_004bd21c(int);
extern int FUN_004bd340(int, unsigned int);
/* Supplied declaration required: FUN_004bd3ec. */
/* Supplied declaration required: FUN_004bd6b0. */


void FUN_002f5064(int param_1)

{
/* irregular: 1 goto(s); 36 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *puVar8;
  unsigned int temp_v7;
  char temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  char *pcVar14;
  unsigned int *puVar15;
  short *psVar16;
  unsigned int temp_v12;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18 [32];
  unsigned char temp_v19 [68];
  int temp_v20;
  
  temp_v11 = param_1 + *(int *)(param_1 + 0x74c0) * 0x150;
  pcVar14 = (char *)(temp_v11 + 0x442c);
  temp_v2 = FUN_001ab854((int)*pcVar14);
  temp_v3 = *(int *)(param_1 + 0x436c);
  temp_v13 = param_1 + 0x854;
  if (temp_v3 == 5) {
    if (*(int *)(param_1 + 0x437c) < 8) {
      return;
    }
    FUN_00163aa4(temp_v13);
    temp_v20 = param_1 + 0x7500;
    if (*(int *)(param_1 + 0x437c) == 0x10) {
      FUN_0035fd38(0);
      FUN_0035fc4c();
      *(unsigned char *)(temp_v11 + 0x4578) = 0;
      *(unsigned char *)(temp_v11 + 0x4579) = 0;
      *(unsigned char *)(temp_v11 + 0x457a) = 0;
      temp_v4 = FUN_003f3908(temp_v2);
      temp_v3 = FUN_002a4b28();
      *(unsigned char *)(param_1 + 0x7f2c) = temp_v3 == 0;
      FUN_0035ab40(temp_v2);
      temp_v3 = temp_v2;
      FUN_003f33b0(temp_v2,temp_v4,temp_v11 + 0x4564);
      temp_v12 = (unsigned int)(param_1 + 0x75d4);
      if (temp_v3 != 0) {
        temp_v3 = FUN_004bd21c(temp_v2);
        temp_v10 = 0;
        do {
          if ((*(short *)(pcVar14 + temp_v10 * 2 + 0x138) != 0) && (temp_v9 = 0, 0 < temp_v3)) {
            do {
              if (*(short *)(temp_v2 + temp_v9 * 2 + 0x34) == 0) {
                FUN_004bd6b0(temp_v2);
                (pcVar14 + temp_v10 * 2 + 0x138)[0] = '\0';
                (pcVar14 + temp_v10 * 2 + 0x138)[1] = '\0';
                break;
              }
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < temp_v3);
          }
          temp_v10 = temp_v10 + 1;
        } while (temp_v10 < 8);
        FUN_0010063a(temp_v11 + 0x4564,8,2,&LAB_00321c94);
        *(int *)temp_v12 = 1;
      }
      else {
        *(int *)temp_v12 = 0;
      }
      FUN_00336de4(*(unsigned short *)(temp_v2 + 0x62),0);
      FUN_0035fd38(1);
      FUN_00334214(temp_v2,0,0);
      FUN_0026c3c4(temp_v2 + 0x34);
      FUN_002f01c4((int)*(short *)(temp_v2 + 0x62));
      if (*(char *)(temp_v20 + 0xd4) != '\0') {
        temp_v14 = 0;
        temp_v15 = 0;
        temp_v16 = 0;
        temp_v17 = 0;
        temp_v3 = FUN_004bcaa8(*(unsigned short *)(temp_v2 + 0x62),*(unsigned short *)(temp_v2 + 100),temp_v2 + 0x34
                             ,(unsigned int *)&temp_v14,*(char *)(temp_v2 + 0x67) != '\0');
        FUN_0035da20(&temp_v14,(int)(char)temp_v3);
        puVar15 = (unsigned int *)(temp_v11 + 0x4564);
        temp_v12 = (unsigned int)*puVar15;
        temp_v0 = '\0';
        if (0 < temp_v3) {
          puVar15 = (unsigned int *)&temp_v14;
        }
        uStack_b4 = *(unsigned int *)(temp_v11 + 0x4568);
        uStack_b0 = *(unsigned int *)(temp_v11 + 0x456c);
        uStack_ac = *(unsigned int *)(temp_v11 + 0x4570);
        temp_v11 = 0;
        if (temp_v11 < temp_v3) {
          do {
            temp_v1 = *(short *)((int)puVar15 + temp_v11 * 2);
            if (temp_v1 != 0) {
              temp_v10 = 0;
              do {
                if (*(short *)((int)&temp_v12 + temp_v10 * 2) == 0) {
                  *(short *)((int)&temp_v12 + temp_v10 * 2) = temp_v1;
                  break;
                }
                temp_v10 = temp_v10 + 1;
              } while (temp_v10 < 8);
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < temp_v3);
        }
        temp_v8 = '\0';
        temp_v3 = 3;
        psVar16 = (short *)&temp_v12;
        temp_v1 = (*(unsigned short *)((unsigned char *)&temp_v12 + 2));
        if ((short)temp_v12 != 0) {
          temp_v0 = '\x01';
        }
        do {
          if (temp_v1 != 0) {
            temp_v0 = temp_v0 + '\x01';
          }
          temp_v1 = psVar16[3];
          if (psVar16[2] != 0) {
            temp_v8 = temp_v8 + '\x01';
          }
          temp_v3 = temp_v3 - 1;
          psVar16 = psVar16 + 2;
        } while (temp_v3 != 0);
        temp_v0 = temp_v0 + temp_v8;
        if ((*(unsigned short *)((unsigned char *)&uStack_ac + 2)) != 0) {
          temp_v0 = temp_v0 + '\x01';
        }
        FUN_0035da20(&temp_v12,(int)temp_v0);
      }
      FUN_00285774();
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
      FUN_00180118(temp_v5);
      FUN_002e342c(temp_v18,temp_v5);
      FUN_003180c4(8,temp_v18);
      temp_v4 = FUN_0014bf3c(*(unsigned short *)(temp_v2 + 0x62),0);
      FUN_002e342c(temp_v18,temp_v4);
      FUN_003180c4(0x10,temp_v18);
      FUN_0019c364(*(unsigned int *)(param_1 + 0x43ac));
      FUN_0019a5a0(*(unsigned int *)(param_1 + 0x43b0));
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
      FUN_00184310();
      temp_v0 = *(char *)(temp_v5 + 0x38);
      temp_v4 = FUN_00187180(0x25,0);
      pcVar14 = (char *)FUN_00192798();
      temp_v5 = FUN_00192748(temp_v4);
      temp_v6 = 0;
      if (temp_v6 < temp_v5) {
        do {
          if (*pcVar14 == temp_v0) goto LAB_002f56d4;
          temp_v6 = temp_v6 + 1;
          pcVar14 = pcVar14 + 0x20;
        } while (temp_v6 < temp_v5);
      }
      pcVar14 = (char *)0x0;
LAB_002f56d4:
      FUN_00100388(temp_v19,&LAB_002f5758,pcVar14 + 1);
      puVar8 = temp_v19;
      FUN_0020214c();
      *(unsigned char **)(param_1 + 0x43b0) = puVar8;
      temp_v4 = *(unsigned int *)(param_1 + 0x43a8);
      FUN_00275bc8(temp_v4,puVar8);
      *(unsigned int *)(param_1 + 0x43ac) = temp_v4;
      temp_v3 = FUN_004bd340(temp_v2,2);
      FUN_004bcd90(temp_v2);
      FUN_004bcb54(temp_v2);
      if (temp_v3 != 0) {
        FUN_004bd3ec(temp_v2,2);
      }
    }
    if (*(char *)(temp_v13 + 0x8a) == '\0') {
      return;
    }
    FUN_00275f44(*(unsigned int *)(param_1 + 0x43ac),4);
    if (*(char *)(temp_v20 + 0xd4) == '\0') {
      if (*(char *)(param_1 + 0x7f2c) != '\0') {
        FUN_002a5e7c(*(unsigned short *)(temp_v2 + 0x62));
        *(unsigned char *)(param_1 + 0x7f2c) = 0;
      }
      *(unsigned int *)(param_1 + 0x436c) = 0xb;
      FUN_00333dc8(1);
      return;
    }
    *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
    return;
  }
  if (temp_v3 < 5) {
    switch(temp_v3) {
    case 0:
      if (*(int *)(temp_v11 + 0x4574) != 2) {
        FUN_0022e774();
        FUN_002a7288();
        temp_v2 = *(int *)(param_1 + 0x436c) + 1;
        *(int *)(param_1 + 0x436c) = temp_v2;
        return;
      }
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
      FUN_00184310();
      FUN_00184310(*(unsigned short *)(temp_v5 + 0x32));
      FUN_001801a4();
      if (((int)(*(unsigned short *)(temp_v5 + 0x30) - 2) <= (int)(unsigned int)*(unsigned short *)(temp_v2 + 100)) &&
         ((unsigned int)*(unsigned short *)(temp_v2 + 100) < (unsigned int)*(unsigned short *)(temp_v5 + 0x30))) {
        FUN_0022e774();
        FUN_002a7288();
        *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
        return;
      }
      *(unsigned int *)(param_1 + 0x436c) = 99;
      break;
    case 1:
      temp_v3 = FUN_0026c3a0();
      if (temp_v3 != 0) {
        temp_v3 = FUN_0032169c();
        if (temp_v3 == 0) {
          FUN_00336de4(*(unsigned short *)(temp_v2 + 0x62),1);
          FUN_0035fd38(1);
        }
        temp_v2 = *(int *)(temp_v11 + 0x4574);
        if (temp_v2 == 0) {
          FUN_00275f44(*(unsigned int *)(param_1 + 0x43ac),0);
          FUN_001681cc(0x67);
          *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
          *(unsigned int *)(param_1 + 0x437c) = 0;
          return;
        }
        if (temp_v2 != 2) {
          if (temp_v2 != 3) {
            return;
          }
          FUN_00275f44(*(unsigned int *)(param_1 + 0x43ac),1);
          FUN_001681cc(0x67);
          temp_v2 = 0xb;
        }
        else {
          FUN_00333dc8(1);
          FUN_00275f44(*(unsigned int *)(param_1 + 0x43ac),1);
          FUN_001681cc(0x67);
          temp_v2 = 0x14;
        }
        *(int *)(param_1 + 0x436c) = temp_v2;
        return;
      }
      break;
    case 2:
      temp_v2 = FUN_00224880(*(unsigned int *)(param_1 + 0x43ac));
      if (temp_v2 == 2) {
        temp_v2 = FUN_002a4b74();
        if (temp_v2 == 0) {
          *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
          FUN_00333dc8(1);
          return;
        }
        temp_v2 = 10;
        *(int *)(param_1 + 0x436c) = temp_v2;
        return;
      }
      break;
    case 3:
      temp_v2 = FUN_0026272c();
      if (temp_v2 == 0) {
        return;
      }
      temp_v4 = *(unsigned int *)(param_1 + 0x43ac);
      temp_v7 = 2;
      FUN_00275f44(temp_v4,temp_v7);
      *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
      return;
    case 4:
      temp_v2 = FUN_00224880(*(unsigned int *)(param_1 + 0x43ac));
      if (temp_v2 == 2) {
        *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
        *(unsigned int *)(param_1 + 0x437c) = 0;
        FUN_001846d0(temp_v13,8);
        FUN_002a7288();
        FUN_00169ddc(0x100013f);
        return;
      }
    }
  }
  else {
    if (temp_v3 != 0xb) {
      if (temp_v3 < 0xb) {
        if (temp_v3 == 6) {
          temp_v2 = FUN_00224880(*(unsigned int *)(param_1 + 0x43ac));
          if (temp_v2 != 2) {
            return;
          }
          FUN_0020b490(param_1,0xf);
          return;
        }
        if (temp_v3 != 10) {
          return;
        }
        temp_v2 = FUN_0026272c();
        if (temp_v2 == 0) {
          return;
        }
        FUN_00333dc8(1);
        temp_v4 = *(unsigned int *)(param_1 + 0x43ac);
        temp_v7 = 3;
        FUN_00275f44(temp_v4,temp_v7);
        *(int *)(param_1 + 0x436c) = *(int *)(param_1 + 0x436c) + 1;
        return;
      }
      if (temp_v3 != 0x14) {
        if (temp_v3 != 99) {
          return;
        }
        if (*(char *)(temp_v11 + 0x457a) != '\0') {
          FUN_0020b490(param_1,0x11);
          return;
        }
        FUN_002a7288();
        FUN_003d2204(param_1);
        return;
      }
      temp_v2 = FUN_00224880(*(unsigned int *)(param_1 + 0x43ac));
    }
    else {
      temp_v2 = FUN_00224880(*(unsigned int *)(param_1 + 0x43ac));
    }
    if (temp_v2 == 2) {
      FUN_00333dc8(0);
      *(unsigned int *)(param_1 + 0x436c) = 99;
      return;
    }
  }
  return;
}
