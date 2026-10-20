/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001600fc` (_code @ 0x1600fc, 0x7d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int, unsigned int, unsigned int, unsigned int);
int rt_memcpy(int, int, int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_0053d9b0; /* 0x53d9b0 */
extern unsigned int DAT_0053ec50; /* 0x53ec50 */
extern unsigned int DAT_005b40ec; /* 0x5b40ec */
extern unsigned int DAT_005b40f0; /* 0x5b40f0 */
extern int DAT_005b40f4; /* 0x5b40f4 */
extern unsigned int DAT_005b40f8; /* 0x5b40f8 */
extern int DAT_005b40fc; /* 0x5b40fc */
extern int DAT_005b415c; /* 0x5b415c */
extern int DAT_005b4174; /* 0x5b4174 */
extern int DAT_005b418c; /* 0x5b418c */
extern unsigned int DAT_00641660; /* 0x641660 */
extern unsigned int DAT_00641664; /* 0x641664 */
extern unsigned int DAT_00641668; /* 0x641668 */
extern unsigned int DAT_0064166c; /* 0x64166c */
extern unsigned int DAT_00641670; /* 0x641670 */
extern unsigned int DAT_00641674; /* 0x641674 */
extern unsigned int DAT_00641678; /* 0x641678 */
extern unsigned int DAT_0064167c; /* 0x64167c */
extern unsigned int DAT_00641680; /* 0x641680 */
extern unsigned int DAT_00641684; /* 0x641684 */
extern unsigned int DAT_00641688; /* 0x641688 */
extern unsigned int DAT_0064168c; /* 0x64168c */
extern unsigned int DAT_00641690; /* 0x641690 */
extern unsigned int DAT_00641694; /* 0x641694 */
extern unsigned int DAT_00641698; /* 0x641698 */
extern unsigned int DAT_0064169c; /* 0x64169c */
extern unsigned int DAT_006416a0; /* 0x6416a0 */
extern unsigned int DAT_006416a4; /* 0x6416a4 */

/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_001600fc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
  
  DAT_005b40f4 = param_1;
  sysMemClear(param_1,0x1774,param_3,param_4,param_4);
  temp_v5 = 0;
  DAT_005b40f0 = 1;
  DAT_005b40f8 = 0xffffffff;
  DAT_005b40ec = 1;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 * 0x10;
    temp_v2 = temp_v0 * 4;
    temp_v0 = temp_v0 + 1;
    temp_v2 = (&DAT_0053d9b0)[temp_v2];
    *(unsigned int *)(temp_v2 * 0xc + 0x640580) = *(unsigned int *)(temp_v1 + 0x53d9b4);
    temp_v2 = temp_v2 * 0xc;
    *(unsigned int *)(temp_v2 + 0x640584) = *(unsigned int *)(temp_v1 + 0x53d9b8);
    *(unsigned int *)(temp_v2 + 0x640588) = *(unsigned int *)(temp_v1 + 0x53d9bc);
  } while ((&DAT_0053d9b0)[temp_v0 * 4] != -1);
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 * 8;
    temp_v2 = temp_v0 * 2;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)((&DAT_0053ec50)[temp_v2] * 4 + 0x64136c) = *(unsigned int *)(temp_v1 + 0x53ec54);
    temp_v1 = DAT_005b40f4;
  } while ((&DAT_0053ec50)[temp_v0 * 2] != -1);
  *(unsigned int *)(DAT_005b40f4 + 0x13a4) = 0x1000;
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
                if (temp_v4 == 0x61) goto LAB_0016069c;
                if (temp_v4 == 99) goto LAB_001606c0;
                if (temp_v4 == 100) goto LAB_001606c8;
                if (temp_v4 == 0x66) goto LAB_00160678;
              }
              else {
                if (temp_v4 == 0x6e) goto LAB_001606c0;
                if (temp_v4 == 0x6f) goto LAB_001606c8;
                if (temp_v4 == 0x71) goto LAB_00160678;
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
LAB_00160678:
                    temp_v3 = 0x3f000;
                    *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = temp_v3;
                    *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
                  }
                }
                else {
LAB_001606c8:
                  *(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x1300) = 1;
                  *(unsigned char *)(temp_v1 + temp_v4 + 0x16b1) = 0xf;
                }
              }
              else {
LAB_001606c0:
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
          if (temp_v4 == 0x98) goto LAB_0016069c;
          if ((int)temp_v4 < 0x99) {
            if (temp_v4 == 0x8f) goto LAB_001606c0;
            if (temp_v4 == 0x90) goto LAB_001606c8;
            if (temp_v4 == 0x92) goto LAB_00160678;
          }
          else {
            if (temp_v4 == 0x9a) goto LAB_001606c0;
            if (temp_v4 == 0x9b) goto LAB_001606c8;
            if (temp_v4 == 0x9d) goto LAB_00160678;
          }
        }
        else {
          if (temp_v4 == 0xae) goto LAB_0016069c;
          if ((int)temp_v4 < 0xaf) {
            if (temp_v4 == 0xa5) goto LAB_001606c0;
            if (temp_v4 == 0xa6) goto LAB_001606c8;
            if (temp_v4 == 0xa8) goto LAB_00160678;
          }
          else {
            if (temp_v4 == 0xb0) goto LAB_001606c0;
            if (temp_v4 == 0xb1) goto LAB_001606c8;
            if (temp_v4 == 0xb3) goto LAB_00160678;
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
LAB_0016069c:
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
            rt_memcpy(DAT_005b40f4 + 0x15f4,DAT_005b40f4 + 0x16b1,0xbd);
            temp_v0 = 0;
            DAT_00641660 = 0;
            DAT_00641664 = 0;
            DAT_00641668 = 0;
            DAT_0064166c = 0;
            DAT_00641670 = 0;
            DAT_00641674 = 0;
            temp_v1 = DAT_005b40fc;
            while (temp_v1 != 0xbd) {
              puVar1 = (unsigned int *)(&DAT_005b40fc + temp_v0);
              temp_v0 = temp_v0 + 1;
              temp_v1 = (int)*puVar1 >> 5;
              (&DAT_00641660)[temp_v1] = (&DAT_00641660)[temp_v1] | (1 << (*puVar1 & 0x1f));
              temp_v1 = (&DAT_005b40fc)[temp_v0];
            }
            DAT_00641678 = 0;
            DAT_0064167c = 0;
            DAT_00641680 = 0;
            DAT_00641684 = 0;
            DAT_00641688 = 0;
            DAT_0064168c = 0;
            temp_v0 = 0;
            temp_v1 = DAT_005b415c;
            while (temp_v1 != 0xbd) {
              puVar1 = (unsigned int *)(&DAT_005b415c + temp_v0);
              temp_v0 = temp_v0 + 1;
              temp_v1 = (int)*puVar1 >> 5;
              (&DAT_00641678)[temp_v1] = (&DAT_00641678)[temp_v1] | (1 << (*puVar1 & 0x1f));
              temp_v1 = (&DAT_005b415c)[temp_v0];
            }
            temp_v0 = 0;
            temp_v1 = DAT_005b4174;
            while (temp_v1 != 0xbd) {
              puVar1 = (unsigned int *)(&DAT_005b4174 + temp_v0);
              temp_v0 = temp_v0 + 1;
              temp_v1 = (int)*puVar1 >> 5;
              (&DAT_00641678)[temp_v1] = (&DAT_00641678)[temp_v1] | (1 << (*puVar1 & 0x1f));
              temp_v1 = (&DAT_005b4174)[temp_v0];
            }
            DAT_00641690 = 0;
            DAT_00641694 = 0;
            DAT_00641698 = 0;
            DAT_0064169c = 0;
            DAT_006416a0 = 0;
            DAT_006416a4 = 0;
            temp_v0 = 0;
            temp_v1 = DAT_005b418c;
            while (temp_v1 != 0xbd) {
              puVar1 = (unsigned int *)(&DAT_005b418c + temp_v0);
              temp_v0 = temp_v0 + 1;
              temp_v1 = (int)*puVar1 >> 5;
              (&DAT_00641690)[temp_v1] = (&DAT_00641690)[temp_v1] | (1 << (*puVar1 & 0x1f));
              temp_v1 = (&DAT_005b418c)[temp_v0];
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
