#include "common.h"
extern "C" {
void sysMemClear(void *,u32);
void FUN_002f6be2(u32,u8 **);
void libc_strcpy(char *,const char *);
void operatorDeleteArrayNullable(void *);
void FUN_00310f64(void *);
struct Object {
    u8 pad[24];
    char text[0x140];
};
void FUN_0030c7b6(Object *object,u32 value) {
    sysMemClear(object->text,0x140);
    u8 *temporary=NULL;
    FUN_002f6be2(value,&temporary);
    libc_strcpy(object->text,(char *)temporary);
    operatorDeleteArrayNullable(temporary);
    FUN_00310f64(object);
}
}
