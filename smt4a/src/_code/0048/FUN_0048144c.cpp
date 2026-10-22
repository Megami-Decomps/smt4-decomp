/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048144c` (_code @ 0x48144c, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable8FindRecord(void);
int FUN_00287790(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_00187168(void);
/* Supplied declaration required: dataTable8FindRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_00287790. */
extern int FUN_003e4d68(unsigned int);
extern int FUN_004ccbf0(unsigned short);


unsigned int FUN_0048144c(unsigned int param_1)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = param_1 - 1;
  temp_v7 = temp_v0 >= 0x3b;
  temp_v6 = temp_v0 == 0x3b;
  if (temp_v0 >= 0x3c) {
    temp_v7 = param_1 - 0x79f >= 0x3f;
    temp_v6 = param_1 - 0x79f == 0x3f;
  }
  if ((!temp_v7 || temp_v6) &&
     (temp_v0 = param_1, dataTable8FindRecord(),
     *(char *)(temp_v0 + 0x41) == '\x01' || *(char *)(temp_v0 + 0x41) == '\x03')) {
    if ((*(unsigned int *)(temp_v0 + 0x68) & 0x20) != 0) {
      temp_v0 = 0;
      do {
        temp_v1 = FUN_003e4d68(temp_v0 & 0xffff);
        if (((temp_v1 != 0) && (temp_v2 = FUN_00187168(), temp_v2 != 0)) &&
           (temp_v3 = param_1, dataTable8FindRecord(), temp_v3 != 0)) {
          temp_v6 = (*(unsigned int *)(temp_v3 + 0x68) & 0x20) != 0;
          if (temp_v6) {
            temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 0x48);
          }
          if ((temp_v6 && temp_v3 != 0) &&
             (temp_v2 = FUN_004ccbf0(*(unsigned short *)(temp_v1 + 100)), temp_v2 != *(int *)(temp_v1 + 0x30)))
          {
            return 1;
          }
        }
        temp_v0 = temp_v0 + 1;
      } while ((int)temp_v0 < 0xc);
    }
    else {
      if ((*(unsigned char *)(temp_v0 + 0x3a) & 0x80) == 0) {
        temp_v2 = gameGetSlotTable();
        temp_v1 = -1;
LAB_004815d0:
        temp_v0 = param_1;
        dataTable8FindRecord();
        if (temp_v0 == 0) goto LAB_00481668;
        temp_v4 = -1;
        FUN_00287790(0xffffffff,temp_v0,1,0,0);
        do {
          if (temp_v4 == 0) {
            return 1;
          }
          while( 1 ) {
            while( 1 ) {
              temp_v1 = temp_v1 + 1;
              if (temp_v1 >= 0x18) {
                return 0;
              }
              if (temp_v1 < 0) goto LAB_004815d0;
              temp_v5 = (int)*(char *)(temp_v2 + temp_v1 + 0x1c88);
              if (-1 < temp_v5) break;
              if (temp_v4 == 0) {
                return 1;
              }
            }
            temp_v0 = param_1;
            dataTable8FindRecord();
            if (temp_v0 != 0) break;
LAB_00481668:
            temp_v4 = 1;
          }
          FUN_00287790(temp_v5,temp_v0,1,0,0);
          temp_v4 = temp_v5;
        } while( 1 );
      }
      dataTable8FindRecord();
      if (param_1 != 0) {
        temp_v1 = -1;
        FUN_00287790(0xffffffff,param_1,1,0,0);
        temp_v6 = temp_v1 == 0;
        temp_v1 = gameGetSlotTable();
        temp_v2 = 0;
        do {
          temp_v4 = (int)*(char *)(temp_v1 + temp_v2 + 0x1c88);
          if ((-1 < temp_v4) && (FUN_00287790(temp_v4,param_1,1,0,0), temp_v4 == 0)) {
            temp_v6 = 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x18);
        if (temp_v6) {
          return 1;
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
