#ifndef CLASSES_OBJ557D5C_H
#define CLASSES_OBJ557D5C_H
#include "common.h"

struct Obj557d5cTable {
    s32 count;
    void **items;
};
class Obj557d5c {
public:
    virtual ~Obj557d5c();
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ Obj557d5cTable first;
    /* 0x1C */ Obj557d5cTable second;
};
#endif
