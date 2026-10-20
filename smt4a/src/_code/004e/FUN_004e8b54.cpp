/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e8b54` (_code @ 0x4e8b54, 0x608 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(unsigned short [18], int, int, unsigned char *);
int lcgRandomRange(...);
int dataTable04FindById(void);
int FUN_004e9168(int *, unsigned int, int, unsigned int *, int *);
int FUN_004ea634(int *, int, unsigned int);

/* stack frame of param_2: 23 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned short sp6A; /* 0x6a: local_6a */
    unsigned short sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_2_stack;

extern unsigned char LAB_003d4e98; /* 0x3d4e98 */
extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: lcgRandomRange. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_004e9168. */
/* Supplied declaration required: FUN_004ea634. */


unsigned int FUN_004e8b54(int *param_1,int param_2)

{
/* irregular: 4 goto(s); 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned short *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar8;
  unsigned short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned short temp_v9 [18];
  unsigned int temp_v10;
  unsigned int temp_v11;
  char temp_v12 [4];
  unsigned int temp_v13 [7];
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  int *temp_v19;
  int temp_v20;
  
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v14 = 0;
  temp_v10 = 0;
  temp_v2 = *(int *)(param_2 + 0x20);
  temp_v9[0] = 0;
  temp_v9[1] = 0;
  temp_v9[2] = 0;
  temp_v9[3] = 0;
  temp_v9[4] = 0;
  temp_v9[5] = 0;
  temp_v9[6] = 0;
  temp_v9[7] = 0;
  temp_v9[8] = 0;
  temp_v9[9] = 0;
  temp_v9[10] = 0;
  temp_v9[0xb] = 0;
  temp_v9[0xc] = 0;
  temp_v9[0xd] = 0;
  temp_v9[0xe] = 0;
  temp_v9[0xf] = 0;
  temp_v17 = temp_v2 + 0x200;
  temp_v19 = param_1;
  temp_v20 = param_2;
  do {
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x27c);
    dataTable04FindById();
    piVar3 = temp_v19;
    temp_v11 = temp_v1;
    if ((((temp_v1 != 0) && ((*(unsigned short *)(temp_v17 + 0x74) & 0x2000) == 0)) &&
        ((int)(unsigned int)*(unsigned char *)(temp_v1 + 0x22) <= *(int *)(temp_v2 + 0x260))) &&
       ((*(unsigned int *)(temp_v1 + 0x28) & 0x1ff) >> 5 != 4)) {
      if (*(char *)(temp_v1 + 0x23) != '\x03') {
        if ((*(char *)(temp_v1 + 0x23) == '\x04') &&
           (FUN_004ea634(temp_v19,temp_v20,temp_v1), piVar3 != (int *)0x0)) {
          temp_v9[temp_v10 + 8] = *(unsigned short *)(temp_v11 + 0x20);
          temp_v10 = (temp_v10 + 1) & 0xffff;
        }
      }
      else if ((((*(unsigned int *)(temp_v1 + 0x3c) & 0x200) == 0) &&
               (temp_v7 = *(unsigned int *)(temp_v1 + 0x3c) & 0x7f, temp_v7 != 1)) && (temp_v7 != 0x1b)) {
        temp_v15 = 0;
        temp_v16 = 0;
        FUN_004e9168(temp_v19,*(unsigned int *)(temp_v20 + 0x20),*(unsigned short *)(temp_v1 + 0x20),
                     &temp_v15,&temp_v16);
        temp_v8 = temp_v15 != 1;
        if (temp_v8) {
          temp_v15 = 1;
        }
        else {
          temp_v15 = 0;
        }
        temp_v15 = (unsigned int)temp_v8;
        if (temp_v16 != 2) {
          if (((*(unsigned short *)(temp_v11 + 0x3a) & 0xfff) == 0) && (*(char *)(temp_v11 + 0x4b) == '\0'))
          {
            temp_v18 = *(unsigned int *)(temp_v11 + 0x3c);
            if ((temp_v18 & 0x7f) != 0) {
              if (temp_v15 == 0) {
                temp_v1 = 0;
                temp_v3 = 4;
              }
              else {
                temp_v1 = 4;
                temp_v3 = 0x32;
              }
              temp_v7 = temp_v1 + temp_v3;
              if (temp_v1 < temp_v7) {
                do {
                  puVar8 = (unsigned int *)(*(int *)(*piVar3 + 0x1ffc) + temp_v1 * 0x408);
                  if (((*puVar8 & DAT_00571148) != 0 || (puVar8[1] & DAT_0057114c) != 0) &&
                     ((puVar8[1] & DAT_0057117c) == 0 && (*puVar8 & DAT_00571178) == 0)) {
                    temp_v4 = temp_v18 & 0x7f;
                    if (temp_v4 != 4) {
                      if (temp_v4 != 0x16) {
                        if (temp_v4 != 0x1c) {
                          if (temp_v4 != 0x1f) break;
                          temp_v0 = (unsigned short)puVar8[0x9d] & 0x220;
                        }
                        else {
                          temp_v0 = (unsigned short)puVar8[0x9d] & 0x39c0;
                        }
                        if (temp_v0 == 0) goto LAB_004e8e0c;
                        goto LAB_004e8dc0;
                      }
                      temp_v0 = (unsigned short)puVar8[0x9d] & 0x3be0;
                    }
                    else {
                      temp_v0 = (unsigned short)puVar8[0x9d] & 0x10;
                    }
                    if (temp_v0 != 0) goto LAB_004e8dc0;
                  }
LAB_004e8e0c:
                  temp_v1 = temp_v1 + 1;
                } while ((int)temp_v1 < (int)temp_v7);
              }
              goto LAB_004e8e58;
            }
          }
LAB_004e8dc0:
          temp_v0 = *(unsigned short *)(temp_v11 + 0x20);
          if (temp_v0 == 0x80) {
            temp_v0 = 0x51;
          }
          else if (temp_v0 == 0x81) {
            temp_v0 = 0x52;
          }
          else if (temp_v0 == 0x82) {
            temp_v0 = 0x54;
          }
          else if (temp_v0 == 0x83) {
            temp_v0 = 0x55;
          }
          puVar5 = temp_v9 + temp_v5;
          temp_v5 = temp_v5 + 1;
          *puVar5 = temp_v0;
        }
      }
    }
LAB_004e8e58:
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  if (temp_v10 != 0 || temp_v5 != 0) {
    if (temp_v5 != 0) {
      if ((temp_v10 == 0) || (temp_v1 = lcgRandomRange(99), temp_v1 >= 0x1e)) {
        temp_v2 = 0;
        temp_v13[3] = 0x57;
        temp_v13[0] = 0x520051;
        temp_v13[1] = 0x540053;
        temp_v13[2] = 0x560055;
        if (temp_v5 != 0) {
          do {
            temp_v1 = 0;
            do {
              if (*(unsigned short *)((int)temp_v13 + temp_v1 * 2) == temp_v9[temp_v2]) {
                temp_v6 = 0;
                if (temp_v5 != 0) {
                  do {
                    if (0 < (int)temp_v1) {
                      puVar8 = (unsigned int *)(temp_v12 + 2);
                      if (((temp_v1 & 1) != 0) &&
                         (puVar8 = temp_v13, (unsigned int)temp_v9[temp_v6] == (temp_v13[0] & 0xffff))) {
                        temp_v9[temp_v6] = 0;
                      }
                      temp_v3 = (int)temp_v1 >> 1;
                      if (temp_v3 != 0) {
                        puVar5 = temp_v9 + temp_v6;
                        do {
                          if (*puVar5 == *(unsigned short *)((int)puVar8 + 2)) {
                            *puVar5 = 0;
                          }
                          puVar8 = puVar8 + 1;
                          if (*puVar5 == (unsigned short)*puVar8) {
                            *puVar5 = 0;
                          }
                          temp_v3 = temp_v3 - 1;
                        } while (temp_v3 != 0);
                      }
                    }
                    temp_v6 = temp_v6 + 1;
                  } while (temp_v6 < (int)temp_v5);
                }
                break;
              }
              temp_v1 = temp_v1 + 1;
            } while ((int)temp_v1 < 7);
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (int)temp_v5);
        }
        qsort(temp_v9,temp_v5,2,&LAB_003d4e98);
        temp_v1 = 0;
        if (temp_v5 != 0) {
          do {
            if (temp_v9[temp_v1] == 0) {
              temp_v5 = temp_v1;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while ((int)temp_v1 < (int)temp_v5);
        }
        temp_v2 = 0;
        (*(unsigned char *)((unsigned char *)&temp_v11 + 0)) = 'Z';
        (*(unsigned char *)((unsigned char *)&temp_v11 + 1)) = '\0';
        (*(unsigned char *)((unsigned char *)&temp_v11 + 2)) = 'X';
        (*(unsigned char *)((unsigned char *)&temp_v11 + 3)) = '\0';
        temp_v12[0] = 'Y';
        temp_v12[1] = '\0';
        temp_v12[2] = '\\';
        temp_v12[3] = '\0';
        if (temp_v5 != 0) {
          temp_v10 = 0x59;
          temp_v14 = 0x5c;
          do {
            temp_v1 = (unsigned int)temp_v9[temp_v2];
            temp_v7 = (unsigned int)(temp_v1 != 0x5a);
            if ((((temp_v1 == 0x5a || temp_v1 == 0x58) || (temp_v7 = 2, temp_v10 == temp_v1)) ||
                (temp_v7 = 3, temp_v14 == temp_v1)) && (temp_v6 = 0, temp_v5 != 0)) {
              do {
                if (temp_v7 != 0) {
                  puVar8 = (unsigned int *)((int)&temp_v10 + 2);
                  if (((temp_v7 & 1) != 0) &&
                     (puVar8 = &temp_v11, (unsigned int)temp_v9[temp_v6] == (temp_v11 & 0xffff))) {
                    temp_v9[temp_v6] = 0;
                  }
                  temp_v3 = (int)temp_v7 >> 1;
                  if (temp_v3 != 0) {
                    puVar5 = temp_v9 + temp_v6;
                    do {
                      if (*puVar5 == *(unsigned short *)((int)puVar8 + 2)) {
                        *puVar5 = 0;
                      }
                      puVar8 = puVar8 + 1;
                      if (*puVar5 == (unsigned short)*puVar8) {
                        *puVar5 = 0;
                      }
                      temp_v3 = temp_v3 - 1;
                    } while (temp_v3 != 0);
                  }
                }
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < (int)temp_v5);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (int)temp_v5);
        }
        qsort(temp_v9,temp_v5,2,&LAB_003d4e98);
        temp_v1 = 0;
        if (temp_v5 != 0) {
          do {
            if (temp_v9[temp_v1] == 0) {
              temp_v5 = temp_v1;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while ((int)temp_v1 < (int)temp_v5);
        }
        temp_v2 = lcgRandomRange((temp_v5 - 1) & 0xffff);
        return (unsigned int)temp_v9[temp_v2];
      }
    }
    else if (temp_v10 == 0) {
      return temp_v14;
    }
    temp_v2 = lcgRandomRange((temp_v10 - 1) & 0xffff);
    temp_v14 = (unsigned int)temp_v9[temp_v2 + 8];
  }
  return temp_v14;
}

} /* extern "C" */
