#ifndef CLASSES_OBJ557D00_H
#define CLASSES_OBJ557D00_H

#include "common.h"

class Obj557d00 {
public:
    virtual ~Obj557d00();
    Obj557d00()
        : unk04(0), flags(0), unk2C(0), unk30(0), unk34(0), unk38(0), unk3C(0),
          unk40(0), unk44(NULL), unk48(NULL), unk4C(NULL), unk50(NULL), unk54(NULL),
          unk58(NULL), unk7C(0), unk80(0), unk84(0), unk88(NULL) {}

    u8 unk04; // 0x04
    u8 unk05[3]; // 0x05
    u32 flags; // 0x08
    u8 unk0C[0x20]; // 0x0C
    u32 unk2C; // 0x2C
    u32 unk30; // 0x30
    u32 unk34; // 0x34
    u32 unk38; // 0x38
    u32 unk3C; // 0x3C
    u32 unk40; // 0x40
    void* unk44; // 0x44
    void* unk48; // 0x48
    void* unk4C; // 0x4C
    void* unk50; // 0x50
    void* unk54; // 0x54
    void* unk58; // 0x58
    u8 unk5C[0x20]; // 0x5C
    u32 unk7C; // 0x7C
    u32 unk80; // 0x80
    u32 unk84; // 0x84
    void* unk88; // 0x88
};

typedef char Obj557d00SizeCheck[sizeof(Obj557d00) == 0x8C ? 1 : -1];
#endif
