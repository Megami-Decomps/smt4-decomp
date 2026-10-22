#ifndef CLASSES_OBJ55951C_H
#define CLASSES_OBJ55951C_H

#include "shard/W4_Match4_Obj559ecc.h"

/* Common online-message payload, copied before the concrete message's vtable is installed. */
class Obj559eec {
public:
    Obj559eec(const Obj559eec &other)
        : kind(other.kind), first(other.first), second(other.second), third(other.third),
          fourth(other.fourth), text(other.text), flags(other.flags)
    {
    }
    virtual ~Obj559eec();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 first;
    /* 0x0C */ u32 second;
    /* 0x10 */ u32 third;
    /* 0x14 */ u32 fourth;
    /* 0x18 */ Obj55aff4 text;
    /* 0x20 */ u32 flags;
};

/* Concrete copied message value (twelve virtual slots at vtable 0x55951c). */
class Obj55951c : public Obj559eec {
public:
    Obj55951c(const Obj55951c &other) : Obj559eec(other) {}
    virtual ~Obj55951c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void vfunc24();
    virtual void vfunc28();
    virtual void vfunc2c();
};

#endif
