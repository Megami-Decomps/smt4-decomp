/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122224` (_code @ 0x122224, 0x7d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(int, int, unsigned int, unsigned int, unsigned int);
int rt_memcpy(int, int, int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_00409d9c; /* 0x409d9c */
extern unsigned int DAT_0040b03c; /* 0x40b03c */
extern unsigned int DAT_004652ac; /* 0x4652ac */
extern unsigned int DAT_004652b0; /* 0x4652b0 */
extern int DAT_004652b4; /* 0x4652b4 */
extern unsigned int DAT_004652b8; /* 0x4652b8 */
extern int DAT_004652bc; /* 0x4652bc */
extern int DAT_0046531c; /* 0x46531c */
extern int DAT_00465334; /* 0x465334 */
extern int DAT_0046534c; /* 0x46534c */
extern unsigned int DAT_004e5248; /* 0x4e5248 */
extern unsigned int DAT_004e524c; /* 0x4e524c */
extern unsigned int DAT_004e5250; /* 0x4e5250 */
extern unsigned int DAT_004e5254; /* 0x4e5254 */
extern unsigned int DAT_004e5258; /* 0x4e5258 */
extern unsigned int DAT_004e525c; /* 0x4e525c */
extern unsigned int DAT_004e5260; /* 0x4e5260 */
extern unsigned int DAT_004e5264; /* 0x4e5264 */
extern unsigned int DAT_004e5268; /* 0x4e5268 */
extern unsigned int DAT_004e526c; /* 0x4e526c */
extern unsigned int DAT_004e5270; /* 0x4e5270 */
extern unsigned int DAT_004e5274; /* 0x4e5274 */
extern unsigned int DAT_004e5278; /* 0x4e5278 */
extern unsigned int DAT_004e527c; /* 0x4e527c */
extern unsigned int DAT_004e5280; /* 0x4e5280 */
extern unsigned int DAT_004e5284; /* 0x4e5284 */
extern unsigned int DAT_004e5288; /* 0x4e5288 */
extern unsigned int DAT_004e528c; /* 0x4e528c */

/* Supplied declaration required: memClear. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00122224(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 33 unstructured edge(s); 21 goto(s); 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned char *puVar8;
  unsigned int temp_v5;
  
  DAT_004652b4 = param_1;
  memClear(param_1,0x1774,param_3,param_4,param_4);
  temp_v5 = 0;
  DAT_004652b0 = 1;
  DAT_004652b8 = 0xffffffff;
  DAT_004652ac = 1;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 * 0x10;
    temp_v2 = temp_v0 * 4;
    temp_v0 = temp_v0 + 1;
    temp_v2 = (&DAT_00409d9c)[temp_v2];
    *(unsigned int *)(temp_v2 * 0xc + 0x4e4168) = *(unsigned int *)(temp_v1 + 0x409da0);
    temp_v2 = temp_v2 * 0xc;
    *(unsigned int *)(temp_v2 + 0x4e416c) = *(unsigned int *)(temp_v1 + 0x409da4);
    *(unsigned int *)(temp_v2 + 0x4e4170) = *(unsigned int *)(temp_v1 + 0x409da8);
  } while ((&DAT_00409d9c)[temp_v0 * 4] != -1);
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 * 8;
    temp_v2 = temp_v0 * 2;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)((&DAT_0040b03c)[temp_v2] * 4 + 0x4e4f54) = *(unsigned int *)(temp_v1 + 0x40b040);
    temp_v1 = DAT_004652b4;
  } while ((&DAT_0040b03c)[temp_v0 * 2] != -1);
  *(unsigned int *)(DAT_004652b4 + 0x13a4) = 0x1000;
  *(unsigned char *)(temp_v1 + 0x16da) = 2;
  *(unsigned int *)(temp_v1 + 0x13a8) = 0;
  *(unsigned char *)(temp_v1 + 0x16db) = 0xf;
  *(unsigned int *)(temp_v1 + 0x13ac) = 0;
  *(unsigned char *)(temp_v1 + 0x16dc) = 0xf;
  *(unsigned int *)(temp_v1 + 0x13b0) = 9;
  *(unsigned char *)(temp_v1 + 0x16dd) = 0xf;
  *(unsigned int *)(temp_v1 + 0x13b4) = 0;
  *(unsigned char *)(temp_v1 + 0x16de) = 0xf;
  *(unsigned int *)(temp_v1 + 0x13b8) = 0;
  *(unsigned char *)(temp_v1 + 0x16df) = 0xf;
  *(unsigned int *)(temp_v1 + 0x13bc) = 0;
  *(unsigned char *)(temp_v1 + 0x16e0) = 0xf;
  *(unsigned int *)(temp_v1 + 0x13c0) = 0x1c00301;
  *(unsigned char *)(temp_v1 + 0x16e1) = 0xf;
  *(unsigned int *)(temp_v1 + 0x13c4) = 0xe0c08000;
  *(unsigned char *)(temp_v1 + 0x16e2) = 0xf;
  *(unsigned int *)(temp_v1 + 0x146c) = 0x3c00;
  *(unsigned char *)(temp_v1 + 0x170c) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1364) = 0;
  *(unsigned char *)(temp_v1 + 0x16ca) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1368) = 0x1f1f1f1f;
  *(unsigned char *)(temp_v1 + 0x16cb) = 0xf;
  *(unsigned int *)(temp_v1 + 0x136c) = 0x1f1f1f1f;
  *(unsigned char *)(temp_v1 + 0x16cc) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1370) = 0x1f1f1f1f;
  *(unsigned char *)(temp_v1 + 0x16cd) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1374) = 0x1f1f1f1f;
  *(unsigned char *)(temp_v1 + 0x16ce) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1378) = 0x1f1f1f1f;
  *(unsigned char *)(temp_v1 + 0x16cf) = 0xf;
  temp_v4 = 0x5c;
  *(unsigned int *)(temp_v1 + 0x137c) = 0x1f1f1f1f;
  *(unsigned char *)(temp_v1 + 0x16d0) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1380) = 0x1f1f1f1f;
  *(unsigned char *)(temp_v1 + 0x16d1) = 0xf;
  *(unsigned int *)(temp_v1 + 0x139c) = 1;
  *(unsigned char *)(temp_v1 + 0x16d8) = 0xf;
  *(unsigned int *)(temp_v1 + 0x135c) = 0xbf0000;
  *(unsigned char *)(temp_v1 + 0x16c8) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1360) = 0;
  *(unsigned char *)(temp_v1 + 0x16c9) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1384) = 0;
  *(unsigned char *)(temp_v1 + 0x16d2) = 0xf;
  *(unsigned int *)(temp_v1 + 5000) = 0;
  *(unsigned char *)(temp_v1 + 0x16d3) = 0xf;
  *(unsigned int *)(temp_v1 + 0x138c) = 0;
  *(unsigned char *)(temp_v1 + 0x16d4) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1390) = 0;
  *(unsigned char *)(temp_v1 + 0x16d5) = 0xf;
  *(unsigned int *)(temp_v1 + 0x1394) = 0;
  *(unsigned char *)(temp_v1 + 0x16d6) = 0xf;
  do {
    if (temp_v4 != 0x8d) {
      if ((int)temp_v4 < 0x8e) {
        if (temp_v4 != 0x77) {
          if ((int)temp_v4 < 0x78) {
            if (temp_v4 != 0x6c) {
              if ((int)temp_v4 < 0x6d) {
                if (temp_v4 == 0x61) goto LAB_001227c4;
                if (temp_v4 == 99) goto LAB_001227e8;
                if (temp_v4 == 100) goto LAB_001227f0;
                if (temp_v4 == 0x66) goto LAB_001227a0;
              }
              else {
                if (temp_v4 == 0x6e) goto LAB_001227e8;
                if (temp_v4 == 0x6f) goto LAB_001227f0;
                if (temp_v4 == 0x71) goto LAB_001227a0;
              }
              *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0;
              *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
            }
            else {
              *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0x3c00;
              *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
            }
          }
          else if (temp_v4 != 0x82) {
            if ((int)temp_v4 < 0x83) {
              if (temp_v4 != 0x79) {
                if (temp_v4 != 0x7a) {
                  if (temp_v4 != 0x7c) {
                    *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0;
                    *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
                  }
                  else {
LAB_001227a0:
                    temp_v3 = 0x3f000;
                    *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = temp_v3;
                    *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
                  }
                }
                else {
LAB_001227f0:
                  *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 1;
                  *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
                }
              }
              else {
LAB_001227e8:
                temp_v3 = 0x800;
                *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = temp_v3;
                *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
              }
            }
            else if (temp_v4 != 0x84) {
              if (temp_v4 != 0x85) {
                if (temp_v4 != 0x87) {
                  *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0;
                  *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
                }
                else {
                  temp_v3 = 0x3f000;
                  *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = temp_v3;
                  *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
                }
              }
              else {
                *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 1;
                *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
              }
            }
            else {
              temp_v3 = 0x800;
              *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = temp_v3;
              *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
            }
          }
          else {
            *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0x3c00;
            *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
          }
        }
        else {
          *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0x3c00;
          *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
        }
      }
      else if (temp_v4 != 0xa3) {
        if ((int)temp_v4 < 0xa4) {
          if (temp_v4 == 0x98) goto LAB_001227c4;
          if ((int)temp_v4 < 0x99) {
            if (temp_v4 == 0x8f) goto LAB_001227e8;
            if (temp_v4 == 0x90) goto LAB_001227f0;
            if (temp_v4 == 0x92) goto LAB_001227a0;
          }
          else {
            if (temp_v4 == 0x9a) goto LAB_001227e8;
            if (temp_v4 == 0x9b) goto LAB_001227f0;
            if (temp_v4 == 0x9d) goto LAB_001227a0;
          }
        }
        else {
          if (temp_v4 == 0xae) goto LAB_001227c4;
          if ((int)temp_v4 < 0xaf) {
            if (temp_v4 == 0xa5) goto LAB_001227e8;
            if (temp_v4 == 0xa6) goto LAB_001227f0;
            if (temp_v4 == 0xa8) goto LAB_001227a0;
          }
          else {
            if (temp_v4 == 0xb0) goto LAB_001227e8;
            if (temp_v4 == 0xb1) goto LAB_001227f0;
            if (temp_v4 == 0xb3) goto LAB_001227a0;
          }
        }
        *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0;
        *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
      }
      else {
        *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0x3c00;
        *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
      }
    }
    else {
LAB_001227c4:
      *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 0x3c00;
      *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0xb4) {
      *(unsigned int *)(temp_v1 + 0x1478) = 0xcc330cc;
      *(unsigned char *)(temp_v1 + 0x170f) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15d0) = 0xa0280a;
      *(unsigned char *)(temp_v1 + 0x1765) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15d4) = 0;
      *(unsigned char *)(temp_v1 + 0x1766) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15e0) = 1;
      *(unsigned char *)(temp_v1 + 0x1769) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15d8) = 0x88000400;
      *(unsigned char *)(temp_v1 + 0x1767) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15dc) = 0xffffffff;
      *(unsigned char *)(temp_v1 + 0x1768) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15e8) = 0;
      *(unsigned char *)(temp_v1 + 0x176b) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15ec) = 0;
      *(unsigned char *)(temp_v1 + 0x176c) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15e4) = 0x2222222;
      *(unsigned char *)(temp_v1 + 0x176a) = 0xf;
      *(unsigned int *)(temp_v1 + 0x15f0) = 0;
      *(unsigned char *)(temp_v1 + 0x176d) = 0xf;
      *(unsigned int *)(temp_v1 + 0x1440) = 0;
      *(unsigned char *)(temp_v1 + 0x1701) = 0xf;
      *(unsigned int *)(temp_v1 + 0x1444) = 0;
      *(unsigned char *)(temp_v1 + 0x1702) = 0xf;
      *(unsigned int *)(temp_v1 + 0x1448) = 0x3c00;
      *(unsigned char *)(temp_v1 + 0x1703) = 0xf;
      *(unsigned int *)(temp_v1 + 0x1454) = 0;
      *(unsigned char *)(temp_v1 + 0x1706) = 0xf;
      *(unsigned int *)(temp_v1 + 0x1458) = 0;
      *(unsigned char *)(temp_v1 + 0x1707) = 0xf;
      *(unsigned int *)(temp_v1 + 0x145c) = 0x100;
      *(unsigned char *)(temp_v1 + 0x1708) = 0xf;
      *(unsigned int *)(temp_v1 + 0x1460) = 0xa00;
      *(unsigned char *)(temp_v1 + 0x1709) = 7;
      *(unsigned int *)(temp_v1 + 0x144c) = 0x3c00;
      *(unsigned char *)(temp_v1 + 0x1704) = 0xf;
      *(unsigned int *)(temp_v1 + 0x1464) = 0xe40100;
      *(unsigned char *)(temp_v1 + 0x170a) = 0xd;
      *(unsigned int *)(temp_v1 + 0x1468) = 0x10;
      *(unsigned char *)(temp_v1 + 0x170b) = 0xf;
      temp_v0 = 0;
      temp_v2 = 0x1e;
      puVar6 = (unsigned int *)(temp_v1 + 0x13c8);
      puVar8 = (unsigned char *)(temp_v1 + 0x16e3);
      *puVar6 = 0xeee0eee;
      do {
        *puVar8 = 0xf;
        while( 1 ) {
          temp_v2 = temp_v2 - 1;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
          temp_v0 = temp_v0 + 1;
          if (temp_v2 == 0) {
            *(unsigned int *)(temp_v1 + 0x1450) = 0;
            *(unsigned char *)(temp_v1 + 0x1705) = 0xf;
            rt_memcpy_w(temp_v1 + 0x100c,temp_v1 + 0x1300,0x2f4);
            rt_memcpy(DAT_004652b4 + 0x15f4,DAT_004652b4 + 0x16b1,0xbd);
            temp_v0 = 0;
            DAT_004e5248 = 0;
            DAT_004e524c = 0;
            DAT_004e5250 = 0;
            DAT_004e5254 = 0;
            DAT_004e5258 = 0;
            DAT_004e525c = 0;
            temp_v1 = DAT_004652bc;
            while (temp_v1 != 0xbd) {
              puVar1 = (unsigned int *)(&DAT_004652bc + temp_v0);
              temp_v0 = temp_v0 + 1;
              temp_v1 = (int)*puVar1 >> 5;
              (&DAT_004e5248)[temp_v1] = (&DAT_004e5248)[temp_v1] | (1 << (*puVar1 & 0x1f));
              temp_v1 = (&DAT_004652bc)[temp_v0];
            }
            DAT_004e5260 = 0;
            DAT_004e5264 = 0;
            DAT_004e5268 = 0;
            DAT_004e526c = 0;
            DAT_004e5270 = 0;
            DAT_004e5274 = 0;
            temp_v0 = 0;
            temp_v1 = DAT_0046531c;
            while (temp_v1 != 0xbd) {
              puVar1 = (unsigned int *)(&DAT_0046531c + temp_v0);
              temp_v0 = temp_v0 + 1;
              temp_v1 = (int)*puVar1 >> 5;
              (&DAT_004e5260)[temp_v1] = (&DAT_004e5260)[temp_v1] | (1 << (*puVar1 & 0x1f));
              temp_v1 = (&DAT_0046531c)[temp_v0];
            }
            temp_v0 = 0;
            temp_v1 = DAT_00465334;
            while (temp_v1 != 0xbd) {
              puVar1 = (unsigned int *)(&DAT_00465334 + temp_v0);
              temp_v0 = temp_v0 + 1;
              temp_v1 = (int)*puVar1 >> 5;
              (&DAT_004e5260)[temp_v1] = (&DAT_004e5260)[temp_v1] | (1 << (*puVar1 & 0x1f));
              temp_v1 = (&DAT_00465334)[temp_v0];
            }
            DAT_004e5278 = 0;
            DAT_004e527c = 0;
            DAT_004e5280 = 0;
            DAT_004e5284 = 0;
            DAT_004e5288 = 0;
            DAT_004e528c = 0;
            temp_v0 = 0;
            temp_v1 = DAT_0046534c;
            while (temp_v1 != 0xbd) {
              puVar1 = (unsigned int *)(&DAT_0046534c + temp_v0);
              temp_v0 = temp_v0 + 1;
              temp_v1 = (int)*puVar1 >> 5;
              (&DAT_004e5278)[temp_v1] = (&DAT_004e5278)[temp_v1] | (1 << (*puVar1 & 0x1f));
              temp_v1 = (&DAT_0046534c)[temp_v0];
            }
            return temp_v5;
          }
          if (temp_v0 == 0) {
            *puVar6 = 0xeee0eee;
            *puVar8 = 0xf;
            continue;
          }
          if (((temp_v0 == 5 || temp_v0 == 10) || (temp_v0 == 0xf || temp_v0 == 0x14)) || (temp_v0 == 0x19))
          break;
          *puVar6 = 0;
          *puVar8 = 0xf;
        }
        *puVar6 = 0xfff0fff;
      } while( 1 );
    }
  } while( 1 );
}

} /* extern "C" */
