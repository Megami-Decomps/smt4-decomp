/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051ec68` (_code @ 0x51ec68, 0xb6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned char sp57; /* 0x57: local_57 */
    unsigned char sp58; /* 0x58: local_58 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern long long __aeabi_uldivmod(unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_0051ec68(char *param_1,unsigned int param_2,char *param_3,unsigned int *param_4)

{
/* irregular: 11 goto(s) */
  char temp_v0;
  long long temp_v1;
  char temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  char temp_v6;
  int temp_v7;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  long long temp_v14;
  char acStack_59 [5];
  unsigned int temp_v15;
  char acStack_50 [28];
  char *pcStack_34;
  unsigned int temp_v16;
  char *pcStack_2c;
  unsigned int *temp_v17;
  
  pcStack_2c = param_3;
  temp_v16 = param_2;
  pcStack_34 = param_1;
  temp_v6 = *param_3;
  pcVar12 = param_1;
  do {
    if (temp_v6 == '\0') {
      if (param_2 != 0) {
        *pcVar12 = '\0';
      }
      else if (temp_v16 != 0) {
        param_1[temp_v16 - 1] = '\0';
      }
      return (int)pcVar12 - (int)param_1;
    }
    temp_v6 = *param_3;
    temp_v17 = param_4;
    if (temp_v6 == '%') {
      temp_v11 = 0;
      temp_v9 = 0xffffffff;
      temp_v7 = 10;
      temp_v2 = 'W';
      temp_v6 = 'W';
      temp_v15 = 0;
      pcVar14 = param_3;
      while( 1 ) {
        while( 1 ) {
          while( 1 ) {
            pcVar13 = pcVar14 + 1;
            temp_v0 = *pcVar13;
            if (temp_v0 != ' ') break;
            temp_v15 = temp_v15 | 1;
            pcVar14 = pcVar13;
          }
          if (temp_v0 == '+') break;
          if (temp_v0 == '-') {
            temp_v15 = temp_v15 | 8;
            pcVar14 = pcVar13;
          }
          else {
            if (temp_v0 != '0') {
              if (*pcVar13 == '*') {
                pcVar13 = pcVar14 + 2;
                temp_v17 = param_4 + 1;
                temp_v11 = *param_4;
                if ((int)temp_v11 < 0) {
                  temp_v11 = -temp_v11;
                  temp_v15 = temp_v15 | 8;
                }
                goto LAB_0051ed60;
              }
              goto LAB_0051ed2c;
            }
            temp_v15 = temp_v15 | 0x10;
            pcVar14 = pcVar13;
          }
        }
        if (*pcVar14 != ' ') break;
        temp_v15 = temp_v15 | 2;
        pcVar14 = pcVar13;
      }
LAB_0051ed2c:
      temp_v0 = *pcVar13;
      while ((int)temp_v0 - 0x30U < 10) {
        temp_v0 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        temp_v11 = (int)temp_v0 + (temp_v11 * 10 - 0x30);
        temp_v0 = *pcVar13;
      }
LAB_0051ed60:
      if (*pcVar13 == '.') {
        temp_v10 = (int)pcVar13[1];
        temp_v9 = 0;
        pcVar14 = pcVar13 + 1;
        if (temp_v10 != 0x2a) {
          while (pcVar13 = pcVar14, temp_v10 - 0x30U < 10) {
            temp_v9 = (int)*pcVar13 + (temp_v9 * 10 - 0x30);
            pcVar14 = pcVar13 + 1;
            temp_v10 = (int)pcVar13[1];
          }
        }
        else {
          pcVar13 = pcVar13 + 2;
          puVar6 = temp_v17 + 1;
          temp_v9 = *temp_v17;
          temp_v17 = puVar6;
          if ((int)temp_v9 < 0) {
            temp_v9 = 0xffffffff;
          }
        }
      }
      if (*pcVar13 != 'h') {
        pcVar14 = pcVar13;
        if (*pcVar13 == 'l') {
          pcVar14 = pcVar13 + 1;
          if (*pcVar14 == 'l') {
            pcVar14 = pcVar13 + 2;
            temp_v15 = temp_v15 | 0x80;
          }
          else {
            temp_v15 = temp_v15 | 0x20;
          }
        }
      }
      else {
        pcVar14 = pcVar13 + 1;
        if (*pcVar14 == 'h') {
          pcVar14 = pcVar13 + 2;
          temp_v15 = temp_v15 | 0x100;
        }
        else {
          temp_v15 = temp_v15 | 0x40;
        }
      }
      temp_v0 = *pcVar14;
      if (temp_v0 != 'n') {
        if (temp_v0 < 'n') {
          if (temp_v0 != 'c') {
            if (temp_v0 < 'd') {
              if (temp_v0 != '%') {
                if (temp_v0 == 'X') {
                  temp_v2 = '7';
                  goto LAB_0051eecc;
                }
              }
              else if (param_3 + 1 == pcVar14) {
                temp_v6 = '%';
                param_3 = pcVar14;
                goto joined_r0x0051f740;
              }
            }
            else if (temp_v0 == 'd' || temp_v0 == 'i') goto LAB_0051eedc;
          }
          else if ((int)temp_v9 < 0) {
            temp_v11 = temp_v11 - 1;
            puVar6 = temp_v17 + 1;
            temp_v9 = *temp_v17;
            temp_v17 = puVar6;
            if ((temp_v15 & 8) != 0) {
              if (param_2 != 0) {
                *pcVar12 = (char)temp_v9;
                param_2 = param_2 - 1;
              }
              pcVar12 = pcVar12 + 1;
              if (0 < (int)temp_v11) {
                temp_v9 = param_2;
                if (temp_v11 < param_2) {
                  temp_v9 = temp_v11;
                }
                if (temp_v9 != 0) {
                  temp_v5 = temp_v9 & 1;
                  temp_v12 = (unsigned int)(temp_v5 == 1);
                  if (temp_v5 == 1) {
                    *pcVar12 = ' ';
                  }
                  for (; temp_v5 < temp_v9; temp_v5 = temp_v5 + 2) {
                    pcVar12[temp_v12] = ' ';
                    pcVar12[temp_v12 + 1] = ' ';
                    temp_v12 = temp_v12 + 2;
                  }
                }
                param_2 = param_2 - temp_v9;
                pcVar12 = pcVar12 + temp_v11;
              }
            }
            else {
              if ((temp_v15 & 0x10) == 0) {
                temp_v6 = ' ';
              }
              else {
                temp_v6 = '0';
              }
              if (0 < (int)temp_v11) {
                temp_v5 = param_2;
                if (temp_v11 < param_2) {
                  temp_v5 = temp_v11;
                }
                if (temp_v5 != 0) {
                  temp_v12 = temp_v5 & 1;
                  temp_v4 = (unsigned int)(temp_v12 == 1);
                  if (temp_v12 == 1) {
                    *pcVar12 = temp_v6;
                  }
                  for (; temp_v12 < temp_v5; temp_v12 = temp_v12 + 2) {
                    pcVar12[temp_v4] = temp_v6;
                    pcVar12[temp_v4 + 1] = temp_v6;
                    temp_v4 = temp_v4 + 2;
                  }
                }
                param_2 = param_2 - temp_v5;
                pcVar12 = pcVar12 + temp_v11;
              }
              if (param_2 != 0) {
                *pcVar12 = (char)temp_v9;
                param_2 = param_2 - 1;
              }
              pcVar12 = pcVar12 + 1;
            }
            pcVar14 = pcVar14 + 1;
            temp_v6 = *pcVar14;
            param_4 = temp_v17;
            param_3 = pcVar14;
            continue;
          }
LAB_0051f74c:
          temp_v11 = (int)pcVar14 - (int)param_3;
          if (0 < (int)temp_v11) {
            temp_v9 = param_2;
            if (temp_v11 < param_2) {
              temp_v9 = temp_v11;
            }
            if (temp_v9 != 0) {
              temp_v7 = 0;
              temp_v5 = temp_v9;
              do {
                temp_v5 = temp_v5 - 1;
                pcVar12[temp_v7] = *param_3;
                temp_v7 = temp_v7 + 1;
                param_3 = param_3 + 1;
              } while (temp_v5 != 0);
            }
            param_2 = param_2 - temp_v9;
            pcVar12 = pcVar12 + temp_v11;
          }
          temp_v6 = *pcVar14;
          param_4 = temp_v17;
          param_3 = pcVar14;
          continue;
        }
        if (temp_v0 != 's') {
          temp_v6 = temp_v2;
          if (temp_v0 < 's') {
            if (temp_v0 == 'o') {
              temp_v7 = 8;
            }
            else {
              if (temp_v0 != 'p') goto LAB_0051f74c;
              temp_v9 = 8;
              temp_v15 = temp_v15 | 4;
LAB_0051eecc:
              temp_v7 = 0x10;
              temp_v6 = temp_v2;
            }
          }
          else if (temp_v0 != 'u') {
            if (temp_v0 != 'x') goto LAB_0051f74c;
            temp_v7 = 0x10;
            temp_v6 = temp_v2;
          }
          temp_v15 = temp_v15 | 0x1000;
LAB_0051eedc:
          temp_v10 = 0;
          if ((temp_v15 & 8) != 0) {
            temp_v15 = temp_v15 & 0xffffffef;
          }
          if ((int)temp_v9 < 0) {
            temp_v9 = 1;
          }
          else {
            temp_v15 = temp_v15 & 0xffffffef;
          }
          if ((temp_v15 & 0x1000) != 0) {
            if ((temp_v15 & 0x100) != 0) {
              temp_v5 = 0;
              temp_v12 = *temp_v17;
              temp_v17 = temp_v17 + 1;
              temp_v12 = temp_v12 & 0xff;
            }
            else if ((temp_v15 & 0x40) != 0) {
              temp_v5 = 0;
              temp_v12 = *temp_v17;
              temp_v17 = temp_v17 + 1;
              temp_v12 = temp_v12 & 0xffff;
            }
            else {
              if ((temp_v15 & 0x80) != 0) {
                puVar4 = (unsigned int *)(((int)temp_v17 + 7U) & 0xfffffff8);
                temp_v12 = *puVar4;
                puVar6 = puVar4 + 2;
                temp_v5 = puVar4[1];
              }
              else {
                puVar6 = temp_v17 + 1;
                temp_v12 = *temp_v17;
                temp_v5 = 0;
              }
              temp_v17 = puVar6;
            }
            temp_v3 = temp_v15 & 0xfffffffc;
            temp_v4 = temp_v15 & 4;
            temp_v15 = temp_v3;
            if (temp_v4 == 0) goto LAB_0051f0c8;
            if (temp_v7 != 0x10) {
              if (temp_v7 != 8) goto LAB_0051f0c8;
              temp_v10 = 1;
              acStack_59[1] = '0';
              goto LAB_0051f0e8;
            }
            if (temp_v12 != 0 || temp_v5 != 0) {
              acStack_59[1] = temp_v6 + '!';
              temp_v10 = 2;
              acStack_59[2] = 0x30;
            }
LAB_0051f1a8:
            temp_v8 = 0;
            if (temp_v12 != 0 || temp_v5 != 0) {
              do {
                temp_v4 = temp_v12 & 0xf;
                temp_v2 = (char)temp_v4;
                if (temp_v4 < 10) {
                  temp_v2 = temp_v2 + '0';
                }
                temp_v3 = temp_v5 << 0x1c;
                if (temp_v4 >= 10) {
                  temp_v2 = temp_v2 + temp_v6;
                }
                acStack_50[temp_v8] = temp_v2;
                temp_v5 = temp_v5 >> 4;
                temp_v12 = temp_v3 | (temp_v12 >> 4);
                temp_v8 = temp_v8 + 1;
              } while (temp_v12 != 0 || temp_v5 != 0);
            }
          }
          else {
            if ((temp_v15 & 0x100) != 0) {
              temp_v5 = *temp_v17;
              temp_v17 = temp_v17 + 1;
              temp_v12 = (unsigned int)(char)temp_v5;
              temp_v5 = (int)temp_v12 >> 0x1f;
            }
            else if ((temp_v15 & 0x40) != 0) {
              temp_v5 = *temp_v17;
              temp_v17 = temp_v17 + 1;
              temp_v12 = (unsigned int)(short)temp_v5;
              temp_v5 = (int)temp_v12 >> 0x1f;
            }
            else if ((temp_v15 & 0x80) != 0) {
              puVar6 = (unsigned int *)(((int)temp_v17 + 7U) & 0xfffffff8);
              temp_v12 = *puVar6;
              temp_v5 = puVar6[1];
              temp_v17 = puVar6 + 2;
            }
            else {
              temp_v12 = *temp_v17;
              temp_v17 = temp_v17 + 1;
              temp_v5 = (int)temp_v12 >> 0x1f;
            }
            if ((temp_v5 & 0x80000000) != 0) {
              temp_v4 = ~temp_v12;
              acStack_59[1] = '-';
              temp_v12 = temp_v4 + 1;
              temp_v10 = 1;
              temp_v5 = ~temp_v5 + (unsigned int)(0xfffffffe < temp_v4);
            }
            else {
              temp_v13 = temp_v12 == 0 && temp_v5 == 0;
              if (temp_v12 == 0 && temp_v5 == 0) {
                temp_v13 = temp_v9 == 0;
              }
              if (!temp_v13) {
                if ((temp_v15 & 2) != 0) {
                  temp_v10 = 1;
                  acStack_59[1] = '+';
                }
                else if ((temp_v15 & 1) != 0) {
                  temp_v10 = 1;
                  acStack_59[1] = ' ';
                }
              }
            }
LAB_0051f0c8:
            temp_v8 = 0;
            if (temp_v7 != 8) {
              if (temp_v7 != 10) {
                if (temp_v7 == 0x10) goto LAB_0051f1a8;
              }
              else if (temp_v5 != 0) {
                temp_v1 = romwright_piece_4_4(temp_v5,temp_v12);
                if (temp_v12 != 0 || temp_v5 != 0) {
                  do {
                    temp_v14 = __aeabi_uldivmod((int)temp_v1,(int)((unsigned long long)temp_v1 >> 0x20),10,0);
                    acStack_50[temp_v8] = (char)temp_v1 + (char)temp_v14 * -10 + '0';
                    temp_v8 = temp_v8 + 1;
                    temp_v1 = temp_v14;
                  } while (temp_v14 != 0);
                }
              }
              else {
                while (temp_v12 != 0) {
                  acStack_50[temp_v8] = (char)temp_v12 + (char)(temp_v12 / 10) * -10 + '0';
                  temp_v8 = temp_v8 + 1;
                  temp_v12 = temp_v12 / 10;
                }
              }
            }
            else {
LAB_0051f0e8:
              temp_v8 = 0;
              if (temp_v12 != 0 || temp_v5 != 0) {
                do {
                  temp_v4 = temp_v5 << 0x1d;
                  acStack_50[temp_v8] = ((unsigned char)temp_v12 & 7) + 0x30;
                  temp_v5 = temp_v5 >> 3;
                  temp_v12 = temp_v4 | (temp_v12 >> 3);
                  temp_v8 = temp_v8 + 1;
                } while (temp_v12 != 0 || temp_v5 != 0);
              }
            }
          }
          if ((temp_v10 != 0) && (acStack_59[1] == '0')) {
            acStack_50[temp_v8] = '0';
            temp_v10 = 0;
            temp_v8 = temp_v8 + 1;
          }
          temp_v9 = temp_v9 - temp_v8;
          if (((temp_v15 & 0x10) != 0) &&
             (temp_v5 = (temp_v11 - temp_v8) - temp_v10, (int)temp_v9 < (int)temp_v5)) {
            temp_v9 = temp_v5;
          }
          if (0 < (int)temp_v9) {
            temp_v11 = temp_v11 - temp_v9;
          }
          temp_v11 = temp_v11 - (temp_v10 + temp_v8);
          if (((temp_v15 & 8) == 0) && (0 < (int)temp_v11)) {
            temp_v5 = param_2;
            if (temp_v11 < param_2) {
              temp_v5 = temp_v11;
            }
            if (temp_v5 != 0) {
              temp_v12 = temp_v5 & 1;
              temp_v4 = (unsigned int)(temp_v12 == 1);
              if (temp_v12 == 1) {
                *pcVar12 = ' ';
              }
              for (; temp_v12 < temp_v5; temp_v12 = temp_v12 + 2) {
                pcVar12[temp_v4] = ' ';
                pcVar12[temp_v4 + 1] = ' ';
                temp_v4 = temp_v4 + 2;
              }
            }
            param_2 = param_2 - temp_v5;
            pcVar12 = pcVar12 + temp_v11;
          }
          if (temp_v10 != 0) {
            do {
              temp_v7 = temp_v10 - 1;
              if (param_2 != 0) {
                param_2 = param_2 - 1;
                *pcVar12 = acStack_59[temp_v10];
              }
              pcVar12 = pcVar12 + 1;
              temp_v10 = temp_v7;
            } while (0 < temp_v7);
          }
          if (0 < (int)temp_v9) {
            temp_v5 = param_2;
            if (temp_v9 < param_2) {
              temp_v5 = temp_v9;
            }
            if (temp_v5 != 0) {
              temp_v12 = temp_v5 & 1;
              temp_v4 = (unsigned int)(temp_v12 == 1);
              if (temp_v12 == 1) {
                *pcVar12 = '0';
              }
              for (; temp_v12 < temp_v5; temp_v12 = temp_v12 + 2) {
                pcVar12[temp_v4] = '0';
                pcVar12[temp_v4 + 1] = '0';
                temp_v4 = temp_v4 + 2;
              }
            }
            param_2 = param_2 - temp_v5;
            pcVar12 = pcVar12 + temp_v9;
          }
          while (0 < temp_v8) {
            if (param_2 != 0) {
              param_2 = param_2 - 1;
              *pcVar12 = acStack_50[temp_v8 - 1];
            }
            pcVar12 = pcVar12 + 1;
            temp_v8 = temp_v8 - 1;
          }
          temp_v13 = (temp_v15 & 8) != 0;
          if (temp_v13) {
            temp_v9 = 0x20;
          }
          if (temp_v13 && 0 < (int)temp_v11) {
            temp_v5 = param_2;
            if (temp_v11 < param_2) {
              temp_v5 = temp_v11;
            }
            if (temp_v5 != 0) {
              temp_v12 = temp_v5 & 1;
              temp_v4 = (unsigned int)(temp_v12 == 1);
              temp_v6 = (char)temp_v9;
              if (temp_v12 == 1) {
                *pcVar12 = temp_v6;
              }
              for (; temp_v12 < temp_v5; temp_v12 = temp_v12 + 2) {
                pcVar12[temp_v4] = temp_v6;
                pcVar12[temp_v4 + 1] = temp_v6;
                temp_v4 = temp_v4 + 2;
              }
            }
            param_2 = param_2 - temp_v5;
            pcVar12 = pcVar12 + temp_v11;
          }
        }
        else {
          puVar6 = temp_v17 + 1;
          pcVar13 = (char *)*temp_v17;
          temp_v5 = 0;
          if ((int)temp_v9 < 0) {
            temp_v6 = *pcVar13;
            while (temp_v6 != '\0') {
              temp_v5 = temp_v5 + 1;
              temp_v6 = pcVar13[temp_v5];
            }
          }
          else {
            for (; ((int)temp_v5 < (int)temp_v9 && (pcVar13[temp_v5] != '\0')); temp_v5 = temp_v5 + 1) {
            }
          }
          temp_v11 = temp_v11 - temp_v5;
          temp_v17 = puVar6;
          if ((temp_v15 & 8) != 0) {
            if (0 < (int)temp_v5) {
              temp_v9 = param_2;
              if (temp_v5 < param_2) {
                temp_v9 = temp_v5;
              }
              if (temp_v9 != 0) {
                temp_v7 = 0;
                temp_v12 = temp_v9;
                do {
                  temp_v12 = temp_v12 - 1;
                  pcVar12[temp_v7] = *pcVar13;
                  temp_v7 = temp_v7 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (temp_v12 != 0);
              }
              param_2 = param_2 - temp_v9;
              pcVar12 = pcVar12 + temp_v5;
            }
            if (0 < (int)temp_v11) {
              temp_v9 = param_2;
              if (temp_v11 < param_2) {
                temp_v9 = temp_v11;
              }
              if (temp_v9 != 0) {
                temp_v5 = temp_v9 & 1;
                temp_v12 = (unsigned int)(temp_v5 == 1);
                if (temp_v5 == 1) {
                  *pcVar12 = ' ';
                }
                for (; temp_v5 < temp_v9; temp_v5 = temp_v5 + 2) {
                  pcVar12[temp_v12] = ' ';
                  pcVar12[temp_v12 + 1] = ' ';
                  temp_v12 = temp_v12 + 2;
                }
              }
              param_2 = param_2 - temp_v9;
              pcVar12 = pcVar12 + temp_v11;
            }
          }
          else {
            if ((temp_v15 & 0x10) == 0) {
              temp_v6 = ' ';
            }
            else {
              temp_v6 = '0';
            }
            if (0 < (int)temp_v11) {
              temp_v9 = param_2;
              if (temp_v11 < param_2) {
                temp_v9 = temp_v11;
              }
              if (temp_v9 != 0) {
                temp_v12 = temp_v9 & 1;
                temp_v4 = (unsigned int)(temp_v12 == 1);
                if (temp_v12 == 1) {
                  *pcVar12 = temp_v6;
                }
                for (; temp_v12 < temp_v9; temp_v12 = temp_v12 + 2) {
                  pcVar12[temp_v4] = temp_v6;
                  pcVar12[temp_v4 + 1] = temp_v6;
                  temp_v4 = temp_v4 + 2;
                }
              }
              param_2 = param_2 - temp_v9;
              pcVar12 = pcVar12 + temp_v11;
            }
            if (0 < (int)temp_v5) {
              temp_v11 = param_2;
              if (temp_v5 < param_2) {
                temp_v11 = temp_v5;
              }
              if (temp_v11 != 0) {
                temp_v7 = 0;
                temp_v9 = temp_v11;
                do {
                  temp_v9 = temp_v9 - 1;
                  pcVar12[temp_v7] = *pcVar13;
                  temp_v7 = temp_v7 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (temp_v9 != 0);
              }
              param_2 = param_2 - temp_v11;
              pcVar12 = pcVar12 + temp_v5;
            }
          }
        }
      }
      else {
        temp_v7 = (int)pcVar12 - (int)param_1;
        if ((temp_v15 & 0x100) == 0) {
          if ((temp_v15 & 0x40) != 0) {
            *(short *)*temp_v17 = (short)temp_v7;
            temp_v17 = temp_v17 + 1;
          }
          else if ((temp_v15 & 0x80) != 0) {
            piVar11 = (int *)*temp_v17;
            *piVar11 = temp_v7;
            piVar11[1] = temp_v7 >> 0x1f;
            temp_v17 = temp_v17 + 1;
          }
          else {
            *(int *)*temp_v17 = temp_v7;
            temp_v17 = temp_v17 + 1;
          }
        }
      }
      pcVar14 = pcVar14 + 1;
    }
    else {
joined_r0x0051f740:
      pcVar14 = param_3 + 1;
      if (param_2 != 0) {
        param_2 = param_2 - 1;
        *pcVar12 = temp_v6;
      }
      pcVar12 = pcVar12 + 1;
    }
    temp_v6 = *pcVar14;
    param_4 = temp_v17;
    param_3 = pcVar14;
  } while( 1 );
}

} /* extern "C" */
