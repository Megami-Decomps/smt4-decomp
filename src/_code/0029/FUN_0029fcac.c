/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029fcac` (_code @ 0x29fcac, 0x200 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 9 slot(s), 34 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp36; /* 0x36: local_36 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_2_stack;

/* Supplied declaration required: FUN_0022a094. */
extern int FUN_002883bc(unsigned short, unsigned char *);
/* Supplied declaration required: FUN_0029d080. */
extern int FUN_0029ed08(unsigned short);
/* Supplied declaration required: FUN_0029fa74. */
extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);
extern int FUN_002a8a1c(void);
/* Supplied declaration required: FUN_002b9364. */
extern int FUN_002c0ba8(void);


unsigned int FUN_0029fcac(unsigned int param_1,int param_2)

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
  unsigned short temp_v15;
  unsigned char temp_v16 [46];
  unsigned short temp_v17;
  unsigned int uStack_2c;
  int temp_v18;
  
  temp_v15 = 0;
  uStack_2c = param_1;
  temp_v18 = param_2;
  temp_v2 = FUN_002a8a08();
  temp_v8 = 0;
  temp_v3 = temp_v2;
  FUN_0022a094();
  if (temp_v3 != 0) {
    do {
      temp_v5 = temp_v8;
      FUN_0029fa74();
      if (temp_v5 != 0) {
        puVar4 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v5 + 0x1a);
        FUN_002b9364();
        if ((puVar4[0x1b] == 0) || (temp_v3 = FUN_002c0ba8(), temp_v3 != 0)) {
          temp_v0 = puVar4[0x1a];
          if ((temp_v0 & 1) != 0) {
            if ((temp_v0 & 0xfffe) != 0) {
              temp_v3 = FUN_002883bc(temp_v0 >> 1,temp_v16);
            }
            else {
              temp_v3 = FUN_002883bc(*puVar4,temp_v16);
            }
            if ((temp_v3 == 0) || ((temp_v17 & 0xfc) == 0)) goto LAB_0029fe88;
          }
          if ((puVar4[3] & 1) != 0) {
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
                temp_v4 = FUN_002a8a1c();
                if (0 < temp_v4) {
                  do {
                    if ((-1 < *(char *)(temp_v2 + temp_v6 + 0x90f0)) &&
                       (temp_v4 = FUN_002a89e4(), *(short *)(temp_v4 + 0x46) == *(short *)(temp_v7 + 2)))
                    {
                      *(unsigned short *)((int)&temp_v9 + temp_v3 * 2) = 1;
                      goto LAB_0029fe38;
                    }
                    temp_v6 = temp_v6 + 1;
                    temp_v4 = FUN_002a8a1c();
                  } while (temp_v6 < temp_v4);
                }
                psVar10 = (short *)((int)&temp_v9 + temp_v3 * 2);
                if ((*psVar10 == 0) &&
                   (temp_v7 = FUN_0029ed08(*(unsigned short *)(temp_v7 + 2)), temp_v7 != 0)) {
                  *psVar10 = 1;
                }
LAB_0029fe38:
                temp_v1 = temp_v1 + 1;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 0xc);
            puVar7 = (unsigned int *)&temp_v9;
            FUN_0029d080(puVar7,temp_v1,1);
            if (puVar7 != (unsigned int *)0x0) {
              temp_v3 = temp_v15 * 2;
              temp_v15 = temp_v15 + 1;
              *(short *)(temp_v18 + temp_v3) = (short)temp_v8;
            }
          }
        }
      }
LAB_0029fe88:
      temp_v5 = temp_v8 + 1;
      temp_v8 = temp_v5;
      FUN_0022a094();
    } while (temp_v8 < temp_v5);
  }
  return temp_v15;
}
