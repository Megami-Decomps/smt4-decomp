/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047e690` (_code @ 0x47e690, 0x5ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int qsort(int, int, int, unsigned char *);
int FUN_001628c0(unsigned char *, unsigned int, int, int);
int gameFlagIsSet(...);
int dataTable04FindById(void);
int asdOperatorNewD(void);
int sysMemClear(...);
int asdOperatorDeleteC(int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF4; /* 0xf4: local_f4 */
} param_3_stack;

extern unsigned char LAB_0047e678; /* 0x47e678 */
extern unsigned char LAB_0047ec84; /* 0x47ec84 */
extern unsigned int DAT_00573cd0; /* 0x573cd0 */
extern unsigned int DAT_00573cd4; /* 0x573cd4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: qsort. */
extern int btlGetMainState(void);
extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_001628c0. */
extern int lcgRandomRange(unsigned int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagIsSet. */
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: asdOperatorDeleteC. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned char * FUN_0047e690(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char *puVar10;
  unsigned int temp_v8;
  int *piVar12;
  int *piVar13;
  unsigned int temp_v9;
  int temp_v10;
  short temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned int temp_v20;
  unsigned char temp_v21 [128];
  unsigned char temp_v22 [32];
  unsigned int uStack_30;
  unsigned int temp_v23;
  unsigned int uStack_28;
  
  temp_v19 = (unsigned long long)in_s0;
  temp_v20 = 0;
  uStack_30 = param_1;
  temp_v23 = param_2;
  uStack_28 = param_3;
  if (param_2 != 0) {
    if ((int)param_2 >= 0) {
      dataTable04FindById();
      switch(*(unsigned char *)(param_2 + 0x23)) {
      case 0:
      case 1:
      case 2:
      case 7:
      case 8:
      case 9:
      case 0xb:
        temp_v20 = 1;
        break;
      case 3:
      case 4:
        temp_v20 = 2;
        break;
      default:
        temp_v20 = 0;
      }
    }
    else {
      temp_v20 = 1;
    }
  }
  else if (param_3 != 0) {
    temp_v20 = 2;
  }
  temp_v0 = dataTableGet(10,9);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v6 = temp_v2 << 2;
  temp_v3 = temp_v6;
  asdOperatorNewD();
  temp_v4 = temp_v6;
  asdOperatorNewD();
  sysMemClear(temp_v3,temp_v6);
  sysMemClear(temp_v4,temp_v6);
  temp_v13 = 0;
  temp_v12 = 0;
  temp_v15 = 0;
  temp_v9 = 0;
  if (temp_v9 < temp_v2) {
    do {
      psVar6 = (short *)(temp_v1 + temp_v9 * 0x10);
      temp_v8 = (unsigned int)*psVar6;
      temp_v16 = temp_v8 == param_1;
      if (temp_v16) {
        temp_v8 = (unsigned int)(unsigned short)psVar6[6];
      }
      if (((temp_v16 && temp_v8 == 99) && (psVar6[3] != 0)) && (temp_v5 = gameFlagIsSet(), temp_v5 != 0)) {
        temp_v15 = 1;
        break;
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v2);
  }
  temp_v9 = 0;
  if (temp_v2 != 0) {
    do {
      psVar6 = (short *)(temp_v1 + temp_v9 * 0x10);
      if (((int)*psVar6 == param_1) && ((!temp_v15 || (psVar6[6] == 99)))) {
        temp_v8 = (unsigned int)psVar6[1];
        if ((temp_v8 == 3) || (psVar6[2] != 0)) {
          param_3 = temp_v23;
          if (((unsigned short)psVar6[2] == temp_v23) &&
             ((psVar6[3] == 0 || (temp_v5 = gameFlagIsSet(psVar6[3]), temp_v5 != 0)))) {
            *(short **)(temp_v4 + temp_v12 * 4) = psVar6;
            temp_v12 = temp_v12 + 1;
          }
        }
        else {
          if (temp_v8 != 0) {
            param_3 = temp_v20;
          }
          if ((temp_v8 == 0 || temp_v8 == param_3) &&
             ((psVar6[3] == 0 || (temp_v5 = gameFlagIsSet(psVar6[3]), temp_v5 != 0)))) {
            *(short **)(temp_v3 + temp_v13 * 4) = psVar6;
            temp_v13 = temp_v13 + 1;
          }
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v2);
    if (temp_v13 + temp_v12 != 0) {
      asdOperatorNewD();
      sysMemClear();
      if (temp_v12 != 0) {
        rt_memcpy_w(temp_v6,temp_v4,temp_v12 << 2);
        temp_v13 = temp_v12;
      }
      else {
        rt_memcpy_w(temp_v6,temp_v3,temp_v13 << 2);
      }
      qsort(temp_v6,temp_v13,4,&LAB_0047e678);
      temp_v12 = temp_v12 << 2;
      asdOperatorNewD();
      sysMemClear();
      temp_v5 = 0;
      temp_v11 = 1;
      temp_v14 = 0;
      temp_v1 = 0;
      temp_v15 = 0;
      if (0 < temp_v13) {
        do {
          temp_v10 = *(int *)(temp_v6 + temp_v1 * 4);
          if (*(short *)(temp_v10 + 0xc) != 0) {
            if (*(short *)(temp_v10 + 0xc) != 99) {
              temp_v7 = btlGetMainState();
              if ((((DAT_00573cd4 & *(unsigned int *)(temp_v7 + 0x45a4)) == 0 &&
                    (*(unsigned int *)(temp_v7 + 0x45a0) & DAT_00573cd0) == 0) && (temp_v11 != 99)) &&
                 (temp_v11 <= *(short *)(temp_v10 + 0xc))) {
                *(int *)(temp_v12 + temp_v5 * 4) = temp_v10;
                temp_v7 = (int)*(short *)(temp_v10 + 0xe);
                temp_v11 = *(short *)(temp_v10 + 0xc);
                temp_v5 = temp_v5 + 1;
                temp_v10 = temp_v7;
                if (temp_v7 == 0) {
                  temp_v10 = 10;
                }
                temp_v14 = temp_v14 + temp_v10;
                if (temp_v7 == 10) {
                  temp_v15 = 1;
                }
              }
            }
            else {
              temp_v7 = btlGetMainState();
              if (((DAT_00573cd4 & *(unsigned int *)(temp_v7 + 0x45a4)) == 0 &&
                   (*(unsigned int *)(temp_v7 + 0x45a0) & DAT_00573cd0) == 0) &&
                 (temp_v7 = gameFlagIsSet(*(unsigned short *)(temp_v10 + 6)), temp_v7 != 0)) {
                *(int *)(temp_v12 + temp_v5 * 4) = temp_v10;
                temp_v10 = (int)*(short *)(temp_v10 + 0xe);
                temp_v11 = 99;
                if (temp_v10 == 0) {
                  temp_v10 = 10;
                }
                temp_v14 = temp_v14 + temp_v10;
                temp_v5 = temp_v5 + 1;
              }
            }
          }
          else if ((temp_v11 != 99) && (!temp_v15)) {
            *(int *)(temp_v12 + temp_v5 * 4) = temp_v10;
            temp_v10 = (int)*(short *)(temp_v10 + 0xe);
            temp_v11 = 0;
            if (temp_v10 == 0) {
              temp_v10 = 10;
            }
            temp_v14 = temp_v14 + temp_v10;
            temp_v5 = temp_v5 + 1;
          }
          temp_v18 = (float)temp_v19;
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < temp_v13);
        if (temp_v5 != 0) {
          temp_v13 = temp_v14 << 2;
          asdOperatorNewD();
          sysMemClear();
          temp_v10 = 0;
          FUN_00100388(temp_v21,&LAB_0047ec84);
          temp_v1 = 0;
          if (temp_v1 < temp_v5) {
            do {
              temp_v2 = (unsigned int)*(short *)(*(int *)(temp_v12 + temp_v1 * 4) + 0xe);
              temp_v15 = -1 < (int)temp_v2;
              if (temp_v2 == 0) {
                temp_v2 = 10;
              }
              if (temp_v15) {
                piVar13 = (int *)(temp_v13 + temp_v10 * 4);
                piVar12 = piVar13 + -1;
                if ((temp_v2 & 1) != 0) {
                  *piVar13 = temp_v1;
                  piVar12 = piVar13;
                }
                for (temp_v7 = (int)temp_v2 >> 1; temp_v7 != 0; temp_v7 = temp_v7 - 1) {
                  piVar12[1] = temp_v1;
                  piVar12 = piVar12 + 2;
                  *piVar12 = temp_v1;
                }
                temp_v10 = temp_v10 + temp_v2;
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < temp_v5);
          }
          temp_v1 = lcgRandomRange((temp_v14 - 1U) & 0xffff);
          temp_v2 = *(unsigned int *)(*(int *)(temp_v12 + *(int *)(temp_v13 + temp_v1 * 4) * 4) + 8);
          if (((temp_v2 & 0xfff) != 0) && ((temp_v2 & 0xffffff) >> 0xc != 0)) {
            temp_v2 = (temp_v2 << 0x14) | (((temp_v2 & 0xffffff) >> 0xc) << 8) | ((temp_v2 >> 0x14) & 0xf0);
          }
          else {
            temp_v2 = 0;
          }
          if ((temp_v2 & 0xfffff) >> 8 == 0 || temp_v2 >> 0x14 == 0) {
            puVar10 = (unsigned char *)0x0;
          }
          else {
            FUN_00100388(temp_v22,"I%03u%03u");
            if ((temp_v2 & 0xff) != 0) {
              FUN_00100388(temp_v22,"%s%s");
            }
            temp_v0 = FUN_0014af98();
            temp_v17 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v2 = VectorFloatToUnsigned(temp_v17 * temp_v18,3);
            puVar10 = temp_v22;
            FUN_001628c0(puVar10,temp_v2 & 0xff,2,0);
          }
          asdOperatorDeleteC(temp_v13);
          asdOperatorDeleteC(temp_v12);
          asdOperatorDeleteC(temp_v6);
          asdOperatorDeleteC(temp_v4);
          asdOperatorDeleteC(temp_v3);
          return puVar10;
        }
      }
      asdOperatorDeleteC(temp_v12);
      asdOperatorDeleteC(temp_v6);
    }
  }
  asdOperatorDeleteC(temp_v4);
  asdOperatorDeleteC(temp_v3);
  return (unsigned char *)0x0;
}

} /* extern "C" */
