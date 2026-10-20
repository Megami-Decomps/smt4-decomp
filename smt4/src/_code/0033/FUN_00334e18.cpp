/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334e18` (_code @ 0x334e18, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295cec(void);
int FUN_002b46f8(...);

/* stack frame of void: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned short sp48; /* 0x48: local_48 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned char LAB_00145c78; /* 0x145c78 */

extern int FUN_0023f3f8(void);
/* Supplied declaration required: FUN_00295cec. */
/* Supplied declaration required: FUN_002b46f8. */
extern int FUN_002b63ac(void);
extern int FUN_002c09d0(void);
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
extern int dataTableGet(unsigned int, unsigned int);


void FUN_00334e18(void)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *puVar8;
  int temp_v7;
  unsigned char *pbVar10;
  unsigned int temp_v8;
  unsigned char temp_v9 [32];
  unsigned short temp_v10;
  
  temp_v3 = FUN_0023f3f8();
  temp_v8 = 1;
  do {
    temp_v4 = dataTableGet(0xb,0);
    if (temp_v4 != 0) {
      temp_v5 = dataTableGetEntries();
      temp_v6 = dataTableGetCount(temp_v4);
      temp_v1 = (unsigned short)temp_v8;
      puVar8 = temp_v9;
      temp_v10 = temp_v1;
      FUN_002b46f8(puVar8,temp_v5,temp_v6,0x40,&LAB_00145c78);
      if (((puVar8 != (unsigned char *)0x0) && (*(short *)(puVar8 + 0x26) == 0)) &&
         (temp_v4 = dataTableGet(0xb,0), temp_v4 != 0)) {
        temp_v5 = dataTableGetEntries();
        temp_v6 = dataTableGetCount(temp_v4);
        puVar8 = temp_v9;
        temp_v10 = temp_v1;
        FUN_002b46f8(puVar8,temp_v5,temp_v6,0x40,&LAB_00145c78);
        if ((puVar8 != (unsigned char *)0x0) &&
           (temp_v4 = FUN_002b63ac(), (unsigned char)puVar8[0x2b] <= *(unsigned char *)(temp_v4 + 0x76))) {
          temp_v4 = 0;
          do {
            if ((*(short *)(puVar8 + temp_v4 * 2 + 0x2c) != 0) && (temp_v7 = FUN_002c09d0(), temp_v7 == 0)
               ) goto LAB_00334fe0;
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 3);
          temp_v4 = 0;
          do {
            temp_v0 = *(unsigned short *)(puVar8 + temp_v4 * 2 + 0x32);
            if ((temp_v0 != 0) &&
               (temp_v7 = FUN_0023f3f8(),
               ((unsigned int)*(unsigned char *)(temp_v7 + (unsigned int)(temp_v0 >> 3)) & (1 << (temp_v0 & 7))) == 0))
            goto LAB_00334fe0;
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 3);
          temp_v4 = dataTableGet(0xb,0);
          if (temp_v4 != 0) {
            temp_v5 = dataTableGetEntries();
            temp_v6 = dataTableGetCount(temp_v4);
            temp_v10 = temp_v1;
            FUN_002b46f8(temp_v9,temp_v5,temp_v6,0x40,&LAB_00145c78);
          }
          FUN_00295cec();
          pbVar10 = (unsigned char *)(temp_v3 + ((int)(temp_v8 + ((unsigned int)((int)temp_v8 >> 0x1f) >> 0x1d)) >> 3));
          temp_v2 = (unsigned char)(1 << (((int)temp_v8 % 8) & 0xffU));
          *pbVar10 = *pbVar10 | temp_v2;
          pbVar10[0x12] = temp_v2 | pbVar10[0x12];
        }
      }
    }
LAB_00334fe0:
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 0x8d) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
