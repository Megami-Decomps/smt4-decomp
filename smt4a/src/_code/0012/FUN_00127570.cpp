/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00127570` (_code @ 0x127570, 0xf92 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001286a0(int *, unsigned char *);
int FUN_0030d824(...);
int FUN_0030db5c(...);
int FUN_0030dd02(...);
int __aeabi_uidivmod(unsigned int, int);
int rt_memcpy(...);

/* stack frame of param_3: 19 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned char sp5D; /* 0x5d: local_5d */
    unsigned char sp5E; /* 0x5e: local_5e */
    unsigned char sp5F; /* 0x5f: local_5f */
    unsigned char sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned char LAB_00127f54; /* 0x127f54 */
extern unsigned char DAT_00544030; /* 0x544030 */
extern unsigned char DAT_00544830; /* 0x544830 */

/* Supplied declaration required: FUN_001286a0. */
extern int FUN_00128bdc(int *, unsigned char *);
/* Supplied declaration required: FUN_0030d824. */
/* Supplied declaration required: FUN_0030db5c. */
/* Supplied declaration required: FUN_0030dd02. */
/* Supplied declaration required: __aeabi_uidivmod. */
/* Supplied declaration required: rt_memcpy. */


int FUN_00127570(int *param_1,unsigned char *param_2,unsigned char *param_3)

{
/* irregular: 94 goto(s); 7 native warning(s); review required */
  int *piVar1;
  unsigned char *pbVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *pbVar11;
  unsigned int temp_v9;
  int temp_v10;
  unsigned short temp_v11;
  unsigned char *pbVar15;
  unsigned int temp_v12;
  unsigned char *pbVar17;
  int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned short temp_v18;
  unsigned char temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned char temp_v22;
  unsigned char *temp_v23;
  unsigned char *temp_v24;
  unsigned char *temp_v25;
  int temp_v26;
  unsigned char *temp_v27;
  unsigned char *temp_v28;
  unsigned char *temp_v29;
  unsigned char *temp_v30;
  unsigned char *temp_v31;
  int temp_v32;
  unsigned char *temp_v33;
  int *temp_v34;
  unsigned char *temp_v35;
  
  temp_v15 = param_1 == (int *)0x0;
  piVar1 = param_1;
  do {
    do {
      if (temp_v15) {
        return -2;
      }
      pbVar15 = (unsigned char *)piVar1[7];
      temp_v15 = 1;
    } while (pbVar15 == (unsigned char *)0x0);
    piVar1 = (int *)piVar1[3];
    temp_v15 = 1;
  } while (piVar1 == (int *)0x0);
  if ((*param_1 == 0) && (param_1[1] != 0)) {
    return -2;
  }
  if (*pbVar15 == 0xb) {
    *pbVar15 = 0xc;
  }
  temp_v25 = (unsigned char *)param_1[4];
  pbVar17 = (unsigned char *)param_1[1];
  temp_v29 = (unsigned char *)param_1[3];
  temp_v24 = (unsigned char *)*param_1;
  temp_v14 = *(unsigned int *)(pbVar15 + 0x38);
  temp_v12 = *(unsigned int *)(pbVar15 + 0x3c);
  temp_v32 = 0;
  temp_v30 = temp_v25;
  temp_v31 = pbVar17;
  temp_v34 = param_1;
  temp_v35 = param_2;
LAB_001275c2:
  pbVar2 = (unsigned char *)(unsigned int)*pbVar15;
  temp_v2 = temp_v12;
  switch((unsigned int)pbVar2) {
  case (unsigned int)0x0:
    pbVar2 = *(unsigned char **)(pbVar15 + 8);
    if (pbVar2 != (unsigned char *)0x0) {
      for (; temp_v12 < 0x10; temp_v12 = temp_v12 + 8) {
        temp_v17 = pbVar17 == (unsigned char *)0x0;
LAB_0012761c:
        if (temp_v17) goto LAB_0012840c;
        pbVar17 = pbVar17 + -1;
        temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
        temp_v24 = temp_v24 + 1;
      }
      if ((-1 < (int)pbVar2 << 0x1e) || (temp_v14 != 0x8b1f)) {
        *(unsigned int *)(pbVar15 + 0x10) = 0;
        if (*(int *)(pbVar15 + 0x20) != 0) {
          *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 0x30) = 0xffffffff;
        }
        if (((*(unsigned int *)(pbVar15 + 8) & 1) != 0) &&
           (__aeabi_uidivmod((temp_v14 & 0xff) * 0x100 + (temp_v14 >> 8),0x1f), temp_v7 == 0)) {
          if ((temp_v14 & 0xf) != 8) {
            param_3 = (unsigned char *)0x127a50;
            break;
          }
          temp_v14 = temp_v14 >> 4;
          temp_v12 = temp_v12 - 4;
          temp_v2 = (temp_v14 & 0xf) + 8;
          if (*(unsigned int *)(pbVar15 + 0x24) != 0) {
            if (*(unsigned int *)(pbVar15 + 0x24) < temp_v2) {
              param_3 = (unsigned char *)0x127a6c;
              break;
            }
          }
          else {
            *(unsigned int *)(pbVar15 + 0x24) = temp_v2;
          }
          *(int *)(pbVar15 + 0x14) = 1 << temp_v2;
          temp_v3 = FUN_0030db5c(0,0);
          *(int *)(pbVar15 + 0x18) = temp_v3;
          param_3 = (unsigned char *)(temp_v14 << 0x16);
          temp_v34[0xc] = temp_v3;
          if ((int)param_3 < 0) {
            temp_v6 = 9;
          }
          else {
            temp_v6 = 0xb;
          }
          temp_v12 = 0;
          temp_v14 = temp_v12;
          goto LAB_0012830e;
        }
        param_3 = (unsigned char *)0x127a38;
        goto LAB_001279cc;
      }
      temp_v0 = 0;
      FUN_0030dd02(0,0);
      *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
      temp_v19 = 0x1f;
      temp_v20 = 0x8b;
      temp_v0 = *(unsigned int *)(pbVar15 + 0x18);
      param_3 = (unsigned char *)0x2;
      FUN_0030dd02(temp_v0,&temp_v19);
      temp_v14 = 0;
      temp_v6 = 1;
      temp_v12 = 0;
      *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
      goto LAB_001283f4;
    }
    temp_v6 = 0xc;
    goto LAB_0012830e;
  case (unsigned int)0x1:
    for (; temp_v12 < 0x10; temp_v12 = temp_v12 + 8) {
      temp_v15 = pbVar17 == (unsigned char *)0x0;
LAB_001276e0:
      temp_v17 = 1;
      if (temp_v15) goto LAB_0012761c;
      pbVar17 = pbVar17 + -1;
      temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
      pbVar2 = temp_v24 + 1;
      temp_v24 = pbVar2;
    }
    *(unsigned int *)(pbVar15 + 0x10) = temp_v14;
    if ((temp_v14 & 0xff) != 8) {
      param_3 = (unsigned char *)0x127a50;
    }
    else {
      if ((temp_v14 & 0xffff) >> 0xd == 0) {
        if (*(unsigned int **)(pbVar15 + 0x20) != (unsigned int *)0x0) {
          **(unsigned int **)(pbVar15 + 0x20) = (temp_v14 & 0x1ff) >> 8;
        }
        if (*(int *)(pbVar15 + 0x10) << 0x16 < 0) {
          temp_v19 = (unsigned char)temp_v14;
          temp_v20 = (unsigned char)(temp_v14 >> 8);
          temp_v0 = *(unsigned int *)(pbVar15 + 0x18);
          FUN_0030dd02(temp_v0,&temp_v19,2);
          *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
        }
        temp_v14 = 0;
        pbVar2 = (unsigned char *)0x2;
        temp_v12 = 0;
        *pbVar15 = 2;
        do {
          temp_v17 = pbVar17 == (unsigned char *)0x0;
LAB_0012773c:
          temp_v15 = 1;
          if (temp_v17) goto LAB_001276e0;
          pbVar17 = pbVar17 + -1;
          temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
          pbVar2 = temp_v24 + 1;
          temp_v12 = temp_v12 + 8;
          temp_v24 = pbVar2;
LAB_00127750:
          if (temp_v12 >= 0x20) {
            if (*(int *)(pbVar15 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 4) = temp_v14;
            }
            if (*(int *)(pbVar15 + 0x10) << 0x16 < 0) {
              temp_v19 = (unsigned char)temp_v14;
              temp_v20 = (unsigned char)(temp_v14 >> 8);
              temp_v21 = (unsigned char)(temp_v14 >> 0x10);
              temp_v22 = (unsigned char)(temp_v14 >> 0x18);
              temp_v0 = *(unsigned int *)(pbVar15 + 0x18);
              FUN_0030dd02(temp_v0,&temp_v19,4);
              *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
            }
            temp_v14 = 0;
            pbVar2 = (unsigned char *)0x3;
            temp_v12 = 0;
            *pbVar15 = 3;
            pbVar11 = pbVar17;
            do {
              temp_v15 = 1;
              pbVar17 = (unsigned char *)0x0;
              if (pbVar11 == (unsigned char *)0x0) goto LAB_001276e0;
              pbVar17 = pbVar11 + -1;
              temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
              pbVar2 = temp_v24 + 1;
              temp_v12 = temp_v12 + 8;
              temp_v24 = pbVar2;
LAB_0012779c:
              pbVar11 = pbVar17;
            } while (temp_v12 < 0x10);
            if (*(int *)(pbVar15 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 8) = temp_v14 & 0xff;
              *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 0xc) = temp_v14 >> 8;
            }
            if (*(int *)(pbVar15 + 0x10) << 0x16 < 0) {
              temp_v20 = (unsigned char)(temp_v14 >> 8);
              temp_v0 = *(unsigned int *)(pbVar15 + 0x18);
              temp_v19 = (char)temp_v14;
              FUN_0030dd02(temp_v0,&temp_v19,2);
              *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
            }
            temp_v14 = 0;
            temp_v12 = 0;
            *pbVar15 = 4;
LAB_001277d2:
            pbVar2 = (unsigned char *)(*(int *)(pbVar15 + 0x10) << 0x15);
            if ((int)pbVar2 < 0) goto LAB_001277f0;
            if (*(int *)(pbVar15 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 0x10) = 0;
            }
LAB_00127828:
            *pbVar15 = 5;
LAB_0012782c:
            if (-1 < *(int *)(pbVar15 + 0x10) << 0x15) goto LAB_00127896;
            pbVar2 = *(unsigned char **)(pbVar15 + 0x40);
            temp_v23 = pbVar2;
            if (pbVar17 < pbVar2) {
              temp_v23 = pbVar17;
            }
            if (temp_v23 != (unsigned char *)0x0) {
              temp_v3 = *(int *)(pbVar15 + 0x20);
              if ((temp_v3 != 0) && (*(int *)(temp_v3 + 0x10) != 0)) {
                temp_v13 = *(int *)(temp_v3 + 0x14) - (int)pbVar2;
                pbVar2 = temp_v23;
                if (*(unsigned char **)(temp_v3 + 0x18) < temp_v23 + temp_v13) {
                  pbVar2 = *(unsigned char **)(temp_v3 + 0x18) + -temp_v13;
                }
                rt_memcpy(*(int *)(temp_v3 + 0x10) + temp_v13,temp_v24,pbVar2);
              }
              if (*(int *)(pbVar15 + 0x10) << 0x16 < 0) {
                temp_v0 = *(unsigned int *)(pbVar15 + 0x18);
                FUN_0030dd02(temp_v0,temp_v24,temp_v23);
                *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
              }
              pbVar17 = pbVar17 + -(int)temp_v23;
              temp_v24 = temp_v24 + (int)temp_v23;
              temp_v3 = *(int *)(pbVar15 + 0x40) - (int)temp_v23;
              *(int *)(pbVar15 + 0x40) = temp_v3;
            }
            else {
              temp_v3 = *(int *)(pbVar15 + 0x40);
            }
            temp_v15 = temp_v3 == 0;
            while (temp_v15) {
LAB_00127896:
              *(unsigned int *)(pbVar15 + 0x40) = 0;
              *pbVar15 = 6;
LAB_0012789e:
              temp_v28 = *(unsigned char **)(pbVar15 + 0x10);
              pbVar2 = (unsigned char *)((int)temp_v28 << 0x14);
              if (-1 < (int)pbVar2) {
                if (*(int *)(pbVar15 + 0x20) != 0) {
                  *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 0x1c) = 0;
                }
                goto LAB_00127918;
              }
              temp_v15 = pbVar17 == (unsigned char *)0x0;
LAB_001278a8:
              temp_v16 = 1;
              if (temp_v15) goto LAB_001277dc;
              temp_v23 = (unsigned char *)0x0;
              temp_v3 = *(int *)(pbVar15 + 0x20);
              do {
                temp_v6 = temp_v24[(int)temp_v23];
                temp_v27 = (unsigned char *)(unsigned int)temp_v6;
                temp_v23 = temp_v23 + 1;
                if (((temp_v3 != 0) && (temp_v13 = *(int *)(temp_v3 + 0x1c), temp_v13 != 0)) &&
                   (temp_v2 = *(unsigned int *)(pbVar15 + 0x40), temp_v2 < *(unsigned int *)(temp_v3 + 0x20))) {
                  *(unsigned int *)(pbVar15 + 0x40) = temp_v2 + 1;
                  *(unsigned char *)(temp_v13 + temp_v2) = temp_v6;
                }
              } while ((temp_v27 != (unsigned char *)0x0) && (temp_v23 < pbVar17));
              if ((int)temp_v28 << 0x16 < 0) {
                temp_v0 = *(unsigned int *)(pbVar15 + 0x18);
                FUN_0030dd02(temp_v0,temp_v24,temp_v23);
                *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
              }
              pbVar17 = pbVar17 + -(int)temp_v23;
              temp_v24 = temp_v24 + (int)temp_v23;
              temp_v17 = temp_v27 == (unsigned char *)0x0;
              while (temp_v15 = 0, temp_v17) {
LAB_00127918:
                *(unsigned int *)(pbVar15 + 0x40) = 0;
                *pbVar15 = 7;
LAB_00127920:
                temp_v28 = *(unsigned char **)(pbVar15 + 0x10);
                pbVar2 = (unsigned char *)((int)temp_v28 << 0x13);
                if (-1 < (int)pbVar2) {
                  if (*(int *)(pbVar15 + 0x20) == 0) goto LAB_0012799c;
                  *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 0x24) = 0;
                  goto LAB_0012799c;
                }
                temp_v17 = pbVar17 == (unsigned char *)0x0;
LAB_0012792a:
                while( 1 ) {
                  temp_v15 = 1;
                  if (temp_v17) goto LAB_001278a8;
                  temp_v23 = (unsigned char *)0x0;
                  temp_v3 = *(int *)(pbVar15 + 0x20);
                  do {
                    temp_v6 = temp_v24[(int)temp_v23];
                    temp_v27 = (unsigned char *)(unsigned int)temp_v6;
                    temp_v23 = temp_v23 + 1;
                    if (((temp_v3 != 0) && (temp_v13 = *(int *)(temp_v3 + 0x24), temp_v13 != 0)) &&
                       (temp_v2 = *(unsigned int *)(pbVar15 + 0x40), temp_v2 < *(unsigned int *)(temp_v3 + 0x28))) {
                      *(unsigned int *)(pbVar15 + 0x40) = temp_v2 + 1;
                      *(unsigned char *)(temp_v13 + temp_v2) = temp_v6;
                    }
                  } while ((temp_v27 != (unsigned char *)0x0) && (temp_v23 < pbVar17));
                  if ((int)temp_v28 << 0x16 < 0) {
                    temp_v0 = *(unsigned int *)(pbVar15 + 0x18);
                    FUN_0030dd02(temp_v0,temp_v24,temp_v23);
                    *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
                  }
                  pbVar17 = pbVar17 + -(int)temp_v23;
                  temp_v24 = temp_v24 + (int)temp_v23;
                  temp_v17 = temp_v27 == (unsigned char *)0x0;
                  if (!temp_v17) break;
LAB_0012799c:
                  *pbVar15 = 8;
LAB_001279a0:
                  pbVar2 = *(unsigned char **)(pbVar15 + 0x10);
                  if (-1 < (int)pbVar2 << 0x16) {
LAB_001279d8:
                    if (*(int *)(pbVar15 + 0x20) != 0) {
                      *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 0x2c) = ((unsigned int)pbVar2 & 0x3ff) >> 9;
                      *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 0x30) = 1;
                    }
                    temp_v3 = 0;
                    FUN_0030dd02(0,0);
                    *(int *)(pbVar15 + 0x18) = temp_v3;
                    temp_v34[0xc] = temp_v3;
                    goto LAB_00128118;
                  }
                  while( 1 ) {
                    if (temp_v12 >= 0x10) {
                      if ((*(unsigned int *)(pbVar15 + 0x18) & 0xffff) == temp_v14) {
                        temp_v14 = 0;
                        temp_v12 = 0;
                        goto LAB_001279d8;
                      }
                      param_3 = (unsigned char *)0x127a9c;
                      goto LAB_001279cc;
                    }
                    temp_v17 = 1;
                    if (pbVar17 == (unsigned char *)0x0) break;
                    pbVar17 = pbVar17 + -1;
                    temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
                    temp_v24 = temp_v24 + 1;
                    temp_v12 = temp_v12 + 8;
                  }
                }
              }
            }
            goto LAB_0012840c;
          }
        } while( 1 );
      }
      param_3 = (unsigned char *)0x127a80;
    }
    break;
  case (unsigned int)0x2:
    goto LAB_00127750;
  case (unsigned int)0x3:
    goto LAB_0012779c;
  case (unsigned int)0x4:
    goto LAB_001277d2;
  case (unsigned int)0x5:
    goto LAB_0012782c;
  case (unsigned int)0x6:
    goto LAB_0012789e;
  case (unsigned int)0x7:
    goto LAB_00127920;
  case (unsigned int)0x8:
    goto LAB_001279a0;
  case (unsigned int)0x9:
    do {
      if (temp_v12 < 0x20) {
        temp_v15 = pbVar17 == (unsigned char *)0x0;
      }
      else {
        temp_v3 = (temp_v14 >> 0x18) + ((temp_v14 >> 8) & 0xff00) + (temp_v14 & 0xff00) * 0x100 +
                temp_v14 * 0x1000000;
        temp_v14 = 0;
        temp_v12 = 0;
        *(int *)(pbVar15 + 0x18) = temp_v3;
        temp_v34[0xc] = temp_v3;
        *pbVar15 = 10;
LAB_00127aba:
        if (*(int *)(pbVar15 + 0xc) == 0) {
          temp_v34[3] = (int)temp_v29;
          temp_v34[4] = (int)temp_v25;
          *temp_v34 = (int)temp_v24;
          temp_v34[1] = (int)pbVar17;
          *(unsigned int *)(pbVar15 + 0x38) = temp_v14;
          *(unsigned int *)(pbVar15 + 0x3c) = temp_v12;
          return 2;
        }
        temp_v3 = FUN_0030db5c(0,0);
        *(int *)(pbVar15 + 0x18) = temp_v3;
        param_3 = (unsigned char *)0xb;
        temp_v34[0xc] = temp_v3;
        *pbVar15 = 0xb;
LAB_00127ad4:
        temp_v15 = temp_v35 == (unsigned char *)0x5;
        pbVar2 = temp_v35;
LAB_00127ad8:
        if ((!temp_v15) && (temp_v15 = pbVar2 == (unsigned char *)0x6, !temp_v15)) {
LAB_00127ade:
          pbVar2 = (unsigned char *)0x0;
          if (*(int *)(pbVar15 + 4) == 0) {
            do {
              if (temp_v12 >= 3) {
                param_3 = (unsigned char *)((temp_v14 >> 1) & 3);
                *(unsigned int *)(pbVar15 + 4) = temp_v14 & 1;
                if (param_3 != (unsigned char *)0x0) {
                  if (param_3 != (unsigned char *)0x1) {
                    if (param_3 != (unsigned char *)0x2) {
                      if (param_3 == (unsigned char *)0x3) {
                        temp_v34[6] = (int)&LAB_00127f54;
                        *pbVar15 = 0x1d;
                        param_3 = (unsigned char *)0x1d;
                      }
                    }
                    else {
                      temp_v6 = 0x10;
                      *pbVar15 = temp_v6;
                    }
                  }
                  else {
                    *(unsigned char **)(pbVar15 + 0x4c) = &DAT_00544030;
                    *(unsigned char **)(pbVar15 + 0x50) = &DAT_00544830;
                    *(unsigned int *)(pbVar15 + 0x58) = 5;
                    *(unsigned int *)(pbVar15 + 0x54) = 9;
                    *pbVar15 = 0x13;
                    param_3 = temp_v35;
                    if (temp_v35 == (unsigned char *)0x6) {
                      temp_v14 = temp_v14 >> 3;
                      temp_v12 = temp_v12 - 3;
                      goto LAB_0012840c;
                    }
                  }
                }
                else {
                  temp_v6 = 0xd;
                  *pbVar15 = temp_v6;
                }
                temp_v14 = temp_v14 >> 3;
                temp_v12 = temp_v12 - 3;
                goto LAB_001275c2;
              }
              temp_v15 = 1;
              if (pbVar17 == (unsigned char *)0x0) goto LAB_00127ad8;
              pbVar17 = pbVar17 + -1;
              temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
              pbVar2 = temp_v24 + 1;
              temp_v12 = temp_v12 + 8;
              temp_v24 = pbVar2;
            } while( 1 );
          }
          temp_v2 = temp_v12 & 7;
          temp_v12 = temp_v12 - temp_v2;
          temp_v6 = 0x1a;
          temp_v14 = temp_v14 >> temp_v2;
          goto LAB_0012830e;
        }
      }
      temp_v17 = 1;
      if (temp_v15) goto LAB_0012792a;
      pbVar17 = pbVar17 + -1;
      temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
      pbVar2 = temp_v24 + 1;
      temp_v12 = temp_v12 + 8;
      temp_v24 = pbVar2;
    } while( 1 );
  case (unsigned int)0xa:
    goto LAB_00127aba;
  case (unsigned int)0xb:
    goto LAB_00127ad4;
  case (unsigned int)0xc:
    goto LAB_00127ade;
  case (unsigned int)0xd:
    temp_v14 = temp_v14 >> (temp_v12 & 7);
    for (temp_v12 = temp_v12 - (temp_v12 & 7); temp_v12 < 0x20; temp_v12 = temp_v12 + 8) {
      temp_v17 = pbVar17 == (unsigned char *)0x0;
LAB_00127b8e:
      if (temp_v17) goto LAB_0012840c;
      pbVar17 = pbVar17 + -1;
      temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
      temp_v24 = temp_v24 + 1;
    }
    param_3 = (unsigned char *)0xffff;
    if ((temp_v14 & 0xffff) == ((temp_v14 >> 0x10) ^ 0xffff)) {
      *(unsigned int *)(pbVar15 + 0x40) = temp_v14 & 0xffff;
      temp_v12 = 0;
      temp_v2 = 0;
      *pbVar15 = 0xe;
      temp_v14 = temp_v12;
      if (temp_v35 != (unsigned char *)0x6) goto LAB_00127bc6;
      goto LAB_0012840c;
    }
    param_3 = (unsigned char *)0x127f6c;
    break;
  case (unsigned int)0xe:
LAB_00127bc6:
    *pbVar15 = 0xf;
    temp_v12 = temp_v2;
  case (unsigned int)0xf:
    temp_v23 = *(unsigned char **)(pbVar15 + 0x40);
    if (temp_v23 != (unsigned char *)0x0) {
      if (pbVar17 < temp_v23) {
        temp_v23 = pbVar17;
      }
      if (temp_v25 < temp_v23) {
        temp_v23 = temp_v25;
      }
      if (temp_v23 == (unsigned char *)0x0) goto LAB_0012840c;
      rt_memcpy(temp_v29,temp_v24,temp_v23);
      pbVar17 = pbVar17 + -(int)temp_v23;
      temp_v24 = temp_v24 + (int)temp_v23;
      temp_v25 = temp_v25 + -(int)temp_v23;
      temp_v29 = temp_v29 + (int)temp_v23;
      *(int *)(pbVar15 + 0x40) = *(int *)(pbVar15 + 0x40) - (int)temp_v23;
      param_3 = temp_v23;
    }
    else {
      temp_v6 = 0xb;
      *pbVar15 = temp_v6;
    }
    goto LAB_001275c2;
  case (unsigned int)0x10:
    for (; temp_v12 < 0xe; temp_v12 = temp_v12 + 8) {
      if (pbVar17 == (unsigned char *)0x0) goto LAB_0012840c;
      pbVar17 = pbVar17 + -1;
      temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
      temp_v24 = temp_v24 + 1;
    }
    temp_v1 = temp_v14 >> 10;
    temp_v9 = ((temp_v14 >> 5) & 0x1f) + 1;
    temp_v2 = (temp_v14 & 0x1f) + 0x101;
    *(unsigned int *)(pbVar15 + 100) = temp_v9;
    temp_v14 = temp_v14 >> 0xe;
    temp_v12 = temp_v12 - 0xe;
    *(unsigned int *)(pbVar15 + 0x60) = temp_v2;
    *(unsigned int *)(pbVar15 + 0x5c) = (temp_v1 & 0xf) + 4;
    if ((temp_v2 < 0x11f) && (temp_v9 < 0x1f)) {
      *(unsigned int *)(pbVar15 + 0x68) = 0;
      *pbVar15 = 0x11;
      goto LAB_00127c6c;
    }
    param_3 = (unsigned char *)0x127f8c;
    break;
  case (unsigned int)0x11:
    goto LAB_00127c6c;
  case (unsigned int)0x12:
    goto LAB_00127e4a;
  case (unsigned int)0x13:
LAB_00127ee6:
    *pbVar15 = 0x14;
  case (unsigned int)0x14:
    if ((pbVar17 < (unsigned char *)0x6) || (temp_v25 < (unsigned char *)0x102)) {
      temp_v27 = pbVar15 + 0x1bc0;
      temp_v26 = 0;
      *(unsigned int *)(pbVar15 + 0x1bc4) = 0;
      param_3 = *(unsigned char **)(pbVar15 + 0x4c);
      temp_v2 = (1 << (*(unsigned int *)(pbVar15 + 0x54) & 0xff)) - 1;
LAB_0012805c:
      temp_v9 = *(unsigned int *)(param_3 + (temp_v2 & temp_v14) * 4);
      temp_v6 = (unsigned char)(temp_v9 >> 8);
      if (temp_v12 < temp_v6) {
        temp_v15 = pbVar17 == (unsigned char *)0x0;
      }
      else {
        if (((unsigned char)temp_v9 != 0) && ((unsigned char)((unsigned char)temp_v9 >> 4) == 0)) {
          temp_v1 = temp_v9 & 0xff;
          temp_v8 = (unsigned int)temp_v6;
          temp_v33 = (unsigned char *)(temp_v9 >> 0x10);
          while( 1 ) {
            temp_v9 = *(unsigned int *)(param_3 +
                              (int)(temp_v33 +
                                   ((((1 << ((temp_v8 + temp_v1) & 0xff)) - 1U) & temp_v14) >> temp_v8)) *
                              4);
            temp_v2 = temp_v8 + ((temp_v9 >> 8) & 0xff);
            if (temp_v2 <= temp_v12) break;
            temp_v15 = 1;
            if (pbVar17 == (unsigned char *)0x0) goto LAB_00128072;
            pbVar17 = pbVar17 + -1;
            temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
            temp_v24 = temp_v24 + 1;
            temp_v12 = temp_v12 + 8;
          }
          temp_v14 = temp_v14 >> temp_v8;
          temp_v12 = temp_v12 - temp_v8;
          *(unsigned int *)(temp_v27 + 4) = temp_v26 + temp_v8;
        }
        temp_v2 = (temp_v9 >> 8) & 0xff;
        temp_v14 = temp_v14 >> temp_v2;
        temp_v12 = temp_v12 - temp_v2;
        *(unsigned int *)(temp_v27 + 4) = *(int *)(temp_v27 + 4) + temp_v2;
        *(unsigned int *)(pbVar15 + 0x40) = temp_v9 >> 0x10;
        if ((temp_v9 & 0xff) == 0) {
          temp_v6 = 0x19;
          goto LAB_0012830e;
        }
        if ((int)(temp_v9 << 0x1a) < 0) {
          *(unsigned int *)(temp_v27 + 4) = 0xffffffffU;
LAB_00128118:
          param_3 = (unsigned char *)0xb;
          *pbVar15 = 0xb;
          goto LAB_001275c2;
        }
        if ((int)(temp_v9 << 0x19) < 0) {
          param_3 = (unsigned char *)0x128504;
          break;
        }
        *(unsigned int *)(pbVar15 + 0x48) = temp_v9 & 0xf;
        *pbVar15 = 0x15;
LAB_00128132:
        temp_v2 = *(unsigned int *)(pbVar15 + 0x48);
        if (temp_v2 == 0) goto LAB_00128176;
        while( 1 ) {
          if (temp_v2 <= temp_v12) {
            temp_v9 = ((1 << (temp_v2 & 0xff)) - 1U) & temp_v14;
            temp_v14 = temp_v14 >> (temp_v2 & 0xff);
            temp_v12 = temp_v12 - temp_v2;
            *(unsigned int *)(pbVar15 + 0x40) = *(int *)(pbVar15 + 0x40) + temp_v9;
            *(unsigned int *)(pbVar15 + 0x1bc4) = *(int *)(pbVar15 + 0x1bc4) + temp_v2;
            goto LAB_00128176;
          }
          temp_v15 = 1;
          if (pbVar17 == (unsigned char *)0x0) break;
          pbVar17 = pbVar17 + -1;
          temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
          temp_v24 = temp_v24 + 1;
          temp_v12 = temp_v12 + 8;
        }
      }
LAB_00128072:
      if (temp_v15) goto LAB_0012840c;
      pbVar17 = pbVar17 + -1;
      temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
      temp_v24 = temp_v24 + 1;
      temp_v12 = temp_v12 + 8;
      goto LAB_0012805c;
    }
    temp_v34[3] = (int)temp_v29;
    temp_v34[4] = (int)temp_v25;
    *temp_v34 = (int)temp_v24;
    temp_v34[1] = (int)pbVar17;
    *(unsigned int *)(pbVar15 + 0x38) = temp_v14;
    *(unsigned int *)(pbVar15 + 0x3c) = temp_v12;
    FUN_001286a0(temp_v34,temp_v30);
    temp_v29 = (unsigned char *)temp_v34[3];
    temp_v25 = (unsigned char *)temp_v34[4];
    temp_v24 = (unsigned char *)*temp_v34;
    temp_v14 = *(unsigned int *)(pbVar15 + 0x38);
    temp_v12 = *(unsigned int *)(pbVar15 + 0x3c);
    pbVar17 = (unsigned char *)temp_v34[1];
    if (*pbVar15 == 0xb) {
      *(unsigned int *)(pbVar15 + 0x1bc4) = 0xffffffffU;
    }
    goto LAB_001275c2;
  case (unsigned int)0x15:
    goto LAB_00128132;
  case (unsigned int)0x16:
    goto LAB_00128184;
  case (unsigned int)0x17:
    goto LAB_00128246;
  case (unsigned int)0x18:
    goto LAB_0012828a;
  case (unsigned int)0x19:
    if (temp_v25 != (unsigned char *)0x0) {
      *temp_v29 = (unsigned char)*(unsigned int *)(pbVar15 + 0x40);
      temp_v29 = temp_v29 + 1;
      temp_v25 = temp_v25 + -1;
      goto LAB_0012830c;
    }
    goto LAB_0012840c;
  case (unsigned int)0x1a:
    if (*(int *)(pbVar15 + 8) != 0) {
      for (; temp_v12 < 0x20; temp_v12 = temp_v12 + 8) {
        if (pbVar17 == (unsigned char *)0x0) goto LAB_0012840c;
        pbVar17 = pbVar17 + -1;
        temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
        temp_v24 = temp_v24 + 1;
      }
      temp_v3 = (int)temp_v30 - (int)temp_v25;
      temp_v34[5] = temp_v34[5] + temp_v3;
      *(int *)(pbVar15 + 0x1c) = *(int *)(pbVar15 + 0x1c) + temp_v3;
      if (temp_v3 != 0) {
        if (*(int *)(pbVar15 + 0x10) != 0) {
          temp_v13 = *(int *)(pbVar15 + 0x18);
          FUN_0030dd02(temp_v13,(int)temp_v29 - temp_v3);
        }
        else {
          temp_v13 = FUN_0030db5c(*(unsigned int *)(pbVar15 + 0x18),(int)temp_v29 - temp_v3);
        }
        *(int *)(pbVar15 + 0x18) = temp_v13;
        temp_v34[0xc] = temp_v13;
      }
      temp_v30 = temp_v25;
      temp_v2 = temp_v14;
      if (*(int *)(pbVar15 + 0x10) == 0) {
        temp_v2 = (temp_v14 >> 0x18) + ((temp_v14 >> 8) & 0xff00) + (temp_v14 & 0xff00) * 0x100 +
                temp_v14 * 0x1000000;
      }
      if (temp_v2 != *(unsigned int *)(pbVar15 + 0x18)) {
        param_3 = (unsigned char *)0x128558;
        break;
      }
      temp_v14 = 0;
      temp_v12 = 0;
    }
    *pbVar15 = 0x1b;
  case (unsigned int)0x1b:
    if ((*(int *)(pbVar15 + 8) != 0) && (*(int *)(pbVar15 + 0x10) != 0)) {
      for (; temp_v12 < 0x20; temp_v12 = temp_v12 + 8) {
        if (pbVar17 == (unsigned char *)0x0) goto LAB_0012840c;
        pbVar17 = pbVar17 + -1;
        temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
        temp_v24 = temp_v24 + 1;
      }
      if (*(unsigned int *)(pbVar15 + 0x1c) != temp_v14) {
        param_3 = (unsigned char *)0x128570;
        break;
      }
      temp_v14 = 0;
      temp_v12 = 0;
    }
    *pbVar15 = 0x1c;
  case (unsigned int)0x1c:
    temp_v32 = 1;
LAB_0012840c:
    temp_v34[3] = (int)temp_v29;
    temp_v34[4] = (int)temp_v25;
    *temp_v34 = (int)temp_v24;
    temp_v34[1] = (int)pbVar17;
    *(unsigned int *)(pbVar15 + 0x38) = temp_v14;
    *(unsigned int *)(pbVar15 + 0x3c) = temp_v12;
    if (((*(int *)(pbVar15 + 0x28) != 0) ||
        ((0x19 >= *pbVar15 && ((unsigned char *)temp_v34[4] != temp_v30)))) &&
       (temp_v3 = FUN_00128bdc(temp_v34,temp_v30), temp_v3 != 0)) {
      *pbVar15 = 0x1e;
      temp_v32 = -4;
    }
    else {
      temp_v13 = (int)temp_v31 - temp_v34[1];
      temp_v3 = (int)temp_v30 - temp_v34[4];
      temp_v34[2] = temp_v34[2] + temp_v13;
      temp_v34[5] = temp_v34[5] + temp_v3;
      *(int *)(pbVar15 + 0x1c) = *(int *)(pbVar15 + 0x1c) + temp_v3;
      if ((*(int *)(pbVar15 + 8) != 0) && (temp_v3 != 0)) {
        if (*(int *)(pbVar15 + 0x10) != 0) {
          temp_v4 = *(int *)(pbVar15 + 0x18);
          FUN_0030dd02(temp_v4,temp_v34[3] - temp_v3,temp_v3);
        }
        else {
          temp_v4 = FUN_0030db5c(*(unsigned int *)(pbVar15 + 0x18),temp_v34[3] - temp_v3,temp_v3);
        }
        *(int *)(pbVar15 + 0x18) = temp_v4;
        temp_v34[0xc] = temp_v4;
      }
      if (*(int *)(pbVar15 + 4) == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = 0x40;
      }
      temp_v6 = *pbVar15;
      if ((temp_v6 == 0x13) || (temp_v6 == 0xe)) {
        temp_v10 = 0x100;
      }
      else {
        temp_v10 = 0;
      }
      if (temp_v6 == 0xb) {
        temp_v5 = 0x80;
      }
      else {
        temp_v5 = 0;
      }
      temp_v34[0xb] = *(int *)(pbVar15 + 0x3c) + temp_v4 + temp_v10 + temp_v5;
      if (((temp_v13 == 0 && temp_v3 == 0) || (temp_v35 == (unsigned char *)0x4)) && (temp_v32 == 0)) {
        temp_v32 = -5;
      }
    }
    return temp_v32;
  case (unsigned int)0x1d:
    temp_v32 = -3;
    goto LAB_0012840c;
  case (unsigned int)0x1e:
    temp_v32 = -4;
    return temp_v32;
  default:
    return -2;
  }
LAB_001283ee:
  temp_v6 = 0x1d;
  temp_v34[6] = (int)param_3;
LAB_001283f4:
  *pbVar15 = temp_v6;
  goto LAB_001275c2;
LAB_00127c6c:
  temp_v2 = 0x5448b0;
LAB_00127c70:
  temp_v9 = *(unsigned int *)(pbVar15 + 0x68);
  if (temp_v9 < *(unsigned int *)(pbVar15 + 0x5c)) goto LAB_00127c90;
  while (temp_v9 = *(unsigned int *)(pbVar15 + 0x68), temp_v9 < 0x13) {
    *(unsigned int *)(pbVar15 + 0x68) = temp_v9 + 1;
    temp_v18 = *(unsigned short *)(temp_v2 + temp_v9 * 2);
    (pbVar15 + (unsigned int)temp_v18 * 2 + 0x70)[0] = 0;
    (pbVar15 + (unsigned int)temp_v18 * 2 + 0x70)[1] = 0;
  }
  *(unsigned char **)(pbVar15 + 0x4c) = pbVar15 + 0x530;
  *(unsigned int *)(pbVar15 + 0x54) = 7;
  *(unsigned char **)(pbVar15 + 0x6c) = pbVar15 + 0x530;
  temp_v3 = 0;
  FUN_0030d824(0,pbVar15 + 0x70,0x13,pbVar15 + 0x6c,pbVar15 + 0x54,pbVar15 + 0x2f0);
  temp_v32 = temp_v3;
  if (temp_v3 == 0) {
    *(unsigned int *)(pbVar15 + 0x68) = 0;
    *pbVar15 = 0x12;
LAB_00127e4a:
    temp_v28 = *(unsigned char **)(pbVar15 + 0x68);
    param_3 = *(unsigned char **)(pbVar15 + 0x60);
    temp_v33 = param_3 + *(int *)(pbVar15 + 100);
    if (temp_v33 <= temp_v28) {
      if (*pbVar15 == 0x1d) goto LAB_001275c2;
      if (*(short *)(pbVar15 + 0x270) == 0) {
        param_3 = (unsigned char *)0x128004;
        goto LAB_001279cc;
      }
      *(unsigned char **)(pbVar15 + 0x4c) = pbVar15 + 0x530;
      *(unsigned char **)(pbVar15 + 0x6c) = pbVar15 + 0x530;
      temp_v27 = pbVar15 + 0x2f0;
      *(unsigned int *)(pbVar15 + 0x54) = 9;
      temp_v23 = pbVar15 + 0x6c;
      temp_v3 = 1;
      FUN_0030d824(1,pbVar15 + 0x70,param_3,temp_v23,pbVar15 + 0x54,temp_v27);
      temp_v32 = temp_v3;
      if (temp_v3 != 0) {
        param_3 = (unsigned char *)0x127fe8;
      }
      else {
        *(unsigned int *)(pbVar15 + 0x50) = *(unsigned int *)(pbVar15 + 0x6c);
        *(unsigned int *)(pbVar15 + 0x58) = 6;
        param_3 = *(unsigned char **)(pbVar15 + 100);
        temp_v3 = 2;
        FUN_0030d824(2,pbVar15 + *(int *)(pbVar15 + 0x60) * 2 + 0x70,param_3,temp_v23,pbVar15 + 0x58
                     ,temp_v27);
        temp_v32 = temp_v3;
        if (temp_v3 == 0) {
          *pbVar15 = 0x13;
          if (temp_v35 == (unsigned char *)0x6) goto LAB_0012840c;
          goto LAB_00127ee6;
        }
        param_3 = (unsigned char *)0x12802c;
      }
      goto LAB_001283ee;
    }
    pbVar2 = *(unsigned char **)(pbVar15 + 0x4c);
    temp_v9 = (1 << (*(unsigned int *)(pbVar15 + 0x54) & 0xff)) - 1;
LAB_00127d0e:
    temp_v2 = (*(unsigned int *)(pbVar2 + (temp_v9 & temp_v14) * 4) >> 8) & 0xff;
    if (temp_v12 < temp_v2) {
      temp_v17 = pbVar17 == (unsigned char *)0x0;
    }
    else {
      temp_v18 = (unsigned short)(*(unsigned int *)(pbVar2 + (temp_v9 & temp_v14) * 4) >> 0x10);
      temp_v9 = (unsigned int)temp_v18;
      if (temp_v9 < 0x10) goto LAB_00127d5a;
      if (temp_v9 != 0x10) {
        if (temp_v9 == 0x11) {
          temp_v9 = temp_v2 + 3;
LAB_00127df6:
          if (temp_v12 < temp_v9) {
            temp_v17 = 1;
            if (pbVar17 != (unsigned char *)0x0) goto LAB_00127de0;
            goto LAB_00127d24;
          }
          temp_v11 = 0;
          temp_v3 = ((temp_v14 >> temp_v2) & 7) + 3;
          temp_v14 = (temp_v14 >> temp_v2) >> 3;
          temp_v12 = (temp_v12 - temp_v2) - 3;
LAB_00127e20:
          if (temp_v33 < temp_v28 + temp_v3) {
            param_3 = (unsigned char *)0x127fcc;
            goto LAB_001279cc;
          }
          while (temp_v3 = temp_v3 - 1, temp_v3 != -1) {
            temp_v13 = *(int *)(pbVar15 + 0x68);
            *(int *)(pbVar15 + 0x68) = temp_v13 + 1;
            *(unsigned short *)(pbVar15 + temp_v13 * 2 + 0x70) = temp_v11;
          }
          goto LAB_00127e4a;
        }
        temp_v9 = temp_v2 + 7;
        while( 1 ) {
          if (temp_v9 <= temp_v12) {
            temp_v11 = 0;
            temp_v3 = ((temp_v14 >> temp_v2) & 0x7f) + 0xb;
            temp_v14 = (temp_v14 >> temp_v2) >> 7;
            temp_v12 = (temp_v12 - temp_v2) - 7;
            goto LAB_00127e20;
          }
          temp_v17 = 1;
          if (pbVar17 == (unsigned char *)0x0) break;
          pbVar17 = pbVar17 + -1;
          temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
          pbVar2 = temp_v24 + 1;
          temp_v12 = temp_v12 + 8;
          temp_v24 = pbVar2;
        }
      }
      else {
        temp_v9 = temp_v2 + 2;
        while( 1 ) {
          if (temp_v9 <= temp_v12) {
            temp_v14 = temp_v14 >> temp_v2;
            temp_v12 = temp_v12 - temp_v2;
            if (temp_v28 == (unsigned char *)0x0) {
              param_3 = (unsigned char *)0x127fcc;
              goto LAB_001283ee;
            }
            temp_v3 = (temp_v14 & 3) + 3;
            temp_v14 = temp_v14 >> 2;
            temp_v11 = *(unsigned short *)(pbVar15 + (int)temp_v28 * 2 + 0x6e);
            temp_v12 = temp_v12 - 2;
            goto LAB_00127e20;
          }
          temp_v17 = 1;
          if (pbVar17 == (unsigned char *)0x0) break;
          pbVar17 = pbVar17 + -1;
          temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
          pbVar2 = temp_v24 + 1;
          temp_v12 = temp_v12 + 8;
          temp_v24 = pbVar2;
        }
      }
    }
LAB_00127d24:
    temp_v15 = 1;
    if (temp_v17) goto LAB_00127c7c;
    pbVar17 = pbVar17 + -1;
    temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
    temp_v24 = temp_v24 + 1;
    temp_v12 = temp_v12 + 8;
    goto LAB_00127d0e;
  }
  param_3 = (unsigned char *)0x127fb0;
  goto LAB_001283ee;
LAB_00128176:
  *(unsigned int *)(pbVar15 + 0x1bc8) = *(unsigned int *)(pbVar15 + 0x40);
  *pbVar15 = 0x16;
LAB_00128184:
  while( 1 ) {
    temp_v2 = *(unsigned int *)(*(int *)(pbVar15 + 0x50) +
                     (((1 << (*(unsigned int *)(pbVar15 + 0x58) & 0xff)) - 1U) & temp_v14) * 4);
    temp_v6 = (unsigned char)(temp_v2 >> 8);
    if (temp_v6 <= temp_v12) break;
    if (pbVar17 == (unsigned char *)0x0) goto LAB_0012840c;
    pbVar17 = pbVar17 + -1;
    temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
    temp_v24 = temp_v24 + 1;
    temp_v12 = temp_v12 + 8;
  }
  if ((unsigned char)((unsigned char)temp_v2 >> 4) == 0) {
    temp_v1 = (unsigned int)temp_v6;
    temp_v23 = (unsigned char *)((1 << ((temp_v1 + (temp_v2 & 0xff)) & 0xff)) - 1);
    temp_v9 = temp_v2 >> 0x10;
    for (; temp_v2 = *(unsigned int *)(((((unsigned int)temp_v23 & temp_v14) >> temp_v1) + temp_v9) * 4 +
                            *(int *)(pbVar15 + 0x50)), temp_v12 < temp_v1 + ((temp_v2 >> 8) & 0xff);
        temp_v12 = temp_v12 + 8) {
      if (pbVar17 == (unsigned char *)0x0) goto LAB_0012840c;
      pbVar17 = pbVar17 + -1;
      temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
      temp_v24 = temp_v24 + 1;
    }
    temp_v14 = temp_v14 >> temp_v1;
    temp_v12 = temp_v12 - temp_v1;
    *(unsigned int *)(pbVar15 + 0x1bc4) = *(int *)(pbVar15 + 0x1bc4) + temp_v1;
  }
  temp_v9 = (temp_v2 >> 8) & 0xff;
  temp_v14 = temp_v14 >> temp_v9;
  temp_v12 = temp_v12 - temp_v9;
  *(unsigned int *)(pbVar15 + 0x1bc4) = *(int *)(pbVar15 + 0x1bc4) + temp_v9;
  if ((int)(temp_v2 << 0x19) < 0) {
    param_3 = (unsigned char *)0x128520;
LAB_001279cc:
    temp_v6 = 0x1d;
    temp_v34[6] = (int)param_3;
  }
  else {
    *(unsigned int *)(pbVar15 + 0x48) = temp_v2 & 0xf;
    *pbVar15 = 0x17;
    *(unsigned int *)(pbVar15 + 0x44) = temp_v2 >> 0x10;
LAB_00128246:
    temp_v2 = *(unsigned int *)(pbVar15 + 0x48);
    if (temp_v2 != 0) {
      for (; temp_v12 < temp_v2; temp_v12 = temp_v12 + 8) {
        if (pbVar17 == (unsigned char *)0x0) goto LAB_0012840c;
        pbVar17 = pbVar17 + -1;
        temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
        temp_v24 = temp_v24 + 1;
      }
      temp_v9 = ((1 << (temp_v2 & 0xff)) - 1U) & temp_v14;
      temp_v14 = temp_v14 >> (temp_v2 & 0xff);
      *(unsigned int *)(pbVar15 + 0x44) = *(int *)(pbVar15 + 0x44) + temp_v9;
      temp_v12 = temp_v12 - temp_v2;
      *(unsigned int *)(pbVar15 + 0x1bc4) = *(int *)(pbVar15 + 0x1bc4) + temp_v2;
    }
    *pbVar15 = 0x18;
LAB_0012828a:
    if (temp_v25 == (unsigned char *)0x0) goto LAB_0012840c;
    temp_v2 = *(unsigned int *)(pbVar15 + 0x44);
    if ((unsigned int)((int)temp_v30 - (int)temp_v25) < temp_v2) {
      pbVar2 = (unsigned char *)(temp_v2 - ((int)temp_v30 - (int)temp_v25));
      if ((*(unsigned char **)(pbVar15 + 0x2c) < pbVar2) && (*(int *)(pbVar15 + 0x1bc0) != 0)) {
        param_3 = (unsigned char *)0x128538;
        goto LAB_001283ee;
      }
      pbVar11 = *(unsigned char **)(pbVar15 + 0x30);
      if (pbVar11 < pbVar2) {
        pbVar2 = pbVar2 + -(int)pbVar11;
        pbVar11 = (unsigned char *)(*(int *)(pbVar15 + 0x34) + (*(int *)(pbVar15 + 0x28) - (int)pbVar2));
      }
      else {
        pbVar11 = pbVar11 + (*(int *)(pbVar15 + 0x34) - (int)pbVar2);
      }
      if (*(unsigned char **)(pbVar15 + 0x40) < pbVar2) {
        pbVar2 = *(unsigned char **)(pbVar15 + 0x40);
      }
    }
    else {
      pbVar11 = temp_v29 + -temp_v2;
      pbVar2 = *(unsigned char **)(pbVar15 + 0x40);
    }
    if (temp_v25 < pbVar2) {
      pbVar2 = temp_v25;
    }
    temp_v25 = temp_v25 + -(int)pbVar2;
    *(int *)(pbVar15 + 0x40) = *(int *)(pbVar15 + 0x40) - (int)pbVar2;
    do {
      temp_v6 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      *temp_v29 = temp_v6;
      param_3 = temp_v29 + 1;
      pbVar2 = pbVar2 + -1;
      temp_v29 = param_3;
    } while (pbVar2 != (unsigned char *)0x0);
    if (*(int *)(pbVar15 + 0x40) != 0) goto LAB_001275c2;
LAB_0012830c:
    temp_v6 = 0x14;
  }
LAB_0012830e:
  *pbVar15 = temp_v6;
  goto LAB_001275c2;
LAB_00127d5a:
  if (temp_v2 > temp_v12) {
    temp_v15 = 1;
    if (pbVar17 == (unsigned char *)0x0) goto LAB_00127c7c;
    pbVar17 = pbVar17 + -1;
    temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
    temp_v24 = temp_v24 + 1;
    temp_v12 = temp_v12 + 8;
    goto LAB_00127d5a;
  }
  temp_v14 = temp_v14 >> temp_v2;
  temp_v12 = temp_v12 - temp_v2;
  *(unsigned char **)(pbVar15 + 0x68) = temp_v28 + 1;
  *(unsigned short *)(pbVar15 + (int)temp_v28 * 2 + 0x70) = temp_v18;
  goto LAB_00127e4a;
LAB_00127de0:
  pbVar17 = pbVar17 + -1;
  temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
  pbVar2 = temp_v24 + 1;
  temp_v12 = temp_v12 + 8;
  temp_v24 = pbVar2;
  goto LAB_00127df6;
LAB_00127c7c:
  while( 1 ) {
    temp_v17 = 1;
    if (temp_v15) goto LAB_00127b8e;
    pbVar17 = pbVar17 + -1;
    temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
    temp_v24 = temp_v24 + 1;
    temp_v12 = temp_v12 + 8;
LAB_00127c90:
    if (temp_v12 >= 3) break;
    temp_v15 = pbVar17 == (unsigned char *)0x0;
  }
  *(unsigned int *)(pbVar15 + 0x68) = temp_v9 + 1;
  temp_v12 = temp_v12 - 3;
  *(unsigned short *)(pbVar15 + (unsigned int)*(unsigned short *)(temp_v2 + temp_v9 * 2) * 2 + 0x70) = (unsigned short)temp_v14 & 7;
  temp_v14 = temp_v14 >> 3;
  goto LAB_00127c70;
LAB_001277dc:
  temp_v17 = 1;
  if (temp_v16) goto LAB_0012773c;
  pbVar17 = pbVar17 + -1;
  temp_v14 = ((unsigned int)*temp_v24 << (temp_v12 & 0xff)) + temp_v14;
  pbVar2 = temp_v24 + 1;
  temp_v12 = temp_v12 + 8;
  temp_v24 = pbVar2;
LAB_001277f0:
  if (0xf >= temp_v12) {
    temp_v16 = pbVar17 == (unsigned char *)0x0;
    goto LAB_001277dc;
  }
  *(unsigned int *)(pbVar15 + 0x40) = temp_v14;
  if (*(int *)(pbVar15 + 0x20) != 0) {
    *(unsigned int *)(*(int *)(pbVar15 + 0x20) + 0x14) = temp_v14;
  }
  if (*(int *)(pbVar15 + 0x10) << 0x16 < 0) {
    temp_v19 = (unsigned char)temp_v14;
    temp_v20 = (unsigned char)(temp_v14 >> 8);
    temp_v0 = *(unsigned int *)(pbVar15 + 0x18);
    FUN_0030dd02(temp_v0,&temp_v19,2);
    *(unsigned int *)(pbVar15 + 0x18) = temp_v0;
  }
  temp_v14 = 0;
  temp_v12 = 0;
  goto LAB_00127828;
}

} /* extern "C" */
