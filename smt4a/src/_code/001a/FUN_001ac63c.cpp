#include "common.h"

struct DataTable04Entry {
    u8 unk00[0x20];
    u16 id; // 0x20
};

// Order records by their identifier.
extern "C" s32 FUN_001ac63c(const DataTable04Entry *left, const DataTable04Entry *right)
{
    return left->id - right->id;
}
