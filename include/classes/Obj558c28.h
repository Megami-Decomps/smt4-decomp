#ifndef CLASSES_OBJ558C28_H
#define CLASSES_OBJ558C28_H
#include "classes/Obj558b24.h"
#include "shard/W6_W6Match3_PooledNodeList.h"

struct Obj558c28Resource30 {
    u8 storage[0x30];
    ~Obj558c28Resource30();
};
struct Obj558c28Resource70 {
    u8 storage[0x70];
    ~Obj558c28Resource70();
};
struct Obj558c28Resource20 {
    u8 storage[0x20];
    ~Obj558c28Resource20();
};
struct Obj558c28Pool : PooledNodeList {
    ~Obj558c28Pool();
};
class Obj558c28Child {
public:
    virtual ~Obj558c28Child();
};
struct Obj558c28Children {
    Obj558c28Child **begin;
    Obj558c28Child **end;
    Obj558c28Child **capacity;
    u8 unk0c[0x20];
    ~Obj558c28Children();
};
struct Obj558c28MapNode {
    Obj558c28MapNode *next;
    u32 unk04;
    void *payload;
};
struct Obj558c28MapList {
    Obj558c28MapNode *head;
    u8 unk04[0xC];
    Obj558c28MapNode *end;
};
struct Obj558c28Map {
    u32 unk00;
    Obj558c28MapList list;
};
class Obj558c28 {
public:
    virtual ~Obj558c28();
    virtual void vfunc08();
    /* 0x004 */ Obj558c28Resource30 first;
    /* 0x034 */ Obj558c28Resource70 second;
    /* 0x0A4 */ Obj558c28Resource20 third;
    /* 0x0C4 */ Obj558c28Pool pool;
    /* 0x0DC */ Obj558b24 base;
    /* 0x0F4 */ u8 unkf4[0x1C];
    /* 0x110 */ Obj558c28Map *map;
    /* 0x114 */ Obj558c28Children children;
    /* 0x140 */ Obj55aff4 address;
};
#endif
