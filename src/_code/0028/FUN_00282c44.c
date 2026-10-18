/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282c44` (_code @ 0x282c44, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp40; /* 0x40: local_40 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned char LAB_001455dc; /* 0x1455dc */

extern int FUN_0023f554(void);
extern unsigned int FUN_00295f90(void);
/* Supplied declaration required: FUN_002b48dc. */
extern int FUN_002b66ec(void);
extern int FUN_002c0ba8(void);
extern unsigned int FUN_002c0e4c(int);
extern unsigned int FUN_002c0e9c(void);
extern int FUN_002c0ec4(unsigned int, unsigned int);


unsigned char FUN_00282c44(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [32];
  unsigned short temp_v8;
  
  temp_v1 = FUN_002c0ec4(0xb,0);
  temp_v6 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_002c0e9c();
    temp_v3 = FUN_002c0e4c(temp_v1);
    puVar5 = temp_v7;
    temp_v8 = param_1;
    FUN_002b48dc(puVar5,temp_v2,temp_v3,0x40,&LAB_001455dc);
    if ((puVar5 != (unsigned char *)0x0) &&
       (temp_v1 = FUN_002b66ec(), (unsigned char)puVar5[0x2b] <= *(unsigned char *)(temp_v1 + 0x76))) {
      temp_v1 = 0;
      do {
        if ((*(short *)(puVar5 + temp_v1 * 2 + 0x2c) != 0) && (temp_v4 = FUN_002c0ba8(), temp_v4 == 0)) {
          return (unsigned char)2;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      temp_v1 = 0;
      while( 1 ) {
        temp_v0 = *(unsigned short *)(puVar5 + temp_v1 * 2 + 0x32);
        if ((temp_v0 != 0) &&
           (temp_v4 = FUN_0023f554(),
           ((unsigned int)*(unsigned char *)(temp_v4 + (unsigned int)(temp_v0 >> 3)) & (1 << (temp_v0 & 7))) == 0)) break;
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 3) {
          temp_v1 = FUN_002c0ec4(0xb,0);
          if (temp_v1 != 0) {
            temp_v2 = FUN_002c0e9c();
            temp_v3 = FUN_002c0e4c(temp_v1);
            puVar5 = temp_v7;
            temp_v8 = param_1;
            FUN_002b48dc(puVar5,temp_v2,temp_v3,0x40,&LAB_001455dc);
            if (puVar5 != (unsigned char *)0x0) {
              temp_v6 = (unsigned int)*(unsigned short *)(puVar5 + 0x26);
            }
          }
          temp_v5 = FUN_00295f90();
          return temp_v5 < temp_v6;
        }
      }
    }
  }
  return (unsigned char)2;
}
