/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db450` (_code @ 0x4db450, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 9 slot(s), 34 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned short sp4A; /* 0x4a: local_4a */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(void);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
extern int FUN_00239234(unsigned short, unsigned char *);
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: FUN_0035dd74. */
/* Supplied declaration required: FUN_0038b7d8. */


unsigned int FUN_004db450(unsigned int param_1,int param_2)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  int temp_v6;
  short *psVar10;
  int temp_v7;
  unsigned short temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15 [54];
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned int uStack_2c;
  int temp_v18;
  
  temp_v17 = 0;
  uStack_2c = param_1;
  temp_v18 = param_2;
  temp_v2 = FUN_001ab888();
  temp_v8 = 0;
  temp_v3 = temp_v2;
  FUN_0038b7d8();
  if (temp_v3 != 0) {
    do {
      temp_v5 = temp_v8;
      FUN_0035dd74();
      if (temp_v5 != 0) {
        puVar4 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v5 + 0x1a);
        FUN_00184310();
        if ((puVar4[0x1f] == 0) || (temp_v3 = FUN_0018719c(), temp_v3 != 0)) {
          temp_v0 = puVar4[0x1e];
          if ((temp_v0 & 1) != 0) {
            if ((temp_v0 & 0xfffe) != 0) {
              temp_v3 = FUN_00239234(temp_v0 >> 1,temp_v15);
            }
            else {
              temp_v3 = FUN_00239234(*puVar4,temp_v15);
            }
            if ((temp_v3 == 0) || ((temp_v16 & 0xfc) == 0)) goto LAB_004db62c;
          }
          if ((puVar4[5] & 1) != 0) {
            temp_v9 = 0;
            temp_v1 = 0;
            temp_v3 = 0;
            temp_v10 = 0;
            temp_v11 = 0;
            temp_v12 = 0;
            temp_v13 = 0;
            temp_v14 = 0;
            do {
              temp_v7 = temp_v5 + temp_v3 * 2;
              if (*(short *)(temp_v7 + 2) != 0) {
                temp_v6 = 0;
                temp_v4 = FUN_001b347c();
                if (0 < temp_v4) {
                  do {
                    if ((-1 < *(char *)(temp_v2 + temp_v6 + 0x1c88)) &&
                       (temp_v4 = FUN_001ab854(), *(short *)(temp_v4 + 0x62) == *(short *)(temp_v7 + 2)))
                    {
                      *(unsigned short *)((int)&temp_v9 + temp_v3 * 2) = 1;
                      goto LAB_004db5dc;
                    }
                    temp_v6 = temp_v6 + 1;
                    temp_v4 = FUN_001b347c();
                  } while (temp_v6 < temp_v4);
                }
                psVar10 = (short *)((int)&temp_v9 + temp_v3 * 2);
                if ((*psVar10 == 0) &&
                   (temp_v7 = FUN_002a4b28(*(unsigned short *)(temp_v7 + 2)), temp_v7 != 0)) {
                  *psVar10 = 1;
                }
LAB_004db5dc:
                temp_v1 = temp_v1 + 1;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 0xc);
            puVar7 = (unsigned int *)&temp_v9;
            FUN_0032fea0(puVar7,temp_v1,1);
            if (puVar7 != (unsigned int *)0x0) {
              temp_v3 = temp_v17 * 2;
              temp_v17 = temp_v17 + 1;
              *(short *)(temp_v18 + temp_v3) = (short)temp_v8;
            }
          }
        }
      }
LAB_004db62c:
      temp_v5 = temp_v8 + 1;
      temp_v8 = temp_v5;
      FUN_0038b7d8();
    } while (temp_v8 < temp_v5);
  }
  return temp_v17;
}
