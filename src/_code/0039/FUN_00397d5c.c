/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397d5c` (_code @ 0x397d5c, 0x268 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_00220eb4. */
/* Supplied declaration required: FUN_00232974. */
/* Supplied declaration required: FUN_0026a96c. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00297178. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
extern int FUN_002a0f88(void);
/* Supplied declaration required: FUN_002af854. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_00309f94(unsigned int *, int);


void FUN_00397d5c(int param_1)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int *piVar3;
  short temp_v2;
  int temp_v3;
  int uStack_30;
  
  piVar3 = &uStack_30;
  if (*(char *)(param_1 + 0x658) != '\0') {
    temp_v1 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x654));
    if (temp_v1 == 2) {
      temp_v1 = FUN_00297674();
      if (temp_v1 != 0) {
        FUN_00297178(param_1,2);
        if (*(char *)(param_1 + 0x29) != '\0') {
          FUN_002b8b78(0x97);
          return;
        }
        if (*(char *)(param_1 + 0x20) == '\x02' || *(char *)(param_1 + 0x20) == '\x06') {
          FUN_002b8b78(0x96);
          return;
        }
        FUN_002b8b78(0x95);
        return;
      }
      FUN_002af854(param_1 + 0x794,0,1);
      if (*(unsigned char *)(param_1 + 0x649) >= 2) {
        FUN_0026a96c();
        FUN_00297178(param_1,7);
        return;
      }
      FUN_00232974(param_1,&uStack_30);
      temp_v1 = 0;
      do {
        temp_v2 = -0x7ec0;
        if (-1 < (char)temp_v1) {
          temp_v3 = param_1 + (char)temp_v1 * 2;
          temp_v2 = (unsigned short)*(unsigned char *)(temp_v3 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v3 + 0xb1);
        }
        temp_v3 = 0;
        do {
          if (*(short *)(temp_v3 * 2 + 0x405160) == temp_v2) {
            temp_v0 = *(unsigned short *)(temp_v3 * 2 + 0x405368);
            *(char *)((int)&uStack_30 + temp_v1 * 2) = (char)(temp_v0 >> 8);
            *(char *)((int)&uStack_30 + temp_v1 * 2 + 1) = (char)temp_v0;
            goto LAB_00397f10;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x104);
        temp_v3 = 0;
        do {
          if (*(short *)(temp_v3 * 2 + 0x405570) == temp_v2) {
            temp_v0 = *(unsigned short *)(temp_v3 * 2 + 0x405618);
            *(char *)((int)&uStack_30 + temp_v1 * 2) = (char)(temp_v0 >> 8);
            *(char *)((int)&uStack_30 + temp_v1 * 2 + 1) = (char)temp_v0;
            break;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x54);
LAB_00397f10:
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 9) {
          FUN_00220eb4(&uStack_30,param_1 + 0x94e,1);
          temp_v1 = FUN_00309f94((unsigned int *)&uStack_30,param_1 + 0x94e);
          if ((*piVar3 == 0) && (temp_v1 < 6)) {
            FUN_0026a96c();
            FUN_00297178(param_1,7);
            return;
          }
          FUN_00297178(param_1,6);
          FUN_002971e4(*(unsigned int *)(param_1 + 0x654),4);
          return;
        }
      } while( 1 );
    }
  }
  else {
    temp_v1 = FUN_002a0f88();
    if (temp_v1 != 0) {
      FUN_00232974(param_1,&uStack_30);
      FUN_00295904(0x32,&uStack_30);
      FUN_002971e4(*(unsigned int *)(param_1 + 0x654),1);
      *(unsigned char *)(param_1 + 0x658) = 1;
      FUN_002b8b78(0x9a);
    }
  }
  return;
}
